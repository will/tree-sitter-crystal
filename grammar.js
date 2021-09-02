const sepBy1 = (term, separator) => seq(
  term,
  repeat(seq(separator, term))
);
const commaSep1 = (term) => sepBy1(term, ',');

/**
 * Concatenates all given regex patterns, throwing away any flags.
 * @param  {...RegExp} regexes 
 * @returns {RegExp}
 */
const concatRegexes = (...regexes) => {
  return regexes.reduce((result, currentRegex) => new RegExp(
    result.source + currentRegex.source
  ));
}

/**
 * Returns a regex for any valid Crystal identifier, beginning with `start`.
 *  The default value of `start` is a regex for [A-Za-z_], plus any unicode char after 0x9F
 * @param {Regexp} start
 * @returns {RegExp}
 */
const identifierRegex = (start = /[^\x00-\x40\x5B-\x5E\x60-\x60\x7B-\x9F]/) => {
  return concatRegexes(start, /[^\x00-\x2F\x3A-\x40\x5B-\x5E\x60-\x60\x7B-\x9F]*[=!\?]?/);
}

module.exports = grammar({
  name: 'crystal',

  // Explicitly call out conflicting/overlapping rules so that Treesitter knows they're 
  //  *supposed* to be conflicting/overlapping, and can then make an intelligent decision.
  conflicts: $ => [
    [$._expression, $.assignment],
    [$._type, $.namedTupleLiteral],
    [$.hash, $.union_type],
  ],

  // stuff that can show up anywhere/symbo
  extras: $ => [
    /\s/, // we have to include this, or else tree-sitter assumes we're handling whitespace all manually
    $.comment,
  ],

  precedences: $ => [
    // TODO: more-specific operator precedence
    [$.binary_operation, $.assignment],
    [$.assignment, $._literal],
    [$._typeAnnotation, $._statement],
    [$.union_type, $._typeAnnotation],
  ],

  rules: {
    program: $ => repeat($._statement),

    _terminator: $ => choice(';', /\n/),

    _statement: $ => seq(
      choice(
        $._expression,
        $.require_statement,
        $.include_statement,
        $.extend_statement,
        $.alias_statement,
      ),
      $._terminator
    ),

    _expression: $ => choice(
      $._literal                ,
      $.assignment              ,
      $.binary_operation        ,
      $._variable               ,
      $.module_definition       ,
      $.class_definition        ,
      $.method_definition       ,
      $.enum_definition			    ,
      $.struct_definition       ,
      $.block                   ,
      $.method_call             ,
    ),

    identifier: $ => identifierRegex(),

    nil: $ => 'nil',
    bool: $ => choice('true', 'false'),

    /** 
     * @see {@link https://crystal-lang.org/reference/syntax_and_semantics/literals/floats.html}
     */
    float: $ => {
      // The examples given in the doc show a few different valid forms of floats:
      //  1.0 # floats with a decimal and no suffix
      //  1_f32 # floats with no decimal, but with a suffix
      //  1e10 # floats with no decimal and no suffix, but an exponential
      //  1.5e-7 # floats with both a decimal and an exponential
      // Presumably, this form is also valid:
      //  1.5e-7_f32 # a float with a decimal, an exponential, *and* a suffix
      // If we expressed all of those sections as being optional, then we'd wind
      //  up with something that's ambiguous because of the existence of ints; that is,
      //  we'd be in a spot where we didn't know if `1` should be an int or a float.
      // So we have to express variations that require at least one of these.
      return choice(
        // decimal required, everything else optional
        /[+\-]?[0-9][0-9_]*\.[0-9_]+(e[+\-]?[0-9]+)?(f32|f64)?/,
        // exponent required, everything else optional
        /[+\-]?[0-9][0-9_]*(\.[0-9_]+)?e[+\-]?[0-9]+(f32|f64)?/,
        // suffix required, everything else optional
        /[+\-]?[0-9][0-9_]*(\.[0-9_]+)?(e[+\-]?[0-9]+)?(f32|f64)/
      );
    },

    /** 
     * @see {@link https://crystal-lang.org/reference/syntax_and_semantics/literals/integers.html}
     */
    integer: $ => choice(
      // Binary numbers
      /[+\-]?0b[01]+(i8|i16|i32|i64|u8|u16|u32|u64)?/,
      // Octal numbers
      /[+\-]?0o[0-7]+(i8|i16|i32|i64|u8|u16|u32|u64)?/,
      // Hexadecimal numbers
      /[+\-]?0x[0-9a-fA-F]+(i8|i16|i32|i64|u8|u16|u32|u64)?/, 
      // Decimal numbers
      /[+\-]?[1-9][0-9_]*(i8|i16|i32|i64|u8|u16|u32|u64)?/
    ),

    symbol: $ => choice(
      // Operator symbols
      /:([\+\-%\/&\|\^]|(\*\*)|(\*)|(>>)|(<<)|(===)|(==)|(!=)|(<=>)|(<=)|(>=)|(<)|(>)|(\[\]=)|(\[\]\?)|(\[\])|(!~)|(=~)|(!)|(~))/,
      identifierRegex(/:/), // Unquoted symbols,
      /:"(\\"|[^"])*"/, // Quoted symbols
    ),

    /**
	   * @see {@link https://crystal-lang.org/reference/syntax_and_semantics/literals/char.html}
	   */
    char: $ => {
      const charsThatCanBeEscaped = [
        "'",
        "\\", // this is supposed to represent one backslash, but we have to escape it here
        "a",
        "b",
        "e",
        "f",
        "n",
        "r",
        "t",
        "v"
      ];
      const escapedLiteralChars = charsThatCanBeEscaped.map(c => "'\\" + c + "'");
      // For stuff like '\u0042' and '\u{04AF}'
      const unicodeEscape = /'\\u{?[0-9A-Fa-f]+}?'/;
      return choice(
        "''", // empty char
        ...escapedLiteralChars,
        unicodeEscape,
        /'[^']'/ // any single literal char
      );
    },

    // TODO: string interpolation
    string: $ => seq('"', repeat(choice(/[^"]/, '\"')), '"'),

    /**
	   * @see {@link https://crystal-lang.org/reference/syntax_and_semantics/literals/array.html}
	   */
    array: $ => seq(
      '[',
      commaSep1($._expression),
      ']'
    ),

    /**
	   * @see {@link https://crystal-lang.org/reference/syntax_and_semantics/literals/hash.html}
	   */
    hash: $ => {
      const keyToValue = seq(
        field('key', $._expression), 
        '=>', 
        field('value', $._expression)
      );
      const nonEmptyHash = seq(
        // TODO: handle the MyHash{"one" => 1, "two" => 2} case
        '{',
        commaSep1(keyToValue),
        '}'
      );
      const emptyHash = seq(
        '{',
        '}',
        'of',
        field('key_type', $._type),
        '=>',
        field('value_type', $._type)
      );
      return choice(
        nonEmptyHash,
        emptyHash
      );
    },

    index_expression: $ => seq(
      field('target', $._variable),
      token.immediate('['),
      field('key', $._expression),
      token.immediate(']')
    ),

    range: $ => {
      const rangeBoundary = choice(
        $._variable,
        $.integer,
        $.float
      );
      const rangeSeparator = choice('..', '...');
      return choice(
        // range with begin and end
        seq(field('start', rangeBoundary), rangeSeparator, field('end', rangeBoundary)),
        // begin-less range
        seq(rangeSeparator, field('end', rangeBoundary)),
        // endless range
        seq(field('start', rangeBoundary), rangeSeparator)
      );
    },
    /**
	   * @see {@link https://crystal-lang.org/reference/syntax_and_semantics/literals/regex.html}
	   */
    regex: $ => seq(
      '/',
      /([^\/]|(\\\/))*/, // Nasty, right?
      '/'
    ),

    /**
	   * @see {@link https://crystal-lang.org/reference/syntax_and_semantics/literals/tuple.html}
	   */
    tuple: $ => choice(
      seq(
        '{',
        commaSep1($._expression),
        '}'
      ),
      'Tuple.new'
    ),

    /**
	   * @see {@link https://crystal-lang.org/reference/syntax_and_semantics/literals/named_tuple.html}
	   */
    namedTupleLiteral: $ => {
      const symbolKey = /[A-Za-z][A-Za-z0-9_]*/;
      const keyAndValue = seq(
        field('key', choice($.string, $.identifier)),
        ':',
        field('value', $._expression)
      );
      const keyAndValueTypeDeclaration = seq(
        field('key_name', $.identifier),
        ':',
        field('value_type', $._type)
      );
      return choice(
        seq(
          'NamedTuple',
          '(',
          commaSep1(keyAndValueTypeDeclaration),
          ')'
        ),
        seq(
          '{',
          commaSep1(keyAndValue),
          '}'
        )
      );
    },

    /**
	   * @see {@link https://crystal-lang.org/reference/syntax_and_semantics/literals/command.html}
	   */
    commandLiteral: $ => choice(
      // TODO: handle interpolation
      seq('`', /[^`]*/, '`'),
      seq('%x(', /[^\)]*/, ')')
    ),

    _literal: $ => choice(
      $.nil                     ,
      $.bool                    ,
      $.float                   ,
      $.integer                 ,
      $.symbol                  ,
      $.char                    ,
      $.string                  ,
      $.array                   ,
      $.hash                    ,
      $.index_expression        ,
      $.range                   ,
      $.regex                   ,
      $.tuple                   ,
      $.namedTupleLiteral       ,
      $.commandLiteral          ,
    ),

    /**
	   * @see {@link https://crystal-lang.org/reference/syntax_and_semantics/comments.html}
	   */
    comment: $ => /#.*[^\n]/,

    /**
     * @see {@link https://crystal-lang.org/reference/syntax_and_semantics/requiring_files.html}
     */
    require_statement: $ => seq(
      'require',
      field('path', $.string)
    ),

    /**
     * @see {@link https://crystal-lang.org/reference/syntax_and_semantics/modules.html}
     */
    include_statement: $ => seq(
      'include',
      $._type
    ),

    /**
     * @see {@link https://crystal-lang.org/reference/syntax_and_semantics/modules.html}
     */
    extend_statement: $ => seq(
      'extend',
      choice('self', $._type)
    ),

    /**
     * @see {@link https://crystal-lang.org/reference/syntax_and_semantics/local_variables.html}
     */
    local_variable: $ => identifierRegex(/[a-z_]/),

    /**
     * @see {@link https://crystal-lang.org/reference/syntax_and_semantics/methods_and_instance_variables.html}
     */
    instance_variable: $ => identifierRegex(/@[a-z_]/),

    /**
     * @see {@link https://crystal-lang.org/reference/syntax_and_semantics/class_variables.html}
     */
    class_variable: $ => identifierRegex(/@@[a-z_]/),

    /**
     * @see {@link https://crystal-lang.org/reference/syntax_and_semantics/constants.html}
     */
    constant: $ => {
      const constantName = identifierRegex(/[A-Z]/);
      return choice(
        '__LINE__',
        '__END_LINE__',
        '__FILE__',
        '__DIR__',
        constantName,
        seq(
          repeat1(alias(token(seq(constantName, '::')), $.namespace)),
          alias(constantName, 'constant')
        )
      );
    },

    _variable: $ => choice(
      $.local_variable,
      $.instance_variable,
      $.class_variable,
      $.constant
    ),

    _typeAnnotation: $ => seq(
      ':',
      $._type
    ),

    /**
     * @see {@link https://crystal-lang.org/reference/syntax_and_semantics/assignment.html}
     */
    assignment: $ => {
      const target = choice(
        $._variable,
        $.index_expression,
        $.property
      );
      return prec.right(seq(
        commaSep1(field('lhs', target)),
        optional(field('type', $._typeAnnotation)),
        /=/,
        field('rhs', choice($._variable, $._expression))
      ));
    },

    /**
     * @see {@link https://crystal-lang.org/reference/syntax_and_semantics/modules.html}
     */
    module_definition: $ => {
      return seq(
        'module',
        field('name', $._type),
        repeat($._statement),
        'end'
      );
    },

    /**
     * @see {@link https://crystal-lang.org/reference/syntax_and_semantics/classes_and_methods.html}
     * @see {@link https://crystal-lang.org/reference/syntax_and_semantics/generics.html}
     */
    class_definition: $ => {
      return seq(
        'class',
        field('name', $._type),
        optional(seq('<', field('superclass', $._type))),
        repeat($._statement),
        'end'
      );
    },

    param: $ => seq(
        field('name', seq(optional('@'), $.identifier)),
        optional(field('type', $._typeAnnotation))
    ),

    /**
     * @see {@link https://crystal-lang.org/reference/syntax_and_semantics/methods_and_instance_variables.html}
     */
    method_definition: $ => { 
      const className = seq(choice(alias('self', $.self), $._type), '.');
      const parameterList = seq(
        '(',
        optional(commaSep1($.param)),
        ')'
      );
      return seq(
        'def',
        optional(field('class_name', className)), // if this is a class-method definition
        field('name', $.identifier),
        optional(parameterList),
        optional(field('return_type', $._typeAnnotation)),
        $._terminator,
        repeat($._statement),
        'end'
      );
    },

    /**
     * @see {@link https://crystal-lang.org/reference/syntax_and_semantics/enum.html}
     */
    enum_definition: $ => seq(
      'enum',
      field('name', alias($.constant, $.type_identifier)),
      repeat1($.constant),
      repeat($.method_definition),
      'end'
    ),

    /**
     * @see {@link https://crystal-lang.org/reference/syntax_and_semantics/structs.html}
     */
    struct_definition: $ => seq(
      'struct',
      field('name', $._type),
      repeat($._statement),
      'end'
    ),

    property: $ => seq(
        field('object', $._variable),
        '.',
        field('name', alias(/[a-z][a-z0-9_]*[\?!]?/, $.identifier)),
    ),

    method_call: $ => {
      const arg = field('arg', choice(
        $._variable,
        $._literal
      ));
      return prec.left(seq(
        alias($.property, ''),
        optional(choice(
          seq('(', commaSep1(arg), ')'), // method call with parens
          commaSep1(arg), // method call without parens
        )),
        optional($.block)
      ));
    },

    _type_identifier: $ => alias($.constant, $.type_identifier),
    generic_type: $ => seq(
      $._type_identifier,
      $.type_arguments
    ),
    type_arguments: $ => seq(
      '(',
      commaSep1($._type),
      ')'
    ),
    union_type: $ => prec.left(seq(
      $._type,
      '|',
      $._type
    )),
    _type: $ => choice(
      $._type_identifier,
      $.generic_type,
      $.union_type
    ),

    type: $ => { 
      const term = seq(
        $._type_identifier,
        optional(seq(
          '(',
          commaSep1(field('generic_param', $.type)),
          ')'
        ))
      );
      return prec.left(seq(term, repeat(seq('|', term))));
    },

    alias_statement: $ => seq(
      'alias',
      field('lhs', choice($.generic_type, $._type_identifier)),
      '=',
      field('rhs', $._type)
    ),

    /**
     * @see {@link https://crystal-lang.org/reference/syntax_and_semantics/blocks_and_procs.html}
     */
    block: $ => {
      const paramList = seq(
        '|',
        commaSep1(alias($.local_variable, $.param)),
        '|'
      );
      return choice(
        seq('{', paramList, $._expression, '}'),
        seq('do', optional(paramList), repeat($._statement), 'end')
      );
    },

    // TODO: operator precedence rules
    binary_operation: $ => prec.left(seq(
      $._expression,
      alias($._binary_operator, $.operator),
      $._expression
    )),

    _binary_operator: $ => choice(
      "+", "-", "*", "/", "%", "&", "|", "^", "**", ">>", "<<", "==", "!=", "<", "<=", ">", ">=", "<=>", "===", "=~"
    ),

    _operator: $ => choice( 
      $._binary_operator,
      "[]", "[]?", "[]=", "!", "~", "!~", 
    ),
  }

});

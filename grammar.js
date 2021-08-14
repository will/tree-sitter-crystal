const sepBy1 = (term, separator) => seq(
  term,
  repeat(seq(separator, term))
);
const commaSep1 = (term) => sepBy1(term, ',');
                          //        A-Z        _      a-z                  0-9      A-Z       _        a-z
const identifierRegex = /[^\x00-\x40\x5B-\x5E\x60-\x60\x7B-\x9F][^\x00-\x2F\x3A-\x40\x5B-\x5E\x60-\x60\x7B-\x9F]*[=!\?]?/

module.exports = grammar({
  name: 'crystal',

  // Explicitly call out conflicting/overlapping rules so that Treesitter knows they're 
  //  *supposed* to be conflicting/overlapping, and can then make an intelligent decision.
  conflicts: $ => [
    [$._expression, $.assignment],
    [$.type, $.namedTupleLiteral],
  ],

  // stuff that can show up anywhere
  extras: $ => [
    /\s/, // we have to include this, or else tree-sitter assumes we're handling whitespace all manually
    $.comment,
  ],

  precedences: $ => [
    // TODO: more-specific operator precedence
    [$.binary_operation, $.assignment],
    [$.assignment, $._literal],
  ],

  rules: {
    program: $ => repeat($._statement),

    _statement: $ => seq(
      choice(
        $._expression,
        $.require_statement,
        $.include_statement,
        $.extend_statement,
      ),
      choice(';', /\n/),
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

    identifier: $ => identifierRegex,

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

    symbol: $ => seq(':', choice(
      identifierRegex,
      $._operator,
      seq('"', repeat(choice(/[^"]/, '\"')), '"'),
    )),

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
        field('key_type', $.type),
        '=>',
        field('value_type', $.type)
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

    // TODO: ranges

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
        field('value_type', $.type)
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
      $.type
    ),

    /**
     * @see {@link https://crystal-lang.org/reference/syntax_and_semantics/modules.html}
     */
    extend_statement: $ => seq(
      'extend',
      choice('self', $.type)
    ),

    /**
     * @see {@link https://crystal-lang.org/reference/syntax_and_semantics/local_variables.html}
     */
    local_variable: $ => seq(/[a-z_]/, optional(identifierRegex)),

    /**
     * @see {@link https://crystal-lang.org/reference/syntax_and_semantics/methods_and_instance_variables.html}
     */
    instance_variable: $ => seq('@', /[a-z_]/, optional(identifierRegex)),

    /**
     * @see {@link https://crystal-lang.org/reference/syntax_and_semantics/class_variables.html}
     */
    class_variable: $ => seq('@@', /[a-z_]/, optional(identifierRegex)),

    /**
     * @see {@link https://crystal-lang.org/reference/syntax_and_semantics/constants.html}
     */
    constant: $ => {
      const constantName = seq(/[A-Z]/, optional(identifierRegex));
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
      $.type
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
        field('name', $.type),
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
        field('name', $.type),
        optional(seq('<', field('superclass', $.type))),
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
      const className = seq(choice('self', $.type), '.');
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
        repeat($._statement),
        'end'
      );
    },

    /**
     * @see {@link https://crystal-lang.org/reference/syntax_and_semantics/enum.html}
     */
    enum_definition: $ => seq(
      'enum',
      field('name', $.constant),
      repeat1($.constant),
      repeat($.method_definition),
      'end'
    ),

    /**
     * @see {@link https://crystal-lang.org/reference/syntax_and_semantics/structs.html}
     */
    struct_definition: $ => seq(
      'struct',
      field('name', $.type),
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

    // TODO: "bare-function" calls (like puts(1) and puts 1)

    type: $ => seq(
      alias($.constant, 'type'),
      optional(seq(
        '(',
        commaSep1(field('generic_param', $.type)),
        ')'
      ))
    ),

    /**
     * @see {@link https://crystal-lang.org/reference/syntax_and_semantics/blocks_and_procs.html}
     */
    block: $ => {
      const paramList = seq(
        '|',
        commaSep1($.param),
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

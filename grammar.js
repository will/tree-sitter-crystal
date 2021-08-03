const commaSep1 = (term) => seq(
  term,
  repeat(seq(',', term))
);

                          //        A-Z        _      a-z                  0-9      A-Z       _        a-z
const identifierRegex = /[^\x00-\x40\x5B-\x5E\x60-\x60\x7B-\x9F][^\x00-\x2F\x3A-\x40\x5B-\x5E\x60-\x60\x7B-\x9F]*[=!\?]?/

module.exports = grammar({
  name: 'crystal',

  // stuff that can show up anywhere
  extras: $ => [
    /\s/, // we have to include this, or else tree-sitter assumes we're handling whitespace all manually
    $.comment,
  ],

  rules: {
    program: $ => repeat($._statement),

    _statement: $ => seq(
      choice(
        $._expression
      ),
      choice(';', /\n/),
    ),

    _expression: $ => choice(
      $.nil                     ,
      $.bool                    ,
      $.float                   ,
      $.integer                 ,
      $.symbol                  ,
      $.char                    ,
      $.string                  ,
      $.array                   ,
      $.hash                    ,
      $.index_expression   ,
      $.regex                   ,
      $.tuple                   ,
      $.namedTupleLiteral       ,
      $.commandLiteral          ,
      $.assignment              ,
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
        /[^\s]+/, // TODO: better "type" matcher
        '=>',
        /[^\s]+/ // TODO: better "type" matcher
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
     * TODO: NamedTuple type declaration
	   */
    namedTupleLiteral: $ => {
      const symbolKey = /[A-Za-z][A-Za-z0-9_]*/;
      const keyAndValue = seq(
        field('key', choice($.string, $.identifier)),
        ':',
        field('value', $._expression)
      );
      return seq(
        '{',
        commaSep1(keyAndValue),
        '}'
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

    /**
	   * @see {@link https://crystal-lang.org/reference/syntax_and_semantics/comments.html}
	   */
    comment: $ => /#.*[^\n]/,

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
    constant: $ => choice(
      '__LINE__',
      '__END_LINE__',
      '__FILE__',
      '__DIR__',
      seq(/[A-Z]/, optional(identifierRegex))
    ),

    _variable: $ => choice(
      $.local_variable,
      $.instance_variable,
      $.class_variable,
      $.constant
    ),

    /**
     * @see {@link https://crystal-lang.org/reference/syntax_and_semantics/assignment.html}
     */
    assignment: $ => prec.right(2, seq(
      field('lhs', choice(
        $._variable, 
        $.index_expression
        // TODO: "setters", like foo.bar = 42
      )),
      '=',
      field('rhs', $._expression)
    )),

    _operator: $ => choice( "+", "-", "*", "/", "%", "&", "|", "^", "**", ">>", "<<", "==", "!=", "<", "<=", ">", ">=", "<=>", "===", "[]", "[]?", "[]=", "!", "~", "!~", "=~",),

  }

});

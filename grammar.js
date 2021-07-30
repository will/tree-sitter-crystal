const commaSep1 = (term) => seq(
  term,
  repeat(seq(',', term))
);

                          //        A-Z        _      a-z                  0-9      A-Z       _        a-z
const identifierRegex = /[^\x00-\x40\x5B-\x5E\x60-\x60\x7B-\x9F][^\x00-\x2F\x3A-\x40\x5B-\x5E\x60-\x60\x7B-\x9F]*[=!\?]?/

module.exports = grammar({
  name: 'crystal',

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
      $.regex                   ,
      $.tuple                   ,
      $.namedTupleLiteral       ,
      $.commandLiteral          ,
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

    _operator: $ => choice( "+", "-", "*", "/", "%", "&", "|", "^", "**", ">>", "<<", "==", "!=", "<", "<=", ">", ">=", "<=>", "===", "[]", "[]?", "[]=", "!", "~", "!~", "=~",),

  }

});

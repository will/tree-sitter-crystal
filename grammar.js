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

    _expression: $ => choice (
      $.symbol                  ,
      $.string                  ,
    ),

    symbol: $ => seq(':', choice(
      //        A-Z        _      a-z                  0-9      A-Z       _        a-z
      /[^\x00-\x40\x5B-\x5E\x60-\x60\x7B-\x9F][^\x00-\x2F\x3A-\x40\x5B-\x5E\x60-\x60\x7B-\x9F]*[=!\?]?/,
      $._operator,
      seq('"', repeat(choice(/[^"]/, '\"')), '"'),
    )),

    string: $ => seq('"', repeat(choice(/[^"]/, '\"')), '"'),

    _operator: $ => choice( "+", "-", "*", "/", "%", "&", "|", "^", "**", ">>", "<<", "==", "!=", "<", "<=", ">", ">=", "<=>", "===", "[]", "[]?", "[]=", "!", "~", "!~", "=~",),


  }

});

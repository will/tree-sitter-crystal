#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 182
#define LARGE_STATE_COUNT 22
#define SYMBOL_COUNT 108
#define ALIAS_COUNT 0
#define TOKEN_COUNT 81
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 5

enum {
  anon_sym_SEMI = 1,
  aux_sym__statement_token1 = 2,
  aux_sym_identifier_token1 = 3,
  sym_nil = 4,
  anon_sym_true = 5,
  anon_sym_false = 6,
  aux_sym_float_token1 = 7,
  aux_sym_float_token2 = 8,
  aux_sym_float_token3 = 9,
  aux_sym_integer_token1 = 10,
  aux_sym_integer_token2 = 11,
  aux_sym_integer_token3 = 12,
  aux_sym_integer_token4 = 13,
  anon_sym_COLON = 14,
  anon_sym_DQUOTE = 15,
  aux_sym_symbol_token1 = 16,
  anon_sym_SQUOTE_SQUOTE = 17,
  anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE = 18,
  anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE = 19,
  anon_sym_SQUOTE_BSLASHa_SQUOTE = 20,
  anon_sym_SQUOTE_BSLASHb_SQUOTE = 21,
  anon_sym_SQUOTE_BSLASHe_SQUOTE = 22,
  anon_sym_SQUOTE_BSLASHf_SQUOTE = 23,
  anon_sym_SQUOTE_BSLASHn_SQUOTE = 24,
  anon_sym_SQUOTE_BSLASHr_SQUOTE = 25,
  anon_sym_SQUOTE_BSLASHt_SQUOTE = 26,
  anon_sym_SQUOTE_BSLASHv_SQUOTE = 27,
  aux_sym_char_token1 = 28,
  aux_sym_char_token2 = 29,
  anon_sym_LBRACK = 30,
  anon_sym_COMMA = 31,
  anon_sym_RBRACK = 32,
  anon_sym_LBRACE = 33,
  anon_sym_EQ_GT = 34,
  anon_sym_RBRACE = 35,
  anon_sym_of = 36,
  aux_sym_hash_token1 = 37,
  anon_sym_SLASH = 38,
  aux_sym_regex_token1 = 39,
  anon_sym_Tuple_DOTnew = 40,
  anon_sym_BQUOTE = 41,
  aux_sym_commandLiteral_token1 = 42,
  anon_sym_PERCENTx_LPAREN = 43,
  aux_sym_commandLiteral_token2 = 44,
  anon_sym_RPAREN = 45,
  sym_comment = 46,
  aux_sym_local_variable_token1 = 47,
  anon_sym_AT = 48,
  anon_sym_AT_AT = 49,
  anon_sym___LINE__ = 50,
  anon_sym___END_LINE__ = 51,
  anon_sym___FILE__ = 52,
  anon_sym___DIR__ = 53,
  aux_sym_constant_token1 = 54,
  anon_sym_EQ = 55,
  anon_sym_PLUS = 56,
  anon_sym_DASH = 57,
  anon_sym_STAR = 58,
  anon_sym_PERCENT = 59,
  anon_sym_AMP = 60,
  anon_sym_PIPE = 61,
  anon_sym_CARET = 62,
  anon_sym_STAR_STAR = 63,
  anon_sym_GT_GT = 64,
  anon_sym_LT_LT = 65,
  anon_sym_EQ_EQ = 66,
  anon_sym_BANG_EQ = 67,
  anon_sym_LT = 68,
  anon_sym_LT_EQ = 69,
  anon_sym_GT = 70,
  anon_sym_GT_EQ = 71,
  anon_sym_LT_EQ_GT = 72,
  anon_sym_EQ_EQ_EQ = 73,
  anon_sym_LBRACK_RBRACK = 74,
  anon_sym_LBRACK_RBRACK_QMARK = 75,
  anon_sym_LBRACK_RBRACK_EQ = 76,
  anon_sym_BANG = 77,
  anon_sym_TILDE = 78,
  anon_sym_BANG_TILDE = 79,
  anon_sym_EQ_TILDE = 80,
  sym_program = 81,
  sym__statement = 82,
  sym__expression = 83,
  sym_identifier = 84,
  sym_bool = 85,
  sym_float = 86,
  sym_integer = 87,
  sym_symbol = 88,
  sym_char = 89,
  sym_string = 90,
  sym_array = 91,
  sym_hash = 92,
  sym_regex = 93,
  sym_tuple = 94,
  sym_namedTupleLiteral = 95,
  sym_commandLiteral = 96,
  sym_local_variable = 97,
  sym_instance_variable = 98,
  sym_class_variable = 99,
  sym_constant = 100,
  sym_assignment = 101,
  sym__operator = 102,
  aux_sym_program_repeat1 = 103,
  aux_sym_symbol_repeat1 = 104,
  aux_sym_array_repeat1 = 105,
  aux_sym_hash_repeat1 = 106,
  aux_sym_namedTupleLiteral_repeat1 = 107,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [aux_sym__statement_token1] = "_statement_token1",
  [aux_sym_identifier_token1] = "identifier_token1",
  [sym_nil] = "nil",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [aux_sym_float_token1] = "float_token1",
  [aux_sym_float_token2] = "float_token2",
  [aux_sym_float_token3] = "float_token3",
  [aux_sym_integer_token1] = "integer_token1",
  [aux_sym_integer_token2] = "integer_token2",
  [aux_sym_integer_token3] = "integer_token3",
  [aux_sym_integer_token4] = "integer_token4",
  [anon_sym_COLON] = ":",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_symbol_token1] = "symbol_token1",
  [anon_sym_SQUOTE_SQUOTE] = "''",
  [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = "'\\''",
  [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = "'\\\\'",
  [anon_sym_SQUOTE_BSLASHa_SQUOTE] = "'\\a'",
  [anon_sym_SQUOTE_BSLASHb_SQUOTE] = "'\\b'",
  [anon_sym_SQUOTE_BSLASHe_SQUOTE] = "'\\e'",
  [anon_sym_SQUOTE_BSLASHf_SQUOTE] = "'\\f'",
  [anon_sym_SQUOTE_BSLASHn_SQUOTE] = "'\\n'",
  [anon_sym_SQUOTE_BSLASHr_SQUOTE] = "'\\r'",
  [anon_sym_SQUOTE_BSLASHt_SQUOTE] = "'\\t'",
  [anon_sym_SQUOTE_BSLASHv_SQUOTE] = "'\\v'",
  [aux_sym_char_token1] = "char_token1",
  [aux_sym_char_token2] = "char_token2",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LBRACE] = "{",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_RBRACE] = "}",
  [anon_sym_of] = "of",
  [aux_sym_hash_token1] = "hash_token1",
  [anon_sym_SLASH] = "/",
  [aux_sym_regex_token1] = "regex_token1",
  [anon_sym_Tuple_DOTnew] = "Tuple.new",
  [anon_sym_BQUOTE] = "`",
  [aux_sym_commandLiteral_token1] = "commandLiteral_token1",
  [anon_sym_PERCENTx_LPAREN] = "%x(",
  [aux_sym_commandLiteral_token2] = "commandLiteral_token2",
  [anon_sym_RPAREN] = ")",
  [sym_comment] = "comment",
  [aux_sym_local_variable_token1] = "local_variable_token1",
  [anon_sym_AT] = "@",
  [anon_sym_AT_AT] = "@@",
  [anon_sym___LINE__] = "__LINE__",
  [anon_sym___END_LINE__] = "__END_LINE__",
  [anon_sym___FILE__] = "__FILE__",
  [anon_sym___DIR__] = "__DIR__",
  [aux_sym_constant_token1] = "constant_token1",
  [anon_sym_EQ] = "=",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_PERCENT] = "%",
  [anon_sym_AMP] = "&",
  [anon_sym_PIPE] = "|",
  [anon_sym_CARET] = "^",
  [anon_sym_STAR_STAR] = "**",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT] = ">",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT_EQ_GT] = "<=>",
  [anon_sym_EQ_EQ_EQ] = "===",
  [anon_sym_LBRACK_RBRACK] = "[]",
  [anon_sym_LBRACK_RBRACK_QMARK] = "[]\?",
  [anon_sym_LBRACK_RBRACK_EQ] = "[]=",
  [anon_sym_BANG] = "!",
  [anon_sym_TILDE] = "~",
  [anon_sym_BANG_TILDE] = "!~",
  [anon_sym_EQ_TILDE] = "=~",
  [sym_program] = "program",
  [sym__statement] = "_statement",
  [sym__expression] = "_expression",
  [sym_identifier] = "identifier",
  [sym_bool] = "bool",
  [sym_float] = "float",
  [sym_integer] = "integer",
  [sym_symbol] = "symbol",
  [sym_char] = "char",
  [sym_string] = "string",
  [sym_array] = "array",
  [sym_hash] = "hash",
  [sym_regex] = "regex",
  [sym_tuple] = "tuple",
  [sym_namedTupleLiteral] = "namedTupleLiteral",
  [sym_commandLiteral] = "commandLiteral",
  [sym_local_variable] = "local_variable",
  [sym_instance_variable] = "instance_variable",
  [sym_class_variable] = "class_variable",
  [sym_constant] = "constant",
  [sym_assignment] = "assignment",
  [sym__operator] = "_operator",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_symbol_repeat1] = "symbol_repeat1",
  [aux_sym_array_repeat1] = "array_repeat1",
  [aux_sym_hash_repeat1] = "hash_repeat1",
  [aux_sym_namedTupleLiteral_repeat1] = "namedTupleLiteral_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [aux_sym__statement_token1] = aux_sym__statement_token1,
  [aux_sym_identifier_token1] = aux_sym_identifier_token1,
  [sym_nil] = sym_nil,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [aux_sym_float_token1] = aux_sym_float_token1,
  [aux_sym_float_token2] = aux_sym_float_token2,
  [aux_sym_float_token3] = aux_sym_float_token3,
  [aux_sym_integer_token1] = aux_sym_integer_token1,
  [aux_sym_integer_token2] = aux_sym_integer_token2,
  [aux_sym_integer_token3] = aux_sym_integer_token3,
  [aux_sym_integer_token4] = aux_sym_integer_token4,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_symbol_token1] = aux_sym_symbol_token1,
  [anon_sym_SQUOTE_SQUOTE] = anon_sym_SQUOTE_SQUOTE,
  [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE,
  [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE,
  [anon_sym_SQUOTE_BSLASHa_SQUOTE] = anon_sym_SQUOTE_BSLASHa_SQUOTE,
  [anon_sym_SQUOTE_BSLASHb_SQUOTE] = anon_sym_SQUOTE_BSLASHb_SQUOTE,
  [anon_sym_SQUOTE_BSLASHe_SQUOTE] = anon_sym_SQUOTE_BSLASHe_SQUOTE,
  [anon_sym_SQUOTE_BSLASHf_SQUOTE] = anon_sym_SQUOTE_BSLASHf_SQUOTE,
  [anon_sym_SQUOTE_BSLASHn_SQUOTE] = anon_sym_SQUOTE_BSLASHn_SQUOTE,
  [anon_sym_SQUOTE_BSLASHr_SQUOTE] = anon_sym_SQUOTE_BSLASHr_SQUOTE,
  [anon_sym_SQUOTE_BSLASHt_SQUOTE] = anon_sym_SQUOTE_BSLASHt_SQUOTE,
  [anon_sym_SQUOTE_BSLASHv_SQUOTE] = anon_sym_SQUOTE_BSLASHv_SQUOTE,
  [aux_sym_char_token1] = aux_sym_char_token1,
  [aux_sym_char_token2] = aux_sym_char_token2,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_of] = anon_sym_of,
  [aux_sym_hash_token1] = aux_sym_hash_token1,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [aux_sym_regex_token1] = aux_sym_regex_token1,
  [anon_sym_Tuple_DOTnew] = anon_sym_Tuple_DOTnew,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [aux_sym_commandLiteral_token1] = aux_sym_commandLiteral_token1,
  [anon_sym_PERCENTx_LPAREN] = anon_sym_PERCENTx_LPAREN,
  [aux_sym_commandLiteral_token2] = aux_sym_commandLiteral_token2,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_comment] = sym_comment,
  [aux_sym_local_variable_token1] = aux_sym_local_variable_token1,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_AT_AT] = anon_sym_AT_AT,
  [anon_sym___LINE__] = anon_sym___LINE__,
  [anon_sym___END_LINE__] = anon_sym___END_LINE__,
  [anon_sym___FILE__] = anon_sym___FILE__,
  [anon_sym___DIR__] = anon_sym___DIR__,
  [aux_sym_constant_token1] = aux_sym_constant_token1,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_STAR_STAR] = anon_sym_STAR_STAR,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LT_EQ_GT] = anon_sym_LT_EQ_GT,
  [anon_sym_EQ_EQ_EQ] = anon_sym_EQ_EQ_EQ,
  [anon_sym_LBRACK_RBRACK] = anon_sym_LBRACK_RBRACK,
  [anon_sym_LBRACK_RBRACK_QMARK] = anon_sym_LBRACK_RBRACK_QMARK,
  [anon_sym_LBRACK_RBRACK_EQ] = anon_sym_LBRACK_RBRACK_EQ,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_BANG_TILDE] = anon_sym_BANG_TILDE,
  [anon_sym_EQ_TILDE] = anon_sym_EQ_TILDE,
  [sym_program] = sym_program,
  [sym__statement] = sym__statement,
  [sym__expression] = sym__expression,
  [sym_identifier] = sym_identifier,
  [sym_bool] = sym_bool,
  [sym_float] = sym_float,
  [sym_integer] = sym_integer,
  [sym_symbol] = sym_symbol,
  [sym_char] = sym_char,
  [sym_string] = sym_string,
  [sym_array] = sym_array,
  [sym_hash] = sym_hash,
  [sym_regex] = sym_regex,
  [sym_tuple] = sym_tuple,
  [sym_namedTupleLiteral] = sym_namedTupleLiteral,
  [sym_commandLiteral] = sym_commandLiteral,
  [sym_local_variable] = sym_local_variable,
  [sym_instance_variable] = sym_instance_variable,
  [sym_class_variable] = sym_class_variable,
  [sym_constant] = sym_constant,
  [sym_assignment] = sym_assignment,
  [sym__operator] = sym__operator,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_symbol_repeat1] = aux_sym_symbol_repeat1,
  [aux_sym_array_repeat1] = aux_sym_array_repeat1,
  [aux_sym_hash_repeat1] = aux_sym_hash_repeat1,
  [aux_sym_namedTupleLiteral_repeat1] = aux_sym_namedTupleLiteral_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__statement_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_identifier_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_nil] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_float_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_float_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_float_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_integer_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_integer_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_integer_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_integer_token4] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_symbol_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE_BSLASHa_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE_BSLASHb_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE_BSLASHe_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE_BSLASHf_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE_BSLASHn_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE_BSLASHr_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE_BSLASHt_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE_BSLASHv_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_char_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_char_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_of] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_hash_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_regex_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_Tuple_DOTnew] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_commandLiteral_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_PERCENTx_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_commandLiteral_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_local_variable_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym___LINE__] = {
    .visible = true,
    .named = false,
  },
  [anon_sym___END_LINE__] = {
    .visible = true,
    .named = false,
  },
  [anon_sym___FILE__] = {
    .visible = true,
    .named = false,
  },
  [anon_sym___DIR__] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_constant_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK_RBRACK_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK_RBRACK_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_TILDE] = {
    .visible = true,
    .named = false,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_bool] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym_char] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_array] = {
    .visible = true,
    .named = true,
  },
  [sym_hash] = {
    .visible = true,
    .named = true,
  },
  [sym_regex] = {
    .visible = true,
    .named = true,
  },
  [sym_tuple] = {
    .visible = true,
    .named = true,
  },
  [sym_namedTupleLiteral] = {
    .visible = true,
    .named = true,
  },
  [sym_commandLiteral] = {
    .visible = true,
    .named = true,
  },
  [sym_local_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_instance_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_class_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_constant] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym__operator] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_symbol_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_hash_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_namedTupleLiteral_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_key = 1,
  field_lhs = 2,
  field_rhs = 3,
  field_value = 4,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_key] = "key",
  [field_lhs] = "lhs",
  [field_rhs] = "rhs",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 2},
  [3] = {.index = 4, .length = 4},
  [4] = {.index = 8, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_lhs, 0},
    {field_rhs, 2},
  [2] =
    {field_key, 1},
    {field_value, 3},
  [4] =
    {field_key, 1},
    {field_key, 4, .inherited = true},
    {field_value, 3},
    {field_value, 4, .inherited = true},
  [8] =
    {field_key, 0, .inherited = true},
    {field_key, 1, .inherited = true},
    {field_value, 0, .inherited = true},
    {field_value, 1, .inherited = true},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(113);
      if (lookahead == '!') ADVANCE(275);
      if (lookahead == '"') ADVANCE(179);
      if (lookahead == '#') ADVANCE(111);
      if (lookahead == '%') ADVANCE(257);
      if (lookahead == '&') ADVANCE(258);
      if (lookahead == '\'') ADVANCE(16);
      if (lookahead == ')') ADVANCE(230);
      if (lookahead == '*') ADVANCE(255);
      if (lookahead == '+') ADVANCE(252);
      if (lookahead == ',') ADVANCE(207);
      if (lookahead == '-') ADVANCE(254);
      if (lookahead == '/') ADVANCE(215);
      if (lookahead == '0') ADVANCE(31);
      if (lookahead == ':') ADVANCE(178);
      if (lookahead == ';') ADVANCE(114);
      if (lookahead == '<') ADVANCE(266);
      if (lookahead == '=') ADVANCE(250);
      if (lookahead == '>') ADVANCE(268);
      if (lookahead == '@') ADVANCE(237);
      if (lookahead == 'T') ADVANCE(155);
      if (lookahead == '[') ADVANCE(206);
      if (lookahead == ']') ADVANCE(208);
      if (lookahead == '^') ADVANCE(260);
      if (lookahead == '_') ADVANCE(134);
      if (lookahead == '`') ADVANCE(222);
      if (lookahead == 'f') ADVANCE(144);
      if (lookahead == 'n') ADVANCE(148);
      if (lookahead == 't') ADVANCE(153);
      if (lookahead == '{') ADVANCE(209);
      if (lookahead == '|') ADVANCE(259);
      if (lookahead == '}') ADVANCE(211);
      if (lookahead == '~') ADVANCE(276);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(177);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(157);
      if (lookahead != 0 &&
          lookahead > 159) ADVANCE(157);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(115);
      if (lookahead == '"') ADVANCE(179);
      if (lookahead == '#') ADVANCE(190);
      if (lookahead == ';') ADVANCE(114);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(181);
      if (lookahead != 0) ADVANCE(180);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(116);
      if (lookahead == '#') ADVANCE(111);
      if (lookahead == ';') ADVANCE(114);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(275);
      if (lookahead == '"') ADVANCE(179);
      if (lookahead == '#') ADVANCE(111);
      if (lookahead == '%') ADVANCE(256);
      if (lookahead == '&') ADVANCE(258);
      if (lookahead == '*') ADVANCE(255);
      if (lookahead == '+') ADVANCE(251);
      if (lookahead == '-') ADVANCE(253);
      if (lookahead == '/') ADVANCE(215);
      if (lookahead == '<') ADVANCE(266);
      if (lookahead == '=') ADVANCE(60);
      if (lookahead == '>') ADVANCE(268);
      if (lookahead == '[') ADVANCE(77);
      if (lookahead == '^') ADVANCE(260);
      if (lookahead == '|') ADVANCE(259);
      if (lookahead == '~') ADVANCE(276);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (lookahead != 0 &&
          lookahead > '@' &&
          lookahead != '\\' &&
          lookahead != ']' &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(157);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(179);
      if (lookahead == '#') ADVANCE(111);
      if (lookahead == '%') ADVANCE(100);
      if (lookahead == '\'') ADVANCE(16);
      if (lookahead == '/') ADVANCE(215);
      if (lookahead == '0') ADVANCE(31);
      if (lookahead == ':') ADVANCE(178);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == '@') ADVANCE(237);
      if (lookahead == 'T') ADVANCE(155);
      if (lookahead == '[') ADVANCE(205);
      if (lookahead == '_') ADVANCE(134);
      if (lookahead == '`') ADVANCE(222);
      if (lookahead == 'f') ADVANCE(144);
      if (lookahead == 'n') ADVANCE(148);
      if (lookahead == 't') ADVANCE(153);
      if (lookahead == '{') ADVANCE(209);
      if (lookahead == '}') ADVANCE(211);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(177);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(157);
      if (lookahead != 0 &&
          lookahead > 159) ADVANCE(157);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(179);
      if (lookahead == '#') ADVANCE(190);
      if (lookahead == ',') ADVANCE(207);
      if (lookahead == ':') ADVANCE(178);
      if (lookahead == '=') ADVANCE(189);
      if (lookahead == '}') ADVANCE(211);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(182);
      if (lookahead != 0) ADVANCE(180);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(179);
      if (lookahead == '#') ADVANCE(190);
      if (lookahead == ',') ADVANCE(207);
      if (lookahead == '=') ADVANCE(189);
      if (lookahead == '}') ADVANCE(211);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(183);
      if (lookahead != 0) ADVANCE(180);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(179);
      if (lookahead == '#') ADVANCE(190);
      if (lookahead == ',') ADVANCE(207);
      if (lookahead == ']') ADVANCE(208);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(184);
      if (lookahead != 0) ADVANCE(180);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(179);
      if (lookahead == '#') ADVANCE(190);
      if (lookahead == ',') ADVANCE(207);
      if (lookahead == '}') ADVANCE(211);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(185);
      if (lookahead != 0) ADVANCE(180);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(179);
      if (lookahead == '#') ADVANCE(190);
      if (lookahead == ':') ADVANCE(178);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(186);
      if (lookahead != 0) ADVANCE(180);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(179);
      if (lookahead == '#') ADVANCE(190);
      if (lookahead == '=') ADVANCE(189);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(187);
      if (lookahead != 0) ADVANCE(180);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(179);
      if (lookahead == '#') ADVANCE(190);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(188);
      if (lookahead != 0) ADVANCE(180);
      END_STATE();
    case 12:
      if (lookahead == '#') ADVANCE(111);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (lookahead != 0 &&
          lookahead > '@' &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(157);
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(111);
      if (lookahead == 'o') ADVANCE(91);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      END_STATE();
    case 14:
      if (lookahead == '#') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 15:
      if (lookahead == '#') ADVANCE(213);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (lookahead != 0) ADVANCE(214);
      END_STATE();
    case 16:
      if (lookahead == '\'') ADVANCE(191);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 17:
      if (lookahead == '\'') ADVANCE(204);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == 'a') ADVANCE(20);
      if (lookahead == 'b') ADVANCE(21);
      if (lookahead == 'e') ADVANCE(22);
      if (lookahead == 'f') ADVANCE(23);
      if (lookahead == 'n') ADVANCE(24);
      if (lookahead == 'r') ADVANCE(25);
      if (lookahead == 't') ADVANCE(26);
      if (lookahead == 'u') ADVANCE(101);
      if (lookahead == 'v') ADVANCE(27);
      END_STATE();
    case 18:
      if (lookahead == '\'') ADVANCE(203);
      END_STATE();
    case 19:
      if (lookahead == '\'') ADVANCE(193);
      END_STATE();
    case 20:
      if (lookahead == '\'') ADVANCE(194);
      END_STATE();
    case 21:
      if (lookahead == '\'') ADVANCE(195);
      END_STATE();
    case 22:
      if (lookahead == '\'') ADVANCE(196);
      END_STATE();
    case 23:
      if (lookahead == '\'') ADVANCE(197);
      END_STATE();
    case 24:
      if (lookahead == '\'') ADVANCE(198);
      END_STATE();
    case 25:
      if (lookahead == '\'') ADVANCE(199);
      END_STATE();
    case 26:
      if (lookahead == '\'') ADVANCE(200);
      END_STATE();
    case 27:
      if (lookahead == '\'') ADVANCE(201);
      END_STATE();
    case 28:
      if (lookahead == '\'') ADVANCE(202);
      END_STATE();
    case 29:
      if (lookahead == '\'') ADVANCE(202);
      if (lookahead == '}') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(29);
      END_STATE();
    case 30:
      if (lookahead == '(') ADVANCE(226);
      END_STATE();
    case 31:
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'b') ADVANCE(104);
      if (lookahead == 'e') ADVANCE(102);
      if (lookahead == 'f') ADVANCE(46);
      if (lookahead == 'o') ADVANCE(105);
      if (lookahead == 'x') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(32);
      END_STATE();
    case 32:
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'e') ADVANCE(102);
      if (lookahead == 'f') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(32);
      END_STATE();
    case 33:
      if (lookahead == '.') ADVANCE(95);
      END_STATE();
    case 34:
      if (lookahead == '0') ADVANCE(31);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(177);
      END_STATE();
    case 35:
      if (lookahead == '1') ADVANCE(56);
      if (lookahead == '3') ADVANCE(39);
      if (lookahead == '6') ADVANCE(49);
      if (lookahead == '8') ADVANCE(176);
      END_STATE();
    case 36:
      if (lookahead == '1') ADVANCE(57);
      if (lookahead == '3') ADVANCE(41);
      if (lookahead == '6') ADVANCE(51);
      if (lookahead == '8') ADVANCE(170);
      END_STATE();
    case 37:
      if (lookahead == '1') ADVANCE(58);
      if (lookahead == '3') ADVANCE(42);
      if (lookahead == '6') ADVANCE(52);
      if (lookahead == '8') ADVANCE(172);
      END_STATE();
    case 38:
      if (lookahead == '1') ADVANCE(59);
      if (lookahead == '3') ADVANCE(43);
      if (lookahead == '6') ADVANCE(53);
      if (lookahead == '8') ADVANCE(174);
      END_STATE();
    case 39:
      if (lookahead == '2') ADVANCE(176);
      END_STATE();
    case 40:
      if (lookahead == '2') ADVANCE(169);
      END_STATE();
    case 41:
      if (lookahead == '2') ADVANCE(170);
      END_STATE();
    case 42:
      if (lookahead == '2') ADVANCE(172);
      END_STATE();
    case 43:
      if (lookahead == '2') ADVANCE(174);
      END_STATE();
    case 44:
      if (lookahead == '2') ADVANCE(164);
      END_STATE();
    case 45:
      if (lookahead == '2') ADVANCE(167);
      END_STATE();
    case 46:
      if (lookahead == '3') ADVANCE(40);
      if (lookahead == '6') ADVANCE(50);
      END_STATE();
    case 47:
      if (lookahead == '3') ADVANCE(44);
      if (lookahead == '6') ADVANCE(54);
      END_STATE();
    case 48:
      if (lookahead == '3') ADVANCE(45);
      if (lookahead == '6') ADVANCE(55);
      END_STATE();
    case 49:
      if (lookahead == '4') ADVANCE(176);
      END_STATE();
    case 50:
      if (lookahead == '4') ADVANCE(169);
      END_STATE();
    case 51:
      if (lookahead == '4') ADVANCE(170);
      END_STATE();
    case 52:
      if (lookahead == '4') ADVANCE(172);
      END_STATE();
    case 53:
      if (lookahead == '4') ADVANCE(174);
      END_STATE();
    case 54:
      if (lookahead == '4') ADVANCE(164);
      END_STATE();
    case 55:
      if (lookahead == '4') ADVANCE(167);
      END_STATE();
    case 56:
      if (lookahead == '6') ADVANCE(176);
      END_STATE();
    case 57:
      if (lookahead == '6') ADVANCE(170);
      END_STATE();
    case 58:
      if (lookahead == '6') ADVANCE(172);
      END_STATE();
    case 59:
      if (lookahead == '6') ADVANCE(174);
      END_STATE();
    case 60:
      if (lookahead == '=') ADVANCE(264);
      if (lookahead == '~') ADVANCE(278);
      END_STATE();
    case 61:
      if (lookahead == '>') ADVANCE(210);
      END_STATE();
    case 62:
      if (lookahead == 'D') ADVANCE(67);
      if (lookahead == 'E') ADVANCE(73);
      if (lookahead == 'F') ADVANCE(68);
      if (lookahead == 'L') ADVANCE(69);
      END_STATE();
    case 63:
      if (lookahead == 'D') ADVANCE(82);
      END_STATE();
    case 64:
      if (lookahead == 'E') ADVANCE(84);
      END_STATE();
    case 65:
      if (lookahead == 'E') ADVANCE(85);
      END_STATE();
    case 66:
      if (lookahead == 'E') ADVANCE(86);
      END_STATE();
    case 67:
      if (lookahead == 'I') ADVANCE(76);
      END_STATE();
    case 68:
      if (lookahead == 'I') ADVANCE(71);
      END_STATE();
    case 69:
      if (lookahead == 'I') ADVANCE(74);
      END_STATE();
    case 70:
      if (lookahead == 'I') ADVANCE(75);
      END_STATE();
    case 71:
      if (lookahead == 'L') ADVANCE(64);
      END_STATE();
    case 72:
      if (lookahead == 'L') ADVANCE(70);
      END_STATE();
    case 73:
      if (lookahead == 'N') ADVANCE(63);
      END_STATE();
    case 74:
      if (lookahead == 'N') ADVANCE(65);
      END_STATE();
    case 75:
      if (lookahead == 'N') ADVANCE(66);
      END_STATE();
    case 76:
      if (lookahead == 'R') ADVANCE(83);
      END_STATE();
    case 77:
      if (lookahead == ']') ADVANCE(272);
      END_STATE();
    case 78:
      if (lookahead == '_') ADVANCE(245);
      END_STATE();
    case 79:
      if (lookahead == '_') ADVANCE(243);
      END_STATE();
    case 80:
      if (lookahead == '_') ADVANCE(239);
      END_STATE();
    case 81:
      if (lookahead == '_') ADVANCE(241);
      END_STATE();
    case 82:
      if (lookahead == '_') ADVANCE(72);
      END_STATE();
    case 83:
      if (lookahead == '_') ADVANCE(78);
      END_STATE();
    case 84:
      if (lookahead == '_') ADVANCE(79);
      END_STATE();
    case 85:
      if (lookahead == '_') ADVANCE(80);
      END_STATE();
    case 86:
      if (lookahead == '_') ADVANCE(81);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(160);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(162);
      END_STATE();
    case 91:
      if (lookahead == 'f') ADVANCE(212);
      END_STATE();
    case 92:
      if (lookahead == 'l') ADVANCE(97);
      END_STATE();
    case 93:
      if (lookahead == 'l') ADVANCE(158);
      END_STATE();
    case 94:
      if (lookahead == 'l') ADVANCE(89);
      END_STATE();
    case 95:
      if (lookahead == 'n') ADVANCE(87);
      END_STATE();
    case 96:
      if (lookahead == 'p') ADVANCE(94);
      END_STATE();
    case 97:
      if (lookahead == 's') ADVANCE(90);
      END_STATE();
    case 98:
      if (lookahead == 'u') ADVANCE(88);
      END_STATE();
    case 99:
      if (lookahead == 'w') ADVANCE(221);
      END_STATE();
    case 100:
      if (lookahead == 'x') ADVANCE(30);
      END_STATE();
    case 101:
      if (lookahead == '{') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(29);
      END_STATE();
    case 102:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      END_STATE();
    case 103:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      END_STATE();
    case 104:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(171);
      END_STATE();
    case 105:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(173);
      END_STATE();
    case 106:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      END_STATE();
    case 107:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      END_STATE();
    case 108:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(165);
      END_STATE();
    case 109:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(175);
      END_STATE();
    case 110:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(29);
      END_STATE();
    case 111:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(231);
      END_STATE();
    case 112:
      if (eof) ADVANCE(113);
      if (lookahead == '"') ADVANCE(179);
      if (lookahead == '#') ADVANCE(111);
      if (lookahead == '%') ADVANCE(100);
      if (lookahead == '\'') ADVANCE(16);
      if (lookahead == ',') ADVANCE(207);
      if (lookahead == '/') ADVANCE(215);
      if (lookahead == '0') ADVANCE(31);
      if (lookahead == ':') ADVANCE(178);
      if (lookahead == '=') ADVANCE(61);
      if (lookahead == '@') ADVANCE(237);
      if (lookahead == 'T') ADVANCE(248);
      if (lookahead == '[') ADVANCE(205);
      if (lookahead == ']') ADVANCE(208);
      if (lookahead == '_') ADVANCE(233);
      if (lookahead == '`') ADVANCE(222);
      if (lookahead == 'f') ADVANCE(234);
      if (lookahead == 'n') ADVANCE(235);
      if (lookahead == 't') ADVANCE(236);
      if (lookahead == '{') ADVANCE(209);
      if (lookahead == '}') ADVANCE(211);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(112)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(177);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(247);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym__statement_token1);
      if (lookahead == '\n') ADVANCE(115);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(181);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym__statement_token1);
      if (lookahead == '\n') ADVANCE(116);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(95);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(157);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'D') ADVANCE(124);
      if (lookahead == 'E') ADVANCE(130);
      if (lookahead == 'F') ADVANCE(125);
      if (lookahead == 'L') ADVANCE(126);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(157);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'D') ADVANCE(139);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(157);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'E') ADVANCE(141);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(157);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'E') ADVANCE(142);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(157);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'E') ADVANCE(143);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(157);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'I') ADVANCE(133);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(157);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'I') ADVANCE(128);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(157);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'I') ADVANCE(131);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(157);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'I') ADVANCE(132);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(157);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'L') ADVANCE(121);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(157);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'L') ADVANCE(127);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(157);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'N') ADVANCE(120);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(157);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'N') ADVANCE(122);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(157);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'N') ADVANCE(123);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(157);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'R') ADVANCE(140);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(157);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '_') ADVANCE(119);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(157);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '_') ADVANCE(246);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(157);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '_') ADVANCE(244);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(157);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '_') ADVANCE(240);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(157);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '_') ADVANCE(242);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(157);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '_') ADVANCE(129);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(157);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '_') ADVANCE(135);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(157);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '_') ADVANCE(136);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(157);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '_') ADVANCE(137);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(157);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '_') ADVANCE(138);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(157);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(149);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(157);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(161);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(157);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(118);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(157);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(163);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(157);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(150);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(157);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(154);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(157);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(159);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(157);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(146);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(157);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'p') ADVANCE(151);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(157);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(156);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(157);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 's') ADVANCE(147);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(157);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'u') ADVANCE(152);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(157);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'u') ADVANCE(145);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(157);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(157);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_nil);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_nil);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(157);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(157);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(157);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_float_token1);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (lookahead == 'e') ADVANCE(103);
      if (lookahead == 'f') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(165);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (lookahead == 'f') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_float_token2);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (lookahead == 'f') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_float_token3);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == 'i') ADVANCE(36);
      if (lookahead == 'u') ADVANCE(36);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(171);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_integer_token2);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_integer_token2);
      if (lookahead == 'i') ADVANCE(37);
      if (lookahead == 'u') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(173);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_integer_token3);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_integer_token3);
      if (lookahead == 'i') ADVANCE(38);
      if (lookahead == 'u') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(175);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_integer_token4);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_integer_token4);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'e') ADVANCE(102);
      if (lookahead == 'f') ADVANCE(46);
      if (lookahead == 'i') ADVANCE(35);
      if (lookahead == 'u') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(177);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\n') ADVANCE(115);
      if (lookahead == '#') ADVANCE(190);
      if (lookahead == ';') ADVANCE(114);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(180);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(190);
      if (lookahead == ',') ADVANCE(207);
      if (lookahead == ':') ADVANCE(178);
      if (lookahead == '=') ADVANCE(189);
      if (lookahead == '}') ADVANCE(211);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(180);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(190);
      if (lookahead == ',') ADVANCE(207);
      if (lookahead == '=') ADVANCE(189);
      if (lookahead == '}') ADVANCE(211);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(183);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(180);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(190);
      if (lookahead == ',') ADVANCE(207);
      if (lookahead == ']') ADVANCE(208);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(184);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(180);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(190);
      if (lookahead == ',') ADVANCE(207);
      if (lookahead == '}') ADVANCE(211);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(185);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(180);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(190);
      if (lookahead == ':') ADVANCE(178);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(180);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(190);
      if (lookahead == '=') ADVANCE(189);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(180);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(190);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(188);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(180);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '>') ADVANCE(210);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(231);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_SQUOTE_BSLASHa_SQUOTE);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_SQUOTE_BSLASHb_SQUOTE);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_SQUOTE_BSLASHe_SQUOTE);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_SQUOTE_BSLASHf_SQUOTE);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_SQUOTE_BSLASHn_SQUOTE);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_SQUOTE_BSLASHr_SQUOTE);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_SQUOTE_BSLASHt_SQUOTE);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_SQUOTE_BSLASHv_SQUOTE);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_char_token1);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_char_token2);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_char_token2);
      if (lookahead == '\'') ADVANCE(192);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == ']') ADVANCE(272);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_hash_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(213);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_hash_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(214);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_regex_token1);
      if (lookahead == '\n') ADVANCE(219);
      if (lookahead == '/') ADVANCE(231);
      if (lookahead == '\\') ADVANCE(217);
      if (lookahead != 0) ADVANCE(216);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_regex_token1);
      if (lookahead == '\n') ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(216);
      if (lookahead == '\\') ADVANCE(217);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_regex_token1);
      if (lookahead == '#') ADVANCE(216);
      if (lookahead == '\\') ADVANCE(220);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(218);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(219);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_regex_token1);
      if (lookahead == '\\') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(219);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_regex_token1);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(219);
      if (lookahead == '\\') ADVANCE(220);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_Tuple_DOTnew);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_commandLiteral_token1);
      if (lookahead == '\n') ADVANCE(225);
      if (lookahead == '`') ADVANCE(231);
      if (lookahead != 0) ADVANCE(223);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_commandLiteral_token1);
      if (lookahead == '#') ADVANCE(223);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(224);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(225);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_commandLiteral_token1);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(225);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_PERCENTx_LPAREN);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_commandLiteral_token2);
      if (lookahead == '\n') ADVANCE(229);
      if (lookahead == ')') ADVANCE(231);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_commandLiteral_token2);
      if (lookahead == '#') ADVANCE(227);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(228);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(229);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_commandLiteral_token2);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(229);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(231);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_local_variable_token1);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_local_variable_token1);
      if (lookahead == '_') ADVANCE(62);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_local_variable_token1);
      if (lookahead == 'a') ADVANCE(92);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_local_variable_token1);
      if (lookahead == 'i') ADVANCE(93);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_local_variable_token1);
      if (lookahead == 'r') ADVANCE(98);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '@') ADVANCE(238);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym___LINE__);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym___LINE__);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(157);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym___END_LINE__);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym___END_LINE__);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(157);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym___FILE__);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym___FILE__);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(157);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym___DIR__);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym___DIR__);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(157);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == 'u') ADVANCE(96);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(264);
      if (lookahead == '>') ADVANCE(210);
      if (lookahead == '~') ADVANCE(278);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '0') ADVANCE(31);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(177);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '0') ADVANCE(31);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(177);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(261);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == 'x') ADVANCE(30);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      if (lookahead == '=') ADVANCE(271);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(263);
      if (lookahead == '=') ADVANCE(267);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      if (lookahead == '>') ADVANCE(270);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(269);
      if (lookahead == '>') ADVANCE(262);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_LT_EQ_GT);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_EQ_EQ_EQ);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_LBRACK_RBRACK);
      if (lookahead == '=') ADVANCE(274);
      if (lookahead == '?') ADVANCE(273);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_LBRACK_RBRACK_QMARK);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_LBRACK_RBRACK_EQ);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(265);
      if (lookahead == '~') ADVANCE(277);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_BANG_TILDE);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_EQ_TILDE);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 112},
  [2] = {.lex_state = 4},
  [3] = {.lex_state = 112},
  [4] = {.lex_state = 112},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 112},
  [7] = {.lex_state = 112},
  [8] = {.lex_state = 112},
  [9] = {.lex_state = 112},
  [10] = {.lex_state = 112},
  [11] = {.lex_state = 112},
  [12] = {.lex_state = 112},
  [13] = {.lex_state = 112},
  [14] = {.lex_state = 112},
  [15] = {.lex_state = 112},
  [16] = {.lex_state = 112},
  [17] = {.lex_state = 112},
  [18] = {.lex_state = 112},
  [19] = {.lex_state = 112},
  [20] = {.lex_state = 112},
  [21] = {.lex_state = 112},
  [22] = {.lex_state = 112},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 5},
  [29] = {.lex_state = 5},
  [30] = {.lex_state = 6},
  [31] = {.lex_state = 6},
  [32] = {.lex_state = 6},
  [33] = {.lex_state = 6},
  [34] = {.lex_state = 112},
  [35] = {.lex_state = 112},
  [36] = {.lex_state = 112},
  [37] = {.lex_state = 112},
  [38] = {.lex_state = 112},
  [39] = {.lex_state = 112},
  [40] = {.lex_state = 112},
  [41] = {.lex_state = 112},
  [42] = {.lex_state = 112},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 112},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 7},
  [47] = {.lex_state = 8},
  [48] = {.lex_state = 112},
  [49] = {.lex_state = 112},
  [50] = {.lex_state = 112},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 112},
  [53] = {.lex_state = 112},
  [54] = {.lex_state = 8},
  [55] = {.lex_state = 7},
  [56] = {.lex_state = 7},
  [57] = {.lex_state = 8},
  [58] = {.lex_state = 7},
  [59] = {.lex_state = 112},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 112},
  [62] = {.lex_state = 112},
  [63] = {.lex_state = 3},
  [64] = {.lex_state = 112},
  [65] = {.lex_state = 112},
  [66] = {.lex_state = 8},
  [67] = {.lex_state = 112},
  [68] = {.lex_state = 112},
  [69] = {.lex_state = 11},
  [70] = {.lex_state = 10},
  [71] = {.lex_state = 11},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 11},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 11},
  [78] = {.lex_state = 11},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 11},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 11},
  [83] = {.lex_state = 11},
  [84] = {.lex_state = 11},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 11},
  [87] = {.lex_state = 11},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 11},
  [90] = {.lex_state = 11},
  [91] = {.lex_state = 11},
  [92] = {.lex_state = 11},
  [93] = {.lex_state = 11},
  [94] = {.lex_state = 11},
  [95] = {.lex_state = 11},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 11},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 11},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 11},
  [109] = {.lex_state = 11},
  [110] = {.lex_state = 11},
  [111] = {.lex_state = 9},
  [112] = {.lex_state = 9},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 11},
  [115] = {.lex_state = 11},
  [116] = {.lex_state = 10},
  [117] = {.lex_state = 10},
  [118] = {.lex_state = 10},
  [119] = {.lex_state = 2},
  [120] = {.lex_state = 2},
  [121] = {.lex_state = 2},
  [122] = {.lex_state = 2},
  [123] = {.lex_state = 2},
  [124] = {.lex_state = 2},
  [125] = {.lex_state = 2},
  [126] = {.lex_state = 2},
  [127] = {.lex_state = 2},
  [128] = {.lex_state = 12},
  [129] = {.lex_state = 2},
  [130] = {.lex_state = 2},
  [131] = {.lex_state = 12},
  [132] = {.lex_state = 2},
  [133] = {.lex_state = 2},
  [134] = {.lex_state = 2},
  [135] = {.lex_state = 2},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 12},
  [138] = {.lex_state = 12},
  [139] = {.lex_state = 2},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 2},
  [142] = {.lex_state = 2},
  [143] = {.lex_state = 2},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 228},
  [146] = {.lex_state = 15},
  [147] = {.lex_state = 15},
  [148] = {.lex_state = 4},
  [149] = {.lex_state = 4},
  [150] = {.lex_state = 4},
  [151] = {.lex_state = 4},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 112},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 15},
  [159] = {.lex_state = 4},
  [160] = {.lex_state = 14},
  [161] = {.lex_state = 218},
  [162] = {.lex_state = 224},
  [163] = {.lex_state = 4},
  [164] = {.lex_state = 14},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 228},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 112},
  [169] = {.lex_state = 224},
  [170] = {.lex_state = 4},
  [171] = {.lex_state = 4},
  [172] = {.lex_state = 218},
  [173] = {.lex_state = 13},
  [174] = {.lex_state = 4},
  [175] = {.lex_state = 112},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 4},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 15},
  [181] = {.lex_state = 13},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [aux_sym_identifier_token1] = ACTIONS(1),
    [sym_nil] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [aux_sym_float_token1] = ACTIONS(1),
    [aux_sym_float_token2] = ACTIONS(1),
    [aux_sym_float_token3] = ACTIONS(1),
    [aux_sym_integer_token1] = ACTIONS(1),
    [aux_sym_integer_token2] = ACTIONS(1),
    [aux_sym_integer_token3] = ACTIONS(1),
    [aux_sym_integer_token4] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE_BSLASHa_SQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE_BSLASHb_SQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE_BSLASHe_SQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE_BSLASHf_SQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE_BSLASHn_SQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE_BSLASHr_SQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE_BSLASHt_SQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE_BSLASHv_SQUOTE] = ACTIONS(1),
    [aux_sym_char_token1] = ACTIONS(1),
    [aux_sym_char_token2] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_Tuple_DOTnew] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_AT_AT] = ACTIONS(1),
    [anon_sym___LINE__] = ACTIONS(1),
    [anon_sym___END_LINE__] = ACTIONS(1),
    [anon_sym___FILE__] = ACTIONS(1),
    [anon_sym___DIR__] = ACTIONS(1),
    [aux_sym_constant_token1] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_STAR_STAR] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT_EQ_GT] = ACTIONS(1),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(1),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACK_RBRACK_QMARK] = ACTIONS(1),
    [anon_sym_LBRACK_RBRACK_EQ] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_BANG_TILDE] = ACTIONS(1),
    [anon_sym_EQ_TILDE] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(176),
    [sym__statement] = STATE(4),
    [sym__expression] = STATE(122),
    [sym_bool] = STATE(122),
    [sym_float] = STATE(122),
    [sym_integer] = STATE(122),
    [sym_symbol] = STATE(122),
    [sym_char] = STATE(122),
    [sym_string] = STATE(122),
    [sym_array] = STATE(122),
    [sym_hash] = STATE(122),
    [sym_regex] = STATE(122),
    [sym_tuple] = STATE(122),
    [sym_namedTupleLiteral] = STATE(122),
    [sym_commandLiteral] = STATE(122),
    [sym_local_variable] = STATE(150),
    [sym_instance_variable] = STATE(150),
    [sym_class_variable] = STATE(150),
    [sym_constant] = STATE(150),
    [sym_assignment] = STATE(122),
    [aux_sym_program_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_nil] = ACTIONS(7),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
    [aux_sym_float_token1] = ACTIONS(11),
    [aux_sym_float_token2] = ACTIONS(13),
    [aux_sym_float_token3] = ACTIONS(13),
    [aux_sym_integer_token1] = ACTIONS(15),
    [aux_sym_integer_token2] = ACTIONS(15),
    [aux_sym_integer_token3] = ACTIONS(15),
    [aux_sym_integer_token4] = ACTIONS(17),
    [anon_sym_COLON] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(23),
    [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = ACTIONS(23),
    [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = ACTIONS(23),
    [anon_sym_SQUOTE_BSLASHa_SQUOTE] = ACTIONS(23),
    [anon_sym_SQUOTE_BSLASHb_SQUOTE] = ACTIONS(23),
    [anon_sym_SQUOTE_BSLASHe_SQUOTE] = ACTIONS(23),
    [anon_sym_SQUOTE_BSLASHf_SQUOTE] = ACTIONS(23),
    [anon_sym_SQUOTE_BSLASHn_SQUOTE] = ACTIONS(23),
    [anon_sym_SQUOTE_BSLASHr_SQUOTE] = ACTIONS(23),
    [anon_sym_SQUOTE_BSLASHt_SQUOTE] = ACTIONS(23),
    [anon_sym_SQUOTE_BSLASHv_SQUOTE] = ACTIONS(23),
    [aux_sym_char_token1] = ACTIONS(23),
    [aux_sym_char_token2] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_SLASH] = ACTIONS(31),
    [anon_sym_Tuple_DOTnew] = ACTIONS(33),
    [anon_sym_BQUOTE] = ACTIONS(35),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(39),
    [anon_sym_AT] = ACTIONS(41),
    [anon_sym_AT_AT] = ACTIONS(43),
    [anon_sym___LINE__] = ACTIONS(45),
    [anon_sym___END_LINE__] = ACTIONS(45),
    [anon_sym___FILE__] = ACTIONS(45),
    [anon_sym___DIR__] = ACTIONS(45),
    [aux_sym_constant_token1] = ACTIONS(47),
  },
  [2] = {
    [sym__expression] = STATE(67),
    [sym_identifier] = STATE(178),
    [sym_bool] = STATE(67),
    [sym_float] = STATE(67),
    [sym_integer] = STATE(67),
    [sym_symbol] = STATE(67),
    [sym_char] = STATE(67),
    [sym_string] = STATE(40),
    [sym_array] = STATE(67),
    [sym_hash] = STATE(67),
    [sym_regex] = STATE(67),
    [sym_tuple] = STATE(67),
    [sym_namedTupleLiteral] = STATE(67),
    [sym_commandLiteral] = STATE(67),
    [sym_local_variable] = STATE(171),
    [sym_instance_variable] = STATE(171),
    [sym_class_variable] = STATE(171),
    [sym_constant] = STATE(171),
    [sym_assignment] = STATE(67),
    [aux_sym_identifier_token1] = ACTIONS(49),
    [sym_nil] = ACTIONS(51),
    [anon_sym_true] = ACTIONS(53),
    [anon_sym_false] = ACTIONS(53),
    [aux_sym_float_token1] = ACTIONS(55),
    [aux_sym_float_token2] = ACTIONS(57),
    [aux_sym_float_token3] = ACTIONS(57),
    [aux_sym_integer_token1] = ACTIONS(59),
    [aux_sym_integer_token2] = ACTIONS(59),
    [aux_sym_integer_token3] = ACTIONS(59),
    [aux_sym_integer_token4] = ACTIONS(61),
    [anon_sym_COLON] = ACTIONS(63),
    [anon_sym_DQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASHa_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASHb_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASHe_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASHf_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASHn_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASHr_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASHt_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASHv_SQUOTE] = ACTIONS(67),
    [aux_sym_char_token1] = ACTIONS(67),
    [aux_sym_char_token2] = ACTIONS(69),
    [anon_sym_LBRACK] = ACTIONS(71),
    [anon_sym_LBRACE] = ACTIONS(73),
    [anon_sym_RBRACE] = ACTIONS(75),
    [anon_sym_SLASH] = ACTIONS(77),
    [anon_sym_Tuple_DOTnew] = ACTIONS(79),
    [anon_sym_BQUOTE] = ACTIONS(81),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(83),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(39),
    [anon_sym_AT] = ACTIONS(41),
    [anon_sym_AT_AT] = ACTIONS(43),
    [anon_sym___LINE__] = ACTIONS(85),
    [anon_sym___END_LINE__] = ACTIONS(85),
    [anon_sym___FILE__] = ACTIONS(85),
    [anon_sym___DIR__] = ACTIONS(85),
    [aux_sym_constant_token1] = ACTIONS(47),
  },
  [3] = {
    [sym__statement] = STATE(3),
    [sym__expression] = STATE(122),
    [sym_bool] = STATE(122),
    [sym_float] = STATE(122),
    [sym_integer] = STATE(122),
    [sym_symbol] = STATE(122),
    [sym_char] = STATE(122),
    [sym_string] = STATE(122),
    [sym_array] = STATE(122),
    [sym_hash] = STATE(122),
    [sym_regex] = STATE(122),
    [sym_tuple] = STATE(122),
    [sym_namedTupleLiteral] = STATE(122),
    [sym_commandLiteral] = STATE(122),
    [sym_local_variable] = STATE(150),
    [sym_instance_variable] = STATE(150),
    [sym_class_variable] = STATE(150),
    [sym_constant] = STATE(150),
    [sym_assignment] = STATE(122),
    [aux_sym_program_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(87),
    [sym_nil] = ACTIONS(89),
    [anon_sym_true] = ACTIONS(92),
    [anon_sym_false] = ACTIONS(92),
    [aux_sym_float_token1] = ACTIONS(95),
    [aux_sym_float_token2] = ACTIONS(98),
    [aux_sym_float_token3] = ACTIONS(98),
    [aux_sym_integer_token1] = ACTIONS(101),
    [aux_sym_integer_token2] = ACTIONS(101),
    [aux_sym_integer_token3] = ACTIONS(101),
    [aux_sym_integer_token4] = ACTIONS(104),
    [anon_sym_COLON] = ACTIONS(107),
    [anon_sym_DQUOTE] = ACTIONS(110),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(113),
    [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = ACTIONS(113),
    [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = ACTIONS(113),
    [anon_sym_SQUOTE_BSLASHa_SQUOTE] = ACTIONS(113),
    [anon_sym_SQUOTE_BSLASHb_SQUOTE] = ACTIONS(113),
    [anon_sym_SQUOTE_BSLASHe_SQUOTE] = ACTIONS(113),
    [anon_sym_SQUOTE_BSLASHf_SQUOTE] = ACTIONS(113),
    [anon_sym_SQUOTE_BSLASHn_SQUOTE] = ACTIONS(113),
    [anon_sym_SQUOTE_BSLASHr_SQUOTE] = ACTIONS(113),
    [anon_sym_SQUOTE_BSLASHt_SQUOTE] = ACTIONS(113),
    [anon_sym_SQUOTE_BSLASHv_SQUOTE] = ACTIONS(113),
    [aux_sym_char_token1] = ACTIONS(113),
    [aux_sym_char_token2] = ACTIONS(116),
    [anon_sym_LBRACK] = ACTIONS(119),
    [anon_sym_LBRACE] = ACTIONS(122),
    [anon_sym_SLASH] = ACTIONS(125),
    [anon_sym_Tuple_DOTnew] = ACTIONS(128),
    [anon_sym_BQUOTE] = ACTIONS(131),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(134),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(137),
    [anon_sym_AT] = ACTIONS(140),
    [anon_sym_AT_AT] = ACTIONS(143),
    [anon_sym___LINE__] = ACTIONS(146),
    [anon_sym___END_LINE__] = ACTIONS(146),
    [anon_sym___FILE__] = ACTIONS(146),
    [anon_sym___DIR__] = ACTIONS(146),
    [aux_sym_constant_token1] = ACTIONS(149),
  },
  [4] = {
    [sym__statement] = STATE(3),
    [sym__expression] = STATE(122),
    [sym_bool] = STATE(122),
    [sym_float] = STATE(122),
    [sym_integer] = STATE(122),
    [sym_symbol] = STATE(122),
    [sym_char] = STATE(122),
    [sym_string] = STATE(122),
    [sym_array] = STATE(122),
    [sym_hash] = STATE(122),
    [sym_regex] = STATE(122),
    [sym_tuple] = STATE(122),
    [sym_namedTupleLiteral] = STATE(122),
    [sym_commandLiteral] = STATE(122),
    [sym_local_variable] = STATE(150),
    [sym_instance_variable] = STATE(150),
    [sym_class_variable] = STATE(150),
    [sym_constant] = STATE(150),
    [sym_assignment] = STATE(122),
    [aux_sym_program_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(152),
    [sym_nil] = ACTIONS(7),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
    [aux_sym_float_token1] = ACTIONS(11),
    [aux_sym_float_token2] = ACTIONS(13),
    [aux_sym_float_token3] = ACTIONS(13),
    [aux_sym_integer_token1] = ACTIONS(15),
    [aux_sym_integer_token2] = ACTIONS(15),
    [aux_sym_integer_token3] = ACTIONS(15),
    [aux_sym_integer_token4] = ACTIONS(17),
    [anon_sym_COLON] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(23),
    [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = ACTIONS(23),
    [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = ACTIONS(23),
    [anon_sym_SQUOTE_BSLASHa_SQUOTE] = ACTIONS(23),
    [anon_sym_SQUOTE_BSLASHb_SQUOTE] = ACTIONS(23),
    [anon_sym_SQUOTE_BSLASHe_SQUOTE] = ACTIONS(23),
    [anon_sym_SQUOTE_BSLASHf_SQUOTE] = ACTIONS(23),
    [anon_sym_SQUOTE_BSLASHn_SQUOTE] = ACTIONS(23),
    [anon_sym_SQUOTE_BSLASHr_SQUOTE] = ACTIONS(23),
    [anon_sym_SQUOTE_BSLASHt_SQUOTE] = ACTIONS(23),
    [anon_sym_SQUOTE_BSLASHv_SQUOTE] = ACTIONS(23),
    [aux_sym_char_token1] = ACTIONS(23),
    [aux_sym_char_token2] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_SLASH] = ACTIONS(31),
    [anon_sym_Tuple_DOTnew] = ACTIONS(33),
    [anon_sym_BQUOTE] = ACTIONS(35),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(39),
    [anon_sym_AT] = ACTIONS(41),
    [anon_sym_AT_AT] = ACTIONS(43),
    [anon_sym___LINE__] = ACTIONS(45),
    [anon_sym___END_LINE__] = ACTIONS(45),
    [anon_sym___FILE__] = ACTIONS(45),
    [anon_sym___DIR__] = ACTIONS(45),
    [aux_sym_constant_token1] = ACTIONS(47),
  },
  [5] = {
    [sym__expression] = STATE(44),
    [sym_identifier] = STATE(167),
    [sym_bool] = STATE(44),
    [sym_float] = STATE(44),
    [sym_integer] = STATE(44),
    [sym_symbol] = STATE(44),
    [sym_char] = STATE(44),
    [sym_string] = STATE(42),
    [sym_array] = STATE(44),
    [sym_hash] = STATE(44),
    [sym_regex] = STATE(44),
    [sym_tuple] = STATE(44),
    [sym_namedTupleLiteral] = STATE(44),
    [sym_commandLiteral] = STATE(44),
    [sym_local_variable] = STATE(171),
    [sym_instance_variable] = STATE(171),
    [sym_class_variable] = STATE(171),
    [sym_constant] = STATE(171),
    [sym_assignment] = STATE(44),
    [aux_sym_identifier_token1] = ACTIONS(49),
    [sym_nil] = ACTIONS(154),
    [anon_sym_true] = ACTIONS(53),
    [anon_sym_false] = ACTIONS(53),
    [aux_sym_float_token1] = ACTIONS(55),
    [aux_sym_float_token2] = ACTIONS(57),
    [aux_sym_float_token3] = ACTIONS(57),
    [aux_sym_integer_token1] = ACTIONS(59),
    [aux_sym_integer_token2] = ACTIONS(59),
    [aux_sym_integer_token3] = ACTIONS(59),
    [aux_sym_integer_token4] = ACTIONS(61),
    [anon_sym_COLON] = ACTIONS(63),
    [anon_sym_DQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASHa_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASHb_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASHe_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASHf_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASHn_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASHr_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASHt_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASHv_SQUOTE] = ACTIONS(67),
    [aux_sym_char_token1] = ACTIONS(67),
    [aux_sym_char_token2] = ACTIONS(69),
    [anon_sym_LBRACK] = ACTIONS(71),
    [anon_sym_LBRACE] = ACTIONS(73),
    [anon_sym_RBRACE] = ACTIONS(156),
    [anon_sym_SLASH] = ACTIONS(77),
    [anon_sym_Tuple_DOTnew] = ACTIONS(79),
    [anon_sym_BQUOTE] = ACTIONS(81),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(83),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(39),
    [anon_sym_AT] = ACTIONS(41),
    [anon_sym_AT_AT] = ACTIONS(43),
    [anon_sym___LINE__] = ACTIONS(85),
    [anon_sym___END_LINE__] = ACTIONS(85),
    [anon_sym___FILE__] = ACTIONS(85),
    [anon_sym___DIR__] = ACTIONS(85),
    [aux_sym_constant_token1] = ACTIONS(47),
  },
  [6] = {
    [sym__expression] = STATE(107),
    [sym_bool] = STATE(107),
    [sym_float] = STATE(107),
    [sym_integer] = STATE(107),
    [sym_symbol] = STATE(107),
    [sym_char] = STATE(107),
    [sym_string] = STATE(107),
    [sym_array] = STATE(107),
    [sym_hash] = STATE(107),
    [sym_regex] = STATE(107),
    [sym_tuple] = STATE(107),
    [sym_namedTupleLiteral] = STATE(107),
    [sym_commandLiteral] = STATE(107),
    [sym_local_variable] = STATE(170),
    [sym_instance_variable] = STATE(170),
    [sym_class_variable] = STATE(170),
    [sym_constant] = STATE(170),
    [sym_assignment] = STATE(107),
    [sym_nil] = ACTIONS(158),
    [anon_sym_true] = ACTIONS(160),
    [anon_sym_false] = ACTIONS(160),
    [aux_sym_float_token1] = ACTIONS(55),
    [aux_sym_float_token2] = ACTIONS(57),
    [aux_sym_float_token3] = ACTIONS(57),
    [aux_sym_integer_token1] = ACTIONS(59),
    [aux_sym_integer_token2] = ACTIONS(59),
    [aux_sym_integer_token3] = ACTIONS(59),
    [aux_sym_integer_token4] = ACTIONS(61),
    [anon_sym_COLON] = ACTIONS(162),
    [anon_sym_DQUOTE] = ACTIONS(164),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASHa_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASHb_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASHe_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASHf_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASHn_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASHr_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASHt_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASHv_SQUOTE] = ACTIONS(67),
    [aux_sym_char_token1] = ACTIONS(67),
    [aux_sym_char_token2] = ACTIONS(69),
    [anon_sym_LBRACK] = ACTIONS(71),
    [anon_sym_LBRACE] = ACTIONS(73),
    [anon_sym_SLASH] = ACTIONS(77),
    [anon_sym_Tuple_DOTnew] = ACTIONS(79),
    [anon_sym_BQUOTE] = ACTIONS(81),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(83),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(39),
    [anon_sym_AT] = ACTIONS(41),
    [anon_sym_AT_AT] = ACTIONS(43),
    [anon_sym___LINE__] = ACTIONS(45),
    [anon_sym___END_LINE__] = ACTIONS(45),
    [anon_sym___FILE__] = ACTIONS(45),
    [anon_sym___DIR__] = ACTIONS(45),
    [aux_sym_constant_token1] = ACTIONS(47),
  },
  [7] = {
    [sym__expression] = STATE(98),
    [sym_bool] = STATE(98),
    [sym_float] = STATE(98),
    [sym_integer] = STATE(98),
    [sym_symbol] = STATE(98),
    [sym_char] = STATE(98),
    [sym_string] = STATE(98),
    [sym_array] = STATE(98),
    [sym_hash] = STATE(98),
    [sym_regex] = STATE(98),
    [sym_tuple] = STATE(98),
    [sym_namedTupleLiteral] = STATE(98),
    [sym_commandLiteral] = STATE(98),
    [sym_local_variable] = STATE(170),
    [sym_instance_variable] = STATE(170),
    [sym_class_variable] = STATE(170),
    [sym_constant] = STATE(170),
    [sym_assignment] = STATE(98),
    [sym_nil] = ACTIONS(166),
    [anon_sym_true] = ACTIONS(160),
    [anon_sym_false] = ACTIONS(160),
    [aux_sym_float_token1] = ACTIONS(55),
    [aux_sym_float_token2] = ACTIONS(57),
    [aux_sym_float_token3] = ACTIONS(57),
    [aux_sym_integer_token1] = ACTIONS(59),
    [aux_sym_integer_token2] = ACTIONS(59),
    [aux_sym_integer_token3] = ACTIONS(59),
    [aux_sym_integer_token4] = ACTIONS(61),
    [anon_sym_COLON] = ACTIONS(162),
    [anon_sym_DQUOTE] = ACTIONS(164),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASHa_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASHb_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASHe_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASHf_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASHn_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASHr_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASHt_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASHv_SQUOTE] = ACTIONS(67),
    [aux_sym_char_token1] = ACTIONS(67),
    [aux_sym_char_token2] = ACTIONS(69),
    [anon_sym_LBRACK] = ACTIONS(71),
    [anon_sym_LBRACE] = ACTIONS(73),
    [anon_sym_SLASH] = ACTIONS(77),
    [anon_sym_Tuple_DOTnew] = ACTIONS(79),
    [anon_sym_BQUOTE] = ACTIONS(81),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(83),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(39),
    [anon_sym_AT] = ACTIONS(41),
    [anon_sym_AT_AT] = ACTIONS(43),
    [anon_sym___LINE__] = ACTIONS(45),
    [anon_sym___END_LINE__] = ACTIONS(45),
    [anon_sym___FILE__] = ACTIONS(45),
    [anon_sym___DIR__] = ACTIONS(45),
    [aux_sym_constant_token1] = ACTIONS(47),
  },
  [8] = {
    [sym__expression] = STATE(142),
    [sym_bool] = STATE(142),
    [sym_float] = STATE(142),
    [sym_integer] = STATE(142),
    [sym_symbol] = STATE(142),
    [sym_char] = STATE(142),
    [sym_string] = STATE(142),
    [sym_array] = STATE(142),
    [sym_hash] = STATE(142),
    [sym_regex] = STATE(142),
    [sym_tuple] = STATE(142),
    [sym_namedTupleLiteral] = STATE(142),
    [sym_commandLiteral] = STATE(142),
    [sym_local_variable] = STATE(150),
    [sym_instance_variable] = STATE(150),
    [sym_class_variable] = STATE(150),
    [sym_constant] = STATE(150),
    [sym_assignment] = STATE(142),
    [sym_nil] = ACTIONS(168),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
    [aux_sym_float_token1] = ACTIONS(11),
    [aux_sym_float_token2] = ACTIONS(13),
    [aux_sym_float_token3] = ACTIONS(13),
    [aux_sym_integer_token1] = ACTIONS(15),
    [aux_sym_integer_token2] = ACTIONS(15),
    [aux_sym_integer_token3] = ACTIONS(15),
    [aux_sym_integer_token4] = ACTIONS(17),
    [anon_sym_COLON] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(23),
    [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = ACTIONS(23),
    [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = ACTIONS(23),
    [anon_sym_SQUOTE_BSLASHa_SQUOTE] = ACTIONS(23),
    [anon_sym_SQUOTE_BSLASHb_SQUOTE] = ACTIONS(23),
    [anon_sym_SQUOTE_BSLASHe_SQUOTE] = ACTIONS(23),
    [anon_sym_SQUOTE_BSLASHf_SQUOTE] = ACTIONS(23),
    [anon_sym_SQUOTE_BSLASHn_SQUOTE] = ACTIONS(23),
    [anon_sym_SQUOTE_BSLASHr_SQUOTE] = ACTIONS(23),
    [anon_sym_SQUOTE_BSLASHt_SQUOTE] = ACTIONS(23),
    [anon_sym_SQUOTE_BSLASHv_SQUOTE] = ACTIONS(23),
    [aux_sym_char_token1] = ACTIONS(23),
    [aux_sym_char_token2] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_SLASH] = ACTIONS(31),
    [anon_sym_Tuple_DOTnew] = ACTIONS(33),
    [anon_sym_BQUOTE] = ACTIONS(35),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(39),
    [anon_sym_AT] = ACTIONS(41),
    [anon_sym_AT_AT] = ACTIONS(43),
    [anon_sym___LINE__] = ACTIONS(45),
    [anon_sym___END_LINE__] = ACTIONS(45),
    [anon_sym___FILE__] = ACTIONS(45),
    [anon_sym___DIR__] = ACTIONS(45),
    [aux_sym_constant_token1] = ACTIONS(47),
  },
  [9] = {
    [sym__expression] = STATE(48),
    [sym_bool] = STATE(48),
    [sym_float] = STATE(48),
    [sym_integer] = STATE(48),
    [sym_symbol] = STATE(48),
    [sym_char] = STATE(48),
    [sym_string] = STATE(48),
    [sym_array] = STATE(48),
    [sym_hash] = STATE(48),
    [sym_regex] = STATE(48),
    [sym_tuple] = STATE(48),
    [sym_namedTupleLiteral] = STATE(48),
    [sym_commandLiteral] = STATE(48),
    [sym_local_variable] = STATE(174),
    [sym_instance_variable] = STATE(174),
    [sym_class_variable] = STATE(174),
    [sym_constant] = STATE(174),
    [sym_assignment] = STATE(48),
    [sym_nil] = ACTIONS(170),
    [anon_sym_true] = ACTIONS(160),
    [anon_sym_false] = ACTIONS(160),
    [aux_sym_float_token1] = ACTIONS(55),
    [aux_sym_float_token2] = ACTIONS(57),
    [aux_sym_float_token3] = ACTIONS(57),
    [aux_sym_integer_token1] = ACTIONS(59),
    [aux_sym_integer_token2] = ACTIONS(59),
    [aux_sym_integer_token3] = ACTIONS(59),
    [aux_sym_integer_token4] = ACTIONS(61),
    [anon_sym_COLON] = ACTIONS(172),
    [anon_sym_DQUOTE] = ACTIONS(174),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASHa_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASHb_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASHe_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASHf_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASHn_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASHr_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASHt_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASHv_SQUOTE] = ACTIONS(67),
    [aux_sym_char_token1] = ACTIONS(67),
    [aux_sym_char_token2] = ACTIONS(69),
    [anon_sym_LBRACK] = ACTIONS(71),
    [anon_sym_LBRACE] = ACTIONS(73),
    [anon_sym_SLASH] = ACTIONS(77),
    [anon_sym_Tuple_DOTnew] = ACTIONS(79),
    [anon_sym_BQUOTE] = ACTIONS(81),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(83),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(39),
    [anon_sym_AT] = ACTIONS(41),
    [anon_sym_AT_AT] = ACTIONS(43),
    [anon_sym___LINE__] = ACTIONS(45),
    [anon_sym___END_LINE__] = ACTIONS(45),
    [anon_sym___FILE__] = ACTIONS(45),
    [anon_sym___DIR__] = ACTIONS(45),
    [aux_sym_constant_token1] = ACTIONS(47),
  },
  [10] = {
    [sym__expression] = STATE(113),
    [sym_bool] = STATE(113),
    [sym_float] = STATE(113),
    [sym_integer] = STATE(113),
    [sym_symbol] = STATE(113),
    [sym_char] = STATE(113),
    [sym_string] = STATE(113),
    [sym_array] = STATE(113),
    [sym_hash] = STATE(113),
    [sym_regex] = STATE(113),
    [sym_tuple] = STATE(113),
    [sym_namedTupleLiteral] = STATE(113),
    [sym_commandLiteral] = STATE(113),
    [sym_local_variable] = STATE(170),
    [sym_instance_variable] = STATE(170),
    [sym_class_variable] = STATE(170),
    [sym_constant] = STATE(170),
    [sym_assignment] = STATE(113),
    [sym_nil] = ACTIONS(176),
    [anon_sym_true] = ACTIONS(160),
    [anon_sym_false] = ACTIONS(160),
    [aux_sym_float_token1] = ACTIONS(55),
    [aux_sym_float_token2] = ACTIONS(57),
    [aux_sym_float_token3] = ACTIONS(57),
    [aux_sym_integer_token1] = ACTIONS(59),
    [aux_sym_integer_token2] = ACTIONS(59),
    [aux_sym_integer_token3] = ACTIONS(59),
    [aux_sym_integer_token4] = ACTIONS(61),
    [anon_sym_COLON] = ACTIONS(162),
    [anon_sym_DQUOTE] = ACTIONS(164),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASHa_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASHb_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASHe_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASHf_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASHn_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASHr_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASHt_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASHv_SQUOTE] = ACTIONS(67),
    [aux_sym_char_token1] = ACTIONS(67),
    [aux_sym_char_token2] = ACTIONS(69),
    [anon_sym_LBRACK] = ACTIONS(71),
    [anon_sym_LBRACE] = ACTIONS(73),
    [anon_sym_SLASH] = ACTIONS(77),
    [anon_sym_Tuple_DOTnew] = ACTIONS(79),
    [anon_sym_BQUOTE] = ACTIONS(81),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(83),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(39),
    [anon_sym_AT] = ACTIONS(41),
    [anon_sym_AT_AT] = ACTIONS(43),
    [anon_sym___LINE__] = ACTIONS(45),
    [anon_sym___END_LINE__] = ACTIONS(45),
    [anon_sym___FILE__] = ACTIONS(45),
    [anon_sym___DIR__] = ACTIONS(45),
    [aux_sym_constant_token1] = ACTIONS(47),
  },
  [11] = {
    [sym__expression] = STATE(48),
    [sym_bool] = STATE(48),
    [sym_float] = STATE(48),
    [sym_integer] = STATE(48),
    [sym_symbol] = STATE(48),
    [sym_char] = STATE(48),
    [sym_string] = STATE(48),
    [sym_array] = STATE(48),
    [sym_hash] = STATE(48),
    [sym_regex] = STATE(48),
    [sym_tuple] = STATE(48),
    [sym_namedTupleLiteral] = STATE(48),
    [sym_commandLiteral] = STATE(48),
    [sym_local_variable] = STATE(177),
    [sym_instance_variable] = STATE(177),
    [sym_class_variable] = STATE(177),
    [sym_constant] = STATE(177),
    [sym_assignment] = STATE(48),
    [sym_nil] = ACTIONS(170),
    [anon_sym_true] = ACTIONS(160),
    [anon_sym_false] = ACTIONS(160),
    [aux_sym_float_token1] = ACTIONS(55),
    [aux_sym_float_token2] = ACTIONS(57),
    [aux_sym_float_token3] = ACTIONS(57),
    [aux_sym_integer_token1] = ACTIONS(59),
    [aux_sym_integer_token2] = ACTIONS(59),
    [aux_sym_integer_token3] = ACTIONS(59),
    [aux_sym_integer_token4] = ACTIONS(61),
    [anon_sym_COLON] = ACTIONS(178),
    [anon_sym_DQUOTE] = ACTIONS(180),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASHa_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASHb_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASHe_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASHf_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASHn_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASHr_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASHt_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASHv_SQUOTE] = ACTIONS(67),
    [aux_sym_char_token1] = ACTIONS(67),
    [aux_sym_char_token2] = ACTIONS(69),
    [anon_sym_LBRACK] = ACTIONS(71),
    [anon_sym_LBRACE] = ACTIONS(73),
    [anon_sym_SLASH] = ACTIONS(77),
    [anon_sym_Tuple_DOTnew] = ACTIONS(79),
    [anon_sym_BQUOTE] = ACTIONS(81),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(83),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(39),
    [anon_sym_AT] = ACTIONS(41),
    [anon_sym_AT_AT] = ACTIONS(43),
    [anon_sym___LINE__] = ACTIONS(45),
    [anon_sym___END_LINE__] = ACTIONS(45),
    [anon_sym___FILE__] = ACTIONS(45),
    [anon_sym___DIR__] = ACTIONS(45),
    [aux_sym_constant_token1] = ACTIONS(47),
  },
  [12] = {
    [sym__expression] = STATE(48),
    [sym_bool] = STATE(48),
    [sym_float] = STATE(48),
    [sym_integer] = STATE(48),
    [sym_symbol] = STATE(48),
    [sym_char] = STATE(48),
    [sym_string] = STATE(48),
    [sym_array] = STATE(48),
    [sym_hash] = STATE(48),
    [sym_regex] = STATE(48),
    [sym_tuple] = STATE(48),
    [sym_namedTupleLiteral] = STATE(48),
    [sym_commandLiteral] = STATE(48),
    [sym_local_variable] = STATE(171),
    [sym_instance_variable] = STATE(171),
    [sym_class_variable] = STATE(171),
    [sym_constant] = STATE(171),
    [sym_assignment] = STATE(48),
    [sym_nil] = ACTIONS(170),
    [anon_sym_true] = ACTIONS(160),
    [anon_sym_false] = ACTIONS(160),
    [aux_sym_float_token1] = ACTIONS(55),
    [aux_sym_float_token2] = ACTIONS(57),
    [aux_sym_float_token3] = ACTIONS(57),
    [aux_sym_integer_token1] = ACTIONS(59),
    [aux_sym_integer_token2] = ACTIONS(59),
    [aux_sym_integer_token3] = ACTIONS(59),
    [aux_sym_integer_token4] = ACTIONS(61),
    [anon_sym_COLON] = ACTIONS(63),
    [anon_sym_DQUOTE] = ACTIONS(182),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASHa_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASHb_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASHe_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASHf_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASHn_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASHr_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASHt_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASHv_SQUOTE] = ACTIONS(67),
    [aux_sym_char_token1] = ACTIONS(67),
    [aux_sym_char_token2] = ACTIONS(69),
    [anon_sym_LBRACK] = ACTIONS(71),
    [anon_sym_LBRACE] = ACTIONS(73),
    [anon_sym_SLASH] = ACTIONS(77),
    [anon_sym_Tuple_DOTnew] = ACTIONS(79),
    [anon_sym_BQUOTE] = ACTIONS(81),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(83),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(39),
    [anon_sym_AT] = ACTIONS(41),
    [anon_sym_AT_AT] = ACTIONS(43),
    [anon_sym___LINE__] = ACTIONS(45),
    [anon_sym___END_LINE__] = ACTIONS(45),
    [anon_sym___FILE__] = ACTIONS(45),
    [anon_sym___DIR__] = ACTIONS(45),
    [aux_sym_constant_token1] = ACTIONS(47),
  },
  [13] = {
    [sym__expression] = STATE(101),
    [sym_bool] = STATE(101),
    [sym_float] = STATE(101),
    [sym_integer] = STATE(101),
    [sym_symbol] = STATE(101),
    [sym_char] = STATE(101),
    [sym_string] = STATE(101),
    [sym_array] = STATE(101),
    [sym_hash] = STATE(101),
    [sym_regex] = STATE(101),
    [sym_tuple] = STATE(101),
    [sym_namedTupleLiteral] = STATE(101),
    [sym_commandLiteral] = STATE(101),
    [sym_local_variable] = STATE(174),
    [sym_instance_variable] = STATE(174),
    [sym_class_variable] = STATE(174),
    [sym_constant] = STATE(174),
    [sym_assignment] = STATE(101),
    [sym_nil] = ACTIONS(184),
    [anon_sym_true] = ACTIONS(160),
    [anon_sym_false] = ACTIONS(160),
    [aux_sym_float_token1] = ACTIONS(55),
    [aux_sym_float_token2] = ACTIONS(57),
    [aux_sym_float_token3] = ACTIONS(57),
    [aux_sym_integer_token1] = ACTIONS(59),
    [aux_sym_integer_token2] = ACTIONS(59),
    [aux_sym_integer_token3] = ACTIONS(59),
    [aux_sym_integer_token4] = ACTIONS(61),
    [anon_sym_COLON] = ACTIONS(172),
    [anon_sym_DQUOTE] = ACTIONS(174),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASHa_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASHb_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASHe_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASHf_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASHn_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASHr_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASHt_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASHv_SQUOTE] = ACTIONS(67),
    [aux_sym_char_token1] = ACTIONS(67),
    [aux_sym_char_token2] = ACTIONS(69),
    [anon_sym_LBRACK] = ACTIONS(71),
    [anon_sym_LBRACE] = ACTIONS(73),
    [anon_sym_SLASH] = ACTIONS(77),
    [anon_sym_Tuple_DOTnew] = ACTIONS(79),
    [anon_sym_BQUOTE] = ACTIONS(81),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(83),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(39),
    [anon_sym_AT] = ACTIONS(41),
    [anon_sym_AT_AT] = ACTIONS(43),
    [anon_sym___LINE__] = ACTIONS(45),
    [anon_sym___END_LINE__] = ACTIONS(45),
    [anon_sym___FILE__] = ACTIONS(45),
    [anon_sym___DIR__] = ACTIONS(45),
    [aux_sym_constant_token1] = ACTIONS(47),
  },
  [14] = {
    [sym__expression] = STATE(103),
    [sym_bool] = STATE(103),
    [sym_float] = STATE(103),
    [sym_integer] = STATE(103),
    [sym_symbol] = STATE(103),
    [sym_char] = STATE(103),
    [sym_string] = STATE(103),
    [sym_array] = STATE(103),
    [sym_hash] = STATE(103),
    [sym_regex] = STATE(103),
    [sym_tuple] = STATE(103),
    [sym_namedTupleLiteral] = STATE(103),
    [sym_commandLiteral] = STATE(103),
    [sym_local_variable] = STATE(174),
    [sym_instance_variable] = STATE(174),
    [sym_class_variable] = STATE(174),
    [sym_constant] = STATE(174),
    [sym_assignment] = STATE(103),
    [sym_nil] = ACTIONS(186),
    [anon_sym_true] = ACTIONS(160),
    [anon_sym_false] = ACTIONS(160),
    [aux_sym_float_token1] = ACTIONS(55),
    [aux_sym_float_token2] = ACTIONS(57),
    [aux_sym_float_token3] = ACTIONS(57),
    [aux_sym_integer_token1] = ACTIONS(59),
    [aux_sym_integer_token2] = ACTIONS(59),
    [aux_sym_integer_token3] = ACTIONS(59),
    [aux_sym_integer_token4] = ACTIONS(61),
    [anon_sym_COLON] = ACTIONS(172),
    [anon_sym_DQUOTE] = ACTIONS(174),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASHa_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASHb_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASHe_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASHf_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASHn_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASHr_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASHt_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASHv_SQUOTE] = ACTIONS(67),
    [aux_sym_char_token1] = ACTIONS(67),
    [aux_sym_char_token2] = ACTIONS(69),
    [anon_sym_LBRACK] = ACTIONS(71),
    [anon_sym_LBRACE] = ACTIONS(73),
    [anon_sym_SLASH] = ACTIONS(77),
    [anon_sym_Tuple_DOTnew] = ACTIONS(79),
    [anon_sym_BQUOTE] = ACTIONS(81),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(83),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(39),
    [anon_sym_AT] = ACTIONS(41),
    [anon_sym_AT_AT] = ACTIONS(43),
    [anon_sym___LINE__] = ACTIONS(45),
    [anon_sym___END_LINE__] = ACTIONS(45),
    [anon_sym___FILE__] = ACTIONS(45),
    [anon_sym___DIR__] = ACTIONS(45),
    [aux_sym_constant_token1] = ACTIONS(47),
  },
  [15] = {
    [sym__expression] = STATE(98),
    [sym_bool] = STATE(98),
    [sym_float] = STATE(98),
    [sym_integer] = STATE(98),
    [sym_symbol] = STATE(98),
    [sym_char] = STATE(98),
    [sym_string] = STATE(98),
    [sym_array] = STATE(98),
    [sym_hash] = STATE(98),
    [sym_regex] = STATE(98),
    [sym_tuple] = STATE(98),
    [sym_namedTupleLiteral] = STATE(98),
    [sym_commandLiteral] = STATE(98),
    [sym_local_variable] = STATE(174),
    [sym_instance_variable] = STATE(174),
    [sym_class_variable] = STATE(174),
    [sym_constant] = STATE(174),
    [sym_assignment] = STATE(98),
    [sym_nil] = ACTIONS(166),
    [anon_sym_true] = ACTIONS(160),
    [anon_sym_false] = ACTIONS(160),
    [aux_sym_float_token1] = ACTIONS(55),
    [aux_sym_float_token2] = ACTIONS(57),
    [aux_sym_float_token3] = ACTIONS(57),
    [aux_sym_integer_token1] = ACTIONS(59),
    [aux_sym_integer_token2] = ACTIONS(59),
    [aux_sym_integer_token3] = ACTIONS(59),
    [aux_sym_integer_token4] = ACTIONS(61),
    [anon_sym_COLON] = ACTIONS(172),
    [anon_sym_DQUOTE] = ACTIONS(174),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASHa_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASHb_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASHe_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASHf_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASHn_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASHr_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASHt_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASHv_SQUOTE] = ACTIONS(67),
    [aux_sym_char_token1] = ACTIONS(67),
    [aux_sym_char_token2] = ACTIONS(69),
    [anon_sym_LBRACK] = ACTIONS(71),
    [anon_sym_LBRACE] = ACTIONS(73),
    [anon_sym_SLASH] = ACTIONS(77),
    [anon_sym_Tuple_DOTnew] = ACTIONS(79),
    [anon_sym_BQUOTE] = ACTIONS(81),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(83),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(39),
    [anon_sym_AT] = ACTIONS(41),
    [anon_sym_AT_AT] = ACTIONS(43),
    [anon_sym___LINE__] = ACTIONS(45),
    [anon_sym___END_LINE__] = ACTIONS(45),
    [anon_sym___FILE__] = ACTIONS(45),
    [anon_sym___DIR__] = ACTIONS(45),
    [aux_sym_constant_token1] = ACTIONS(47),
  },
  [16] = {
    [sym__expression] = STATE(154),
    [sym_bool] = STATE(154),
    [sym_float] = STATE(154),
    [sym_integer] = STATE(154),
    [sym_symbol] = STATE(154),
    [sym_char] = STATE(154),
    [sym_string] = STATE(154),
    [sym_array] = STATE(154),
    [sym_hash] = STATE(154),
    [sym_regex] = STATE(154),
    [sym_tuple] = STATE(154),
    [sym_namedTupleLiteral] = STATE(154),
    [sym_commandLiteral] = STATE(154),
    [sym_local_variable] = STATE(177),
    [sym_instance_variable] = STATE(177),
    [sym_class_variable] = STATE(177),
    [sym_constant] = STATE(177),
    [sym_assignment] = STATE(154),
    [sym_nil] = ACTIONS(188),
    [anon_sym_true] = ACTIONS(160),
    [anon_sym_false] = ACTIONS(160),
    [aux_sym_float_token1] = ACTIONS(55),
    [aux_sym_float_token2] = ACTIONS(57),
    [aux_sym_float_token3] = ACTIONS(57),
    [aux_sym_integer_token1] = ACTIONS(59),
    [aux_sym_integer_token2] = ACTIONS(59),
    [aux_sym_integer_token3] = ACTIONS(59),
    [aux_sym_integer_token4] = ACTIONS(61),
    [anon_sym_COLON] = ACTIONS(178),
    [anon_sym_DQUOTE] = ACTIONS(180),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASHa_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASHb_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASHe_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASHf_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASHn_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASHr_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASHt_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASHv_SQUOTE] = ACTIONS(67),
    [aux_sym_char_token1] = ACTIONS(67),
    [aux_sym_char_token2] = ACTIONS(69),
    [anon_sym_LBRACK] = ACTIONS(71),
    [anon_sym_LBRACE] = ACTIONS(73),
    [anon_sym_SLASH] = ACTIONS(77),
    [anon_sym_Tuple_DOTnew] = ACTIONS(79),
    [anon_sym_BQUOTE] = ACTIONS(81),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(83),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(39),
    [anon_sym_AT] = ACTIONS(41),
    [anon_sym_AT_AT] = ACTIONS(43),
    [anon_sym___LINE__] = ACTIONS(45),
    [anon_sym___END_LINE__] = ACTIONS(45),
    [anon_sym___FILE__] = ACTIONS(45),
    [anon_sym___DIR__] = ACTIONS(45),
    [aux_sym_constant_token1] = ACTIONS(47),
  },
  [17] = {
    [sym__expression] = STATE(136),
    [sym_bool] = STATE(136),
    [sym_float] = STATE(136),
    [sym_integer] = STATE(136),
    [sym_symbol] = STATE(136),
    [sym_char] = STATE(136),
    [sym_string] = STATE(136),
    [sym_array] = STATE(136),
    [sym_hash] = STATE(136),
    [sym_regex] = STATE(136),
    [sym_tuple] = STATE(136),
    [sym_namedTupleLiteral] = STATE(136),
    [sym_commandLiteral] = STATE(136),
    [sym_local_variable] = STATE(174),
    [sym_instance_variable] = STATE(174),
    [sym_class_variable] = STATE(174),
    [sym_constant] = STATE(174),
    [sym_assignment] = STATE(136),
    [sym_nil] = ACTIONS(190),
    [anon_sym_true] = ACTIONS(160),
    [anon_sym_false] = ACTIONS(160),
    [aux_sym_float_token1] = ACTIONS(55),
    [aux_sym_float_token2] = ACTIONS(57),
    [aux_sym_float_token3] = ACTIONS(57),
    [aux_sym_integer_token1] = ACTIONS(59),
    [aux_sym_integer_token2] = ACTIONS(59),
    [aux_sym_integer_token3] = ACTIONS(59),
    [aux_sym_integer_token4] = ACTIONS(61),
    [anon_sym_COLON] = ACTIONS(172),
    [anon_sym_DQUOTE] = ACTIONS(174),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASHa_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASHb_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASHe_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASHf_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASHn_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASHr_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASHt_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASHv_SQUOTE] = ACTIONS(67),
    [aux_sym_char_token1] = ACTIONS(67),
    [aux_sym_char_token2] = ACTIONS(69),
    [anon_sym_LBRACK] = ACTIONS(71),
    [anon_sym_LBRACE] = ACTIONS(73),
    [anon_sym_SLASH] = ACTIONS(77),
    [anon_sym_Tuple_DOTnew] = ACTIONS(79),
    [anon_sym_BQUOTE] = ACTIONS(81),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(83),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(39),
    [anon_sym_AT] = ACTIONS(41),
    [anon_sym_AT_AT] = ACTIONS(43),
    [anon_sym___LINE__] = ACTIONS(45),
    [anon_sym___END_LINE__] = ACTIONS(45),
    [anon_sym___FILE__] = ACTIONS(45),
    [anon_sym___DIR__] = ACTIONS(45),
    [aux_sym_constant_token1] = ACTIONS(47),
  },
  [18] = {
    [sym__expression] = STATE(74),
    [sym_bool] = STATE(74),
    [sym_float] = STATE(74),
    [sym_integer] = STATE(74),
    [sym_symbol] = STATE(74),
    [sym_char] = STATE(74),
    [sym_string] = STATE(74),
    [sym_array] = STATE(74),
    [sym_hash] = STATE(74),
    [sym_regex] = STATE(74),
    [sym_tuple] = STATE(74),
    [sym_namedTupleLiteral] = STATE(74),
    [sym_commandLiteral] = STATE(74),
    [sym_local_variable] = STATE(174),
    [sym_instance_variable] = STATE(174),
    [sym_class_variable] = STATE(174),
    [sym_constant] = STATE(174),
    [sym_assignment] = STATE(74),
    [sym_nil] = ACTIONS(192),
    [anon_sym_true] = ACTIONS(160),
    [anon_sym_false] = ACTIONS(160),
    [aux_sym_float_token1] = ACTIONS(55),
    [aux_sym_float_token2] = ACTIONS(57),
    [aux_sym_float_token3] = ACTIONS(57),
    [aux_sym_integer_token1] = ACTIONS(59),
    [aux_sym_integer_token2] = ACTIONS(59),
    [aux_sym_integer_token3] = ACTIONS(59),
    [aux_sym_integer_token4] = ACTIONS(61),
    [anon_sym_COLON] = ACTIONS(172),
    [anon_sym_DQUOTE] = ACTIONS(174),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASHa_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASHb_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASHe_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASHf_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASHn_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASHr_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASHt_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASHv_SQUOTE] = ACTIONS(67),
    [aux_sym_char_token1] = ACTIONS(67),
    [aux_sym_char_token2] = ACTIONS(69),
    [anon_sym_LBRACK] = ACTIONS(71),
    [anon_sym_LBRACE] = ACTIONS(73),
    [anon_sym_SLASH] = ACTIONS(77),
    [anon_sym_Tuple_DOTnew] = ACTIONS(79),
    [anon_sym_BQUOTE] = ACTIONS(81),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(83),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(39),
    [anon_sym_AT] = ACTIONS(41),
    [anon_sym_AT_AT] = ACTIONS(43),
    [anon_sym___LINE__] = ACTIONS(45),
    [anon_sym___END_LINE__] = ACTIONS(45),
    [anon_sym___FILE__] = ACTIONS(45),
    [anon_sym___DIR__] = ACTIONS(45),
    [aux_sym_constant_token1] = ACTIONS(47),
  },
  [19] = {
    [sym__expression] = STATE(76),
    [sym_bool] = STATE(76),
    [sym_float] = STATE(76),
    [sym_integer] = STATE(76),
    [sym_symbol] = STATE(76),
    [sym_char] = STATE(76),
    [sym_string] = STATE(76),
    [sym_array] = STATE(76),
    [sym_hash] = STATE(76),
    [sym_regex] = STATE(76),
    [sym_tuple] = STATE(76),
    [sym_namedTupleLiteral] = STATE(76),
    [sym_commandLiteral] = STATE(76),
    [sym_local_variable] = STATE(174),
    [sym_instance_variable] = STATE(174),
    [sym_class_variable] = STATE(174),
    [sym_constant] = STATE(174),
    [sym_assignment] = STATE(76),
    [sym_nil] = ACTIONS(194),
    [anon_sym_true] = ACTIONS(160),
    [anon_sym_false] = ACTIONS(160),
    [aux_sym_float_token1] = ACTIONS(55),
    [aux_sym_float_token2] = ACTIONS(57),
    [aux_sym_float_token3] = ACTIONS(57),
    [aux_sym_integer_token1] = ACTIONS(59),
    [aux_sym_integer_token2] = ACTIONS(59),
    [aux_sym_integer_token3] = ACTIONS(59),
    [aux_sym_integer_token4] = ACTIONS(61),
    [anon_sym_COLON] = ACTIONS(172),
    [anon_sym_DQUOTE] = ACTIONS(174),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASHa_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASHb_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASHe_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASHf_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASHn_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASHr_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASHt_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASHv_SQUOTE] = ACTIONS(67),
    [aux_sym_char_token1] = ACTIONS(67),
    [aux_sym_char_token2] = ACTIONS(69),
    [anon_sym_LBRACK] = ACTIONS(71),
    [anon_sym_LBRACE] = ACTIONS(73),
    [anon_sym_SLASH] = ACTIONS(77),
    [anon_sym_Tuple_DOTnew] = ACTIONS(79),
    [anon_sym_BQUOTE] = ACTIONS(81),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(83),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(39),
    [anon_sym_AT] = ACTIONS(41),
    [anon_sym_AT_AT] = ACTIONS(43),
    [anon_sym___LINE__] = ACTIONS(45),
    [anon_sym___END_LINE__] = ACTIONS(45),
    [anon_sym___FILE__] = ACTIONS(45),
    [anon_sym___DIR__] = ACTIONS(45),
    [aux_sym_constant_token1] = ACTIONS(47),
  },
  [20] = {
    [sym__expression] = STATE(140),
    [sym_bool] = STATE(140),
    [sym_float] = STATE(140),
    [sym_integer] = STATE(140),
    [sym_symbol] = STATE(140),
    [sym_char] = STATE(140),
    [sym_string] = STATE(140),
    [sym_array] = STATE(140),
    [sym_hash] = STATE(140),
    [sym_regex] = STATE(140),
    [sym_tuple] = STATE(140),
    [sym_namedTupleLiteral] = STATE(140),
    [sym_commandLiteral] = STATE(140),
    [sym_local_variable] = STATE(174),
    [sym_instance_variable] = STATE(174),
    [sym_class_variable] = STATE(174),
    [sym_constant] = STATE(174),
    [sym_assignment] = STATE(140),
    [sym_nil] = ACTIONS(196),
    [anon_sym_true] = ACTIONS(160),
    [anon_sym_false] = ACTIONS(160),
    [aux_sym_float_token1] = ACTIONS(55),
    [aux_sym_float_token2] = ACTIONS(57),
    [aux_sym_float_token3] = ACTIONS(57),
    [aux_sym_integer_token1] = ACTIONS(59),
    [aux_sym_integer_token2] = ACTIONS(59),
    [aux_sym_integer_token3] = ACTIONS(59),
    [aux_sym_integer_token4] = ACTIONS(61),
    [anon_sym_COLON] = ACTIONS(172),
    [anon_sym_DQUOTE] = ACTIONS(174),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASHa_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASHb_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASHe_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASHf_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASHn_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASHr_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASHt_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASHv_SQUOTE] = ACTIONS(67),
    [aux_sym_char_token1] = ACTIONS(67),
    [aux_sym_char_token2] = ACTIONS(69),
    [anon_sym_LBRACK] = ACTIONS(71),
    [anon_sym_LBRACE] = ACTIONS(73),
    [anon_sym_SLASH] = ACTIONS(77),
    [anon_sym_Tuple_DOTnew] = ACTIONS(79),
    [anon_sym_BQUOTE] = ACTIONS(81),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(83),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(39),
    [anon_sym_AT] = ACTIONS(41),
    [anon_sym_AT_AT] = ACTIONS(43),
    [anon_sym___LINE__] = ACTIONS(45),
    [anon_sym___END_LINE__] = ACTIONS(45),
    [anon_sym___FILE__] = ACTIONS(45),
    [anon_sym___DIR__] = ACTIONS(45),
    [aux_sym_constant_token1] = ACTIONS(47),
  },
  [21] = {
    [sym__expression] = STATE(48),
    [sym_bool] = STATE(48),
    [sym_float] = STATE(48),
    [sym_integer] = STATE(48),
    [sym_symbol] = STATE(48),
    [sym_char] = STATE(48),
    [sym_string] = STATE(48),
    [sym_array] = STATE(48),
    [sym_hash] = STATE(48),
    [sym_regex] = STATE(48),
    [sym_tuple] = STATE(48),
    [sym_namedTupleLiteral] = STATE(48),
    [sym_commandLiteral] = STATE(48),
    [sym_local_variable] = STATE(170),
    [sym_instance_variable] = STATE(170),
    [sym_class_variable] = STATE(170),
    [sym_constant] = STATE(170),
    [sym_assignment] = STATE(48),
    [sym_nil] = ACTIONS(170),
    [anon_sym_true] = ACTIONS(160),
    [anon_sym_false] = ACTIONS(160),
    [aux_sym_float_token1] = ACTIONS(55),
    [aux_sym_float_token2] = ACTIONS(57),
    [aux_sym_float_token3] = ACTIONS(57),
    [aux_sym_integer_token1] = ACTIONS(59),
    [aux_sym_integer_token2] = ACTIONS(59),
    [aux_sym_integer_token3] = ACTIONS(59),
    [aux_sym_integer_token4] = ACTIONS(61),
    [anon_sym_COLON] = ACTIONS(162),
    [anon_sym_DQUOTE] = ACTIONS(164),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASHa_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASHb_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASHe_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASHf_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASHn_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASHr_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASHt_SQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE_BSLASHv_SQUOTE] = ACTIONS(67),
    [aux_sym_char_token1] = ACTIONS(67),
    [aux_sym_char_token2] = ACTIONS(69),
    [anon_sym_LBRACK] = ACTIONS(71),
    [anon_sym_LBRACE] = ACTIONS(73),
    [anon_sym_SLASH] = ACTIONS(77),
    [anon_sym_Tuple_DOTnew] = ACTIONS(79),
    [anon_sym_BQUOTE] = ACTIONS(81),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(83),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(39),
    [anon_sym_AT] = ACTIONS(41),
    [anon_sym_AT_AT] = ACTIONS(43),
    [anon_sym___LINE__] = ACTIONS(45),
    [anon_sym___END_LINE__] = ACTIONS(45),
    [anon_sym___FILE__] = ACTIONS(45),
    [anon_sym___DIR__] = ACTIONS(45),
    [aux_sym_constant_token1] = ACTIONS(47),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 7,
      aux_sym_float_token2,
      aux_sym_float_token3,
      aux_sym_integer_token4,
      aux_sym_char_token2,
      aux_sym_local_variable_token1,
      anon_sym_AT,
      aux_sym_constant_token1,
    ACTIONS(198), 33,
      ts_builtin_sym_end,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      aux_sym_float_token1,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      anon_sym_COLON,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE_SQUOTE,
      anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE,
      anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE,
      anon_sym_SQUOTE_BSLASHa_SQUOTE,
      anon_sym_SQUOTE_BSLASHb_SQUOTE,
      anon_sym_SQUOTE_BSLASHe_SQUOTE,
      anon_sym_SQUOTE_BSLASHf_SQUOTE,
      anon_sym_SQUOTE_BSLASHn_SQUOTE,
      anon_sym_SQUOTE_BSLASHr_SQUOTE,
      anon_sym_SQUOTE_BSLASHt_SQUOTE,
      anon_sym_SQUOTE_BSLASHv_SQUOTE,
      aux_sym_char_token1,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_SLASH,
      anon_sym_Tuple_DOTnew,
      anon_sym_BQUOTE,
      anon_sym_PERCENTx_LPAREN,
      anon_sym_AT_AT,
      anon_sym___LINE__,
      anon_sym___END_LINE__,
      anon_sym___FILE__,
      anon_sym___DIR__,
  [48] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      anon_sym_DQUOTE,
    STATE(59), 1,
      sym__operator,
    ACTIONS(206), 7,
      anon_sym_STAR,
      anon_sym_EQ_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_LBRACK_RBRACK,
      anon_sym_BANG,
    ACTIONS(202), 20,
      aux_sym_identifier_token1,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_STAR_STAR,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_EQ_EQ_EQ,
      anon_sym_LBRACK_RBRACK_QMARK,
      anon_sym_LBRACK_RBRACK_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_EQ_TILDE,
  [89] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 1,
      anon_sym_DQUOTE,
    STATE(135), 1,
      sym__operator,
    ACTIONS(212), 7,
      anon_sym_STAR,
      anon_sym_EQ_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_LBRACK_RBRACK,
      anon_sym_BANG,
    ACTIONS(208), 20,
      aux_sym_identifier_token1,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_STAR_STAR,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_EQ_EQ_EQ,
      anon_sym_LBRACK_RBRACK_QMARK,
      anon_sym_LBRACK_RBRACK_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_EQ_TILDE,
  [130] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      anon_sym_DQUOTE,
    STATE(59), 1,
      sym__operator,
    ACTIONS(206), 7,
      anon_sym_STAR,
      anon_sym_EQ_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_LBRACK_RBRACK,
      anon_sym_BANG,
    ACTIONS(202), 20,
      aux_sym_identifier_token1,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_STAR_STAR,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_EQ_EQ_EQ,
      anon_sym_LBRACK_RBRACK_QMARK,
      anon_sym_LBRACK_RBRACK_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_EQ_TILDE,
  [171] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      anon_sym_DQUOTE,
    STATE(59), 1,
      sym__operator,
    ACTIONS(206), 7,
      anon_sym_STAR,
      anon_sym_EQ_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_LBRACK_RBRACK,
      anon_sym_BANG,
    ACTIONS(202), 20,
      aux_sym_identifier_token1,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_STAR_STAR,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_EQ_EQ_EQ,
      anon_sym_LBRACK_RBRACK_QMARK,
      anon_sym_LBRACK_RBRACK_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_EQ_TILDE,
  [212] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 1,
      anon_sym_DQUOTE,
    STATE(59), 1,
      sym__operator,
    ACTIONS(206), 7,
      anon_sym_STAR,
      anon_sym_EQ_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_LBRACK_RBRACK,
      anon_sym_BANG,
    ACTIONS(202), 20,
      aux_sym_identifier_token1,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_STAR_STAR,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_EQ_EQ_EQ,
      anon_sym_LBRACK_RBRACK_QMARK,
      anon_sym_LBRACK_RBRACK_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_EQ_TILDE,
  [253] = 3,
    ACTIONS(224), 1,
      sym_comment,
    ACTIONS(222), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
    ACTIONS(220), 4,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [267] = 3,
    ACTIONS(224), 1,
      sym_comment,
    ACTIONS(222), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
    ACTIONS(226), 4,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [281] = 3,
    ACTIONS(224), 1,
      sym_comment,
    ACTIONS(222), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
    ACTIONS(226), 3,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [294] = 3,
    ACTIONS(224), 1,
      sym_comment,
    ACTIONS(222), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
    ACTIONS(220), 3,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [307] = 3,
    ACTIONS(224), 1,
      sym_comment,
    ACTIONS(222), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
    ACTIONS(228), 3,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [320] = 3,
    ACTIONS(224), 1,
      sym_comment,
    ACTIONS(222), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
    ACTIONS(230), 3,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [333] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [343] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [353] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [363] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [373] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [383] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [393] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      anon_sym_COLON,
    ACTIONS(246), 3,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [405] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [415] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      anon_sym_COLON,
    ACTIONS(246), 3,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [427] = 3,
    ACTIONS(224), 1,
      sym_comment,
    ACTIONS(222), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
    ACTIONS(230), 2,
      anon_sym_SEMI,
      aux_sym__statement_token1,
  [439] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      anon_sym_COMMA,
    ACTIONS(254), 1,
      anon_sym_EQ_GT,
    ACTIONS(256), 1,
      anon_sym_RBRACE,
    STATE(97), 1,
      aux_sym_array_repeat1,
  [455] = 3,
    ACTIONS(224), 1,
      sym_comment,
    ACTIONS(220), 2,
      anon_sym_SEMI,
      aux_sym__statement_token1,
    ACTIONS(222), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
  [467] = 3,
    ACTIONS(224), 1,
      sym_comment,
    ACTIONS(222), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
    ACTIONS(228), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [479] = 3,
    ACTIONS(224), 1,
      sym_comment,
    ACTIONS(222), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
    ACTIONS(226), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [491] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [501] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [511] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [521] = 3,
    ACTIONS(224), 1,
      sym_comment,
    ACTIONS(222), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
    ACTIONS(226), 2,
      anon_sym_SEMI,
      aux_sym__statement_token1,
  [533] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [543] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [553] = 3,
    ACTIONS(224), 1,
      sym_comment,
    ACTIONS(222), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
    ACTIONS(230), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [565] = 3,
    ACTIONS(224), 1,
      sym_comment,
    ACTIONS(220), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(222), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
  [577] = 3,
    ACTIONS(224), 1,
      sym_comment,
    ACTIONS(222), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
    ACTIONS(230), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [589] = 3,
    ACTIONS(224), 1,
      sym_comment,
    ACTIONS(220), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(222), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
  [601] = 3,
    ACTIONS(224), 1,
      sym_comment,
    ACTIONS(222), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
    ACTIONS(226), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [613] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [623] = 3,
    ACTIONS(224), 1,
      sym_comment,
    ACTIONS(222), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
    ACTIONS(228), 2,
      anon_sym_SEMI,
      aux_sym__statement_token1,
  [635] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [645] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [655] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      aux_sym_identifier_token1,
    ACTIONS(276), 1,
      anon_sym_DQUOTE,
    STATE(152), 2,
      sym_identifier,
      sym_string,
  [669] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [679] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [689] = 3,
    ACTIONS(224), 1,
      sym_comment,
    ACTIONS(222), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
    ACTIONS(228), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [701] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      anon_sym_COMMA,
    ACTIONS(282), 1,
      anon_sym_EQ_GT,
    ACTIONS(284), 1,
      anon_sym_RBRACE,
    STATE(104), 1,
      aux_sym_array_repeat1,
  [717] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [727] = 4,
    ACTIONS(224), 1,
      sym_comment,
    ACTIONS(288), 1,
      anon_sym_DQUOTE,
    ACTIONS(290), 1,
      aux_sym_symbol_token1,
    STATE(102), 1,
      aux_sym_symbol_repeat1,
  [740] = 3,
    ACTIONS(220), 1,
      anon_sym_EQ_GT,
    ACTIONS(224), 1,
      sym_comment,
    ACTIONS(222), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
  [751] = 4,
    ACTIONS(224), 1,
      sym_comment,
    ACTIONS(292), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      aux_sym_symbol_token1,
    STATE(114), 1,
      aux_sym_symbol_repeat1,
  [764] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      anon_sym_COMMA,
    ACTIONS(299), 1,
      anon_sym_RBRACK,
    STATE(72), 1,
      aux_sym_array_repeat1,
  [777] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 1,
      anon_sym_RBRACE,
    ACTIONS(301), 1,
      anon_sym_COMMA,
    STATE(73), 1,
      aux_sym_array_repeat1,
  [790] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      anon_sym_COMMA,
    ACTIONS(306), 1,
      anon_sym_RBRACE,
    STATE(79), 1,
      aux_sym_hash_repeat1,
  [803] = 4,
    ACTIONS(224), 1,
      sym_comment,
    ACTIONS(290), 1,
      aux_sym_symbol_token1,
    ACTIONS(308), 1,
      anon_sym_DQUOTE,
    STATE(102), 1,
      aux_sym_symbol_repeat1,
  [816] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      anon_sym_COMMA,
    ACTIONS(312), 1,
      anon_sym_RBRACE,
    STATE(81), 1,
      aux_sym_namedTupleLiteral_repeat1,
  [829] = 4,
    ACTIONS(224), 1,
      sym_comment,
    ACTIONS(314), 1,
      anon_sym_DQUOTE,
    ACTIONS(316), 1,
      aux_sym_symbol_token1,
    STATE(75), 1,
      aux_sym_symbol_repeat1,
  [842] = 4,
    ACTIONS(224), 1,
      sym_comment,
    ACTIONS(290), 1,
      aux_sym_symbol_token1,
    ACTIONS(318), 1,
      anon_sym_DQUOTE,
    STATE(102), 1,
      aux_sym_symbol_repeat1,
  [855] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      anon_sym_COMMA,
    ACTIONS(320), 1,
      anon_sym_RBRACE,
    STATE(85), 1,
      aux_sym_hash_repeat1,
  [868] = 4,
    ACTIONS(224), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_DQUOTE,
    ACTIONS(324), 1,
      aux_sym_symbol_token1,
    STATE(78), 1,
      aux_sym_symbol_repeat1,
  [881] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      anon_sym_COMMA,
    ACTIONS(326), 1,
      anon_sym_RBRACE,
    STATE(88), 1,
      aux_sym_namedTupleLiteral_repeat1,
  [894] = 4,
    ACTIONS(224), 1,
      sym_comment,
    ACTIONS(290), 1,
      aux_sym_symbol_token1,
    ACTIONS(328), 1,
      anon_sym_DQUOTE,
    STATE(102), 1,
      aux_sym_symbol_repeat1,
  [907] = 4,
    ACTIONS(224), 1,
      sym_comment,
    ACTIONS(290), 1,
      aux_sym_symbol_token1,
    ACTIONS(330), 1,
      anon_sym_DQUOTE,
    STATE(102), 1,
      aux_sym_symbol_repeat1,
  [920] = 4,
    ACTIONS(224), 1,
      sym_comment,
    ACTIONS(332), 1,
      anon_sym_DQUOTE,
    ACTIONS(334), 1,
      aux_sym_symbol_token1,
    STATE(82), 1,
      aux_sym_symbol_repeat1,
  [933] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 1,
      anon_sym_COMMA,
    ACTIONS(339), 1,
      anon_sym_RBRACE,
    STATE(85), 1,
      aux_sym_hash_repeat1,
  [946] = 4,
    ACTIONS(224), 1,
      sym_comment,
    ACTIONS(341), 1,
      anon_sym_DQUOTE,
    ACTIONS(343), 1,
      aux_sym_symbol_token1,
    STATE(83), 1,
      aux_sym_symbol_repeat1,
  [959] = 4,
    ACTIONS(224), 1,
      sym_comment,
    ACTIONS(290), 1,
      aux_sym_symbol_token1,
    ACTIONS(345), 1,
      anon_sym_DQUOTE,
    STATE(102), 1,
      aux_sym_symbol_repeat1,
  [972] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(347), 1,
      anon_sym_COMMA,
    ACTIONS(350), 1,
      anon_sym_RBRACE,
    STATE(88), 1,
      aux_sym_namedTupleLiteral_repeat1,
  [985] = 4,
    ACTIONS(224), 1,
      sym_comment,
    ACTIONS(290), 1,
      aux_sym_symbol_token1,
    ACTIONS(352), 1,
      anon_sym_DQUOTE,
    STATE(102), 1,
      aux_sym_symbol_repeat1,
  [998] = 4,
    ACTIONS(224), 1,
      sym_comment,
    ACTIONS(354), 1,
      anon_sym_DQUOTE,
    ACTIONS(356), 1,
      aux_sym_symbol_token1,
    STATE(87), 1,
      aux_sym_symbol_repeat1,
  [1011] = 4,
    ACTIONS(224), 1,
      sym_comment,
    ACTIONS(358), 1,
      anon_sym_DQUOTE,
    ACTIONS(360), 1,
      aux_sym_symbol_token1,
    STATE(89), 1,
      aux_sym_symbol_repeat1,
  [1024] = 4,
    ACTIONS(224), 1,
      sym_comment,
    ACTIONS(290), 1,
      aux_sym_symbol_token1,
    ACTIONS(362), 1,
      anon_sym_DQUOTE,
    STATE(102), 1,
      aux_sym_symbol_repeat1,
  [1037] = 4,
    ACTIONS(224), 1,
      sym_comment,
    ACTIONS(290), 1,
      aux_sym_symbol_token1,
    ACTIONS(364), 1,
      anon_sym_DQUOTE,
    STATE(102), 1,
      aux_sym_symbol_repeat1,
  [1050] = 4,
    ACTIONS(224), 1,
      sym_comment,
    ACTIONS(366), 1,
      anon_sym_DQUOTE,
    ACTIONS(368), 1,
      aux_sym_symbol_token1,
    STATE(92), 1,
      aux_sym_symbol_repeat1,
  [1063] = 4,
    ACTIONS(224), 1,
      sym_comment,
    ACTIONS(370), 1,
      anon_sym_DQUOTE,
    ACTIONS(372), 1,
      aux_sym_symbol_token1,
    STATE(93), 1,
      aux_sym_symbol_repeat1,
  [1076] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      anon_sym_COMMA,
    ACTIONS(374), 1,
      anon_sym_RBRACE,
    STATE(88), 1,
      aux_sym_namedTupleLiteral_repeat1,
  [1089] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      anon_sym_COMMA,
    ACTIONS(376), 1,
      anon_sym_RBRACE,
    STATE(73), 1,
      aux_sym_array_repeat1,
  [1102] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [1111] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      anon_sym_COMMA,
    ACTIONS(378), 1,
      anon_sym_RBRACE,
    STATE(85), 1,
      aux_sym_hash_repeat1,
  [1124] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 1,
      anon_sym_COMMA,
    ACTIONS(382), 1,
      anon_sym_RBRACK,
    STATE(72), 1,
      aux_sym_array_repeat1,
  [1137] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      anon_sym_COMMA,
    ACTIONS(384), 1,
      anon_sym_RBRACE,
    STATE(96), 1,
      aux_sym_namedTupleLiteral_repeat1,
  [1150] = 3,
    ACTIONS(224), 1,
      sym_comment,
    STATE(102), 1,
      aux_sym_symbol_repeat1,
    ACTIONS(386), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
  [1161] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      anon_sym_COMMA,
    ACTIONS(389), 1,
      anon_sym_RBRACE,
    STATE(99), 1,
      aux_sym_hash_repeat1,
  [1174] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      anon_sym_COMMA,
    ACTIONS(391), 1,
      anon_sym_RBRACE,
    STATE(73), 1,
      aux_sym_array_repeat1,
  [1187] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 1,
      anon_sym_COMMA,
    ACTIONS(393), 1,
      anon_sym_RBRACK,
    STATE(72), 1,
      aux_sym_array_repeat1,
  [1200] = 4,
    ACTIONS(224), 1,
      sym_comment,
    ACTIONS(290), 1,
      aux_sym_symbol_token1,
    ACTIONS(395), 1,
      anon_sym_DQUOTE,
    STATE(102), 1,
      aux_sym_symbol_repeat1,
  [1213] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 1,
      anon_sym_COMMA,
    ACTIONS(397), 1,
      anon_sym_RBRACK,
    STATE(105), 1,
      aux_sym_array_repeat1,
  [1226] = 4,
    ACTIONS(224), 1,
      sym_comment,
    ACTIONS(290), 1,
      aux_sym_symbol_token1,
    ACTIONS(399), 1,
      anon_sym_DQUOTE,
    STATE(102), 1,
      aux_sym_symbol_repeat1,
  [1239] = 4,
    ACTIONS(224), 1,
      sym_comment,
    ACTIONS(401), 1,
      anon_sym_DQUOTE,
    ACTIONS(403), 1,
      aux_sym_symbol_token1,
    STATE(106), 1,
      aux_sym_symbol_repeat1,
  [1252] = 4,
    ACTIONS(224), 1,
      sym_comment,
    ACTIONS(405), 1,
      anon_sym_DQUOTE,
    ACTIONS(407), 1,
      aux_sym_symbol_token1,
    STATE(108), 1,
      aux_sym_symbol_repeat1,
  [1265] = 3,
    ACTIONS(220), 1,
      anon_sym_COLON,
    ACTIONS(224), 1,
      sym_comment,
    ACTIONS(222), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
  [1276] = 3,
    ACTIONS(224), 1,
      sym_comment,
    ACTIONS(226), 1,
      anon_sym_COLON,
    ACTIONS(222), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
  [1287] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 1,
      anon_sym_COMMA,
    ACTIONS(409), 1,
      anon_sym_RBRACK,
    STATE(100), 1,
      aux_sym_array_repeat1,
  [1300] = 4,
    ACTIONS(224), 1,
      sym_comment,
    ACTIONS(290), 1,
      aux_sym_symbol_token1,
    ACTIONS(411), 1,
      anon_sym_DQUOTE,
    STATE(102), 1,
      aux_sym_symbol_repeat1,
  [1313] = 4,
    ACTIONS(224), 1,
      sym_comment,
    ACTIONS(413), 1,
      anon_sym_DQUOTE,
    ACTIONS(415), 1,
      aux_sym_symbol_token1,
    STATE(69), 1,
      aux_sym_symbol_repeat1,
  [1326] = 3,
    ACTIONS(224), 1,
      sym_comment,
    ACTIONS(228), 1,
      anon_sym_EQ_GT,
    ACTIONS(222), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
  [1337] = 3,
    ACTIONS(224), 1,
      sym_comment,
    ACTIONS(226), 1,
      anon_sym_EQ_GT,
    ACTIONS(222), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
  [1348] = 3,
    ACTIONS(224), 1,
      sym_comment,
    ACTIONS(230), 1,
      anon_sym_EQ_GT,
    ACTIONS(222), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
  [1359] = 3,
    ACTIONS(224), 1,
      sym_comment,
    ACTIONS(264), 1,
      aux_sym__statement_token1,
    ACTIONS(417), 1,
      anon_sym_SEMI,
  [1369] = 3,
    ACTIONS(224), 1,
      sym_comment,
    ACTIONS(260), 1,
      aux_sym__statement_token1,
    ACTIONS(419), 1,
      anon_sym_SEMI,
  [1379] = 3,
    ACTIONS(224), 1,
      sym_comment,
    ACTIONS(278), 1,
      aux_sym__statement_token1,
    ACTIONS(421), 1,
      anon_sym_SEMI,
  [1389] = 3,
    ACTIONS(224), 1,
      sym_comment,
    ACTIONS(423), 1,
      anon_sym_SEMI,
    ACTIONS(425), 1,
      aux_sym__statement_token1,
  [1399] = 3,
    ACTIONS(224), 1,
      sym_comment,
    ACTIONS(242), 1,
      aux_sym__statement_token1,
    ACTIONS(427), 1,
      anon_sym_SEMI,
  [1409] = 3,
    ACTIONS(224), 1,
      sym_comment,
    ACTIONS(280), 1,
      aux_sym__statement_token1,
    ACTIONS(429), 1,
      anon_sym_SEMI,
  [1419] = 3,
    ACTIONS(224), 1,
      sym_comment,
    ACTIONS(286), 1,
      aux_sym__statement_token1,
    ACTIONS(431), 1,
      anon_sym_SEMI,
  [1429] = 3,
    ACTIONS(224), 1,
      sym_comment,
    ACTIONS(270), 1,
      aux_sym__statement_token1,
    ACTIONS(433), 1,
      anon_sym_SEMI,
  [1439] = 3,
    ACTIONS(224), 1,
      sym_comment,
    ACTIONS(240), 1,
      aux_sym__statement_token1,
    ACTIONS(435), 1,
      anon_sym_SEMI,
  [1449] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      aux_sym_identifier_token1,
    ACTIONS(439), 1,
      anon_sym_EQ,
  [1459] = 3,
    ACTIONS(224), 1,
      sym_comment,
    ACTIONS(238), 1,
      aux_sym__statement_token1,
    ACTIONS(441), 1,
      anon_sym_SEMI,
  [1469] = 3,
    ACTIONS(224), 1,
      sym_comment,
    ACTIONS(236), 1,
      aux_sym__statement_token1,
    ACTIONS(443), 1,
      anon_sym_SEMI,
  [1479] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 1,
      aux_sym_identifier_token1,
    ACTIONS(447), 1,
      anon_sym_EQ,
  [1489] = 3,
    ACTIONS(224), 1,
      sym_comment,
    ACTIONS(234), 1,
      aux_sym__statement_token1,
    ACTIONS(449), 1,
      anon_sym_SEMI,
  [1499] = 3,
    ACTIONS(224), 1,
      sym_comment,
    ACTIONS(232), 1,
      aux_sym__statement_token1,
    ACTIONS(451), 1,
      anon_sym_SEMI,
  [1509] = 3,
    ACTIONS(224), 1,
      sym_comment,
    ACTIONS(248), 1,
      aux_sym__statement_token1,
    ACTIONS(453), 1,
      anon_sym_SEMI,
  [1519] = 3,
    ACTIONS(224), 1,
      sym_comment,
    ACTIONS(268), 1,
      aux_sym__statement_token1,
    ACTIONS(455), 1,
      anon_sym_SEMI,
  [1529] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1537] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 1,
      aux_sym_identifier_token1,
    ACTIONS(461), 1,
      anon_sym_EQ,
  [1547] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 1,
      aux_sym_identifier_token1,
    ACTIONS(465), 1,
      anon_sym_EQ,
  [1557] = 3,
    ACTIONS(224), 1,
      sym_comment,
    ACTIONS(272), 1,
      aux_sym__statement_token1,
    ACTIONS(467), 1,
      anon_sym_SEMI,
  [1567] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1575] = 3,
    ACTIONS(224), 1,
      sym_comment,
    ACTIONS(266), 1,
      aux_sym__statement_token1,
    ACTIONS(471), 1,
      anon_sym_SEMI,
  [1585] = 3,
    ACTIONS(224), 1,
      sym_comment,
    ACTIONS(258), 1,
      aux_sym__statement_token1,
    ACTIONS(473), 1,
      anon_sym_SEMI,
  [1595] = 3,
    ACTIONS(224), 1,
      sym_comment,
    ACTIONS(262), 1,
      aux_sym__statement_token1,
    ACTIONS(475), 1,
      anon_sym_SEMI,
  [1605] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 1,
      anon_sym_RPAREN,
  [1612] = 2,
    ACTIONS(224), 1,
      sym_comment,
    ACTIONS(479), 1,
      aux_sym_commandLiteral_token2,
  [1619] = 2,
    ACTIONS(224), 1,
      sym_comment,
    ACTIONS(481), 1,
      aux_sym_hash_token1,
  [1626] = 2,
    ACTIONS(224), 1,
      sym_comment,
    ACTIONS(483), 1,
      aux_sym_hash_token1,
  [1633] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(485), 1,
      anon_sym_EQ,
  [1640] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(487), 1,
      anon_sym_EQ,
  [1647] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      anon_sym_EQ,
  [1654] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(491), 1,
      anon_sym_EQ,
  [1661] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 1,
      anon_sym_COLON,
  [1668] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 1,
      anon_sym_RPAREN,
  [1675] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 1,
      anon_sym_EQ_GT,
  [1682] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 1,
      anon_sym_BQUOTE,
  [1689] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 1,
      anon_sym_SLASH,
  [1696] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 1,
      anon_sym_BQUOTE,
  [1703] = 2,
    ACTIONS(224), 1,
      sym_comment,
    ACTIONS(501), 1,
      aux_sym_hash_token1,
  [1710] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      anon_sym_EQ,
  [1717] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(503), 1,
      aux_sym_local_variable_token1,
  [1724] = 2,
    ACTIONS(224), 1,
      sym_comment,
    ACTIONS(505), 1,
      aux_sym_regex_token1,
  [1731] = 2,
    ACTIONS(224), 1,
      sym_comment,
    ACTIONS(507), 1,
      aux_sym_commandLiteral_token1,
  [1738] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 1,
      anon_sym_EQ,
  [1745] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(511), 1,
      aux_sym_local_variable_token1,
  [1752] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 1,
      anon_sym_SLASH,
  [1759] = 2,
    ACTIONS(224), 1,
      sym_comment,
    ACTIONS(515), 1,
      aux_sym_commandLiteral_token2,
  [1766] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      anon_sym_COLON,
  [1773] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 1,
      anon_sym_EQ_GT,
  [1780] = 2,
    ACTIONS(224), 1,
      sym_comment,
    ACTIONS(519), 1,
      aux_sym_commandLiteral_token1,
  [1787] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(521), 1,
      anon_sym_EQ,
  [1794] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 1,
      anon_sym_EQ,
  [1801] = 2,
    ACTIONS(224), 1,
      sym_comment,
    ACTIONS(525), 1,
      aux_sym_regex_token1,
  [1808] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 1,
      anon_sym_of,
  [1815] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 1,
      anon_sym_EQ,
  [1822] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 1,
      anon_sym_EQ_GT,
  [1829] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(533), 1,
      ts_builtin_sym_end,
  [1836] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(535), 1,
      anon_sym_EQ,
  [1843] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      anon_sym_COLON,
  [1850] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(537), 1,
      anon_sym_COLON,
  [1857] = 2,
    ACTIONS(224), 1,
      sym_comment,
    ACTIONS(539), 1,
      aux_sym_hash_token1,
  [1864] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(541), 1,
      anon_sym_of,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(22)] = 0,
  [SMALL_STATE(23)] = 48,
  [SMALL_STATE(24)] = 89,
  [SMALL_STATE(25)] = 130,
  [SMALL_STATE(26)] = 171,
  [SMALL_STATE(27)] = 212,
  [SMALL_STATE(28)] = 253,
  [SMALL_STATE(29)] = 267,
  [SMALL_STATE(30)] = 281,
  [SMALL_STATE(31)] = 294,
  [SMALL_STATE(32)] = 307,
  [SMALL_STATE(33)] = 320,
  [SMALL_STATE(34)] = 333,
  [SMALL_STATE(35)] = 343,
  [SMALL_STATE(36)] = 353,
  [SMALL_STATE(37)] = 363,
  [SMALL_STATE(38)] = 373,
  [SMALL_STATE(39)] = 383,
  [SMALL_STATE(40)] = 393,
  [SMALL_STATE(41)] = 405,
  [SMALL_STATE(42)] = 415,
  [SMALL_STATE(43)] = 427,
  [SMALL_STATE(44)] = 439,
  [SMALL_STATE(45)] = 455,
  [SMALL_STATE(46)] = 467,
  [SMALL_STATE(47)] = 479,
  [SMALL_STATE(48)] = 491,
  [SMALL_STATE(49)] = 501,
  [SMALL_STATE(50)] = 511,
  [SMALL_STATE(51)] = 521,
  [SMALL_STATE(52)] = 533,
  [SMALL_STATE(53)] = 543,
  [SMALL_STATE(54)] = 553,
  [SMALL_STATE(55)] = 565,
  [SMALL_STATE(56)] = 577,
  [SMALL_STATE(57)] = 589,
  [SMALL_STATE(58)] = 601,
  [SMALL_STATE(59)] = 613,
  [SMALL_STATE(60)] = 623,
  [SMALL_STATE(61)] = 635,
  [SMALL_STATE(62)] = 645,
  [SMALL_STATE(63)] = 655,
  [SMALL_STATE(64)] = 669,
  [SMALL_STATE(65)] = 679,
  [SMALL_STATE(66)] = 689,
  [SMALL_STATE(67)] = 701,
  [SMALL_STATE(68)] = 717,
  [SMALL_STATE(69)] = 727,
  [SMALL_STATE(70)] = 740,
  [SMALL_STATE(71)] = 751,
  [SMALL_STATE(72)] = 764,
  [SMALL_STATE(73)] = 777,
  [SMALL_STATE(74)] = 790,
  [SMALL_STATE(75)] = 803,
  [SMALL_STATE(76)] = 816,
  [SMALL_STATE(77)] = 829,
  [SMALL_STATE(78)] = 842,
  [SMALL_STATE(79)] = 855,
  [SMALL_STATE(80)] = 868,
  [SMALL_STATE(81)] = 881,
  [SMALL_STATE(82)] = 894,
  [SMALL_STATE(83)] = 907,
  [SMALL_STATE(84)] = 920,
  [SMALL_STATE(85)] = 933,
  [SMALL_STATE(86)] = 946,
  [SMALL_STATE(87)] = 959,
  [SMALL_STATE(88)] = 972,
  [SMALL_STATE(89)] = 985,
  [SMALL_STATE(90)] = 998,
  [SMALL_STATE(91)] = 1011,
  [SMALL_STATE(92)] = 1024,
  [SMALL_STATE(93)] = 1037,
  [SMALL_STATE(94)] = 1050,
  [SMALL_STATE(95)] = 1063,
  [SMALL_STATE(96)] = 1076,
  [SMALL_STATE(97)] = 1089,
  [SMALL_STATE(98)] = 1102,
  [SMALL_STATE(99)] = 1111,
  [SMALL_STATE(100)] = 1124,
  [SMALL_STATE(101)] = 1137,
  [SMALL_STATE(102)] = 1150,
  [SMALL_STATE(103)] = 1161,
  [SMALL_STATE(104)] = 1174,
  [SMALL_STATE(105)] = 1187,
  [SMALL_STATE(106)] = 1200,
  [SMALL_STATE(107)] = 1213,
  [SMALL_STATE(108)] = 1226,
  [SMALL_STATE(109)] = 1239,
  [SMALL_STATE(110)] = 1252,
  [SMALL_STATE(111)] = 1265,
  [SMALL_STATE(112)] = 1276,
  [SMALL_STATE(113)] = 1287,
  [SMALL_STATE(114)] = 1300,
  [SMALL_STATE(115)] = 1313,
  [SMALL_STATE(116)] = 1326,
  [SMALL_STATE(117)] = 1337,
  [SMALL_STATE(118)] = 1348,
  [SMALL_STATE(119)] = 1359,
  [SMALL_STATE(120)] = 1369,
  [SMALL_STATE(121)] = 1379,
  [SMALL_STATE(122)] = 1389,
  [SMALL_STATE(123)] = 1399,
  [SMALL_STATE(124)] = 1409,
  [SMALL_STATE(125)] = 1419,
  [SMALL_STATE(126)] = 1429,
  [SMALL_STATE(127)] = 1439,
  [SMALL_STATE(128)] = 1449,
  [SMALL_STATE(129)] = 1459,
  [SMALL_STATE(130)] = 1469,
  [SMALL_STATE(131)] = 1479,
  [SMALL_STATE(132)] = 1489,
  [SMALL_STATE(133)] = 1499,
  [SMALL_STATE(134)] = 1509,
  [SMALL_STATE(135)] = 1519,
  [SMALL_STATE(136)] = 1529,
  [SMALL_STATE(137)] = 1537,
  [SMALL_STATE(138)] = 1547,
  [SMALL_STATE(139)] = 1557,
  [SMALL_STATE(140)] = 1567,
  [SMALL_STATE(141)] = 1575,
  [SMALL_STATE(142)] = 1585,
  [SMALL_STATE(143)] = 1595,
  [SMALL_STATE(144)] = 1605,
  [SMALL_STATE(145)] = 1612,
  [SMALL_STATE(146)] = 1619,
  [SMALL_STATE(147)] = 1626,
  [SMALL_STATE(148)] = 1633,
  [SMALL_STATE(149)] = 1640,
  [SMALL_STATE(150)] = 1647,
  [SMALL_STATE(151)] = 1654,
  [SMALL_STATE(152)] = 1661,
  [SMALL_STATE(153)] = 1668,
  [SMALL_STATE(154)] = 1675,
  [SMALL_STATE(155)] = 1682,
  [SMALL_STATE(156)] = 1689,
  [SMALL_STATE(157)] = 1696,
  [SMALL_STATE(158)] = 1703,
  [SMALL_STATE(159)] = 1710,
  [SMALL_STATE(160)] = 1717,
  [SMALL_STATE(161)] = 1724,
  [SMALL_STATE(162)] = 1731,
  [SMALL_STATE(163)] = 1738,
  [SMALL_STATE(164)] = 1745,
  [SMALL_STATE(165)] = 1752,
  [SMALL_STATE(166)] = 1759,
  [SMALL_STATE(167)] = 1766,
  [SMALL_STATE(168)] = 1773,
  [SMALL_STATE(169)] = 1780,
  [SMALL_STATE(170)] = 1787,
  [SMALL_STATE(171)] = 1794,
  [SMALL_STATE(172)] = 1801,
  [SMALL_STATE(173)] = 1808,
  [SMALL_STATE(174)] = 1815,
  [SMALL_STATE(175)] = 1822,
  [SMALL_STATE(176)] = 1829,
  [SMALL_STATE(177)] = 1836,
  [SMALL_STATE(178)] = 1843,
  [SMALL_STATE(179)] = 1850,
  [SMALL_STATE(180)] = 1857,
  [SMALL_STATE(181)] = 1864,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(122),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(139),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(121),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(121),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(124),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(124),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(24),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(71),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(125),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(125),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(10),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(5),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(172),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(126),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(169),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(166),
  [137] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(128),
  [140] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(164),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(160),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(159),
  [149] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(131),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_symbol_repeat1, 1),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 4),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 3),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hash, 6, .production_id = 3),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hash, 6),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namedTupleLiteral, 5, .production_id = 2),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hash, 5, .production_id = 2),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 4),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 4),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namedTupleLiteral, 6, .production_id = 3),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3, .production_id = 1),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commandLiteral, 3),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 3),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 3),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 2),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 1),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 1),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 1),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [296] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(7),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2),
  [301] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(15),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [316] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [318] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [322] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [324] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [328] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [330] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [336] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hash_repeat1, 2, .production_id = 4), SHIFT_REPEAT(16),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_hash_repeat1, 2, .production_id = 4),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [347] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_namedTupleLiteral_repeat1, 2, .production_id = 4), SHIFT_REPEAT(63),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_namedTupleLiteral_repeat1, 2, .production_id = 4),
  [352] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [354] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [356] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [358] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [360] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [362] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [364] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [366] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [368] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [370] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [372] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [386] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_symbol_repeat1, 2), SHIFT_REPEAT(102),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [395] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [399] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [401] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [403] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [405] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [407] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [411] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [413] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [415] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 3),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commandLiteral, 3),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 1),
  [423] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 4),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1),
  [431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char, 1),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 1),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 4),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_variable, 1),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hash, 5, .production_id = 2),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namedTupleLiteral, 5, .production_id = 2),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [449] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hash, 6),
  [451] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hash, 6, .production_id = 3),
  [453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namedTupleLiteral, 6, .production_id = 3),
  [455] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 2),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_hash_repeat1, 4, .production_id = 2),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance_variable, 2),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_variable, 2),
  [467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool, 1),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_namedTupleLiteral_repeat1, 4, .production_id = 2),
  [471] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 3),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 3, .production_id = 1),
  [475] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex, 3),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [479] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [481] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [483] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance_variable, 3),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_variable, 3),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_variable, 2),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [501] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [505] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [507] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 2),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [515] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [519] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [525] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [533] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [539] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_crystal(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif

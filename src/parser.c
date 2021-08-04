#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 259
#define LARGE_STATE_COUNT 30
#define SYMBOL_COUNT 112
#define ALIAS_COUNT 0
#define TOKEN_COUNT 83
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 6

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
  anon_sym_LBRACK2 = 38,
  anon_sym_RBRACK2 = 39,
  anon_sym_SLASH = 40,
  aux_sym_regex_token1 = 41,
  anon_sym_Tuple_DOTnew = 42,
  anon_sym_BQUOTE = 43,
  aux_sym_commandLiteral_token1 = 44,
  anon_sym_PERCENTx_LPAREN = 45,
  aux_sym_commandLiteral_token2 = 46,
  anon_sym_RPAREN = 47,
  sym_comment = 48,
  aux_sym_local_variable_token1 = 49,
  anon_sym_AT = 50,
  anon_sym_AT_AT = 51,
  anon_sym___LINE__ = 52,
  anon_sym___END_LINE__ = 53,
  anon_sym___FILE__ = 54,
  anon_sym___DIR__ = 55,
  aux_sym_constant_token1 = 56,
  anon_sym_EQ = 57,
  anon_sym_PLUS = 58,
  anon_sym_DASH = 59,
  anon_sym_STAR = 60,
  anon_sym_PERCENT = 61,
  anon_sym_AMP = 62,
  anon_sym_PIPE = 63,
  anon_sym_CARET = 64,
  anon_sym_STAR_STAR = 65,
  anon_sym_GT_GT = 66,
  anon_sym_LT_LT = 67,
  anon_sym_EQ_EQ = 68,
  anon_sym_BANG_EQ = 69,
  anon_sym_LT = 70,
  anon_sym_LT_EQ = 71,
  anon_sym_GT = 72,
  anon_sym_GT_EQ = 73,
  anon_sym_LT_EQ_GT = 74,
  anon_sym_EQ_EQ_EQ = 75,
  anon_sym_LBRACK_RBRACK = 76,
  anon_sym_LBRACK_RBRACK_QMARK = 77,
  anon_sym_LBRACK_RBRACK_EQ = 78,
  anon_sym_BANG = 79,
  anon_sym_TILDE = 80,
  anon_sym_BANG_TILDE = 81,
  anon_sym_EQ_TILDE = 82,
  sym_program = 83,
  sym__statement = 84,
  sym__expression = 85,
  sym_identifier = 86,
  sym_bool = 87,
  sym_float = 88,
  sym_integer = 89,
  sym_symbol = 90,
  sym_char = 91,
  sym_string = 92,
  sym_array = 93,
  sym_hash = 94,
  sym_index_expression = 95,
  sym_regex = 96,
  sym_tuple = 97,
  sym_namedTupleLiteral = 98,
  sym_commandLiteral = 99,
  sym_local_variable = 100,
  sym_instance_variable = 101,
  sym_class_variable = 102,
  sym_constant = 103,
  sym__variable = 104,
  sym_assignment = 105,
  sym__operator = 106,
  aux_sym_program_repeat1 = 107,
  aux_sym_symbol_repeat1 = 108,
  aux_sym_array_repeat1 = 109,
  aux_sym_hash_repeat1 = 110,
  aux_sym_namedTupleLiteral_repeat1 = 111,
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
  [anon_sym_LBRACK2] = "[",
  [anon_sym_RBRACK2] = "]",
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
  [sym_index_expression] = "index_expression",
  [sym_regex] = "regex",
  [sym_tuple] = "tuple",
  [sym_namedTupleLiteral] = "namedTupleLiteral",
  [sym_commandLiteral] = "commandLiteral",
  [sym_local_variable] = "local_variable",
  [sym_instance_variable] = "instance_variable",
  [sym_class_variable] = "class_variable",
  [sym_constant] = "constant",
  [sym__variable] = "_variable",
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
  [anon_sym_LBRACK2] = anon_sym_LBRACK,
  [anon_sym_RBRACK2] = anon_sym_RBRACK,
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
  [sym_index_expression] = sym_index_expression,
  [sym_regex] = sym_regex,
  [sym_tuple] = sym_tuple,
  [sym_namedTupleLiteral] = sym_namedTupleLiteral,
  [sym_commandLiteral] = sym_commandLiteral,
  [sym_local_variable] = sym_local_variable,
  [sym_instance_variable] = sym_instance_variable,
  [sym_class_variable] = sym_class_variable,
  [sym_constant] = sym_constant,
  [sym__variable] = sym__variable,
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
  [anon_sym_LBRACK2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK2] = {
    .visible = true,
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
  [sym_index_expression] = {
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
  [sym__variable] = {
    .visible = false,
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
  field_target = 4,
  field_value = 5,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_key] = "key",
  [field_lhs] = "lhs",
  [field_rhs] = "rhs",
  [field_target] = "target",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 2},
  [3] = {.index = 4, .length = 2},
  [4] = {.index = 6, .length = 4},
  [5] = {.index = 10, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_lhs, 0},
    {field_rhs, 2},
  [2] =
    {field_key, 2},
    {field_target, 0},
  [4] =
    {field_key, 1},
    {field_value, 3},
  [6] =
    {field_key, 1},
    {field_key, 4, .inherited = true},
    {field_value, 3},
    {field_value, 4, .inherited = true},
  [10] =
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
      if (eof) ADVANCE(119);
      if (lookahead == '!') ADVANCE(285);
      if (lookahead == '"') ADVANCE(185);
      if (lookahead == '#') ADVANCE(116);
      if (lookahead == '%') ADVANCE(267);
      if (lookahead == '&') ADVANCE(268);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == ')') ADVANCE(239);
      if (lookahead == '*') ADVANCE(265);
      if (lookahead == '+') ADVANCE(262);
      if (lookahead == ',') ADVANCE(213);
      if (lookahead == '-') ADVANCE(264);
      if (lookahead == '/') ADVANCE(224);
      if (lookahead == '0') ADVANCE(37);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead == ';') ADVANCE(120);
      if (lookahead == '<') ADVANCE(276);
      if (lookahead == '=') ADVANCE(259);
      if (lookahead == '>') ADVANCE(278);
      if (lookahead == '@') ADVANCE(246);
      if (lookahead == 'T') ADVANCE(161);
      if (lookahead == '[') ADVANCE(222);
      if (lookahead == ']') ADVANCE(223);
      if (lookahead == '^') ADVANCE(270);
      if (lookahead == '_') ADVANCE(140);
      if (lookahead == '`') ADVANCE(231);
      if (lookahead == 'f') ADVANCE(150);
      if (lookahead == 'n') ADVANCE(154);
      if (lookahead == 't') ADVANCE(159);
      if (lookahead == '{') ADVANCE(215);
      if (lookahead == '|') ADVANCE(269);
      if (lookahead == '}') ADVANCE(217);
      if (lookahead == '~') ADVANCE(286);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(117)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(183);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(163);
      if (lookahead != 0 &&
          lookahead > 159) ADVANCE(163);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(121);
      if (lookahead == '#') ADVANCE(116);
      if (lookahead == ';') ADVANCE(120);
      if (lookahead == '=') ADVANCE(258);
      if (lookahead == '[') ADVANCE(221);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (lookahead != 0 &&
          lookahead > '@' &&
          (lookahead < '\\' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(163);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(121);
      if (lookahead == '#') ADVANCE(116);
      if (lookahead == ';') ADVANCE(120);
      if (lookahead == '=') ADVANCE(258);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (lookahead != 0 &&
          lookahead > '@' &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(163);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(122);
      if (lookahead == '"') ADVANCE(185);
      if (lookahead == '#') ADVANCE(196);
      if (lookahead == ';') ADVANCE(120);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(187);
      if (lookahead != 0) ADVANCE(186);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(285);
      if (lookahead == '"') ADVANCE(185);
      if (lookahead == '#') ADVANCE(116);
      if (lookahead == '%') ADVANCE(266);
      if (lookahead == '&') ADVANCE(268);
      if (lookahead == '*') ADVANCE(265);
      if (lookahead == '+') ADVANCE(261);
      if (lookahead == '-') ADVANCE(263);
      if (lookahead == '/') ADVANCE(224);
      if (lookahead == '<') ADVANCE(276);
      if (lookahead == '=') ADVANCE(66);
      if (lookahead == '>') ADVANCE(278);
      if (lookahead == '[') ADVANCE(82);
      if (lookahead == '^') ADVANCE(270);
      if (lookahead == '|') ADVANCE(269);
      if (lookahead == '~') ADVANCE(286);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (lookahead != 0 &&
          lookahead > '@' &&
          lookahead != '\\' &&
          lookahead != ']' &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(163);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(185);
      if (lookahead == '#') ADVANCE(116);
      if (lookahead == '%') ADVANCE(105);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == '/') ADVANCE(224);
      if (lookahead == '0') ADVANCE(37);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead == '=') ADVANCE(258);
      if (lookahead == '@') ADVANCE(246);
      if (lookahead == 'T') ADVANCE(161);
      if (lookahead == '[') ADVANCE(211);
      if (lookahead == ']') ADVANCE(223);
      if (lookahead == '_') ADVANCE(140);
      if (lookahead == '`') ADVANCE(231);
      if (lookahead == 'f') ADVANCE(150);
      if (lookahead == 'n') ADVANCE(154);
      if (lookahead == 't') ADVANCE(159);
      if (lookahead == '{') ADVANCE(215);
      if (lookahead == '}') ADVANCE(217);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(183);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(163);
      if (lookahead != 0 &&
          lookahead > 159) ADVANCE(163);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(185);
      if (lookahead == '#') ADVANCE(116);
      if (lookahead == '%') ADVANCE(105);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == '/') ADVANCE(224);
      if (lookahead == '0') ADVANCE(37);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead == '=') ADVANCE(258);
      if (lookahead == '@') ADVANCE(246);
      if (lookahead == 'T') ADVANCE(161);
      if (lookahead == '[') ADVANCE(211);
      if (lookahead == '_') ADVANCE(140);
      if (lookahead == '`') ADVANCE(231);
      if (lookahead == 'f') ADVANCE(150);
      if (lookahead == 'n') ADVANCE(154);
      if (lookahead == 't') ADVANCE(159);
      if (lookahead == '{') ADVANCE(215);
      if (lookahead == '}') ADVANCE(217);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(183);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(163);
      if (lookahead != 0 &&
          lookahead > 159) ADVANCE(163);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(185);
      if (lookahead == '#') ADVANCE(196);
      if (lookahead == ',') ADVANCE(213);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead == '=') ADVANCE(195);
      if (lookahead == '}') ADVANCE(217);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(188);
      if (lookahead != 0) ADVANCE(186);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(185);
      if (lookahead == '#') ADVANCE(196);
      if (lookahead == ',') ADVANCE(213);
      if (lookahead == '=') ADVANCE(195);
      if (lookahead == '}') ADVANCE(217);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(189);
      if (lookahead != 0) ADVANCE(186);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(185);
      if (lookahead == '#') ADVANCE(196);
      if (lookahead == ',') ADVANCE(213);
      if (lookahead == ']') ADVANCE(214);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(190);
      if (lookahead != 0) ADVANCE(186);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(185);
      if (lookahead == '#') ADVANCE(196);
      if (lookahead == ',') ADVANCE(213);
      if (lookahead == '}') ADVANCE(217);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(191);
      if (lookahead != 0) ADVANCE(186);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(185);
      if (lookahead == '#') ADVANCE(196);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(192);
      if (lookahead != 0) ADVANCE(186);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(185);
      if (lookahead == '#') ADVANCE(196);
      if (lookahead == '=') ADVANCE(195);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(193);
      if (lookahead != 0) ADVANCE(186);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(185);
      if (lookahead == '#') ADVANCE(196);
      if (lookahead == ']') ADVANCE(223);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(194);
      if (lookahead != 0) ADVANCE(186);
      END_STATE();
    case 14:
      if (lookahead == '"') ADVANCE(185);
      if (lookahead == '#') ADVANCE(196);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(194);
      if (lookahead != 0) ADVANCE(186);
      END_STATE();
    case 15:
      if (lookahead == '#') ADVANCE(116);
      if (lookahead == ',') ADVANCE(213);
      if (lookahead == '=') ADVANCE(260);
      if (lookahead == '[') ADVANCE(221);
      if (lookahead == ']') ADVANCE(214);
      if (lookahead == '}') ADVANCE(217);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (lookahead != 0 &&
          lookahead > '@' &&
          (lookahead < '\\' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(163);
      END_STATE();
    case 16:
      if (lookahead == '#') ADVANCE(116);
      if (lookahead == ',') ADVANCE(213);
      if (lookahead == '=') ADVANCE(260);
      if (lookahead == ']') ADVANCE(214);
      if (lookahead == '}') ADVANCE(217);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (lookahead != 0 &&
          lookahead > '@' &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(163);
      END_STATE();
    case 17:
      if (lookahead == '#') ADVANCE(116);
      if (lookahead == '=') ADVANCE(258);
      if (lookahead == '[') ADVANCE(221);
      if (lookahead == ']') ADVANCE(223);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (lookahead != 0 &&
          lookahead > '@' &&
          (lookahead < '\\' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(163);
      END_STATE();
    case 18:
      if (lookahead == '#') ADVANCE(116);
      if (lookahead == '=') ADVANCE(258);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (lookahead != 0 &&
          lookahead > '@' &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(163);
      END_STATE();
    case 19:
      if (lookahead == '#') ADVANCE(116);
      if (lookahead == 'o') ADVANCE(96);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      END_STATE();
    case 20:
      if (lookahead == '#') ADVANCE(116);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 21:
      if (lookahead == '#') ADVANCE(219);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (lookahead != 0) ADVANCE(220);
      END_STATE();
    case 22:
      if (lookahead == '\'') ADVANCE(197);
      if (lookahead == '\\') ADVANCE(23);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 23:
      if (lookahead == '\'') ADVANCE(210);
      if (lookahead == '\\') ADVANCE(25);
      if (lookahead == 'a') ADVANCE(26);
      if (lookahead == 'b') ADVANCE(27);
      if (lookahead == 'e') ADVANCE(28);
      if (lookahead == 'f') ADVANCE(29);
      if (lookahead == 'n') ADVANCE(30);
      if (lookahead == 'r') ADVANCE(31);
      if (lookahead == 't') ADVANCE(32);
      if (lookahead == 'u') ADVANCE(106);
      if (lookahead == 'v') ADVANCE(33);
      END_STATE();
    case 24:
      if (lookahead == '\'') ADVANCE(209);
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
      if (lookahead == '\'') ADVANCE(203);
      END_STATE();
    case 30:
      if (lookahead == '\'') ADVANCE(204);
      END_STATE();
    case 31:
      if (lookahead == '\'') ADVANCE(205);
      END_STATE();
    case 32:
      if (lookahead == '\'') ADVANCE(206);
      END_STATE();
    case 33:
      if (lookahead == '\'') ADVANCE(207);
      END_STATE();
    case 34:
      if (lookahead == '\'') ADVANCE(208);
      END_STATE();
    case 35:
      if (lookahead == '\'') ADVANCE(208);
      if (lookahead == '}') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(35);
      END_STATE();
    case 36:
      if (lookahead == '(') ADVANCE(235);
      END_STATE();
    case 37:
      if (lookahead == '.') ADVANCE(113);
      if (lookahead == 'b') ADVANCE(109);
      if (lookahead == 'e') ADVANCE(107);
      if (lookahead == 'f') ADVANCE(52);
      if (lookahead == 'o') ADVANCE(110);
      if (lookahead == 'x') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(38);
      END_STATE();
    case 38:
      if (lookahead == '.') ADVANCE(113);
      if (lookahead == 'e') ADVANCE(107);
      if (lookahead == 'f') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(38);
      END_STATE();
    case 39:
      if (lookahead == '.') ADVANCE(100);
      END_STATE();
    case 40:
      if (lookahead == '0') ADVANCE(37);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(183);
      END_STATE();
    case 41:
      if (lookahead == '1') ADVANCE(62);
      if (lookahead == '3') ADVANCE(45);
      if (lookahead == '6') ADVANCE(55);
      if (lookahead == '8') ADVANCE(182);
      END_STATE();
    case 42:
      if (lookahead == '1') ADVANCE(63);
      if (lookahead == '3') ADVANCE(47);
      if (lookahead == '6') ADVANCE(57);
      if (lookahead == '8') ADVANCE(176);
      END_STATE();
    case 43:
      if (lookahead == '1') ADVANCE(64);
      if (lookahead == '3') ADVANCE(48);
      if (lookahead == '6') ADVANCE(58);
      if (lookahead == '8') ADVANCE(178);
      END_STATE();
    case 44:
      if (lookahead == '1') ADVANCE(65);
      if (lookahead == '3') ADVANCE(49);
      if (lookahead == '6') ADVANCE(59);
      if (lookahead == '8') ADVANCE(180);
      END_STATE();
    case 45:
      if (lookahead == '2') ADVANCE(182);
      END_STATE();
    case 46:
      if (lookahead == '2') ADVANCE(175);
      END_STATE();
    case 47:
      if (lookahead == '2') ADVANCE(176);
      END_STATE();
    case 48:
      if (lookahead == '2') ADVANCE(178);
      END_STATE();
    case 49:
      if (lookahead == '2') ADVANCE(180);
      END_STATE();
    case 50:
      if (lookahead == '2') ADVANCE(170);
      END_STATE();
    case 51:
      if (lookahead == '2') ADVANCE(173);
      END_STATE();
    case 52:
      if (lookahead == '3') ADVANCE(46);
      if (lookahead == '6') ADVANCE(56);
      END_STATE();
    case 53:
      if (lookahead == '3') ADVANCE(50);
      if (lookahead == '6') ADVANCE(60);
      END_STATE();
    case 54:
      if (lookahead == '3') ADVANCE(51);
      if (lookahead == '6') ADVANCE(61);
      END_STATE();
    case 55:
      if (lookahead == '4') ADVANCE(182);
      END_STATE();
    case 56:
      if (lookahead == '4') ADVANCE(175);
      END_STATE();
    case 57:
      if (lookahead == '4') ADVANCE(176);
      END_STATE();
    case 58:
      if (lookahead == '4') ADVANCE(178);
      END_STATE();
    case 59:
      if (lookahead == '4') ADVANCE(180);
      END_STATE();
    case 60:
      if (lookahead == '4') ADVANCE(170);
      END_STATE();
    case 61:
      if (lookahead == '4') ADVANCE(173);
      END_STATE();
    case 62:
      if (lookahead == '6') ADVANCE(182);
      END_STATE();
    case 63:
      if (lookahead == '6') ADVANCE(176);
      END_STATE();
    case 64:
      if (lookahead == '6') ADVANCE(178);
      END_STATE();
    case 65:
      if (lookahead == '6') ADVANCE(180);
      END_STATE();
    case 66:
      if (lookahead == '=') ADVANCE(274);
      if (lookahead == '~') ADVANCE(288);
      END_STATE();
    case 67:
      if (lookahead == 'D') ADVANCE(72);
      if (lookahead == 'E') ADVANCE(78);
      if (lookahead == 'F') ADVANCE(73);
      if (lookahead == 'L') ADVANCE(74);
      END_STATE();
    case 68:
      if (lookahead == 'D') ADVANCE(87);
      END_STATE();
    case 69:
      if (lookahead == 'E') ADVANCE(89);
      END_STATE();
    case 70:
      if (lookahead == 'E') ADVANCE(90);
      END_STATE();
    case 71:
      if (lookahead == 'E') ADVANCE(91);
      END_STATE();
    case 72:
      if (lookahead == 'I') ADVANCE(81);
      END_STATE();
    case 73:
      if (lookahead == 'I') ADVANCE(76);
      END_STATE();
    case 74:
      if (lookahead == 'I') ADVANCE(79);
      END_STATE();
    case 75:
      if (lookahead == 'I') ADVANCE(80);
      END_STATE();
    case 76:
      if (lookahead == 'L') ADVANCE(69);
      END_STATE();
    case 77:
      if (lookahead == 'L') ADVANCE(75);
      END_STATE();
    case 78:
      if (lookahead == 'N') ADVANCE(68);
      END_STATE();
    case 79:
      if (lookahead == 'N') ADVANCE(70);
      END_STATE();
    case 80:
      if (lookahead == 'N') ADVANCE(71);
      END_STATE();
    case 81:
      if (lookahead == 'R') ADVANCE(88);
      END_STATE();
    case 82:
      if (lookahead == ']') ADVANCE(282);
      END_STATE();
    case 83:
      if (lookahead == '_') ADVANCE(254);
      END_STATE();
    case 84:
      if (lookahead == '_') ADVANCE(252);
      END_STATE();
    case 85:
      if (lookahead == '_') ADVANCE(248);
      END_STATE();
    case 86:
      if (lookahead == '_') ADVANCE(250);
      END_STATE();
    case 87:
      if (lookahead == '_') ADVANCE(77);
      END_STATE();
    case 88:
      if (lookahead == '_') ADVANCE(83);
      END_STATE();
    case 89:
      if (lookahead == '_') ADVANCE(84);
      END_STATE();
    case 90:
      if (lookahead == '_') ADVANCE(85);
      END_STATE();
    case 91:
      if (lookahead == '_') ADVANCE(86);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(166);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(168);
      END_STATE();
    case 96:
      if (lookahead == 'f') ADVANCE(218);
      END_STATE();
    case 97:
      if (lookahead == 'l') ADVANCE(102);
      END_STATE();
    case 98:
      if (lookahead == 'l') ADVANCE(164);
      END_STATE();
    case 99:
      if (lookahead == 'l') ADVANCE(94);
      END_STATE();
    case 100:
      if (lookahead == 'n') ADVANCE(92);
      END_STATE();
    case 101:
      if (lookahead == 'p') ADVANCE(99);
      END_STATE();
    case 102:
      if (lookahead == 's') ADVANCE(95);
      END_STATE();
    case 103:
      if (lookahead == 'u') ADVANCE(93);
      END_STATE();
    case 104:
      if (lookahead == 'w') ADVANCE(230);
      END_STATE();
    case 105:
      if (lookahead == 'x') ADVANCE(36);
      END_STATE();
    case 106:
      if (lookahead == '{') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(35);
      END_STATE();
    case 107:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(174);
      END_STATE();
    case 108:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(172);
      END_STATE();
    case 109:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(177);
      END_STATE();
    case 110:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(179);
      END_STATE();
    case 111:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(174);
      END_STATE();
    case 112:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(172);
      END_STATE();
    case 113:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(171);
      END_STATE();
    case 114:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(181);
      END_STATE();
    case 115:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(35);
      END_STATE();
    case 116:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(240);
      END_STATE();
    case 117:
      if (eof) ADVANCE(119);
      if (lookahead == '!') ADVANCE(285);
      if (lookahead == '"') ADVANCE(185);
      if (lookahead == '#') ADVANCE(116);
      if (lookahead == '%') ADVANCE(267);
      if (lookahead == '&') ADVANCE(268);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == ')') ADVANCE(239);
      if (lookahead == '*') ADVANCE(265);
      if (lookahead == '+') ADVANCE(262);
      if (lookahead == ',') ADVANCE(213);
      if (lookahead == '-') ADVANCE(264);
      if (lookahead == '/') ADVANCE(224);
      if (lookahead == '0') ADVANCE(37);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead == ';') ADVANCE(120);
      if (lookahead == '<') ADVANCE(276);
      if (lookahead == '=') ADVANCE(259);
      if (lookahead == '>') ADVANCE(278);
      if (lookahead == '@') ADVANCE(246);
      if (lookahead == 'T') ADVANCE(161);
      if (lookahead == '[') ADVANCE(212);
      if (lookahead == ']') ADVANCE(214);
      if (lookahead == '^') ADVANCE(270);
      if (lookahead == '_') ADVANCE(140);
      if (lookahead == '`') ADVANCE(231);
      if (lookahead == 'f') ADVANCE(150);
      if (lookahead == 'n') ADVANCE(154);
      if (lookahead == 't') ADVANCE(159);
      if (lookahead == '{') ADVANCE(215);
      if (lookahead == '|') ADVANCE(269);
      if (lookahead == '}') ADVANCE(217);
      if (lookahead == '~') ADVANCE(286);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(117)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(183);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(163);
      if (lookahead != 0 &&
          lookahead > 159) ADVANCE(163);
      END_STATE();
    case 118:
      if (eof) ADVANCE(119);
      if (lookahead == '"') ADVANCE(185);
      if (lookahead == '#') ADVANCE(116);
      if (lookahead == '%') ADVANCE(105);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == ',') ADVANCE(213);
      if (lookahead == '/') ADVANCE(224);
      if (lookahead == '0') ADVANCE(37);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead == '=') ADVANCE(260);
      if (lookahead == '@') ADVANCE(246);
      if (lookahead == 'T') ADVANCE(257);
      if (lookahead == '[') ADVANCE(211);
      if (lookahead == ']') ADVANCE(214);
      if (lookahead == '_') ADVANCE(242);
      if (lookahead == '`') ADVANCE(231);
      if (lookahead == 'f') ADVANCE(243);
      if (lookahead == 'n') ADVANCE(244);
      if (lookahead == 't') ADVANCE(245);
      if (lookahead == '{') ADVANCE(215);
      if (lookahead == '}') ADVANCE(217);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(118)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(183);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(256);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym__statement_token1);
      if (lookahead == '\n') ADVANCE(121);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym__statement_token1);
      if (lookahead == '\n') ADVANCE(122);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(187);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(100);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(163);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'D') ADVANCE(130);
      if (lookahead == 'E') ADVANCE(136);
      if (lookahead == 'F') ADVANCE(131);
      if (lookahead == 'L') ADVANCE(132);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(163);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'D') ADVANCE(145);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(163);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'E') ADVANCE(147);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(163);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'E') ADVANCE(148);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(163);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'E') ADVANCE(149);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(163);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'I') ADVANCE(139);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(163);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'I') ADVANCE(134);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(163);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'I') ADVANCE(137);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(163);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'I') ADVANCE(138);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(163);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'L') ADVANCE(127);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(163);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'L') ADVANCE(133);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(163);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'N') ADVANCE(126);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(163);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'N') ADVANCE(128);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(163);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'N') ADVANCE(129);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(163);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'R') ADVANCE(146);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(163);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '_') ADVANCE(125);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(163);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '_') ADVANCE(255);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(163);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '_') ADVANCE(253);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(163);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '_') ADVANCE(249);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(163);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '_') ADVANCE(251);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(163);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '_') ADVANCE(135);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(163);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '_') ADVANCE(141);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(163);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '_') ADVANCE(142);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(163);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '_') ADVANCE(143);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(163);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '_') ADVANCE(144);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(163);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(155);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(163);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(167);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(163);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(124);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(163);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(169);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(163);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(156);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(163);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(160);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(163);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(165);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(163);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(152);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(163);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'p') ADVANCE(157);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(163);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(162);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(163);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 's') ADVANCE(153);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(163);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'u') ADVANCE(158);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(163);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'u') ADVANCE(151);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(163);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(163);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_nil);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_nil);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(163);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(163);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(163);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_float_token1);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (lookahead == 'e') ADVANCE(108);
      if (lookahead == 'f') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(171);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (lookahead == 'f') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(172);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_float_token2);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (lookahead == 'f') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(174);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_float_token3);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == 'i') ADVANCE(42);
      if (lookahead == 'u') ADVANCE(42);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(177);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_integer_token2);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_integer_token2);
      if (lookahead == 'i') ADVANCE(43);
      if (lookahead == 'u') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(179);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_integer_token3);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_integer_token3);
      if (lookahead == 'i') ADVANCE(44);
      if (lookahead == 'u') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(181);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_integer_token4);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_integer_token4);
      if (lookahead == '.') ADVANCE(113);
      if (lookahead == 'e') ADVANCE(107);
      if (lookahead == 'f') ADVANCE(52);
      if (lookahead == 'i') ADVANCE(41);
      if (lookahead == 'u') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(183);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\n') ADVANCE(122);
      if (lookahead == '#') ADVANCE(196);
      if (lookahead == ';') ADVANCE(120);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(186);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(196);
      if (lookahead == ',') ADVANCE(213);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead == '=') ADVANCE(195);
      if (lookahead == '}') ADVANCE(217);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(188);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(186);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(196);
      if (lookahead == ',') ADVANCE(213);
      if (lookahead == '=') ADVANCE(195);
      if (lookahead == '}') ADVANCE(217);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(186);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(196);
      if (lookahead == ',') ADVANCE(213);
      if (lookahead == ']') ADVANCE(214);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(190);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(186);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(196);
      if (lookahead == ',') ADVANCE(213);
      if (lookahead == '}') ADVANCE(217);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(191);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(186);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(196);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(192);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(186);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(196);
      if (lookahead == '=') ADVANCE(195);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(193);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(186);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(196);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(194);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(186);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '>') ADVANCE(216);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(240);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_SQUOTE_BSLASHa_SQUOTE);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_SQUOTE_BSLASHb_SQUOTE);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_SQUOTE_BSLASHe_SQUOTE);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_SQUOTE_BSLASHf_SQUOTE);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_SQUOTE_BSLASHn_SQUOTE);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_SQUOTE_BSLASHr_SQUOTE);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_SQUOTE_BSLASHt_SQUOTE);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_SQUOTE_BSLASHv_SQUOTE);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_char_token1);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_char_token2);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_char_token2);
      if (lookahead == '\'') ADVANCE(198);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == ']') ADVANCE(282);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_hash_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(240);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(219);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_hash_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(220);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_LBRACK2);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_LBRACK2);
      if (lookahead == ']') ADVANCE(282);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_RBRACK2);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_regex_token1);
      if (lookahead == '\n') ADVANCE(228);
      if (lookahead == '/') ADVANCE(240);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_regex_token1);
      if (lookahead == '\n') ADVANCE(228);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(225);
      if (lookahead == '\\') ADVANCE(226);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_regex_token1);
      if (lookahead == '#') ADVANCE(225);
      if (lookahead == '\\') ADVANCE(229);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(227);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(228);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_regex_token1);
      if (lookahead == '\\') ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(228);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_regex_token1);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(228);
      if (lookahead == '\\') ADVANCE(229);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_Tuple_DOTnew);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_commandLiteral_token1);
      if (lookahead == '\n') ADVANCE(234);
      if (lookahead == '`') ADVANCE(240);
      if (lookahead != 0) ADVANCE(232);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_commandLiteral_token1);
      if (lookahead == '#') ADVANCE(232);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(234);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_commandLiteral_token1);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(234);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_PERCENTx_LPAREN);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_commandLiteral_token2);
      if (lookahead == '\n') ADVANCE(238);
      if (lookahead == ')') ADVANCE(240);
      if (lookahead != 0) ADVANCE(236);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_commandLiteral_token2);
      if (lookahead == '#') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(237);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(238);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_commandLiteral_token2);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(238);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(240);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_local_variable_token1);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_local_variable_token1);
      if (lookahead == '_') ADVANCE(67);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_local_variable_token1);
      if (lookahead == 'a') ADVANCE(97);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_local_variable_token1);
      if (lookahead == 'i') ADVANCE(98);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_local_variable_token1);
      if (lookahead == 'r') ADVANCE(103);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '@') ADVANCE(247);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym___LINE__);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym___LINE__);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(163);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym___END_LINE__);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym___END_LINE__);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(163);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym___FILE__);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym___FILE__);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(163);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym___DIR__);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym___DIR__);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(163);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == 'u') ADVANCE(101);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(274);
      if (lookahead == '>') ADVANCE(216);
      if (lookahead == '~') ADVANCE(288);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>') ADVANCE(216);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '0') ADVANCE(37);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(183);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '0') ADVANCE(37);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(183);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(271);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == 'x') ADVANCE(36);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      if (lookahead == '=') ADVANCE(281);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(273);
      if (lookahead == '=') ADVANCE(277);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      if (lookahead == '>') ADVANCE(280);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(279);
      if (lookahead == '>') ADVANCE(272);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_LT_EQ_GT);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_EQ_EQ_EQ);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_LBRACK_RBRACK);
      if (lookahead == '=') ADVANCE(284);
      if (lookahead == '?') ADVANCE(283);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_LBRACK_RBRACK_QMARK);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_LBRACK_RBRACK_EQ);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(275);
      if (lookahead == '~') ADVANCE(287);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_BANG_TILDE);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_EQ_TILDE);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 118},
  [2] = {.lex_state = 5},
  [3] = {.lex_state = 118},
  [4] = {.lex_state = 5},
  [5] = {.lex_state = 118},
  [6] = {.lex_state = 5},
  [7] = {.lex_state = 118},
  [8] = {.lex_state = 118},
  [9] = {.lex_state = 118},
  [10] = {.lex_state = 118},
  [11] = {.lex_state = 118},
  [12] = {.lex_state = 118},
  [13] = {.lex_state = 118},
  [14] = {.lex_state = 118},
  [15] = {.lex_state = 118},
  [16] = {.lex_state = 118},
  [17] = {.lex_state = 118},
  [18] = {.lex_state = 118},
  [19] = {.lex_state = 118},
  [20] = {.lex_state = 118},
  [21] = {.lex_state = 118},
  [22] = {.lex_state = 118},
  [23] = {.lex_state = 118},
  [24] = {.lex_state = 118},
  [25] = {.lex_state = 118},
  [26] = {.lex_state = 118},
  [27] = {.lex_state = 118},
  [28] = {.lex_state = 118},
  [29] = {.lex_state = 118},
  [30] = {.lex_state = 118},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 15},
  [38] = {.lex_state = 7},
  [39] = {.lex_state = 15},
  [40] = {.lex_state = 7},
  [41] = {.lex_state = 15},
  [42] = {.lex_state = 15},
  [43] = {.lex_state = 8},
  [44] = {.lex_state = 8},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 8},
  [47] = {.lex_state = 8},
  [48] = {.lex_state = 118},
  [49] = {.lex_state = 118},
  [50] = {.lex_state = 118},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 10},
  [54] = {.lex_state = 10},
  [55] = {.lex_state = 10},
  [56] = {.lex_state = 17},
  [57] = {.lex_state = 3},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 118},
  [60] = {.lex_state = 118},
  [61] = {.lex_state = 118},
  [62] = {.lex_state = 118},
  [63] = {.lex_state = 118},
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 3},
  [67] = {.lex_state = 118},
  [68] = {.lex_state = 9},
  [69] = {.lex_state = 118},
  [70] = {.lex_state = 10},
  [71] = {.lex_state = 118},
  [72] = {.lex_state = 118},
  [73] = {.lex_state = 118},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 9},
  [76] = {.lex_state = 9},
  [77] = {.lex_state = 4},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 3},
  [80] = {.lex_state = 9},
  [81] = {.lex_state = 118},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 118},
  [86] = {.lex_state = 118},
  [87] = {.lex_state = 118},
  [88] = {.lex_state = 118},
  [89] = {.lex_state = 118},
  [90] = {.lex_state = 118},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 118},
  [99] = {.lex_state = 118},
  [100] = {.lex_state = 14},
  [101] = {.lex_state = 14},
  [102] = {.lex_state = 14},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 14},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 14},
  [107] = {.lex_state = 14},
  [108] = {.lex_state = 1},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 14},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 14},
  [113] = {.lex_state = 118},
  [114] = {.lex_state = 14},
  [115] = {.lex_state = 118},
  [116] = {.lex_state = 14},
  [117] = {.lex_state = 14},
  [118] = {.lex_state = 14},
  [119] = {.lex_state = 14},
  [120] = {.lex_state = 118},
  [121] = {.lex_state = 14},
  [122] = {.lex_state = 14},
  [123] = {.lex_state = 118},
  [124] = {.lex_state = 14},
  [125] = {.lex_state = 17},
  [126] = {.lex_state = 14},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 17},
  [129] = {.lex_state = 14},
  [130] = {.lex_state = 17},
  [131] = {.lex_state = 14},
  [132] = {.lex_state = 118},
  [133] = {.lex_state = 14},
  [134] = {.lex_state = 14},
  [135] = {.lex_state = 13},
  [136] = {.lex_state = 13},
  [137] = {.lex_state = 13},
  [138] = {.lex_state = 13},
  [139] = {.lex_state = 15},
  [140] = {.lex_state = 15},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 118},
  [143] = {.lex_state = 14},
  [144] = {.lex_state = 12},
  [145] = {.lex_state = 14},
  [146] = {.lex_state = 12},
  [147] = {.lex_state = 12},
  [148] = {.lex_state = 12},
  [149] = {.lex_state = 11},
  [150] = {.lex_state = 11},
  [151] = {.lex_state = 1},
  [152] = {.lex_state = 14},
  [153] = {.lex_state = 14},
  [154] = {.lex_state = 14},
  [155] = {.lex_state = 118},
  [156] = {.lex_state = 15},
  [157] = {.lex_state = 14},
  [158] = {.lex_state = 118},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 14},
  [165] = {.lex_state = 14},
  [166] = {.lex_state = 5},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 118},
  [169] = {.lex_state = 1},
  [170] = {.lex_state = 1},
  [171] = {.lex_state = 1},
  [172] = {.lex_state = 15},
  [173] = {.lex_state = 1},
  [174] = {.lex_state = 15},
  [175] = {.lex_state = 5},
  [176] = {.lex_state = 1},
  [177] = {.lex_state = 15},
  [178] = {.lex_state = 1},
  [179] = {.lex_state = 15},
  [180] = {.lex_state = 15},
  [181] = {.lex_state = 1},
  [182] = {.lex_state = 1},
  [183] = {.lex_state = 1},
  [184] = {.lex_state = 1},
  [185] = {.lex_state = 15},
  [186] = {.lex_state = 15},
  [187] = {.lex_state = 15},
  [188] = {.lex_state = 1},
  [189] = {.lex_state = 1},
  [190] = {.lex_state = 15},
  [191] = {.lex_state = 1},
  [192] = {.lex_state = 1},
  [193] = {.lex_state = 1},
  [194] = {.lex_state = 1},
  [195] = {.lex_state = 1},
  [196] = {.lex_state = 1},
  [197] = {.lex_state = 1},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 5},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 5},
  [204] = {.lex_state = 5},
  [205] = {.lex_state = 5},
  [206] = {.lex_state = 5},
  [207] = {.lex_state = 21},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 21},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 5},
  [213] = {.lex_state = 5},
  [214] = {.lex_state = 5},
  [215] = {.lex_state = 5},
  [216] = {.lex_state = 5},
  [217] = {.lex_state = 5},
  [218] = {.lex_state = 5},
  [219] = {.lex_state = 21},
  [220] = {.lex_state = 5},
  [221] = {.lex_state = 227},
  [222] = {.lex_state = 233},
  [223] = {.lex_state = 237},
  [224] = {.lex_state = 21},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 19},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 5},
  [233] = {.lex_state = 5},
  [234] = {.lex_state = 5},
  [235] = {.lex_state = 227},
  [236] = {.lex_state = 233},
  [237] = {.lex_state = 237},
  [238] = {.lex_state = 5},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 20},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 20},
  [243] = {.lex_state = 237},
  [244] = {.lex_state = 5},
  [245] = {.lex_state = 233},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 227},
  [250] = {.lex_state = 21},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 5},
  [254] = {.lex_state = 21},
  [255] = {.lex_state = 5},
  [256] = {.lex_state = 5},
  [257] = {.lex_state = 19},
  [258] = {.lex_state = 19},
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
    [anon_sym_LBRACK2] = ACTIONS(1),
    [anon_sym_RBRACK2] = ACTIONS(1),
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
    [sym_program] = STATE(239),
    [sym__statement] = STATE(5),
    [sym__expression] = STATE(176),
    [sym_bool] = STATE(176),
    [sym_float] = STATE(176),
    [sym_integer] = STATE(176),
    [sym_symbol] = STATE(176),
    [sym_char] = STATE(176),
    [sym_string] = STATE(176),
    [sym_array] = STATE(176),
    [sym_hash] = STATE(176),
    [sym_index_expression] = STATE(151),
    [sym_regex] = STATE(176),
    [sym_tuple] = STATE(176),
    [sym_namedTupleLiteral] = STATE(176),
    [sym_commandLiteral] = STATE(176),
    [sym_local_variable] = STATE(177),
    [sym_instance_variable] = STATE(177),
    [sym_class_variable] = STATE(177),
    [sym_constant] = STATE(78),
    [sym__variable] = STATE(177),
    [sym_assignment] = STATE(176),
    [aux_sym_program_repeat1] = STATE(5),
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
    [sym__expression] = STATE(52),
    [sym_identifier] = STATE(200),
    [sym_bool] = STATE(52),
    [sym_float] = STATE(52),
    [sym_integer] = STATE(52),
    [sym_symbol] = STATE(52),
    [sym_char] = STATE(52),
    [sym_string] = STATE(51),
    [sym_array] = STATE(52),
    [sym_hash] = STATE(52),
    [sym_index_expression] = STATE(90),
    [sym_regex] = STATE(52),
    [sym_tuple] = STATE(52),
    [sym_namedTupleLiteral] = STATE(52),
    [sym_commandLiteral] = STATE(52),
    [sym_local_variable] = STATE(179),
    [sym_instance_variable] = STATE(179),
    [sym_class_variable] = STATE(179),
    [sym_constant] = STATE(41),
    [sym__variable] = STATE(179),
    [sym_assignment] = STATE(52),
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
    [aux_sym_constant_token1] = ACTIONS(87),
  },
  [3] = {
    [sym__statement] = STATE(3),
    [sym__expression] = STATE(176),
    [sym_bool] = STATE(176),
    [sym_float] = STATE(176),
    [sym_integer] = STATE(176),
    [sym_symbol] = STATE(176),
    [sym_char] = STATE(176),
    [sym_string] = STATE(176),
    [sym_array] = STATE(176),
    [sym_hash] = STATE(176),
    [sym_index_expression] = STATE(151),
    [sym_regex] = STATE(176),
    [sym_tuple] = STATE(176),
    [sym_namedTupleLiteral] = STATE(176),
    [sym_commandLiteral] = STATE(176),
    [sym_local_variable] = STATE(177),
    [sym_instance_variable] = STATE(177),
    [sym_class_variable] = STATE(177),
    [sym_constant] = STATE(78),
    [sym__variable] = STATE(177),
    [sym_assignment] = STATE(176),
    [aux_sym_program_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(89),
    [sym_nil] = ACTIONS(91),
    [anon_sym_true] = ACTIONS(94),
    [anon_sym_false] = ACTIONS(94),
    [aux_sym_float_token1] = ACTIONS(97),
    [aux_sym_float_token2] = ACTIONS(100),
    [aux_sym_float_token3] = ACTIONS(100),
    [aux_sym_integer_token1] = ACTIONS(103),
    [aux_sym_integer_token2] = ACTIONS(103),
    [aux_sym_integer_token3] = ACTIONS(103),
    [aux_sym_integer_token4] = ACTIONS(106),
    [anon_sym_COLON] = ACTIONS(109),
    [anon_sym_DQUOTE] = ACTIONS(112),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(115),
    [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = ACTIONS(115),
    [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = ACTIONS(115),
    [anon_sym_SQUOTE_BSLASHa_SQUOTE] = ACTIONS(115),
    [anon_sym_SQUOTE_BSLASHb_SQUOTE] = ACTIONS(115),
    [anon_sym_SQUOTE_BSLASHe_SQUOTE] = ACTIONS(115),
    [anon_sym_SQUOTE_BSLASHf_SQUOTE] = ACTIONS(115),
    [anon_sym_SQUOTE_BSLASHn_SQUOTE] = ACTIONS(115),
    [anon_sym_SQUOTE_BSLASHr_SQUOTE] = ACTIONS(115),
    [anon_sym_SQUOTE_BSLASHt_SQUOTE] = ACTIONS(115),
    [anon_sym_SQUOTE_BSLASHv_SQUOTE] = ACTIONS(115),
    [aux_sym_char_token1] = ACTIONS(115),
    [aux_sym_char_token2] = ACTIONS(118),
    [anon_sym_LBRACK] = ACTIONS(121),
    [anon_sym_LBRACE] = ACTIONS(124),
    [anon_sym_SLASH] = ACTIONS(127),
    [anon_sym_Tuple_DOTnew] = ACTIONS(130),
    [anon_sym_BQUOTE] = ACTIONS(133),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(136),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(139),
    [anon_sym_AT] = ACTIONS(142),
    [anon_sym_AT_AT] = ACTIONS(145),
    [anon_sym___LINE__] = ACTIONS(148),
    [anon_sym___END_LINE__] = ACTIONS(148),
    [anon_sym___FILE__] = ACTIONS(148),
    [anon_sym___DIR__] = ACTIONS(148),
    [aux_sym_constant_token1] = ACTIONS(151),
  },
  [4] = {
    [sym__expression] = STATE(84),
    [sym_identifier] = STATE(248),
    [sym_bool] = STATE(84),
    [sym_float] = STATE(84),
    [sym_integer] = STATE(84),
    [sym_symbol] = STATE(84),
    [sym_char] = STATE(84),
    [sym_string] = STATE(83),
    [sym_array] = STATE(84),
    [sym_hash] = STATE(84),
    [sym_index_expression] = STATE(90),
    [sym_regex] = STATE(84),
    [sym_tuple] = STATE(84),
    [sym_namedTupleLiteral] = STATE(84),
    [sym_commandLiteral] = STATE(84),
    [sym_local_variable] = STATE(179),
    [sym_instance_variable] = STATE(179),
    [sym_class_variable] = STATE(179),
    [sym_constant] = STATE(41),
    [sym__variable] = STATE(179),
    [sym_assignment] = STATE(84),
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
    [aux_sym_constant_token1] = ACTIONS(87),
  },
  [5] = {
    [sym__statement] = STATE(3),
    [sym__expression] = STATE(176),
    [sym_bool] = STATE(176),
    [sym_float] = STATE(176),
    [sym_integer] = STATE(176),
    [sym_symbol] = STATE(176),
    [sym_char] = STATE(176),
    [sym_string] = STATE(176),
    [sym_array] = STATE(176),
    [sym_hash] = STATE(176),
    [sym_index_expression] = STATE(151),
    [sym_regex] = STATE(176),
    [sym_tuple] = STATE(176),
    [sym_namedTupleLiteral] = STATE(176),
    [sym_commandLiteral] = STATE(176),
    [sym_local_variable] = STATE(177),
    [sym_instance_variable] = STATE(177),
    [sym_class_variable] = STATE(177),
    [sym_constant] = STATE(78),
    [sym__variable] = STATE(177),
    [sym_assignment] = STATE(176),
    [aux_sym_program_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(158),
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
  [6] = {
    [sym__expression] = STATE(58),
    [sym_identifier] = STATE(252),
    [sym_bool] = STATE(58),
    [sym_float] = STATE(58),
    [sym_integer] = STATE(58),
    [sym_symbol] = STATE(58),
    [sym_char] = STATE(58),
    [sym_string] = STATE(74),
    [sym_array] = STATE(58),
    [sym_hash] = STATE(58),
    [sym_index_expression] = STATE(90),
    [sym_regex] = STATE(58),
    [sym_tuple] = STATE(58),
    [sym_namedTupleLiteral] = STATE(58),
    [sym_commandLiteral] = STATE(58),
    [sym_local_variable] = STATE(179),
    [sym_instance_variable] = STATE(179),
    [sym_class_variable] = STATE(179),
    [sym_constant] = STATE(41),
    [sym__variable] = STATE(179),
    [sym_assignment] = STATE(58),
    [aux_sym_identifier_token1] = ACTIONS(49),
    [sym_nil] = ACTIONS(160),
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
    [anon_sym_RBRACE] = ACTIONS(162),
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
    [aux_sym_constant_token1] = ACTIONS(87),
  },
  [7] = {
    [sym__expression] = STATE(69),
    [sym_bool] = STATE(69),
    [sym_float] = STATE(69),
    [sym_integer] = STATE(69),
    [sym_symbol] = STATE(69),
    [sym_char] = STATE(69),
    [sym_string] = STATE(69),
    [sym_array] = STATE(69),
    [sym_hash] = STATE(69),
    [sym_index_expression] = STATE(90),
    [sym_regex] = STATE(69),
    [sym_tuple] = STATE(69),
    [sym_namedTupleLiteral] = STATE(69),
    [sym_commandLiteral] = STATE(69),
    [sym_local_variable] = STATE(179),
    [sym_instance_variable] = STATE(179),
    [sym_class_variable] = STATE(179),
    [sym_constant] = STATE(41),
    [sym__variable] = STATE(179),
    [sym_assignment] = STATE(69),
    [sym_nil] = ACTIONS(164),
    [anon_sym_true] = ACTIONS(166),
    [anon_sym_false] = ACTIONS(166),
    [aux_sym_float_token1] = ACTIONS(55),
    [aux_sym_float_token2] = ACTIONS(57),
    [aux_sym_float_token3] = ACTIONS(57),
    [aux_sym_integer_token1] = ACTIONS(59),
    [aux_sym_integer_token2] = ACTIONS(59),
    [aux_sym_integer_token3] = ACTIONS(59),
    [aux_sym_integer_token4] = ACTIONS(61),
    [anon_sym_COLON] = ACTIONS(63),
    [anon_sym_DQUOTE] = ACTIONS(168),
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
    [anon_sym___LINE__] = ACTIONS(170),
    [anon_sym___END_LINE__] = ACTIONS(170),
    [anon_sym___FILE__] = ACTIONS(170),
    [anon_sym___DIR__] = ACTIONS(170),
    [aux_sym_constant_token1] = ACTIONS(87),
  },
  [8] = {
    [sym__expression] = STATE(155),
    [sym_bool] = STATE(155),
    [sym_float] = STATE(155),
    [sym_integer] = STATE(155),
    [sym_symbol] = STATE(155),
    [sym_char] = STATE(155),
    [sym_string] = STATE(155),
    [sym_array] = STATE(155),
    [sym_hash] = STATE(155),
    [sym_index_expression] = STATE(98),
    [sym_regex] = STATE(155),
    [sym_tuple] = STATE(155),
    [sym_namedTupleLiteral] = STATE(155),
    [sym_commandLiteral] = STATE(155),
    [sym_local_variable] = STATE(190),
    [sym_instance_variable] = STATE(190),
    [sym_class_variable] = STATE(190),
    [sym_constant] = STATE(41),
    [sym__variable] = STATE(190),
    [sym_assignment] = STATE(155),
    [sym_nil] = ACTIONS(172),
    [anon_sym_true] = ACTIONS(166),
    [anon_sym_false] = ACTIONS(166),
    [aux_sym_float_token1] = ACTIONS(55),
    [aux_sym_float_token2] = ACTIONS(57),
    [aux_sym_float_token3] = ACTIONS(57),
    [aux_sym_integer_token1] = ACTIONS(59),
    [aux_sym_integer_token2] = ACTIONS(59),
    [aux_sym_integer_token3] = ACTIONS(59),
    [aux_sym_integer_token4] = ACTIONS(61),
    [anon_sym_COLON] = ACTIONS(174),
    [anon_sym_DQUOTE] = ACTIONS(176),
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
    [anon_sym___LINE__] = ACTIONS(170),
    [anon_sym___END_LINE__] = ACTIONS(170),
    [anon_sym___FILE__] = ACTIONS(170),
    [anon_sym___DIR__] = ACTIONS(170),
    [aux_sym_constant_token1] = ACTIONS(87),
  },
  [9] = {
    [sym__expression] = STATE(212),
    [sym_bool] = STATE(212),
    [sym_float] = STATE(212),
    [sym_integer] = STATE(212),
    [sym_symbol] = STATE(212),
    [sym_char] = STATE(212),
    [sym_string] = STATE(212),
    [sym_array] = STATE(212),
    [sym_hash] = STATE(212),
    [sym_index_expression] = STATE(166),
    [sym_regex] = STATE(212),
    [sym_tuple] = STATE(212),
    [sym_namedTupleLiteral] = STATE(212),
    [sym_commandLiteral] = STATE(212),
    [sym_local_variable] = STATE(186),
    [sym_instance_variable] = STATE(186),
    [sym_class_variable] = STATE(186),
    [sym_constant] = STATE(128),
    [sym__variable] = STATE(186),
    [sym_assignment] = STATE(212),
    [sym_nil] = ACTIONS(178),
    [anon_sym_true] = ACTIONS(180),
    [anon_sym_false] = ACTIONS(180),
    [aux_sym_float_token1] = ACTIONS(182),
    [aux_sym_float_token2] = ACTIONS(184),
    [aux_sym_float_token3] = ACTIONS(184),
    [aux_sym_integer_token1] = ACTIONS(186),
    [aux_sym_integer_token2] = ACTIONS(186),
    [aux_sym_integer_token3] = ACTIONS(186),
    [aux_sym_integer_token4] = ACTIONS(188),
    [anon_sym_COLON] = ACTIONS(190),
    [anon_sym_DQUOTE] = ACTIONS(192),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(194),
    [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = ACTIONS(194),
    [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = ACTIONS(194),
    [anon_sym_SQUOTE_BSLASHa_SQUOTE] = ACTIONS(194),
    [anon_sym_SQUOTE_BSLASHb_SQUOTE] = ACTIONS(194),
    [anon_sym_SQUOTE_BSLASHe_SQUOTE] = ACTIONS(194),
    [anon_sym_SQUOTE_BSLASHf_SQUOTE] = ACTIONS(194),
    [anon_sym_SQUOTE_BSLASHn_SQUOTE] = ACTIONS(194),
    [anon_sym_SQUOTE_BSLASHr_SQUOTE] = ACTIONS(194),
    [anon_sym_SQUOTE_BSLASHt_SQUOTE] = ACTIONS(194),
    [anon_sym_SQUOTE_BSLASHv_SQUOTE] = ACTIONS(194),
    [aux_sym_char_token1] = ACTIONS(194),
    [aux_sym_char_token2] = ACTIONS(196),
    [anon_sym_LBRACK] = ACTIONS(198),
    [anon_sym_LBRACE] = ACTIONS(200),
    [anon_sym_SLASH] = ACTIONS(202),
    [anon_sym_Tuple_DOTnew] = ACTIONS(204),
    [anon_sym_BQUOTE] = ACTIONS(206),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(208),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(39),
    [anon_sym_AT] = ACTIONS(41),
    [anon_sym_AT_AT] = ACTIONS(43),
    [anon_sym___LINE__] = ACTIONS(210),
    [anon_sym___END_LINE__] = ACTIONS(210),
    [anon_sym___FILE__] = ACTIONS(210),
    [anon_sym___DIR__] = ACTIONS(210),
    [aux_sym_constant_token1] = ACTIONS(212),
  },
  [10] = {
    [sym__expression] = STATE(142),
    [sym_bool] = STATE(142),
    [sym_float] = STATE(142),
    [sym_integer] = STATE(142),
    [sym_symbol] = STATE(142),
    [sym_char] = STATE(142),
    [sym_string] = STATE(142),
    [sym_array] = STATE(142),
    [sym_hash] = STATE(142),
    [sym_index_expression] = STATE(98),
    [sym_regex] = STATE(142),
    [sym_tuple] = STATE(142),
    [sym_namedTupleLiteral] = STATE(142),
    [sym_commandLiteral] = STATE(142),
    [sym_local_variable] = STATE(190),
    [sym_instance_variable] = STATE(190),
    [sym_class_variable] = STATE(190),
    [sym_constant] = STATE(41),
    [sym__variable] = STATE(190),
    [sym_assignment] = STATE(142),
    [sym_nil] = ACTIONS(214),
    [anon_sym_true] = ACTIONS(166),
    [anon_sym_false] = ACTIONS(166),
    [aux_sym_float_token1] = ACTIONS(55),
    [aux_sym_float_token2] = ACTIONS(57),
    [aux_sym_float_token3] = ACTIONS(57),
    [aux_sym_integer_token1] = ACTIONS(59),
    [aux_sym_integer_token2] = ACTIONS(59),
    [aux_sym_integer_token3] = ACTIONS(59),
    [aux_sym_integer_token4] = ACTIONS(61),
    [anon_sym_COLON] = ACTIONS(174),
    [anon_sym_DQUOTE] = ACTIONS(176),
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
    [anon_sym___LINE__] = ACTIONS(170),
    [anon_sym___END_LINE__] = ACTIONS(170),
    [anon_sym___FILE__] = ACTIONS(170),
    [anon_sym___DIR__] = ACTIONS(170),
    [aux_sym_constant_token1] = ACTIONS(87),
  },
  [11] = {
    [sym__expression] = STATE(198),
    [sym_bool] = STATE(198),
    [sym_float] = STATE(198),
    [sym_integer] = STATE(198),
    [sym_symbol] = STATE(198),
    [sym_char] = STATE(198),
    [sym_string] = STATE(198),
    [sym_array] = STATE(198),
    [sym_hash] = STATE(198),
    [sym_index_expression] = STATE(99),
    [sym_regex] = STATE(198),
    [sym_tuple] = STATE(198),
    [sym_namedTupleLiteral] = STATE(198),
    [sym_commandLiteral] = STATE(198),
    [sym_local_variable] = STATE(174),
    [sym_instance_variable] = STATE(174),
    [sym_class_variable] = STATE(174),
    [sym_constant] = STATE(41),
    [sym__variable] = STATE(174),
    [sym_assignment] = STATE(198),
    [sym_nil] = ACTIONS(216),
    [anon_sym_true] = ACTIONS(166),
    [anon_sym_false] = ACTIONS(166),
    [aux_sym_float_token1] = ACTIONS(55),
    [aux_sym_float_token2] = ACTIONS(57),
    [aux_sym_float_token3] = ACTIONS(57),
    [aux_sym_integer_token1] = ACTIONS(59),
    [aux_sym_integer_token2] = ACTIONS(59),
    [aux_sym_integer_token3] = ACTIONS(59),
    [aux_sym_integer_token4] = ACTIONS(61),
    [anon_sym_COLON] = ACTIONS(218),
    [anon_sym_DQUOTE] = ACTIONS(220),
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
    [anon_sym___LINE__] = ACTIONS(170),
    [anon_sym___END_LINE__] = ACTIONS(170),
    [anon_sym___FILE__] = ACTIONS(170),
    [anon_sym___DIR__] = ACTIONS(170),
    [aux_sym_constant_token1] = ACTIONS(87),
  },
  [12] = {
    [sym__expression] = STATE(69),
    [sym_bool] = STATE(69),
    [sym_float] = STATE(69),
    [sym_integer] = STATE(69),
    [sym_symbol] = STATE(69),
    [sym_char] = STATE(69),
    [sym_string] = STATE(69),
    [sym_array] = STATE(69),
    [sym_hash] = STATE(69),
    [sym_index_expression] = STATE(168),
    [sym_regex] = STATE(69),
    [sym_tuple] = STATE(69),
    [sym_namedTupleLiteral] = STATE(69),
    [sym_commandLiteral] = STATE(69),
    [sym_local_variable] = STATE(172),
    [sym_instance_variable] = STATE(172),
    [sym_class_variable] = STATE(172),
    [sym_constant] = STATE(41),
    [sym__variable] = STATE(172),
    [sym_assignment] = STATE(69),
    [sym_nil] = ACTIONS(164),
    [anon_sym_true] = ACTIONS(166),
    [anon_sym_false] = ACTIONS(166),
    [aux_sym_float_token1] = ACTIONS(55),
    [aux_sym_float_token2] = ACTIONS(57),
    [aux_sym_float_token3] = ACTIONS(57),
    [aux_sym_integer_token1] = ACTIONS(59),
    [aux_sym_integer_token2] = ACTIONS(59),
    [aux_sym_integer_token3] = ACTIONS(59),
    [aux_sym_integer_token4] = ACTIONS(61),
    [anon_sym_COLON] = ACTIONS(222),
    [anon_sym_DQUOTE] = ACTIONS(224),
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
    [anon_sym___LINE__] = ACTIONS(170),
    [anon_sym___END_LINE__] = ACTIONS(170),
    [anon_sym___FILE__] = ACTIONS(170),
    [anon_sym___DIR__] = ACTIONS(170),
    [aux_sym_constant_token1] = ACTIONS(87),
  },
  [13] = {
    [sym__expression] = STATE(234),
    [sym_bool] = STATE(234),
    [sym_float] = STATE(234),
    [sym_integer] = STATE(234),
    [sym_symbol] = STATE(234),
    [sym_char] = STATE(234),
    [sym_string] = STATE(234),
    [sym_array] = STATE(234),
    [sym_hash] = STATE(234),
    [sym_index_expression] = STATE(166),
    [sym_regex] = STATE(234),
    [sym_tuple] = STATE(234),
    [sym_namedTupleLiteral] = STATE(234),
    [sym_commandLiteral] = STATE(234),
    [sym_local_variable] = STATE(186),
    [sym_instance_variable] = STATE(186),
    [sym_class_variable] = STATE(186),
    [sym_constant] = STATE(128),
    [sym__variable] = STATE(186),
    [sym_assignment] = STATE(234),
    [sym_nil] = ACTIONS(226),
    [anon_sym_true] = ACTIONS(180),
    [anon_sym_false] = ACTIONS(180),
    [aux_sym_float_token1] = ACTIONS(182),
    [aux_sym_float_token2] = ACTIONS(184),
    [aux_sym_float_token3] = ACTIONS(184),
    [aux_sym_integer_token1] = ACTIONS(186),
    [aux_sym_integer_token2] = ACTIONS(186),
    [aux_sym_integer_token3] = ACTIONS(186),
    [aux_sym_integer_token4] = ACTIONS(188),
    [anon_sym_COLON] = ACTIONS(190),
    [anon_sym_DQUOTE] = ACTIONS(192),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(194),
    [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = ACTIONS(194),
    [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = ACTIONS(194),
    [anon_sym_SQUOTE_BSLASHa_SQUOTE] = ACTIONS(194),
    [anon_sym_SQUOTE_BSLASHb_SQUOTE] = ACTIONS(194),
    [anon_sym_SQUOTE_BSLASHe_SQUOTE] = ACTIONS(194),
    [anon_sym_SQUOTE_BSLASHf_SQUOTE] = ACTIONS(194),
    [anon_sym_SQUOTE_BSLASHn_SQUOTE] = ACTIONS(194),
    [anon_sym_SQUOTE_BSLASHr_SQUOTE] = ACTIONS(194),
    [anon_sym_SQUOTE_BSLASHt_SQUOTE] = ACTIONS(194),
    [anon_sym_SQUOTE_BSLASHv_SQUOTE] = ACTIONS(194),
    [aux_sym_char_token1] = ACTIONS(194),
    [aux_sym_char_token2] = ACTIONS(196),
    [anon_sym_LBRACK] = ACTIONS(198),
    [anon_sym_LBRACE] = ACTIONS(200),
    [anon_sym_SLASH] = ACTIONS(202),
    [anon_sym_Tuple_DOTnew] = ACTIONS(204),
    [anon_sym_BQUOTE] = ACTIONS(206),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(208),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(39),
    [anon_sym_AT] = ACTIONS(41),
    [anon_sym_AT_AT] = ACTIONS(43),
    [anon_sym___LINE__] = ACTIONS(210),
    [anon_sym___END_LINE__] = ACTIONS(210),
    [anon_sym___FILE__] = ACTIONS(210),
    [anon_sym___DIR__] = ACTIONS(210),
    [aux_sym_constant_token1] = ACTIONS(212),
  },
  [14] = {
    [sym__expression] = STATE(69),
    [sym_bool] = STATE(69),
    [sym_float] = STATE(69),
    [sym_integer] = STATE(69),
    [sym_symbol] = STATE(69),
    [sym_char] = STATE(69),
    [sym_string] = STATE(69),
    [sym_array] = STATE(69),
    [sym_hash] = STATE(69),
    [sym_index_expression] = STATE(99),
    [sym_regex] = STATE(69),
    [sym_tuple] = STATE(69),
    [sym_namedTupleLiteral] = STATE(69),
    [sym_commandLiteral] = STATE(69),
    [sym_local_variable] = STATE(174),
    [sym_instance_variable] = STATE(174),
    [sym_class_variable] = STATE(174),
    [sym_constant] = STATE(41),
    [sym__variable] = STATE(174),
    [sym_assignment] = STATE(69),
    [sym_nil] = ACTIONS(164),
    [anon_sym_true] = ACTIONS(166),
    [anon_sym_false] = ACTIONS(166),
    [aux_sym_float_token1] = ACTIONS(55),
    [aux_sym_float_token2] = ACTIONS(57),
    [aux_sym_float_token3] = ACTIONS(57),
    [aux_sym_integer_token1] = ACTIONS(59),
    [aux_sym_integer_token2] = ACTIONS(59),
    [aux_sym_integer_token3] = ACTIONS(59),
    [aux_sym_integer_token4] = ACTIONS(61),
    [anon_sym_COLON] = ACTIONS(218),
    [anon_sym_DQUOTE] = ACTIONS(220),
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
    [anon_sym___LINE__] = ACTIONS(170),
    [anon_sym___END_LINE__] = ACTIONS(170),
    [anon_sym___FILE__] = ACTIONS(170),
    [anon_sym___DIR__] = ACTIONS(170),
    [aux_sym_constant_token1] = ACTIONS(87),
  },
  [15] = {
    [sym__expression] = STATE(115),
    [sym_bool] = STATE(115),
    [sym_float] = STATE(115),
    [sym_integer] = STATE(115),
    [sym_symbol] = STATE(115),
    [sym_char] = STATE(115),
    [sym_string] = STATE(115),
    [sym_array] = STATE(115),
    [sym_hash] = STATE(115),
    [sym_index_expression] = STATE(99),
    [sym_regex] = STATE(115),
    [sym_tuple] = STATE(115),
    [sym_namedTupleLiteral] = STATE(115),
    [sym_commandLiteral] = STATE(115),
    [sym_local_variable] = STATE(174),
    [sym_instance_variable] = STATE(174),
    [sym_class_variable] = STATE(174),
    [sym_constant] = STATE(41),
    [sym__variable] = STATE(174),
    [sym_assignment] = STATE(115),
    [sym_nil] = ACTIONS(228),
    [anon_sym_true] = ACTIONS(166),
    [anon_sym_false] = ACTIONS(166),
    [aux_sym_float_token1] = ACTIONS(55),
    [aux_sym_float_token2] = ACTIONS(57),
    [aux_sym_float_token3] = ACTIONS(57),
    [aux_sym_integer_token1] = ACTIONS(59),
    [aux_sym_integer_token2] = ACTIONS(59),
    [aux_sym_integer_token3] = ACTIONS(59),
    [aux_sym_integer_token4] = ACTIONS(61),
    [anon_sym_COLON] = ACTIONS(218),
    [anon_sym_DQUOTE] = ACTIONS(220),
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
    [anon_sym___LINE__] = ACTIONS(170),
    [anon_sym___END_LINE__] = ACTIONS(170),
    [anon_sym___FILE__] = ACTIONS(170),
    [anon_sym___DIR__] = ACTIONS(170),
    [aux_sym_constant_token1] = ACTIONS(87),
  },
  [16] = {
    [sym__expression] = STATE(97),
    [sym_bool] = STATE(97),
    [sym_float] = STATE(97),
    [sym_integer] = STATE(97),
    [sym_symbol] = STATE(97),
    [sym_char] = STATE(97),
    [sym_string] = STATE(97),
    [sym_array] = STATE(97),
    [sym_hash] = STATE(97),
    [sym_index_expression] = STATE(99),
    [sym_regex] = STATE(97),
    [sym_tuple] = STATE(97),
    [sym_namedTupleLiteral] = STATE(97),
    [sym_commandLiteral] = STATE(97),
    [sym_local_variable] = STATE(174),
    [sym_instance_variable] = STATE(174),
    [sym_class_variable] = STATE(174),
    [sym_constant] = STATE(41),
    [sym__variable] = STATE(174),
    [sym_assignment] = STATE(97),
    [sym_nil] = ACTIONS(230),
    [anon_sym_true] = ACTIONS(166),
    [anon_sym_false] = ACTIONS(166),
    [aux_sym_float_token1] = ACTIONS(55),
    [aux_sym_float_token2] = ACTIONS(57),
    [aux_sym_float_token3] = ACTIONS(57),
    [aux_sym_integer_token1] = ACTIONS(59),
    [aux_sym_integer_token2] = ACTIONS(59),
    [aux_sym_integer_token3] = ACTIONS(59),
    [aux_sym_integer_token4] = ACTIONS(61),
    [anon_sym_COLON] = ACTIONS(218),
    [anon_sym_DQUOTE] = ACTIONS(220),
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
    [anon_sym___LINE__] = ACTIONS(170),
    [anon_sym___END_LINE__] = ACTIONS(170),
    [anon_sym___FILE__] = ACTIONS(170),
    [anon_sym___DIR__] = ACTIONS(170),
    [aux_sym_constant_token1] = ACTIONS(87),
  },
  [17] = {
    [sym__expression] = STATE(95),
    [sym_bool] = STATE(95),
    [sym_float] = STATE(95),
    [sym_integer] = STATE(95),
    [sym_symbol] = STATE(95),
    [sym_char] = STATE(95),
    [sym_string] = STATE(95),
    [sym_array] = STATE(95),
    [sym_hash] = STATE(95),
    [sym_index_expression] = STATE(99),
    [sym_regex] = STATE(95),
    [sym_tuple] = STATE(95),
    [sym_namedTupleLiteral] = STATE(95),
    [sym_commandLiteral] = STATE(95),
    [sym_local_variable] = STATE(174),
    [sym_instance_variable] = STATE(174),
    [sym_class_variable] = STATE(174),
    [sym_constant] = STATE(41),
    [sym__variable] = STATE(174),
    [sym_assignment] = STATE(95),
    [sym_nil] = ACTIONS(232),
    [anon_sym_true] = ACTIONS(166),
    [anon_sym_false] = ACTIONS(166),
    [aux_sym_float_token1] = ACTIONS(55),
    [aux_sym_float_token2] = ACTIONS(57),
    [aux_sym_float_token3] = ACTIONS(57),
    [aux_sym_integer_token1] = ACTIONS(59),
    [aux_sym_integer_token2] = ACTIONS(59),
    [aux_sym_integer_token3] = ACTIONS(59),
    [aux_sym_integer_token4] = ACTIONS(61),
    [anon_sym_COLON] = ACTIONS(218),
    [anon_sym_DQUOTE] = ACTIONS(220),
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
    [anon_sym___LINE__] = ACTIONS(170),
    [anon_sym___END_LINE__] = ACTIONS(170),
    [anon_sym___FILE__] = ACTIONS(170),
    [anon_sym___DIR__] = ACTIONS(170),
    [aux_sym_constant_token1] = ACTIONS(87),
  },
  [18] = {
    [sym__expression] = STATE(160),
    [sym_bool] = STATE(160),
    [sym_float] = STATE(160),
    [sym_integer] = STATE(160),
    [sym_symbol] = STATE(160),
    [sym_char] = STATE(160),
    [sym_string] = STATE(160),
    [sym_array] = STATE(160),
    [sym_hash] = STATE(160),
    [sym_index_expression] = STATE(99),
    [sym_regex] = STATE(160),
    [sym_tuple] = STATE(160),
    [sym_namedTupleLiteral] = STATE(160),
    [sym_commandLiteral] = STATE(160),
    [sym_local_variable] = STATE(174),
    [sym_instance_variable] = STATE(174),
    [sym_class_variable] = STATE(174),
    [sym_constant] = STATE(41),
    [sym__variable] = STATE(174),
    [sym_assignment] = STATE(160),
    [sym_nil] = ACTIONS(234),
    [anon_sym_true] = ACTIONS(166),
    [anon_sym_false] = ACTIONS(166),
    [aux_sym_float_token1] = ACTIONS(55),
    [aux_sym_float_token2] = ACTIONS(57),
    [aux_sym_float_token3] = ACTIONS(57),
    [aux_sym_integer_token1] = ACTIONS(59),
    [aux_sym_integer_token2] = ACTIONS(59),
    [aux_sym_integer_token3] = ACTIONS(59),
    [aux_sym_integer_token4] = ACTIONS(61),
    [anon_sym_COLON] = ACTIONS(218),
    [anon_sym_DQUOTE] = ACTIONS(220),
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
    [anon_sym___LINE__] = ACTIONS(170),
    [anon_sym___END_LINE__] = ACTIONS(170),
    [anon_sym___FILE__] = ACTIONS(170),
    [anon_sym___DIR__] = ACTIONS(170),
    [aux_sym_constant_token1] = ACTIONS(87),
  },
  [19] = {
    [sym__expression] = STATE(69),
    [sym_bool] = STATE(69),
    [sym_float] = STATE(69),
    [sym_integer] = STATE(69),
    [sym_symbol] = STATE(69),
    [sym_char] = STATE(69),
    [sym_string] = STATE(69),
    [sym_array] = STATE(69),
    [sym_hash] = STATE(69),
    [sym_index_expression] = STATE(98),
    [sym_regex] = STATE(69),
    [sym_tuple] = STATE(69),
    [sym_namedTupleLiteral] = STATE(69),
    [sym_commandLiteral] = STATE(69),
    [sym_local_variable] = STATE(190),
    [sym_instance_variable] = STATE(190),
    [sym_class_variable] = STATE(190),
    [sym_constant] = STATE(41),
    [sym__variable] = STATE(190),
    [sym_assignment] = STATE(69),
    [sym_nil] = ACTIONS(164),
    [anon_sym_true] = ACTIONS(166),
    [anon_sym_false] = ACTIONS(166),
    [aux_sym_float_token1] = ACTIONS(55),
    [aux_sym_float_token2] = ACTIONS(57),
    [aux_sym_float_token3] = ACTIONS(57),
    [aux_sym_integer_token1] = ACTIONS(59),
    [aux_sym_integer_token2] = ACTIONS(59),
    [aux_sym_integer_token3] = ACTIONS(59),
    [aux_sym_integer_token4] = ACTIONS(61),
    [anon_sym_COLON] = ACTIONS(174),
    [anon_sym_DQUOTE] = ACTIONS(176),
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
    [anon_sym___LINE__] = ACTIONS(170),
    [anon_sym___END_LINE__] = ACTIONS(170),
    [anon_sym___FILE__] = ACTIONS(170),
    [anon_sym___DIR__] = ACTIONS(170),
    [aux_sym_constant_token1] = ACTIONS(87),
  },
  [20] = {
    [sym__expression] = STATE(206),
    [sym_bool] = STATE(206),
    [sym_float] = STATE(206),
    [sym_integer] = STATE(206),
    [sym_symbol] = STATE(206),
    [sym_char] = STATE(206),
    [sym_string] = STATE(206),
    [sym_array] = STATE(206),
    [sym_hash] = STATE(206),
    [sym_index_expression] = STATE(166),
    [sym_regex] = STATE(206),
    [sym_tuple] = STATE(206),
    [sym_namedTupleLiteral] = STATE(206),
    [sym_commandLiteral] = STATE(206),
    [sym_local_variable] = STATE(186),
    [sym_instance_variable] = STATE(186),
    [sym_class_variable] = STATE(186),
    [sym_constant] = STATE(128),
    [sym__variable] = STATE(186),
    [sym_assignment] = STATE(206),
    [sym_nil] = ACTIONS(236),
    [anon_sym_true] = ACTIONS(180),
    [anon_sym_false] = ACTIONS(180),
    [aux_sym_float_token1] = ACTIONS(182),
    [aux_sym_float_token2] = ACTIONS(184),
    [aux_sym_float_token3] = ACTIONS(184),
    [aux_sym_integer_token1] = ACTIONS(186),
    [aux_sym_integer_token2] = ACTIONS(186),
    [aux_sym_integer_token3] = ACTIONS(186),
    [aux_sym_integer_token4] = ACTIONS(188),
    [anon_sym_COLON] = ACTIONS(190),
    [anon_sym_DQUOTE] = ACTIONS(192),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(194),
    [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = ACTIONS(194),
    [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = ACTIONS(194),
    [anon_sym_SQUOTE_BSLASHa_SQUOTE] = ACTIONS(194),
    [anon_sym_SQUOTE_BSLASHb_SQUOTE] = ACTIONS(194),
    [anon_sym_SQUOTE_BSLASHe_SQUOTE] = ACTIONS(194),
    [anon_sym_SQUOTE_BSLASHf_SQUOTE] = ACTIONS(194),
    [anon_sym_SQUOTE_BSLASHn_SQUOTE] = ACTIONS(194),
    [anon_sym_SQUOTE_BSLASHr_SQUOTE] = ACTIONS(194),
    [anon_sym_SQUOTE_BSLASHt_SQUOTE] = ACTIONS(194),
    [anon_sym_SQUOTE_BSLASHv_SQUOTE] = ACTIONS(194),
    [aux_sym_char_token1] = ACTIONS(194),
    [aux_sym_char_token2] = ACTIONS(196),
    [anon_sym_LBRACK] = ACTIONS(198),
    [anon_sym_LBRACE] = ACTIONS(200),
    [anon_sym_SLASH] = ACTIONS(202),
    [anon_sym_Tuple_DOTnew] = ACTIONS(204),
    [anon_sym_BQUOTE] = ACTIONS(206),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(208),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(39),
    [anon_sym_AT] = ACTIONS(41),
    [anon_sym_AT_AT] = ACTIONS(43),
    [anon_sym___LINE__] = ACTIONS(210),
    [anon_sym___END_LINE__] = ACTIONS(210),
    [anon_sym___FILE__] = ACTIONS(210),
    [anon_sym___DIR__] = ACTIONS(210),
    [aux_sym_constant_token1] = ACTIONS(212),
  },
  [21] = {
    [sym__expression] = STATE(115),
    [sym_bool] = STATE(115),
    [sym_float] = STATE(115),
    [sym_integer] = STATE(115),
    [sym_symbol] = STATE(115),
    [sym_char] = STATE(115),
    [sym_string] = STATE(115),
    [sym_array] = STATE(115),
    [sym_hash] = STATE(115),
    [sym_index_expression] = STATE(98),
    [sym_regex] = STATE(115),
    [sym_tuple] = STATE(115),
    [sym_namedTupleLiteral] = STATE(115),
    [sym_commandLiteral] = STATE(115),
    [sym_local_variable] = STATE(190),
    [sym_instance_variable] = STATE(190),
    [sym_class_variable] = STATE(190),
    [sym_constant] = STATE(41),
    [sym__variable] = STATE(190),
    [sym_assignment] = STATE(115),
    [sym_nil] = ACTIONS(228),
    [anon_sym_true] = ACTIONS(166),
    [anon_sym_false] = ACTIONS(166),
    [aux_sym_float_token1] = ACTIONS(55),
    [aux_sym_float_token2] = ACTIONS(57),
    [aux_sym_float_token3] = ACTIONS(57),
    [aux_sym_integer_token1] = ACTIONS(59),
    [aux_sym_integer_token2] = ACTIONS(59),
    [aux_sym_integer_token3] = ACTIONS(59),
    [aux_sym_integer_token4] = ACTIONS(61),
    [anon_sym_COLON] = ACTIONS(174),
    [anon_sym_DQUOTE] = ACTIONS(176),
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
    [anon_sym___LINE__] = ACTIONS(170),
    [anon_sym___END_LINE__] = ACTIONS(170),
    [anon_sym___FILE__] = ACTIONS(170),
    [anon_sym___DIR__] = ACTIONS(170),
    [aux_sym_constant_token1] = ACTIONS(87),
  },
  [22] = {
    [sym__expression] = STATE(209),
    [sym_bool] = STATE(209),
    [sym_float] = STATE(209),
    [sym_integer] = STATE(209),
    [sym_symbol] = STATE(209),
    [sym_char] = STATE(209),
    [sym_string] = STATE(209),
    [sym_array] = STATE(209),
    [sym_hash] = STATE(209),
    [sym_index_expression] = STATE(168),
    [sym_regex] = STATE(209),
    [sym_tuple] = STATE(209),
    [sym_namedTupleLiteral] = STATE(209),
    [sym_commandLiteral] = STATE(209),
    [sym_local_variable] = STATE(172),
    [sym_instance_variable] = STATE(172),
    [sym_class_variable] = STATE(172),
    [sym_constant] = STATE(41),
    [sym__variable] = STATE(172),
    [sym_assignment] = STATE(209),
    [sym_nil] = ACTIONS(238),
    [anon_sym_true] = ACTIONS(166),
    [anon_sym_false] = ACTIONS(166),
    [aux_sym_float_token1] = ACTIONS(55),
    [aux_sym_float_token2] = ACTIONS(57),
    [aux_sym_float_token3] = ACTIONS(57),
    [aux_sym_integer_token1] = ACTIONS(59),
    [aux_sym_integer_token2] = ACTIONS(59),
    [aux_sym_integer_token3] = ACTIONS(59),
    [aux_sym_integer_token4] = ACTIONS(61),
    [anon_sym_COLON] = ACTIONS(222),
    [anon_sym_DQUOTE] = ACTIONS(224),
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
    [anon_sym___LINE__] = ACTIONS(170),
    [anon_sym___END_LINE__] = ACTIONS(170),
    [anon_sym___FILE__] = ACTIONS(170),
    [anon_sym___DIR__] = ACTIONS(170),
    [aux_sym_constant_token1] = ACTIONS(87),
  },
  [23] = {
    [sym__expression] = STATE(123),
    [sym_bool] = STATE(123),
    [sym_float] = STATE(123),
    [sym_integer] = STATE(123),
    [sym_symbol] = STATE(123),
    [sym_char] = STATE(123),
    [sym_string] = STATE(123),
    [sym_array] = STATE(123),
    [sym_hash] = STATE(123),
    [sym_index_expression] = STATE(98),
    [sym_regex] = STATE(123),
    [sym_tuple] = STATE(123),
    [sym_namedTupleLiteral] = STATE(123),
    [sym_commandLiteral] = STATE(123),
    [sym_local_variable] = STATE(190),
    [sym_instance_variable] = STATE(190),
    [sym_class_variable] = STATE(190),
    [sym_constant] = STATE(41),
    [sym__variable] = STATE(190),
    [sym_assignment] = STATE(123),
    [sym_nil] = ACTIONS(240),
    [anon_sym_true] = ACTIONS(166),
    [anon_sym_false] = ACTIONS(166),
    [aux_sym_float_token1] = ACTIONS(55),
    [aux_sym_float_token2] = ACTIONS(57),
    [aux_sym_float_token3] = ACTIONS(57),
    [aux_sym_integer_token1] = ACTIONS(59),
    [aux_sym_integer_token2] = ACTIONS(59),
    [aux_sym_integer_token3] = ACTIONS(59),
    [aux_sym_integer_token4] = ACTIONS(61),
    [anon_sym_COLON] = ACTIONS(174),
    [anon_sym_DQUOTE] = ACTIONS(176),
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
    [anon_sym___LINE__] = ACTIONS(170),
    [anon_sym___END_LINE__] = ACTIONS(170),
    [anon_sym___FILE__] = ACTIONS(170),
    [anon_sym___DIR__] = ACTIONS(170),
    [aux_sym_constant_token1] = ACTIONS(87),
  },
  [24] = {
    [sym__expression] = STATE(161),
    [sym_bool] = STATE(161),
    [sym_float] = STATE(161),
    [sym_integer] = STATE(161),
    [sym_symbol] = STATE(161),
    [sym_char] = STATE(161),
    [sym_string] = STATE(161),
    [sym_array] = STATE(161),
    [sym_hash] = STATE(161),
    [sym_index_expression] = STATE(99),
    [sym_regex] = STATE(161),
    [sym_tuple] = STATE(161),
    [sym_namedTupleLiteral] = STATE(161),
    [sym_commandLiteral] = STATE(161),
    [sym_local_variable] = STATE(174),
    [sym_instance_variable] = STATE(174),
    [sym_class_variable] = STATE(174),
    [sym_constant] = STATE(41),
    [sym__variable] = STATE(174),
    [sym_assignment] = STATE(161),
    [sym_nil] = ACTIONS(242),
    [anon_sym_true] = ACTIONS(166),
    [anon_sym_false] = ACTIONS(166),
    [aux_sym_float_token1] = ACTIONS(55),
    [aux_sym_float_token2] = ACTIONS(57),
    [aux_sym_float_token3] = ACTIONS(57),
    [aux_sym_integer_token1] = ACTIONS(59),
    [aux_sym_integer_token2] = ACTIONS(59),
    [aux_sym_integer_token3] = ACTIONS(59),
    [aux_sym_integer_token4] = ACTIONS(61),
    [anon_sym_COLON] = ACTIONS(218),
    [anon_sym_DQUOTE] = ACTIONS(220),
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
    [anon_sym___LINE__] = ACTIONS(170),
    [anon_sym___END_LINE__] = ACTIONS(170),
    [anon_sym___FILE__] = ACTIONS(170),
    [anon_sym___DIR__] = ACTIONS(170),
    [aux_sym_constant_token1] = ACTIONS(87),
  },
  [25] = {
    [sym__expression] = STATE(167),
    [sym_bool] = STATE(167),
    [sym_float] = STATE(167),
    [sym_integer] = STATE(167),
    [sym_symbol] = STATE(167),
    [sym_char] = STATE(167),
    [sym_string] = STATE(167),
    [sym_array] = STATE(167),
    [sym_hash] = STATE(167),
    [sym_index_expression] = STATE(99),
    [sym_regex] = STATE(167),
    [sym_tuple] = STATE(167),
    [sym_namedTupleLiteral] = STATE(167),
    [sym_commandLiteral] = STATE(167),
    [sym_local_variable] = STATE(174),
    [sym_instance_variable] = STATE(174),
    [sym_class_variable] = STATE(174),
    [sym_constant] = STATE(41),
    [sym__variable] = STATE(174),
    [sym_assignment] = STATE(167),
    [sym_nil] = ACTIONS(244),
    [anon_sym_true] = ACTIONS(166),
    [anon_sym_false] = ACTIONS(166),
    [aux_sym_float_token1] = ACTIONS(55),
    [aux_sym_float_token2] = ACTIONS(57),
    [aux_sym_float_token3] = ACTIONS(57),
    [aux_sym_integer_token1] = ACTIONS(59),
    [aux_sym_integer_token2] = ACTIONS(59),
    [aux_sym_integer_token3] = ACTIONS(59),
    [aux_sym_integer_token4] = ACTIONS(61),
    [anon_sym_COLON] = ACTIONS(218),
    [anon_sym_DQUOTE] = ACTIONS(220),
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
    [anon_sym___LINE__] = ACTIONS(170),
    [anon_sym___END_LINE__] = ACTIONS(170),
    [anon_sym___FILE__] = ACTIONS(170),
    [anon_sym___DIR__] = ACTIONS(170),
    [aux_sym_constant_token1] = ACTIONS(87),
  },
  [26] = {
    [sym__expression] = STATE(109),
    [sym_bool] = STATE(109),
    [sym_float] = STATE(109),
    [sym_integer] = STATE(109),
    [sym_symbol] = STATE(109),
    [sym_char] = STATE(109),
    [sym_string] = STATE(109),
    [sym_array] = STATE(109),
    [sym_hash] = STATE(109),
    [sym_index_expression] = STATE(99),
    [sym_regex] = STATE(109),
    [sym_tuple] = STATE(109),
    [sym_namedTupleLiteral] = STATE(109),
    [sym_commandLiteral] = STATE(109),
    [sym_local_variable] = STATE(174),
    [sym_instance_variable] = STATE(174),
    [sym_class_variable] = STATE(174),
    [sym_constant] = STATE(41),
    [sym__variable] = STATE(174),
    [sym_assignment] = STATE(109),
    [sym_nil] = ACTIONS(246),
    [anon_sym_true] = ACTIONS(166),
    [anon_sym_false] = ACTIONS(166),
    [aux_sym_float_token1] = ACTIONS(55),
    [aux_sym_float_token2] = ACTIONS(57),
    [aux_sym_float_token3] = ACTIONS(57),
    [aux_sym_integer_token1] = ACTIONS(59),
    [aux_sym_integer_token2] = ACTIONS(59),
    [aux_sym_integer_token3] = ACTIONS(59),
    [aux_sym_integer_token4] = ACTIONS(61),
    [anon_sym_COLON] = ACTIONS(218),
    [anon_sym_DQUOTE] = ACTIONS(220),
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
    [anon_sym___LINE__] = ACTIONS(170),
    [anon_sym___END_LINE__] = ACTIONS(170),
    [anon_sym___FILE__] = ACTIONS(170),
    [anon_sym___DIR__] = ACTIONS(170),
    [aux_sym_constant_token1] = ACTIONS(87),
  },
  [27] = {
    [sym__expression] = STATE(213),
    [sym_bool] = STATE(213),
    [sym_float] = STATE(213),
    [sym_integer] = STATE(213),
    [sym_symbol] = STATE(213),
    [sym_char] = STATE(213),
    [sym_string] = STATE(213),
    [sym_array] = STATE(213),
    [sym_hash] = STATE(213),
    [sym_index_expression] = STATE(166),
    [sym_regex] = STATE(213),
    [sym_tuple] = STATE(213),
    [sym_namedTupleLiteral] = STATE(213),
    [sym_commandLiteral] = STATE(213),
    [sym_local_variable] = STATE(186),
    [sym_instance_variable] = STATE(186),
    [sym_class_variable] = STATE(186),
    [sym_constant] = STATE(128),
    [sym__variable] = STATE(186),
    [sym_assignment] = STATE(213),
    [sym_nil] = ACTIONS(248),
    [anon_sym_true] = ACTIONS(180),
    [anon_sym_false] = ACTIONS(180),
    [aux_sym_float_token1] = ACTIONS(182),
    [aux_sym_float_token2] = ACTIONS(184),
    [aux_sym_float_token3] = ACTIONS(184),
    [aux_sym_integer_token1] = ACTIONS(186),
    [aux_sym_integer_token2] = ACTIONS(186),
    [aux_sym_integer_token3] = ACTIONS(186),
    [aux_sym_integer_token4] = ACTIONS(188),
    [anon_sym_COLON] = ACTIONS(190),
    [anon_sym_DQUOTE] = ACTIONS(192),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(194),
    [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = ACTIONS(194),
    [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = ACTIONS(194),
    [anon_sym_SQUOTE_BSLASHa_SQUOTE] = ACTIONS(194),
    [anon_sym_SQUOTE_BSLASHb_SQUOTE] = ACTIONS(194),
    [anon_sym_SQUOTE_BSLASHe_SQUOTE] = ACTIONS(194),
    [anon_sym_SQUOTE_BSLASHf_SQUOTE] = ACTIONS(194),
    [anon_sym_SQUOTE_BSLASHn_SQUOTE] = ACTIONS(194),
    [anon_sym_SQUOTE_BSLASHr_SQUOTE] = ACTIONS(194),
    [anon_sym_SQUOTE_BSLASHt_SQUOTE] = ACTIONS(194),
    [anon_sym_SQUOTE_BSLASHv_SQUOTE] = ACTIONS(194),
    [aux_sym_char_token1] = ACTIONS(194),
    [aux_sym_char_token2] = ACTIONS(196),
    [anon_sym_LBRACK] = ACTIONS(198),
    [anon_sym_LBRACE] = ACTIONS(200),
    [anon_sym_SLASH] = ACTIONS(202),
    [anon_sym_Tuple_DOTnew] = ACTIONS(204),
    [anon_sym_BQUOTE] = ACTIONS(206),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(208),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(39),
    [anon_sym_AT] = ACTIONS(41),
    [anon_sym_AT_AT] = ACTIONS(43),
    [anon_sym___LINE__] = ACTIONS(210),
    [anon_sym___END_LINE__] = ACTIONS(210),
    [anon_sym___FILE__] = ACTIONS(210),
    [anon_sym___DIR__] = ACTIONS(210),
    [aux_sym_constant_token1] = ACTIONS(212),
  },
  [28] = {
    [sym__expression] = STATE(111),
    [sym_bool] = STATE(111),
    [sym_float] = STATE(111),
    [sym_integer] = STATE(111),
    [sym_symbol] = STATE(111),
    [sym_char] = STATE(111),
    [sym_string] = STATE(111),
    [sym_array] = STATE(111),
    [sym_hash] = STATE(111),
    [sym_index_expression] = STATE(99),
    [sym_regex] = STATE(111),
    [sym_tuple] = STATE(111),
    [sym_namedTupleLiteral] = STATE(111),
    [sym_commandLiteral] = STATE(111),
    [sym_local_variable] = STATE(174),
    [sym_instance_variable] = STATE(174),
    [sym_class_variable] = STATE(174),
    [sym_constant] = STATE(41),
    [sym__variable] = STATE(174),
    [sym_assignment] = STATE(111),
    [sym_nil] = ACTIONS(250),
    [anon_sym_true] = ACTIONS(166),
    [anon_sym_false] = ACTIONS(166),
    [aux_sym_float_token1] = ACTIONS(55),
    [aux_sym_float_token2] = ACTIONS(57),
    [aux_sym_float_token3] = ACTIONS(57),
    [aux_sym_integer_token1] = ACTIONS(59),
    [aux_sym_integer_token2] = ACTIONS(59),
    [aux_sym_integer_token3] = ACTIONS(59),
    [aux_sym_integer_token4] = ACTIONS(61),
    [anon_sym_COLON] = ACTIONS(218),
    [anon_sym_DQUOTE] = ACTIONS(220),
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
    [anon_sym___LINE__] = ACTIONS(170),
    [anon_sym___END_LINE__] = ACTIONS(170),
    [anon_sym___FILE__] = ACTIONS(170),
    [anon_sym___DIR__] = ACTIONS(170),
    [aux_sym_constant_token1] = ACTIONS(87),
  },
  [29] = {
    [sym__expression] = STATE(189),
    [sym_bool] = STATE(189),
    [sym_float] = STATE(189),
    [sym_integer] = STATE(189),
    [sym_symbol] = STATE(189),
    [sym_char] = STATE(189),
    [sym_string] = STATE(189),
    [sym_array] = STATE(189),
    [sym_hash] = STATE(189),
    [sym_index_expression] = STATE(151),
    [sym_regex] = STATE(189),
    [sym_tuple] = STATE(189),
    [sym_namedTupleLiteral] = STATE(189),
    [sym_commandLiteral] = STATE(189),
    [sym_local_variable] = STATE(177),
    [sym_instance_variable] = STATE(177),
    [sym_class_variable] = STATE(177),
    [sym_constant] = STATE(78),
    [sym__variable] = STATE(177),
    [sym_assignment] = STATE(189),
    [sym_nil] = ACTIONS(252),
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
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 7,
      aux_sym_float_token2,
      aux_sym_float_token3,
      aux_sym_integer_token4,
      aux_sym_char_token2,
      aux_sym_local_variable_token1,
      anon_sym_AT,
      aux_sym_constant_token1,
    ACTIONS(254), 33,
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
    ACTIONS(260), 1,
      anon_sym_DQUOTE,
    STATE(178), 1,
      sym__operator,
    ACTIONS(262), 7,
      anon_sym_STAR,
      anon_sym_EQ_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_LBRACK_RBRACK,
      anon_sym_BANG,
    ACTIONS(258), 20,
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
    ACTIONS(266), 1,
      anon_sym_DQUOTE,
    STATE(81), 1,
      sym__operator,
    ACTIONS(268), 7,
      anon_sym_STAR,
      anon_sym_EQ_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_LBRACK_RBRACK,
      anon_sym_BANG,
    ACTIONS(264), 20,
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
    ACTIONS(272), 1,
      anon_sym_DQUOTE,
    STATE(256), 1,
      sym__operator,
    ACTIONS(274), 7,
      anon_sym_STAR,
      anon_sym_EQ_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_LBRACK_RBRACK,
      anon_sym_BANG,
    ACTIONS(270), 20,
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
    ACTIONS(276), 1,
      anon_sym_DQUOTE,
    STATE(81), 1,
      sym__operator,
    ACTIONS(268), 7,
      anon_sym_STAR,
      anon_sym_EQ_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_LBRACK_RBRACK,
      anon_sym_BANG,
    ACTIONS(264), 20,
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
    ACTIONS(278), 1,
      anon_sym_DQUOTE,
    STATE(81), 1,
      sym__operator,
    ACTIONS(268), 7,
      anon_sym_STAR,
      anon_sym_EQ_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_LBRACK_RBRACK,
      anon_sym_BANG,
    ACTIONS(264), 20,
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
  [253] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_DQUOTE,
    STATE(81), 1,
      sym__operator,
    ACTIONS(268), 7,
      anon_sym_STAR,
      anon_sym_EQ_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_LBRACK_RBRACK,
      anon_sym_BANG,
    ACTIONS(264), 20,
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
  [294] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 1,
      aux_sym_identifier_token1,
    ACTIONS(286), 1,
      anon_sym_EQ,
    ACTIONS(284), 5,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
      anon_sym_LBRACK2,
  [311] = 3,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(290), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
    ACTIONS(288), 4,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [325] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      anon_sym_EQ,
    ACTIONS(294), 5,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
      anon_sym_LBRACK2,
  [339] = 3,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(290), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
    ACTIONS(298), 4,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [353] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 1,
      anon_sym_LBRACK2,
    ACTIONS(304), 1,
      anon_sym_EQ,
    ACTIONS(300), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [369] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 1,
      anon_sym_EQ,
    ACTIONS(284), 5,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
      anon_sym_LBRACK2,
  [383] = 3,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(290), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
    ACTIONS(298), 3,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [396] = 3,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(290), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
    ACTIONS(306), 3,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [409] = 4,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(308), 1,
      aux_sym_identifier_token1,
    ACTIONS(284), 2,
      aux_sym__statement_token1,
      anon_sym_LBRACK2,
    ACTIONS(286), 2,
      anon_sym_SEMI,
      anon_sym_EQ,
  [424] = 3,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(290), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
    ACTIONS(288), 3,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [437] = 3,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(290), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
    ACTIONS(310), 3,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [450] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      anon_sym_EQ,
    ACTIONS(312), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [463] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [473] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [483] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 1,
      anon_sym_COLON,
    ACTIONS(300), 3,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [495] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_COMMA,
    ACTIONS(324), 1,
      anon_sym_EQ_GT,
    ACTIONS(326), 1,
      anon_sym_RBRACE,
    STATE(127), 1,
      aux_sym_array_repeat1,
  [511] = 3,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(290), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
    ACTIONS(306), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [523] = 3,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(290), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
    ACTIONS(298), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [535] = 3,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(290), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
    ACTIONS(310), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [547] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      aux_sym_identifier_token1,
    ACTIONS(284), 3,
      anon_sym_LBRACK2,
      anon_sym_RBRACK2,
      anon_sym_EQ,
  [559] = 3,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(288), 2,
      anon_sym_SEMI,
      aux_sym__statement_token1,
    ACTIONS(290), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
  [571] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_COMMA,
    ACTIONS(330), 1,
      anon_sym_EQ_GT,
    ACTIONS(332), 1,
      anon_sym_RBRACE,
    STATE(96), 1,
      aux_sym_array_repeat1,
  [587] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [597] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [607] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [617] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [627] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [637] = 3,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(290), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
    ACTIONS(310), 2,
      anon_sym_SEMI,
      aux_sym__statement_token1,
  [649] = 3,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(294), 2,
      aux_sym__statement_token1,
      anon_sym_LBRACK2,
    ACTIONS(296), 2,
      anon_sym_SEMI,
      anon_sym_EQ,
  [661] = 3,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(290), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
    ACTIONS(298), 2,
      anon_sym_SEMI,
      aux_sym__statement_token1,
  [673] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [683] = 3,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(290), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
    ACTIONS(310), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [695] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [705] = 3,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(288), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(290), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
  [717] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [727] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [737] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [747] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      anon_sym_COLON,
    ACTIONS(300), 3,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [759] = 3,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(290), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
    ACTIONS(298), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [771] = 3,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(290), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
    ACTIONS(306), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [783] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 1,
      aux_sym_identifier_token1,
    ACTIONS(358), 1,
      anon_sym_DQUOTE,
    STATE(208), 2,
      sym_identifier,
      sym_string,
  [797] = 5,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(300), 1,
      aux_sym__statement_token1,
    ACTIONS(302), 1,
      anon_sym_LBRACK2,
    ACTIONS(304), 1,
      anon_sym_EQ,
    ACTIONS(360), 1,
      anon_sym_SEMI,
  [813] = 3,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(290), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
    ACTIONS(306), 2,
      anon_sym_SEMI,
      aux_sym__statement_token1,
  [825] = 3,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(288), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(290), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
  [837] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [847] = 3,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(284), 2,
      aux_sym__statement_token1,
      anon_sym_LBRACK2,
    ACTIONS(286), 2,
      anon_sym_SEMI,
      anon_sym_EQ,
  [859] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_COLON,
    ACTIONS(300), 3,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [871] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_COMMA,
    ACTIONS(366), 1,
      anon_sym_EQ_GT,
    ACTIONS(368), 1,
      anon_sym_RBRACE,
    STATE(159), 1,
      aux_sym_array_repeat1,
  [887] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [897] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [907] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [917] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [927] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [937] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 1,
      anon_sym_EQ,
    ACTIONS(300), 3,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [949] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_COMMA,
    ACTIONS(384), 1,
      anon_sym_RBRACE,
    STATE(92), 1,
      aux_sym_namedTupleLiteral_repeat1,
  [962] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      anon_sym_COMMA,
    ACTIONS(389), 1,
      anon_sym_RBRACE,
    STATE(92), 1,
      aux_sym_namedTupleLiteral_repeat1,
  [975] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 1,
      anon_sym_COMMA,
    ACTIONS(394), 1,
      anon_sym_RBRACE,
    STATE(93), 1,
      aux_sym_hash_repeat1,
  [988] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 1,
      anon_sym_COMMA,
    ACTIONS(398), 1,
      anon_sym_RBRACE,
    STATE(93), 1,
      aux_sym_hash_repeat1,
  [1001] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 1,
      anon_sym_COMMA,
    ACTIONS(400), 1,
      anon_sym_RBRACE,
    STATE(94), 1,
      aux_sym_hash_repeat1,
  [1014] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_COMMA,
    ACTIONS(402), 1,
      anon_sym_RBRACE,
    STATE(141), 1,
      aux_sym_array_repeat1,
  [1027] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_COMMA,
    ACTIONS(404), 1,
      anon_sym_RBRACE,
    STATE(91), 1,
      aux_sym_namedTupleLiteral_repeat1,
  [1040] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(406), 1,
      anon_sym_EQ,
    ACTIONS(300), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1051] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      anon_sym_EQ,
    ACTIONS(300), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1062] = 4,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(410), 1,
      anon_sym_DQUOTE,
    ACTIONS(412), 1,
      aux_sym_symbol_token1,
    STATE(121), 1,
      aux_sym_symbol_repeat1,
  [1075] = 4,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_DQUOTE,
    ACTIONS(416), 1,
      aux_sym_symbol_token1,
    STATE(104), 1,
      aux_sym_symbol_repeat1,
  [1088] = 4,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(418), 1,
      anon_sym_DQUOTE,
    ACTIONS(420), 1,
      aux_sym_symbol_token1,
    STATE(106), 1,
      aux_sym_symbol_repeat1,
  [1101] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_COMMA,
    ACTIONS(422), 1,
      anon_sym_RBRACE,
    STATE(92), 1,
      aux_sym_namedTupleLiteral_repeat1,
  [1114] = 4,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(424), 1,
      anon_sym_DQUOTE,
    ACTIONS(426), 1,
      aux_sym_symbol_token1,
    STATE(133), 1,
      aux_sym_symbol_repeat1,
  [1127] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 1,
      anon_sym_COMMA,
    ACTIONS(428), 1,
      anon_sym_RBRACE,
    STATE(93), 1,
      aux_sym_hash_repeat1,
  [1140] = 4,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(426), 1,
      aux_sym_symbol_token1,
    ACTIONS(430), 1,
      anon_sym_DQUOTE,
    STATE(133), 1,
      aux_sym_symbol_repeat1,
  [1153] = 4,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(432), 1,
      anon_sym_DQUOTE,
    ACTIONS(434), 1,
      aux_sym_symbol_token1,
    STATE(112), 1,
      aux_sym_symbol_repeat1,
  [1166] = 3,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(312), 1,
      aux_sym__statement_token1,
    ACTIONS(314), 2,
      anon_sym_SEMI,
      anon_sym_EQ,
  [1177] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_COMMA,
    ACTIONS(436), 1,
      anon_sym_RBRACE,
    STATE(103), 1,
      aux_sym_namedTupleLiteral_repeat1,
  [1190] = 4,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(438), 1,
      anon_sym_DQUOTE,
    ACTIONS(440), 1,
      aux_sym_symbol_token1,
    STATE(114), 1,
      aux_sym_symbol_repeat1,
  [1203] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 1,
      anon_sym_COMMA,
    ACTIONS(442), 1,
      anon_sym_RBRACE,
    STATE(105), 1,
      aux_sym_hash_repeat1,
  [1216] = 4,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(426), 1,
      aux_sym_symbol_token1,
    ACTIONS(444), 1,
      anon_sym_DQUOTE,
    STATE(133), 1,
      aux_sym_symbol_repeat1,
  [1229] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 1,
      anon_sym_COMMA,
    ACTIONS(449), 1,
      anon_sym_RBRACK,
    STATE(113), 1,
      aux_sym_array_repeat1,
  [1242] = 4,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(426), 1,
      aux_sym_symbol_token1,
    ACTIONS(451), 1,
      anon_sym_DQUOTE,
    STATE(133), 1,
      aux_sym_symbol_repeat1,
  [1255] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [1264] = 4,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(453), 1,
      anon_sym_DQUOTE,
    ACTIONS(455), 1,
      aux_sym_symbol_token1,
    STATE(118), 1,
      aux_sym_symbol_repeat1,
  [1277] = 4,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(457), 1,
      anon_sym_DQUOTE,
    ACTIONS(459), 1,
      aux_sym_symbol_token1,
    STATE(119), 1,
      aux_sym_symbol_repeat1,
  [1290] = 4,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(426), 1,
      aux_sym_symbol_token1,
    ACTIONS(461), 1,
      anon_sym_DQUOTE,
    STATE(133), 1,
      aux_sym_symbol_repeat1,
  [1303] = 4,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(426), 1,
      aux_sym_symbol_token1,
    ACTIONS(463), 1,
      anon_sym_DQUOTE,
    STATE(133), 1,
      aux_sym_symbol_repeat1,
  [1316] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 1,
      anon_sym_COMMA,
    ACTIONS(467), 1,
      anon_sym_RBRACK,
    STATE(113), 1,
      aux_sym_array_repeat1,
  [1329] = 4,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(426), 1,
      aux_sym_symbol_token1,
    ACTIONS(469), 1,
      anon_sym_DQUOTE,
    STATE(133), 1,
      aux_sym_symbol_repeat1,
  [1342] = 4,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(471), 1,
      anon_sym_DQUOTE,
    ACTIONS(473), 1,
      aux_sym_symbol_token1,
    STATE(126), 1,
      aux_sym_symbol_repeat1,
  [1355] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 1,
      anon_sym_COMMA,
    ACTIONS(475), 1,
      anon_sym_RBRACK,
    STATE(120), 1,
      aux_sym_array_repeat1,
  [1368] = 4,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(426), 1,
      aux_sym_symbol_token1,
    ACTIONS(477), 1,
      anon_sym_DQUOTE,
    STATE(133), 1,
      aux_sym_symbol_repeat1,
  [1381] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 3,
      anon_sym_LBRACK2,
      anon_sym_RBRACK2,
      anon_sym_EQ,
  [1390] = 4,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(426), 1,
      aux_sym_symbol_token1,
    ACTIONS(479), 1,
      anon_sym_DQUOTE,
    STATE(133), 1,
      aux_sym_symbol_repeat1,
  [1403] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_COMMA,
    ACTIONS(481), 1,
      anon_sym_RBRACE,
    STATE(141), 1,
      aux_sym_array_repeat1,
  [1416] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      anon_sym_RBRACK2,
    ACTIONS(302), 2,
      anon_sym_LBRACK2,
      anon_sym_EQ,
  [1427] = 4,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(483), 1,
      anon_sym_DQUOTE,
    ACTIONS(485), 1,
      aux_sym_symbol_token1,
    STATE(131), 1,
      aux_sym_symbol_repeat1,
  [1440] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 3,
      anon_sym_LBRACK2,
      anon_sym_RBRACK2,
      anon_sym_EQ,
  [1449] = 4,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(426), 1,
      aux_sym_symbol_token1,
    ACTIONS(487), 1,
      anon_sym_DQUOTE,
    STATE(133), 1,
      aux_sym_symbol_repeat1,
  [1462] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 1,
      anon_sym_COMMA,
    ACTIONS(489), 1,
      anon_sym_RBRACK,
    STATE(113), 1,
      aux_sym_array_repeat1,
  [1475] = 3,
    ACTIONS(292), 1,
      sym_comment,
    STATE(133), 1,
      aux_sym_symbol_repeat1,
    ACTIONS(491), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
  [1486] = 4,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(426), 1,
      aux_sym_symbol_token1,
    ACTIONS(494), 1,
      anon_sym_DQUOTE,
    STATE(133), 1,
      aux_sym_symbol_repeat1,
  [1499] = 3,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(496), 1,
      anon_sym_RBRACK2,
    ACTIONS(290), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
  [1510] = 3,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(498), 1,
      anon_sym_RBRACK2,
    ACTIONS(290), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
  [1521] = 3,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(500), 1,
      anon_sym_RBRACK2,
    ACTIONS(290), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
  [1532] = 3,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(502), 1,
      anon_sym_RBRACK2,
    ACTIONS(290), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
  [1543] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(504), 1,
      aux_sym_identifier_token1,
    ACTIONS(506), 2,
      anon_sym_LBRACK2,
      anon_sym_EQ,
  [1554] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(508), 1,
      aux_sym_identifier_token1,
    ACTIONS(510), 2,
      anon_sym_LBRACK2,
      anon_sym_EQ,
  [1565] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 1,
      anon_sym_RBRACE,
    ACTIONS(512), 1,
      anon_sym_COMMA,
    STATE(141), 1,
      aux_sym_array_repeat1,
  [1578] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 1,
      anon_sym_COMMA,
    ACTIONS(515), 1,
      anon_sym_RBRACK,
    STATE(132), 1,
      aux_sym_array_repeat1,
  [1591] = 4,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(426), 1,
      aux_sym_symbol_token1,
    ACTIONS(517), 1,
      anon_sym_DQUOTE,
    STATE(133), 1,
      aux_sym_symbol_repeat1,
  [1604] = 3,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(306), 1,
      anon_sym_EQ_GT,
    ACTIONS(290), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
  [1615] = 4,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(519), 1,
      anon_sym_DQUOTE,
    ACTIONS(521), 1,
      aux_sym_symbol_token1,
    STATE(134), 1,
      aux_sym_symbol_repeat1,
  [1628] = 3,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(310), 1,
      anon_sym_EQ_GT,
    ACTIONS(290), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
  [1639] = 3,
    ACTIONS(288), 1,
      anon_sym_EQ_GT,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(290), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
  [1650] = 3,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(298), 1,
      anon_sym_EQ_GT,
    ACTIONS(290), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
  [1661] = 3,
    ACTIONS(288), 1,
      anon_sym_COLON,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(290), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
  [1672] = 3,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(298), 1,
      anon_sym_COLON,
    ACTIONS(290), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
  [1683] = 4,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(300), 1,
      aux_sym__statement_token1,
    ACTIONS(360), 1,
      anon_sym_SEMI,
    ACTIONS(523), 1,
      anon_sym_EQ,
  [1696] = 4,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(525), 1,
      anon_sym_DQUOTE,
    ACTIONS(527), 1,
      aux_sym_symbol_token1,
    STATE(154), 1,
      aux_sym_symbol_repeat1,
  [1709] = 4,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(529), 1,
      anon_sym_DQUOTE,
    ACTIONS(531), 1,
      aux_sym_symbol_token1,
    STATE(157), 1,
      aux_sym_symbol_repeat1,
  [1722] = 4,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(426), 1,
      aux_sym_symbol_token1,
    ACTIONS(533), 1,
      anon_sym_DQUOTE,
    STATE(133), 1,
      aux_sym_symbol_repeat1,
  [1735] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 1,
      anon_sym_COMMA,
    ACTIONS(535), 1,
      anon_sym_RBRACK,
    STATE(158), 1,
      aux_sym_array_repeat1,
  [1748] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(537), 1,
      aux_sym_identifier_token1,
    ACTIONS(539), 2,
      anon_sym_LBRACK2,
      anon_sym_EQ,
  [1759] = 4,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(426), 1,
      aux_sym_symbol_token1,
    ACTIONS(541), 1,
      anon_sym_DQUOTE,
    STATE(133), 1,
      aux_sym_symbol_repeat1,
  [1772] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 1,
      anon_sym_COMMA,
    ACTIONS(543), 1,
      anon_sym_RBRACK,
    STATE(113), 1,
      aux_sym_array_repeat1,
  [1785] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_COMMA,
    ACTIONS(545), 1,
      anon_sym_RBRACE,
    STATE(141), 1,
      aux_sym_array_repeat1,
  [1798] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 1,
      anon_sym_COMMA,
    ACTIONS(547), 1,
      anon_sym_RBRACE,
    STATE(162), 1,
      aux_sym_hash_repeat1,
  [1811] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_COMMA,
    ACTIONS(549), 1,
      anon_sym_RBRACE,
    STATE(163), 1,
      aux_sym_namedTupleLiteral_repeat1,
  [1824] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 1,
      anon_sym_COMMA,
    ACTIONS(551), 1,
      anon_sym_RBRACE,
    STATE(93), 1,
      aux_sym_hash_repeat1,
  [1837] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_COMMA,
    ACTIONS(553), 1,
      anon_sym_RBRACE,
    STATE(92), 1,
      aux_sym_namedTupleLiteral_repeat1,
  [1850] = 4,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(555), 1,
      anon_sym_DQUOTE,
    ACTIONS(557), 1,
      aux_sym_symbol_token1,
    STATE(143), 1,
      aux_sym_symbol_repeat1,
  [1863] = 4,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(559), 1,
      anon_sym_DQUOTE,
    ACTIONS(561), 1,
      aux_sym_symbol_token1,
    STATE(124), 1,
      aux_sym_symbol_repeat1,
  [1876] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      anon_sym_RBRACK2,
    ACTIONS(563), 1,
      anon_sym_EQ,
  [1886] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(565), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1894] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      anon_sym_EQ_GT,
    ACTIONS(567), 1,
      anon_sym_EQ,
  [1904] = 3,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(372), 1,
      aux_sym__statement_token1,
    ACTIONS(569), 1,
      anon_sym_SEMI,
  [1914] = 3,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(374), 1,
      aux_sym__statement_token1,
    ACTIONS(571), 1,
      anon_sym_SEMI,
  [1924] = 3,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(376), 1,
      aux_sym__statement_token1,
    ACTIONS(573), 1,
      anon_sym_SEMI,
  [1934] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(575), 1,
      anon_sym_LBRACK2,
    ACTIONS(577), 1,
      anon_sym_EQ,
  [1944] = 3,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(378), 1,
      aux_sym__statement_token1,
    ACTIONS(579), 1,
      anon_sym_SEMI,
  [1954] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      anon_sym_EQ,
    ACTIONS(575), 1,
      anon_sym_LBRACK2,
  [1964] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 2,
      anon_sym_RBRACK2,
      anon_sym_EQ,
  [1972] = 3,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(581), 1,
      anon_sym_SEMI,
    ACTIONS(583), 1,
      aux_sym__statement_token1,
  [1982] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(585), 1,
      anon_sym_LBRACK2,
    ACTIONS(587), 1,
      anon_sym_EQ,
  [1992] = 3,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(362), 1,
      aux_sym__statement_token1,
    ACTIONS(589), 1,
      anon_sym_SEMI,
  [2002] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(575), 1,
      anon_sym_LBRACK2,
    ACTIONS(591), 1,
      anon_sym_EQ,
  [2012] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(593), 2,
      anon_sym_LBRACK2,
      anon_sym_EQ,
  [2020] = 3,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(352), 1,
      aux_sym__statement_token1,
    ACTIONS(595), 1,
      anon_sym_SEMI,
  [2030] = 3,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(350), 1,
      aux_sym__statement_token1,
    ACTIONS(597), 1,
      anon_sym_SEMI,
  [2040] = 3,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(348), 1,
      aux_sym__statement_token1,
    ACTIONS(599), 1,
      anon_sym_SEMI,
  [2050] = 3,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(318), 1,
      aux_sym__statement_token1,
    ACTIONS(601), 1,
      anon_sym_SEMI,
  [2060] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(603), 2,
      anon_sym_LBRACK2,
      anon_sym_EQ,
  [2068] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 1,
      anon_sym_EQ,
    ACTIONS(605), 1,
      anon_sym_LBRACK2,
  [2078] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(607), 2,
      anon_sym_LBRACK2,
      anon_sym_EQ,
  [2086] = 3,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(370), 1,
      aux_sym__statement_token1,
    ACTIONS(609), 1,
      anon_sym_SEMI,
  [2096] = 3,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(346), 1,
      aux_sym__statement_token1,
    ACTIONS(611), 1,
      anon_sym_SEMI,
  [2106] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(406), 1,
      anon_sym_EQ,
    ACTIONS(575), 1,
      anon_sym_LBRACK2,
  [2116] = 3,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(342), 1,
      aux_sym__statement_token1,
    ACTIONS(613), 1,
      anon_sym_SEMI,
  [2126] = 3,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(334), 1,
      aux_sym__statement_token1,
    ACTIONS(615), 1,
      anon_sym_SEMI,
  [2136] = 3,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(344), 1,
      aux_sym__statement_token1,
    ACTIONS(617), 1,
      anon_sym_SEMI,
  [2146] = 3,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(336), 1,
      aux_sym__statement_token1,
    ACTIONS(619), 1,
      anon_sym_SEMI,
  [2156] = 3,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(316), 1,
      aux_sym__statement_token1,
    ACTIONS(621), 1,
      anon_sym_SEMI,
  [2166] = 3,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(338), 1,
      aux_sym__statement_token1,
    ACTIONS(623), 1,
      anon_sym_SEMI,
  [2176] = 3,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(340), 1,
      aux_sym__statement_token1,
    ACTIONS(625), 1,
      anon_sym_SEMI,
  [2186] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(627), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2194] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 1,
      anon_sym_RBRACK2,
  [2201] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 1,
      anon_sym_COLON,
  [2208] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(629), 1,
      anon_sym_BQUOTE,
  [2215] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(629), 1,
      anon_sym_RPAREN,
  [2222] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 1,
      anon_sym_RBRACK2,
  [2229] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      anon_sym_RBRACK2,
  [2236] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      anon_sym_RBRACK2,
  [2243] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(631), 1,
      anon_sym_RBRACK2,
  [2250] = 2,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(633), 1,
      aux_sym_hash_token1,
  [2257] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(635), 1,
      anon_sym_COLON,
  [2264] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(637), 1,
      anon_sym_EQ_GT,
  [2271] = 2,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(639), 1,
      aux_sym_hash_token1,
  [2278] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(641), 1,
      anon_sym_EQ_GT,
  [2285] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(643), 1,
      anon_sym_RBRACK2,
  [2292] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 1,
      anon_sym_RBRACK2,
  [2299] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 1,
      anon_sym_RBRACK2,
  [2306] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      anon_sym_RBRACK2,
  [2313] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 1,
      anon_sym_RBRACK2,
  [2320] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 1,
      anon_sym_RBRACK2,
  [2327] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 1,
      anon_sym_RBRACK2,
  [2334] = 2,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(645), 1,
      aux_sym_hash_token1,
  [2341] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_RBRACK2,
  [2348] = 2,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(647), 1,
      aux_sym_regex_token1,
  [2355] = 2,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(649), 1,
      aux_sym_commandLiteral_token1,
  [2362] = 2,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(651), 1,
      aux_sym_commandLiteral_token2,
  [2369] = 2,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(653), 1,
      aux_sym_hash_token1,
  [2376] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(655), 1,
      anon_sym_RPAREN,
  [2383] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(655), 1,
      anon_sym_BQUOTE,
  [2390] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(657), 1,
      anon_sym_SLASH,
  [2397] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(659), 1,
      anon_sym_SLASH,
  [2404] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(661), 1,
      anon_sym_EQ_GT,
  [2411] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(663), 1,
      anon_sym_of,
  [2418] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(665), 1,
      anon_sym_COLON,
  [2425] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 1,
      anon_sym_RBRACK2,
  [2432] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 1,
      anon_sym_RBRACK2,
  [2439] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(667), 1,
      anon_sym_RBRACK2,
  [2446] = 2,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(669), 1,
      aux_sym_regex_token1,
  [2453] = 2,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(671), 1,
      aux_sym_commandLiteral_token1,
  [2460] = 2,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(673), 1,
      aux_sym_commandLiteral_token2,
  [2467] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 1,
      anon_sym_RBRACK2,
  [2474] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(675), 1,
      ts_builtin_sym_end,
  [2481] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(677), 1,
      aux_sym_local_variable_token1,
  [2488] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(679), 1,
      anon_sym_EQ_GT,
  [2495] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(681), 1,
      aux_sym_local_variable_token1,
  [2502] = 2,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(683), 1,
      aux_sym_commandLiteral_token2,
  [2509] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_RBRACK2,
  [2516] = 2,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(685), 1,
      aux_sym_commandLiteral_token1,
  [2523] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(687), 1,
      anon_sym_RPAREN,
  [2530] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(687), 1,
      anon_sym_BQUOTE,
  [2537] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_COLON,
  [2544] = 2,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(689), 1,
      aux_sym_regex_token1,
  [2551] = 2,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(691), 1,
      aux_sym_hash_token1,
  [2558] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(693), 1,
      anon_sym_SLASH,
  [2565] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      anon_sym_COLON,
  [2572] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      anon_sym_RBRACK2,
  [2579] = 2,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(695), 1,
      aux_sym_hash_token1,
  [2586] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      anon_sym_RBRACK2,
  [2593] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 1,
      anon_sym_RBRACK2,
  [2600] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(697), 1,
      anon_sym_of,
  [2607] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(699), 1,
      anon_sym_of,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(30)] = 0,
  [SMALL_STATE(31)] = 48,
  [SMALL_STATE(32)] = 89,
  [SMALL_STATE(33)] = 130,
  [SMALL_STATE(34)] = 171,
  [SMALL_STATE(35)] = 212,
  [SMALL_STATE(36)] = 253,
  [SMALL_STATE(37)] = 294,
  [SMALL_STATE(38)] = 311,
  [SMALL_STATE(39)] = 325,
  [SMALL_STATE(40)] = 339,
  [SMALL_STATE(41)] = 353,
  [SMALL_STATE(42)] = 369,
  [SMALL_STATE(43)] = 383,
  [SMALL_STATE(44)] = 396,
  [SMALL_STATE(45)] = 409,
  [SMALL_STATE(46)] = 424,
  [SMALL_STATE(47)] = 437,
  [SMALL_STATE(48)] = 450,
  [SMALL_STATE(49)] = 463,
  [SMALL_STATE(50)] = 473,
  [SMALL_STATE(51)] = 483,
  [SMALL_STATE(52)] = 495,
  [SMALL_STATE(53)] = 511,
  [SMALL_STATE(54)] = 523,
  [SMALL_STATE(55)] = 535,
  [SMALL_STATE(56)] = 547,
  [SMALL_STATE(57)] = 559,
  [SMALL_STATE(58)] = 571,
  [SMALL_STATE(59)] = 587,
  [SMALL_STATE(60)] = 597,
  [SMALL_STATE(61)] = 607,
  [SMALL_STATE(62)] = 617,
  [SMALL_STATE(63)] = 627,
  [SMALL_STATE(64)] = 637,
  [SMALL_STATE(65)] = 649,
  [SMALL_STATE(66)] = 661,
  [SMALL_STATE(67)] = 673,
  [SMALL_STATE(68)] = 683,
  [SMALL_STATE(69)] = 695,
  [SMALL_STATE(70)] = 705,
  [SMALL_STATE(71)] = 717,
  [SMALL_STATE(72)] = 727,
  [SMALL_STATE(73)] = 737,
  [SMALL_STATE(74)] = 747,
  [SMALL_STATE(75)] = 759,
  [SMALL_STATE(76)] = 771,
  [SMALL_STATE(77)] = 783,
  [SMALL_STATE(78)] = 797,
  [SMALL_STATE(79)] = 813,
  [SMALL_STATE(80)] = 825,
  [SMALL_STATE(81)] = 837,
  [SMALL_STATE(82)] = 847,
  [SMALL_STATE(83)] = 859,
  [SMALL_STATE(84)] = 871,
  [SMALL_STATE(85)] = 887,
  [SMALL_STATE(86)] = 897,
  [SMALL_STATE(87)] = 907,
  [SMALL_STATE(88)] = 917,
  [SMALL_STATE(89)] = 927,
  [SMALL_STATE(90)] = 937,
  [SMALL_STATE(91)] = 949,
  [SMALL_STATE(92)] = 962,
  [SMALL_STATE(93)] = 975,
  [SMALL_STATE(94)] = 988,
  [SMALL_STATE(95)] = 1001,
  [SMALL_STATE(96)] = 1014,
  [SMALL_STATE(97)] = 1027,
  [SMALL_STATE(98)] = 1040,
  [SMALL_STATE(99)] = 1051,
  [SMALL_STATE(100)] = 1062,
  [SMALL_STATE(101)] = 1075,
  [SMALL_STATE(102)] = 1088,
  [SMALL_STATE(103)] = 1101,
  [SMALL_STATE(104)] = 1114,
  [SMALL_STATE(105)] = 1127,
  [SMALL_STATE(106)] = 1140,
  [SMALL_STATE(107)] = 1153,
  [SMALL_STATE(108)] = 1166,
  [SMALL_STATE(109)] = 1177,
  [SMALL_STATE(110)] = 1190,
  [SMALL_STATE(111)] = 1203,
  [SMALL_STATE(112)] = 1216,
  [SMALL_STATE(113)] = 1229,
  [SMALL_STATE(114)] = 1242,
  [SMALL_STATE(115)] = 1255,
  [SMALL_STATE(116)] = 1264,
  [SMALL_STATE(117)] = 1277,
  [SMALL_STATE(118)] = 1290,
  [SMALL_STATE(119)] = 1303,
  [SMALL_STATE(120)] = 1316,
  [SMALL_STATE(121)] = 1329,
  [SMALL_STATE(122)] = 1342,
  [SMALL_STATE(123)] = 1355,
  [SMALL_STATE(124)] = 1368,
  [SMALL_STATE(125)] = 1381,
  [SMALL_STATE(126)] = 1390,
  [SMALL_STATE(127)] = 1403,
  [SMALL_STATE(128)] = 1416,
  [SMALL_STATE(129)] = 1427,
  [SMALL_STATE(130)] = 1440,
  [SMALL_STATE(131)] = 1449,
  [SMALL_STATE(132)] = 1462,
  [SMALL_STATE(133)] = 1475,
  [SMALL_STATE(134)] = 1486,
  [SMALL_STATE(135)] = 1499,
  [SMALL_STATE(136)] = 1510,
  [SMALL_STATE(137)] = 1521,
  [SMALL_STATE(138)] = 1532,
  [SMALL_STATE(139)] = 1543,
  [SMALL_STATE(140)] = 1554,
  [SMALL_STATE(141)] = 1565,
  [SMALL_STATE(142)] = 1578,
  [SMALL_STATE(143)] = 1591,
  [SMALL_STATE(144)] = 1604,
  [SMALL_STATE(145)] = 1615,
  [SMALL_STATE(146)] = 1628,
  [SMALL_STATE(147)] = 1639,
  [SMALL_STATE(148)] = 1650,
  [SMALL_STATE(149)] = 1661,
  [SMALL_STATE(150)] = 1672,
  [SMALL_STATE(151)] = 1683,
  [SMALL_STATE(152)] = 1696,
  [SMALL_STATE(153)] = 1709,
  [SMALL_STATE(154)] = 1722,
  [SMALL_STATE(155)] = 1735,
  [SMALL_STATE(156)] = 1748,
  [SMALL_STATE(157)] = 1759,
  [SMALL_STATE(158)] = 1772,
  [SMALL_STATE(159)] = 1785,
  [SMALL_STATE(160)] = 1798,
  [SMALL_STATE(161)] = 1811,
  [SMALL_STATE(162)] = 1824,
  [SMALL_STATE(163)] = 1837,
  [SMALL_STATE(164)] = 1850,
  [SMALL_STATE(165)] = 1863,
  [SMALL_STATE(166)] = 1876,
  [SMALL_STATE(167)] = 1886,
  [SMALL_STATE(168)] = 1894,
  [SMALL_STATE(169)] = 1904,
  [SMALL_STATE(170)] = 1914,
  [SMALL_STATE(171)] = 1924,
  [SMALL_STATE(172)] = 1934,
  [SMALL_STATE(173)] = 1944,
  [SMALL_STATE(174)] = 1954,
  [SMALL_STATE(175)] = 1964,
  [SMALL_STATE(176)] = 1972,
  [SMALL_STATE(177)] = 1982,
  [SMALL_STATE(178)] = 1992,
  [SMALL_STATE(179)] = 2002,
  [SMALL_STATE(180)] = 2012,
  [SMALL_STATE(181)] = 2020,
  [SMALL_STATE(182)] = 2030,
  [SMALL_STATE(183)] = 2040,
  [SMALL_STATE(184)] = 2050,
  [SMALL_STATE(185)] = 2060,
  [SMALL_STATE(186)] = 2068,
  [SMALL_STATE(187)] = 2078,
  [SMALL_STATE(188)] = 2086,
  [SMALL_STATE(189)] = 2096,
  [SMALL_STATE(190)] = 2106,
  [SMALL_STATE(191)] = 2116,
  [SMALL_STATE(192)] = 2126,
  [SMALL_STATE(193)] = 2136,
  [SMALL_STATE(194)] = 2146,
  [SMALL_STATE(195)] = 2156,
  [SMALL_STATE(196)] = 2166,
  [SMALL_STATE(197)] = 2176,
  [SMALL_STATE(198)] = 2186,
  [SMALL_STATE(199)] = 2194,
  [SMALL_STATE(200)] = 2201,
  [SMALL_STATE(201)] = 2208,
  [SMALL_STATE(202)] = 2215,
  [SMALL_STATE(203)] = 2222,
  [SMALL_STATE(204)] = 2229,
  [SMALL_STATE(205)] = 2236,
  [SMALL_STATE(206)] = 2243,
  [SMALL_STATE(207)] = 2250,
  [SMALL_STATE(208)] = 2257,
  [SMALL_STATE(209)] = 2264,
  [SMALL_STATE(210)] = 2271,
  [SMALL_STATE(211)] = 2278,
  [SMALL_STATE(212)] = 2285,
  [SMALL_STATE(213)] = 2292,
  [SMALL_STATE(214)] = 2299,
  [SMALL_STATE(215)] = 2306,
  [SMALL_STATE(216)] = 2313,
  [SMALL_STATE(217)] = 2320,
  [SMALL_STATE(218)] = 2327,
  [SMALL_STATE(219)] = 2334,
  [SMALL_STATE(220)] = 2341,
  [SMALL_STATE(221)] = 2348,
  [SMALL_STATE(222)] = 2355,
  [SMALL_STATE(223)] = 2362,
  [SMALL_STATE(224)] = 2369,
  [SMALL_STATE(225)] = 2376,
  [SMALL_STATE(226)] = 2383,
  [SMALL_STATE(227)] = 2390,
  [SMALL_STATE(228)] = 2397,
  [SMALL_STATE(229)] = 2404,
  [SMALL_STATE(230)] = 2411,
  [SMALL_STATE(231)] = 2418,
  [SMALL_STATE(232)] = 2425,
  [SMALL_STATE(233)] = 2432,
  [SMALL_STATE(234)] = 2439,
  [SMALL_STATE(235)] = 2446,
  [SMALL_STATE(236)] = 2453,
  [SMALL_STATE(237)] = 2460,
  [SMALL_STATE(238)] = 2467,
  [SMALL_STATE(239)] = 2474,
  [SMALL_STATE(240)] = 2481,
  [SMALL_STATE(241)] = 2488,
  [SMALL_STATE(242)] = 2495,
  [SMALL_STATE(243)] = 2502,
  [SMALL_STATE(244)] = 2509,
  [SMALL_STATE(245)] = 2516,
  [SMALL_STATE(246)] = 2523,
  [SMALL_STATE(247)] = 2530,
  [SMALL_STATE(248)] = 2537,
  [SMALL_STATE(249)] = 2544,
  [SMALL_STATE(250)] = 2551,
  [SMALL_STATE(251)] = 2558,
  [SMALL_STATE(252)] = 2565,
  [SMALL_STATE(253)] = 2572,
  [SMALL_STATE(254)] = 2579,
  [SMALL_STATE(255)] = 2586,
  [SMALL_STATE(256)] = 2593,
  [SMALL_STATE(257)] = 2600,
  [SMALL_STATE(258)] = 2607,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(176),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(188),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(169),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(169),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(170),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(170),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(31),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(164),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(171),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(171),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(10),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(249),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(173),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(245),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(243),
  [139] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(156),
  [142] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(242),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(240),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(82),
  [151] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(45),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_symbol_repeat1, 1),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 2),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 2),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variable, 1),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variable, 1),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 3),
  [308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 4),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_expression, 4, .production_id = 2),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index_expression, 4, .production_id = 2),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 4),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commandLiteral, 3),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namedTupleLiteral, 6, .production_id = 4),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hash, 6, .production_id = 4),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hash, 6),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namedTupleLiteral, 5, .production_id = 3),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hash, 5, .production_id = 3),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 4),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3, .production_id = 1),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 3),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 3),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 2),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 1),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 1),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 1),
  [380] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [386] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_namedTupleLiteral_repeat1, 2, .production_id = 5), SHIFT_REPEAT(77),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_namedTupleLiteral_repeat1, 2, .production_id = 5),
  [391] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hash_repeat1, 2, .production_id = 5), SHIFT_REPEAT(22),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_hash_repeat1, 2, .production_id = 5),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [410] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [412] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [414] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [416] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [418] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [420] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [424] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [426] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [430] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [432] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [434] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [438] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [440] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [444] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [446] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(21),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2),
  [451] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [453] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [455] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [457] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [459] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [461] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [463] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [469] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [471] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [473] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [477] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [479] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [483] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [485] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [487] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [491] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_symbol_repeat1, 2), SHIFT_REPEAT(133),
  [494] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 3),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 4),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_variable, 2),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance_variable, 2),
  [512] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(15),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [517] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [519] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [521] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [523] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [525] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [527] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [529] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [531] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [533] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_variable, 1),
  [541] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [555] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [557] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [559] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [561] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_hash_repeat1, 4, .production_id = 3),
  [567] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [569] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 1),
  [571] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1),
  [573] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char, 1),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [579] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 1),
  [581] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [589] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 2),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_variable, 2),
  [595] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 3),
  [597] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 3),
  [599] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex, 3),
  [601] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commandLiteral, 3),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance_variable, 3),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_variable, 3),
  [609] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool, 1),
  [611] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 3, .production_id = 1),
  [613] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hash, 5, .production_id = 3),
  [615] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namedTupleLiteral, 6, .production_id = 4),
  [617] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 4),
  [619] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hash, 6, .production_id = 4),
  [621] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 4),
  [623] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hash, 6),
  [625] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namedTupleLiteral, 5, .production_id = 3),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_namedTupleLiteral_repeat1, 4, .production_id = 3),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [633] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [639] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [645] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [647] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [649] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [651] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [653] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [669] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [671] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [673] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [675] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [683] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [685] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [689] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [691] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [695] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
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

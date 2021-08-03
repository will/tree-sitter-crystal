#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 250
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
      if (eof) ADVANCE(116);
      if (lookahead == '!') ADVANCE(282);
      if (lookahead == '"') ADVANCE(182);
      if (lookahead == '#') ADVANCE(113);
      if (lookahead == '%') ADVANCE(264);
      if (lookahead == '&') ADVANCE(265);
      if (lookahead == '\'') ADVANCE(19);
      if (lookahead == ')') ADVANCE(236);
      if (lookahead == '*') ADVANCE(262);
      if (lookahead == '+') ADVANCE(259);
      if (lookahead == ',') ADVANCE(210);
      if (lookahead == '-') ADVANCE(261);
      if (lookahead == '/') ADVANCE(221);
      if (lookahead == '0') ADVANCE(34);
      if (lookahead == ':') ADVANCE(181);
      if (lookahead == ';') ADVANCE(117);
      if (lookahead == '<') ADVANCE(273);
      if (lookahead == '=') ADVANCE(256);
      if (lookahead == '>') ADVANCE(275);
      if (lookahead == '@') ADVANCE(243);
      if (lookahead == 'T') ADVANCE(158);
      if (lookahead == '[') ADVANCE(219);
      if (lookahead == ']') ADVANCE(220);
      if (lookahead == '^') ADVANCE(267);
      if (lookahead == '_') ADVANCE(137);
      if (lookahead == '`') ADVANCE(228);
      if (lookahead == 'f') ADVANCE(147);
      if (lookahead == 'n') ADVANCE(151);
      if (lookahead == 't') ADVANCE(156);
      if (lookahead == '{') ADVANCE(212);
      if (lookahead == '|') ADVANCE(266);
      if (lookahead == '}') ADVANCE(214);
      if (lookahead == '~') ADVANCE(283);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(114)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(180);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(160);
      if (lookahead != 0 &&
          lookahead > 159) ADVANCE(160);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(118);
      if (lookahead == '"') ADVANCE(182);
      if (lookahead == '#') ADVANCE(193);
      if (lookahead == ';') ADVANCE(117);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(184);
      if (lookahead != 0) ADVANCE(183);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(119);
      if (lookahead == '#') ADVANCE(113);
      if (lookahead == ';') ADVANCE(117);
      if (lookahead == '=') ADVANCE(255);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(282);
      if (lookahead == '"') ADVANCE(182);
      if (lookahead == '#') ADVANCE(113);
      if (lookahead == '%') ADVANCE(263);
      if (lookahead == '&') ADVANCE(265);
      if (lookahead == '*') ADVANCE(262);
      if (lookahead == '+') ADVANCE(258);
      if (lookahead == '-') ADVANCE(260);
      if (lookahead == '/') ADVANCE(221);
      if (lookahead == '<') ADVANCE(273);
      if (lookahead == '=') ADVANCE(63);
      if (lookahead == '>') ADVANCE(275);
      if (lookahead == '[') ADVANCE(79);
      if (lookahead == '^') ADVANCE(267);
      if (lookahead == '|') ADVANCE(266);
      if (lookahead == '~') ADVANCE(283);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (lookahead != 0 &&
          lookahead > '@' &&
          lookahead != '\\' &&
          lookahead != ']' &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(160);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(182);
      if (lookahead == '#') ADVANCE(113);
      if (lookahead == '%') ADVANCE(102);
      if (lookahead == '\'') ADVANCE(19);
      if (lookahead == '/') ADVANCE(221);
      if (lookahead == '0') ADVANCE(34);
      if (lookahead == ':') ADVANCE(181);
      if (lookahead == '=') ADVANCE(255);
      if (lookahead == '@') ADVANCE(243);
      if (lookahead == 'T') ADVANCE(158);
      if (lookahead == '[') ADVANCE(208);
      if (lookahead == ']') ADVANCE(220);
      if (lookahead == '_') ADVANCE(137);
      if (lookahead == '`') ADVANCE(228);
      if (lookahead == 'f') ADVANCE(147);
      if (lookahead == 'n') ADVANCE(151);
      if (lookahead == 't') ADVANCE(156);
      if (lookahead == '{') ADVANCE(212);
      if (lookahead == '}') ADVANCE(214);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(180);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(160);
      if (lookahead != 0 &&
          lookahead > 159) ADVANCE(160);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(182);
      if (lookahead == '#') ADVANCE(113);
      if (lookahead == '%') ADVANCE(102);
      if (lookahead == '\'') ADVANCE(19);
      if (lookahead == '/') ADVANCE(221);
      if (lookahead == '0') ADVANCE(34);
      if (lookahead == ':') ADVANCE(181);
      if (lookahead == '=') ADVANCE(255);
      if (lookahead == '@') ADVANCE(243);
      if (lookahead == 'T') ADVANCE(158);
      if (lookahead == '[') ADVANCE(208);
      if (lookahead == '_') ADVANCE(137);
      if (lookahead == '`') ADVANCE(228);
      if (lookahead == 'f') ADVANCE(147);
      if (lookahead == 'n') ADVANCE(151);
      if (lookahead == 't') ADVANCE(156);
      if (lookahead == '{') ADVANCE(212);
      if (lookahead == '}') ADVANCE(214);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(180);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(160);
      if (lookahead != 0 &&
          lookahead > 159) ADVANCE(160);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(182);
      if (lookahead == '#') ADVANCE(193);
      if (lookahead == ',') ADVANCE(210);
      if (lookahead == ':') ADVANCE(181);
      if (lookahead == '=') ADVANCE(192);
      if (lookahead == '}') ADVANCE(214);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(185);
      if (lookahead != 0) ADVANCE(183);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(182);
      if (lookahead == '#') ADVANCE(193);
      if (lookahead == ',') ADVANCE(210);
      if (lookahead == '=') ADVANCE(192);
      if (lookahead == '}') ADVANCE(214);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(186);
      if (lookahead != 0) ADVANCE(183);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(182);
      if (lookahead == '#') ADVANCE(193);
      if (lookahead == ',') ADVANCE(210);
      if (lookahead == ']') ADVANCE(211);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(187);
      if (lookahead != 0) ADVANCE(183);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(182);
      if (lookahead == '#') ADVANCE(193);
      if (lookahead == ',') ADVANCE(210);
      if (lookahead == '}') ADVANCE(214);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(188);
      if (lookahead != 0) ADVANCE(183);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(182);
      if (lookahead == '#') ADVANCE(193);
      if (lookahead == ':') ADVANCE(181);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(189);
      if (lookahead != 0) ADVANCE(183);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(182);
      if (lookahead == '#') ADVANCE(193);
      if (lookahead == '=') ADVANCE(192);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(190);
      if (lookahead != 0) ADVANCE(183);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(182);
      if (lookahead == '#') ADVANCE(193);
      if (lookahead == ']') ADVANCE(220);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(191);
      if (lookahead != 0) ADVANCE(183);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(182);
      if (lookahead == '#') ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(191);
      if (lookahead != 0) ADVANCE(183);
      END_STATE();
    case 14:
      if (lookahead == '#') ADVANCE(113);
      if (lookahead == '=') ADVANCE(255);
      if (lookahead == '[') ADVANCE(218);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (lookahead != 0 &&
          lookahead > '@' &&
          (lookahead < '\\' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(160);
      END_STATE();
    case 15:
      if (lookahead == '#') ADVANCE(113);
      if (lookahead == '=') ADVANCE(255);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (lookahead != 0 &&
          lookahead > '@' &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(160);
      END_STATE();
    case 16:
      if (lookahead == '#') ADVANCE(113);
      if (lookahead == 'o') ADVANCE(93);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      END_STATE();
    case 17:
      if (lookahead == '#') ADVANCE(113);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 18:
      if (lookahead == '#') ADVANCE(216);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (lookahead != 0) ADVANCE(217);
      END_STATE();
    case 19:
      if (lookahead == '\'') ADVANCE(194);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 20:
      if (lookahead == '\'') ADVANCE(207);
      if (lookahead == '\\') ADVANCE(22);
      if (lookahead == 'a') ADVANCE(23);
      if (lookahead == 'b') ADVANCE(24);
      if (lookahead == 'e') ADVANCE(25);
      if (lookahead == 'f') ADVANCE(26);
      if (lookahead == 'n') ADVANCE(27);
      if (lookahead == 'r') ADVANCE(28);
      if (lookahead == 't') ADVANCE(29);
      if (lookahead == 'u') ADVANCE(103);
      if (lookahead == 'v') ADVANCE(30);
      END_STATE();
    case 21:
      if (lookahead == '\'') ADVANCE(206);
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
      if (lookahead == '\'') ADVANCE(203);
      END_STATE();
    case 30:
      if (lookahead == '\'') ADVANCE(204);
      END_STATE();
    case 31:
      if (lookahead == '\'') ADVANCE(205);
      END_STATE();
    case 32:
      if (lookahead == '\'') ADVANCE(205);
      if (lookahead == '}') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(32);
      END_STATE();
    case 33:
      if (lookahead == '(') ADVANCE(232);
      END_STATE();
    case 34:
      if (lookahead == '.') ADVANCE(110);
      if (lookahead == 'b') ADVANCE(106);
      if (lookahead == 'e') ADVANCE(104);
      if (lookahead == 'f') ADVANCE(49);
      if (lookahead == 'o') ADVANCE(107);
      if (lookahead == 'x') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(35);
      END_STATE();
    case 35:
      if (lookahead == '.') ADVANCE(110);
      if (lookahead == 'e') ADVANCE(104);
      if (lookahead == 'f') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(35);
      END_STATE();
    case 36:
      if (lookahead == '.') ADVANCE(97);
      END_STATE();
    case 37:
      if (lookahead == '0') ADVANCE(34);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(180);
      END_STATE();
    case 38:
      if (lookahead == '1') ADVANCE(59);
      if (lookahead == '3') ADVANCE(42);
      if (lookahead == '6') ADVANCE(52);
      if (lookahead == '8') ADVANCE(179);
      END_STATE();
    case 39:
      if (lookahead == '1') ADVANCE(60);
      if (lookahead == '3') ADVANCE(44);
      if (lookahead == '6') ADVANCE(54);
      if (lookahead == '8') ADVANCE(173);
      END_STATE();
    case 40:
      if (lookahead == '1') ADVANCE(61);
      if (lookahead == '3') ADVANCE(45);
      if (lookahead == '6') ADVANCE(55);
      if (lookahead == '8') ADVANCE(175);
      END_STATE();
    case 41:
      if (lookahead == '1') ADVANCE(62);
      if (lookahead == '3') ADVANCE(46);
      if (lookahead == '6') ADVANCE(56);
      if (lookahead == '8') ADVANCE(177);
      END_STATE();
    case 42:
      if (lookahead == '2') ADVANCE(179);
      END_STATE();
    case 43:
      if (lookahead == '2') ADVANCE(172);
      END_STATE();
    case 44:
      if (lookahead == '2') ADVANCE(173);
      END_STATE();
    case 45:
      if (lookahead == '2') ADVANCE(175);
      END_STATE();
    case 46:
      if (lookahead == '2') ADVANCE(177);
      END_STATE();
    case 47:
      if (lookahead == '2') ADVANCE(167);
      END_STATE();
    case 48:
      if (lookahead == '2') ADVANCE(170);
      END_STATE();
    case 49:
      if (lookahead == '3') ADVANCE(43);
      if (lookahead == '6') ADVANCE(53);
      END_STATE();
    case 50:
      if (lookahead == '3') ADVANCE(47);
      if (lookahead == '6') ADVANCE(57);
      END_STATE();
    case 51:
      if (lookahead == '3') ADVANCE(48);
      if (lookahead == '6') ADVANCE(58);
      END_STATE();
    case 52:
      if (lookahead == '4') ADVANCE(179);
      END_STATE();
    case 53:
      if (lookahead == '4') ADVANCE(172);
      END_STATE();
    case 54:
      if (lookahead == '4') ADVANCE(173);
      END_STATE();
    case 55:
      if (lookahead == '4') ADVANCE(175);
      END_STATE();
    case 56:
      if (lookahead == '4') ADVANCE(177);
      END_STATE();
    case 57:
      if (lookahead == '4') ADVANCE(167);
      END_STATE();
    case 58:
      if (lookahead == '4') ADVANCE(170);
      END_STATE();
    case 59:
      if (lookahead == '6') ADVANCE(179);
      END_STATE();
    case 60:
      if (lookahead == '6') ADVANCE(173);
      END_STATE();
    case 61:
      if (lookahead == '6') ADVANCE(175);
      END_STATE();
    case 62:
      if (lookahead == '6') ADVANCE(177);
      END_STATE();
    case 63:
      if (lookahead == '=') ADVANCE(271);
      if (lookahead == '~') ADVANCE(285);
      END_STATE();
    case 64:
      if (lookahead == 'D') ADVANCE(69);
      if (lookahead == 'E') ADVANCE(75);
      if (lookahead == 'F') ADVANCE(70);
      if (lookahead == 'L') ADVANCE(71);
      END_STATE();
    case 65:
      if (lookahead == 'D') ADVANCE(84);
      END_STATE();
    case 66:
      if (lookahead == 'E') ADVANCE(86);
      END_STATE();
    case 67:
      if (lookahead == 'E') ADVANCE(87);
      END_STATE();
    case 68:
      if (lookahead == 'E') ADVANCE(88);
      END_STATE();
    case 69:
      if (lookahead == 'I') ADVANCE(78);
      END_STATE();
    case 70:
      if (lookahead == 'I') ADVANCE(73);
      END_STATE();
    case 71:
      if (lookahead == 'I') ADVANCE(76);
      END_STATE();
    case 72:
      if (lookahead == 'I') ADVANCE(77);
      END_STATE();
    case 73:
      if (lookahead == 'L') ADVANCE(66);
      END_STATE();
    case 74:
      if (lookahead == 'L') ADVANCE(72);
      END_STATE();
    case 75:
      if (lookahead == 'N') ADVANCE(65);
      END_STATE();
    case 76:
      if (lookahead == 'N') ADVANCE(67);
      END_STATE();
    case 77:
      if (lookahead == 'N') ADVANCE(68);
      END_STATE();
    case 78:
      if (lookahead == 'R') ADVANCE(85);
      END_STATE();
    case 79:
      if (lookahead == ']') ADVANCE(279);
      END_STATE();
    case 80:
      if (lookahead == '_') ADVANCE(251);
      END_STATE();
    case 81:
      if (lookahead == '_') ADVANCE(249);
      END_STATE();
    case 82:
      if (lookahead == '_') ADVANCE(245);
      END_STATE();
    case 83:
      if (lookahead == '_') ADVANCE(247);
      END_STATE();
    case 84:
      if (lookahead == '_') ADVANCE(74);
      END_STATE();
    case 85:
      if (lookahead == '_') ADVANCE(80);
      END_STATE();
    case 86:
      if (lookahead == '_') ADVANCE(81);
      END_STATE();
    case 87:
      if (lookahead == '_') ADVANCE(82);
      END_STATE();
    case 88:
      if (lookahead == '_') ADVANCE(83);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(163);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(165);
      END_STATE();
    case 93:
      if (lookahead == 'f') ADVANCE(215);
      END_STATE();
    case 94:
      if (lookahead == 'l') ADVANCE(99);
      END_STATE();
    case 95:
      if (lookahead == 'l') ADVANCE(161);
      END_STATE();
    case 96:
      if (lookahead == 'l') ADVANCE(91);
      END_STATE();
    case 97:
      if (lookahead == 'n') ADVANCE(89);
      END_STATE();
    case 98:
      if (lookahead == 'p') ADVANCE(96);
      END_STATE();
    case 99:
      if (lookahead == 's') ADVANCE(92);
      END_STATE();
    case 100:
      if (lookahead == 'u') ADVANCE(90);
      END_STATE();
    case 101:
      if (lookahead == 'w') ADVANCE(227);
      END_STATE();
    case 102:
      if (lookahead == 'x') ADVANCE(33);
      END_STATE();
    case 103:
      if (lookahead == '{') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(32);
      END_STATE();
    case 104:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      END_STATE();
    case 105:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(169);
      END_STATE();
    case 106:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(174);
      END_STATE();
    case 107:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(176);
      END_STATE();
    case 108:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      END_STATE();
    case 109:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(169);
      END_STATE();
    case 110:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(168);
      END_STATE();
    case 111:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(178);
      END_STATE();
    case 112:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(32);
      END_STATE();
    case 113:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(237);
      END_STATE();
    case 114:
      if (eof) ADVANCE(116);
      if (lookahead == '!') ADVANCE(282);
      if (lookahead == '"') ADVANCE(182);
      if (lookahead == '#') ADVANCE(113);
      if (lookahead == '%') ADVANCE(264);
      if (lookahead == '&') ADVANCE(265);
      if (lookahead == '\'') ADVANCE(19);
      if (lookahead == ')') ADVANCE(236);
      if (lookahead == '*') ADVANCE(262);
      if (lookahead == '+') ADVANCE(259);
      if (lookahead == ',') ADVANCE(210);
      if (lookahead == '-') ADVANCE(261);
      if (lookahead == '/') ADVANCE(221);
      if (lookahead == '0') ADVANCE(34);
      if (lookahead == ':') ADVANCE(181);
      if (lookahead == ';') ADVANCE(117);
      if (lookahead == '<') ADVANCE(273);
      if (lookahead == '=') ADVANCE(256);
      if (lookahead == '>') ADVANCE(275);
      if (lookahead == '@') ADVANCE(243);
      if (lookahead == 'T') ADVANCE(158);
      if (lookahead == '[') ADVANCE(209);
      if (lookahead == ']') ADVANCE(211);
      if (lookahead == '^') ADVANCE(267);
      if (lookahead == '_') ADVANCE(137);
      if (lookahead == '`') ADVANCE(228);
      if (lookahead == 'f') ADVANCE(147);
      if (lookahead == 'n') ADVANCE(151);
      if (lookahead == 't') ADVANCE(156);
      if (lookahead == '{') ADVANCE(212);
      if (lookahead == '|') ADVANCE(266);
      if (lookahead == '}') ADVANCE(214);
      if (lookahead == '~') ADVANCE(283);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(114)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(180);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(160);
      if (lookahead != 0 &&
          lookahead > 159) ADVANCE(160);
      END_STATE();
    case 115:
      if (eof) ADVANCE(116);
      if (lookahead == '"') ADVANCE(182);
      if (lookahead == '#') ADVANCE(113);
      if (lookahead == '%') ADVANCE(102);
      if (lookahead == '\'') ADVANCE(19);
      if (lookahead == ',') ADVANCE(210);
      if (lookahead == '/') ADVANCE(221);
      if (lookahead == '0') ADVANCE(34);
      if (lookahead == ':') ADVANCE(181);
      if (lookahead == '=') ADVANCE(257);
      if (lookahead == '@') ADVANCE(243);
      if (lookahead == 'T') ADVANCE(254);
      if (lookahead == '[') ADVANCE(208);
      if (lookahead == ']') ADVANCE(211);
      if (lookahead == '_') ADVANCE(239);
      if (lookahead == '`') ADVANCE(228);
      if (lookahead == 'f') ADVANCE(240);
      if (lookahead == 'n') ADVANCE(241);
      if (lookahead == 't') ADVANCE(242);
      if (lookahead == '{') ADVANCE(212);
      if (lookahead == '}') ADVANCE(214);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(115)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(180);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(253);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym__statement_token1);
      if (lookahead == '\n') ADVANCE(118);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(184);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym__statement_token1);
      if (lookahead == '\n') ADVANCE(119);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(97);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(160);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'D') ADVANCE(127);
      if (lookahead == 'E') ADVANCE(133);
      if (lookahead == 'F') ADVANCE(128);
      if (lookahead == 'L') ADVANCE(129);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(160);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'D') ADVANCE(142);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(160);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'E') ADVANCE(144);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(160);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'E') ADVANCE(145);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(160);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'E') ADVANCE(146);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(160);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'I') ADVANCE(136);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(160);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'I') ADVANCE(131);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(160);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'I') ADVANCE(134);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(160);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'I') ADVANCE(135);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(160);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'L') ADVANCE(124);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(160);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'L') ADVANCE(130);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(160);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'N') ADVANCE(123);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(160);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'N') ADVANCE(125);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(160);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'N') ADVANCE(126);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(160);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'R') ADVANCE(143);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(160);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '_') ADVANCE(122);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(160);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '_') ADVANCE(252);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(160);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '_') ADVANCE(250);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(160);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '_') ADVANCE(246);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(160);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '_') ADVANCE(248);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(160);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '_') ADVANCE(132);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(160);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '_') ADVANCE(138);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(160);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '_') ADVANCE(139);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(160);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '_') ADVANCE(140);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(160);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '_') ADVANCE(141);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(160);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(152);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(160);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(164);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(160);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(121);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(160);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(166);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(160);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(153);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(160);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(157);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(160);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(162);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(160);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(149);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(160);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'p') ADVANCE(154);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(160);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(159);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(160);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 's') ADVANCE(150);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(160);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'u') ADVANCE(155);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(160);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'u') ADVANCE(148);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(160);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(160);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_nil);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_nil);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(160);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(160);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(160);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_float_token1);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (lookahead == 'e') ADVANCE(105);
      if (lookahead == 'f') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(168);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (lookahead == 'f') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(169);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_float_token2);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (lookahead == 'f') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_float_token3);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == 'i') ADVANCE(39);
      if (lookahead == 'u') ADVANCE(39);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(174);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_integer_token2);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_integer_token2);
      if (lookahead == 'i') ADVANCE(40);
      if (lookahead == 'u') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(176);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_integer_token3);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_integer_token3);
      if (lookahead == 'i') ADVANCE(41);
      if (lookahead == 'u') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(178);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_integer_token4);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_integer_token4);
      if (lookahead == '.') ADVANCE(110);
      if (lookahead == 'e') ADVANCE(104);
      if (lookahead == 'f') ADVANCE(49);
      if (lookahead == 'i') ADVANCE(38);
      if (lookahead == 'u') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(180);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\n') ADVANCE(118);
      if (lookahead == '#') ADVANCE(193);
      if (lookahead == ';') ADVANCE(117);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(184);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(183);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(193);
      if (lookahead == ',') ADVANCE(210);
      if (lookahead == ':') ADVANCE(181);
      if (lookahead == '=') ADVANCE(192);
      if (lookahead == '}') ADVANCE(214);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(185);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(183);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(193);
      if (lookahead == ',') ADVANCE(210);
      if (lookahead == '=') ADVANCE(192);
      if (lookahead == '}') ADVANCE(214);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(183);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(193);
      if (lookahead == ',') ADVANCE(210);
      if (lookahead == ']') ADVANCE(211);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(183);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(193);
      if (lookahead == ',') ADVANCE(210);
      if (lookahead == '}') ADVANCE(214);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(188);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(183);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(193);
      if (lookahead == ':') ADVANCE(181);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(183);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(193);
      if (lookahead == '=') ADVANCE(192);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(190);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(183);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(191);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(183);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '>') ADVANCE(213);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(237);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_SQUOTE_BSLASHa_SQUOTE);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_SQUOTE_BSLASHb_SQUOTE);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_SQUOTE_BSLASHe_SQUOTE);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_SQUOTE_BSLASHf_SQUOTE);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_SQUOTE_BSLASHn_SQUOTE);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_SQUOTE_BSLASHr_SQUOTE);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_SQUOTE_BSLASHt_SQUOTE);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_SQUOTE_BSLASHv_SQUOTE);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_char_token1);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_char_token2);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_char_token2);
      if (lookahead == '\'') ADVANCE(195);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == ']') ADVANCE(279);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_hash_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(237);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(216);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_hash_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(217);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_LBRACK2);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_LBRACK2);
      if (lookahead == ']') ADVANCE(279);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_RBRACK2);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_regex_token1);
      if (lookahead == '\n') ADVANCE(225);
      if (lookahead == '/') ADVANCE(237);
      if (lookahead == '\\') ADVANCE(223);
      if (lookahead != 0) ADVANCE(222);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_regex_token1);
      if (lookahead == '\n') ADVANCE(225);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(222);
      if (lookahead == '\\') ADVANCE(223);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_regex_token1);
      if (lookahead == '#') ADVANCE(222);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(224);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(225);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_regex_token1);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(225);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_regex_token1);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(225);
      if (lookahead == '\\') ADVANCE(226);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_Tuple_DOTnew);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_commandLiteral_token1);
      if (lookahead == '\n') ADVANCE(231);
      if (lookahead == '`') ADVANCE(237);
      if (lookahead != 0) ADVANCE(229);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_commandLiteral_token1);
      if (lookahead == '#') ADVANCE(229);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(230);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(231);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_commandLiteral_token1);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(231);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_PERCENTx_LPAREN);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_commandLiteral_token2);
      if (lookahead == '\n') ADVANCE(235);
      if (lookahead == ')') ADVANCE(237);
      if (lookahead != 0) ADVANCE(233);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_commandLiteral_token2);
      if (lookahead == '#') ADVANCE(233);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(235);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_commandLiteral_token2);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(235);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(237);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_local_variable_token1);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_local_variable_token1);
      if (lookahead == '_') ADVANCE(64);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_local_variable_token1);
      if (lookahead == 'a') ADVANCE(94);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_local_variable_token1);
      if (lookahead == 'i') ADVANCE(95);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_local_variable_token1);
      if (lookahead == 'r') ADVANCE(100);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '@') ADVANCE(244);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym___LINE__);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym___LINE__);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(160);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym___END_LINE__);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym___END_LINE__);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(160);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym___FILE__);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym___FILE__);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(160);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym___DIR__);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym___DIR__);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(160);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == 'u') ADVANCE(98);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(271);
      if (lookahead == '>') ADVANCE(213);
      if (lookahead == '~') ADVANCE(285);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>') ADVANCE(213);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '0') ADVANCE(34);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(180);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '0') ADVANCE(34);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(180);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(268);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == 'x') ADVANCE(33);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      if (lookahead == '=') ADVANCE(278);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(270);
      if (lookahead == '=') ADVANCE(274);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      if (lookahead == '>') ADVANCE(277);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(276);
      if (lookahead == '>') ADVANCE(269);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_LT_EQ_GT);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_EQ_EQ_EQ);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_LBRACK_RBRACK);
      if (lookahead == '=') ADVANCE(281);
      if (lookahead == '?') ADVANCE(280);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_LBRACK_RBRACK_QMARK);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_LBRACK_RBRACK_EQ);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(272);
      if (lookahead == '~') ADVANCE(284);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_BANG_TILDE);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_EQ_TILDE);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 115},
  [2] = {.lex_state = 4},
  [3] = {.lex_state = 4},
  [4] = {.lex_state = 115},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 115},
  [7] = {.lex_state = 115},
  [8] = {.lex_state = 115},
  [9] = {.lex_state = 115},
  [10] = {.lex_state = 115},
  [11] = {.lex_state = 115},
  [12] = {.lex_state = 115},
  [13] = {.lex_state = 115},
  [14] = {.lex_state = 115},
  [15] = {.lex_state = 115},
  [16] = {.lex_state = 115},
  [17] = {.lex_state = 115},
  [18] = {.lex_state = 115},
  [19] = {.lex_state = 115},
  [20] = {.lex_state = 115},
  [21] = {.lex_state = 115},
  [22] = {.lex_state = 115},
  [23] = {.lex_state = 115},
  [24] = {.lex_state = 115},
  [25] = {.lex_state = 115},
  [26] = {.lex_state = 115},
  [27] = {.lex_state = 115},
  [28] = {.lex_state = 115},
  [29] = {.lex_state = 115},
  [30] = {.lex_state = 115},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 6},
  [38] = {.lex_state = 6},
  [39] = {.lex_state = 7},
  [40] = {.lex_state = 7},
  [41] = {.lex_state = 115},
  [42] = {.lex_state = 7},
  [43] = {.lex_state = 7},
  [44] = {.lex_state = 115},
  [45] = {.lex_state = 8},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 9},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 9},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 115},
  [52] = {.lex_state = 115},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 115},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 115},
  [59] = {.lex_state = 115},
  [60] = {.lex_state = 9},
  [61] = {.lex_state = 115},
  [62] = {.lex_state = 115},
  [63] = {.lex_state = 9},
  [64] = {.lex_state = 115},
  [65] = {.lex_state = 115},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 115},
  [68] = {.lex_state = 8},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 8},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 115},
  [73] = {.lex_state = 115},
  [74] = {.lex_state = 115},
  [75] = {.lex_state = 115},
  [76] = {.lex_state = 3},
  [77] = {.lex_state = 115},
  [78] = {.lex_state = 115},
  [79] = {.lex_state = 8},
  [80] = {.lex_state = 115},
  [81] = {.lex_state = 115},
  [82] = {.lex_state = 115},
  [83] = {.lex_state = 10},
  [84] = {.lex_state = 115},
  [85] = {.lex_state = 13},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 14},
  [88] = {.lex_state = 14},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 2},
  [91] = {.lex_state = 13},
  [92] = {.lex_state = 13},
  [93] = {.lex_state = 115},
  [94] = {.lex_state = 13},
  [95] = {.lex_state = 115},
  [96] = {.lex_state = 13},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 13},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 2},
  [101] = {.lex_state = 13},
  [102] = {.lex_state = 13},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 13},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 13},
  [107] = {.lex_state = 13},
  [108] = {.lex_state = 13},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 13},
  [111] = {.lex_state = 13},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 13},
  [114] = {.lex_state = 13},
  [115] = {.lex_state = 115},
  [116] = {.lex_state = 13},
  [117] = {.lex_state = 13},
  [118] = {.lex_state = 13},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 115},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 13},
  [126] = {.lex_state = 115},
  [127] = {.lex_state = 13},
  [128] = {.lex_state = 115},
  [129] = {.lex_state = 13},
  [130] = {.lex_state = 13},
  [131] = {.lex_state = 13},
  [132] = {.lex_state = 13},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 115},
  [139] = {.lex_state = 13},
  [140] = {.lex_state = 12},
  [141] = {.lex_state = 12},
  [142] = {.lex_state = 12},
  [143] = {.lex_state = 12},
  [144] = {.lex_state = 13},
  [145] = {.lex_state = 14},
  [146] = {.lex_state = 14},
  [147] = {.lex_state = 13},
  [148] = {.lex_state = 115},
  [149] = {.lex_state = 11},
  [150] = {.lex_state = 13},
  [151] = {.lex_state = 11},
  [152] = {.lex_state = 11},
  [153] = {.lex_state = 11},
  [154] = {.lex_state = 10},
  [155] = {.lex_state = 2},
  [156] = {.lex_state = 14},
  [157] = {.lex_state = 14},
  [158] = {.lex_state = 115},
  [159] = {.lex_state = 2},
  [160] = {.lex_state = 2},
  [161] = {.lex_state = 14},
  [162] = {.lex_state = 2},
  [163] = {.lex_state = 2},
  [164] = {.lex_state = 14},
  [165] = {.lex_state = 2},
  [166] = {.lex_state = 14},
  [167] = {.lex_state = 2},
  [168] = {.lex_state = 2},
  [169] = {.lex_state = 14},
  [170] = {.lex_state = 14},
  [171] = {.lex_state = 14},
  [172] = {.lex_state = 14},
  [173] = {.lex_state = 2},
  [174] = {.lex_state = 4},
  [175] = {.lex_state = 2},
  [176] = {.lex_state = 14},
  [177] = {.lex_state = 14},
  [178] = {.lex_state = 2},
  [179] = {.lex_state = 2},
  [180] = {.lex_state = 2},
  [181] = {.lex_state = 2},
  [182] = {.lex_state = 2},
  [183] = {.lex_state = 2},
  [184] = {.lex_state = 2},
  [185] = {.lex_state = 4},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 2},
  [189] = {.lex_state = 2},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 4},
  [192] = {.lex_state = 4},
  [193] = {.lex_state = 4},
  [194] = {.lex_state = 4},
  [195] = {.lex_state = 4},
  [196] = {.lex_state = 4},
  [197] = {.lex_state = 18},
  [198] = {.lex_state = 4},
  [199] = {.lex_state = 4},
  [200] = {.lex_state = 4},
  [201] = {.lex_state = 4},
  [202] = {.lex_state = 4},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 18},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 4},
  [211] = {.lex_state = 4},
  [212] = {.lex_state = 224},
  [213] = {.lex_state = 230},
  [214] = {.lex_state = 234},
  [215] = {.lex_state = 4},
  [216] = {.lex_state = 4},
  [217] = {.lex_state = 4},
  [218] = {.lex_state = 16},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 18},
  [223] = {.lex_state = 4},
  [224] = {.lex_state = 4},
  [225] = {.lex_state = 17},
  [226] = {.lex_state = 224},
  [227] = {.lex_state = 230},
  [228] = {.lex_state = 234},
  [229] = {.lex_state = 17},
  [230] = {.lex_state = 4},
  [231] = {.lex_state = 234},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 230},
  [234] = {.lex_state = 4},
  [235] = {.lex_state = 4},
  [236] = {.lex_state = 224},
  [237] = {.lex_state = 18},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 18},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 18},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 16},
  [249] = {.lex_state = 16},
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
    [sym_program] = STATE(221),
    [sym__statement] = STATE(6),
    [sym__expression] = STATE(173),
    [sym_bool] = STATE(173),
    [sym_float] = STATE(173),
    [sym_integer] = STATE(173),
    [sym_symbol] = STATE(173),
    [sym_char] = STATE(173),
    [sym_string] = STATE(173),
    [sym_array] = STATE(173),
    [sym_hash] = STATE(173),
    [sym_index_expression] = STATE(90),
    [sym_regex] = STATE(173),
    [sym_tuple] = STATE(173),
    [sym_namedTupleLiteral] = STATE(173),
    [sym_commandLiteral] = STATE(173),
    [sym_local_variable] = STATE(176),
    [sym_instance_variable] = STATE(176),
    [sym_class_variable] = STATE(176),
    [sym_constant] = STATE(176),
    [sym__variable] = STATE(176),
    [sym_assignment] = STATE(173),
    [aux_sym_program_repeat1] = STATE(6),
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
    [sym__expression] = STATE(55),
    [sym_identifier] = STATE(244),
    [sym_bool] = STATE(55),
    [sym_float] = STATE(55),
    [sym_integer] = STATE(55),
    [sym_symbol] = STATE(55),
    [sym_char] = STATE(55),
    [sym_string] = STATE(53),
    [sym_array] = STATE(55),
    [sym_hash] = STATE(55),
    [sym_index_expression] = STATE(73),
    [sym_regex] = STATE(55),
    [sym_tuple] = STATE(55),
    [sym_namedTupleLiteral] = STATE(55),
    [sym_commandLiteral] = STATE(55),
    [sym_local_variable] = STATE(170),
    [sym_instance_variable] = STATE(170),
    [sym_class_variable] = STATE(170),
    [sym_constant] = STATE(170),
    [sym__variable] = STATE(170),
    [sym_assignment] = STATE(55),
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
    [sym__expression] = STATE(57),
    [sym_identifier] = STATE(243),
    [sym_bool] = STATE(57),
    [sym_float] = STATE(57),
    [sym_integer] = STATE(57),
    [sym_symbol] = STATE(57),
    [sym_char] = STATE(57),
    [sym_string] = STATE(46),
    [sym_array] = STATE(57),
    [sym_hash] = STATE(57),
    [sym_index_expression] = STATE(73),
    [sym_regex] = STATE(57),
    [sym_tuple] = STATE(57),
    [sym_namedTupleLiteral] = STATE(57),
    [sym_commandLiteral] = STATE(57),
    [sym_local_variable] = STATE(170),
    [sym_instance_variable] = STATE(170),
    [sym_class_variable] = STATE(170),
    [sym_constant] = STATE(170),
    [sym__variable] = STATE(170),
    [sym_assignment] = STATE(57),
    [aux_sym_identifier_token1] = ACTIONS(49),
    [sym_nil] = ACTIONS(87),
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
    [anon_sym_RBRACE] = ACTIONS(89),
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
  [4] = {
    [sym__statement] = STATE(4),
    [sym__expression] = STATE(173),
    [sym_bool] = STATE(173),
    [sym_float] = STATE(173),
    [sym_integer] = STATE(173),
    [sym_symbol] = STATE(173),
    [sym_char] = STATE(173),
    [sym_string] = STATE(173),
    [sym_array] = STATE(173),
    [sym_hash] = STATE(173),
    [sym_index_expression] = STATE(90),
    [sym_regex] = STATE(173),
    [sym_tuple] = STATE(173),
    [sym_namedTupleLiteral] = STATE(173),
    [sym_commandLiteral] = STATE(173),
    [sym_local_variable] = STATE(176),
    [sym_instance_variable] = STATE(176),
    [sym_class_variable] = STATE(176),
    [sym_constant] = STATE(176),
    [sym__variable] = STATE(176),
    [sym_assignment] = STATE(173),
    [aux_sym_program_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(91),
    [sym_nil] = ACTIONS(93),
    [anon_sym_true] = ACTIONS(96),
    [anon_sym_false] = ACTIONS(96),
    [aux_sym_float_token1] = ACTIONS(99),
    [aux_sym_float_token2] = ACTIONS(102),
    [aux_sym_float_token3] = ACTIONS(102),
    [aux_sym_integer_token1] = ACTIONS(105),
    [aux_sym_integer_token2] = ACTIONS(105),
    [aux_sym_integer_token3] = ACTIONS(105),
    [aux_sym_integer_token4] = ACTIONS(108),
    [anon_sym_COLON] = ACTIONS(111),
    [anon_sym_DQUOTE] = ACTIONS(114),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(117),
    [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = ACTIONS(117),
    [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = ACTIONS(117),
    [anon_sym_SQUOTE_BSLASHa_SQUOTE] = ACTIONS(117),
    [anon_sym_SQUOTE_BSLASHb_SQUOTE] = ACTIONS(117),
    [anon_sym_SQUOTE_BSLASHe_SQUOTE] = ACTIONS(117),
    [anon_sym_SQUOTE_BSLASHf_SQUOTE] = ACTIONS(117),
    [anon_sym_SQUOTE_BSLASHn_SQUOTE] = ACTIONS(117),
    [anon_sym_SQUOTE_BSLASHr_SQUOTE] = ACTIONS(117),
    [anon_sym_SQUOTE_BSLASHt_SQUOTE] = ACTIONS(117),
    [anon_sym_SQUOTE_BSLASHv_SQUOTE] = ACTIONS(117),
    [aux_sym_char_token1] = ACTIONS(117),
    [aux_sym_char_token2] = ACTIONS(120),
    [anon_sym_LBRACK] = ACTIONS(123),
    [anon_sym_LBRACE] = ACTIONS(126),
    [anon_sym_SLASH] = ACTIONS(129),
    [anon_sym_Tuple_DOTnew] = ACTIONS(132),
    [anon_sym_BQUOTE] = ACTIONS(135),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(138),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(141),
    [anon_sym_AT] = ACTIONS(144),
    [anon_sym_AT_AT] = ACTIONS(147),
    [anon_sym___LINE__] = ACTIONS(150),
    [anon_sym___END_LINE__] = ACTIONS(150),
    [anon_sym___FILE__] = ACTIONS(150),
    [anon_sym___DIR__] = ACTIONS(150),
    [aux_sym_constant_token1] = ACTIONS(153),
  },
  [5] = {
    [sym__expression] = STATE(56),
    [sym_identifier] = STATE(239),
    [sym_bool] = STATE(56),
    [sym_float] = STATE(56),
    [sym_integer] = STATE(56),
    [sym_symbol] = STATE(56),
    [sym_char] = STATE(56),
    [sym_string] = STATE(69),
    [sym_array] = STATE(56),
    [sym_hash] = STATE(56),
    [sym_index_expression] = STATE(73),
    [sym_regex] = STATE(56),
    [sym_tuple] = STATE(56),
    [sym_namedTupleLiteral] = STATE(56),
    [sym_commandLiteral] = STATE(56),
    [sym_local_variable] = STATE(170),
    [sym_instance_variable] = STATE(170),
    [sym_class_variable] = STATE(170),
    [sym_constant] = STATE(170),
    [sym__variable] = STATE(170),
    [sym_assignment] = STATE(56),
    [aux_sym_identifier_token1] = ACTIONS(49),
    [sym_nil] = ACTIONS(156),
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
    [anon_sym_RBRACE] = ACTIONS(158),
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
    [sym__statement] = STATE(4),
    [sym__expression] = STATE(173),
    [sym_bool] = STATE(173),
    [sym_float] = STATE(173),
    [sym_integer] = STATE(173),
    [sym_symbol] = STATE(173),
    [sym_char] = STATE(173),
    [sym_string] = STATE(173),
    [sym_array] = STATE(173),
    [sym_hash] = STATE(173),
    [sym_index_expression] = STATE(90),
    [sym_regex] = STATE(173),
    [sym_tuple] = STATE(173),
    [sym_namedTupleLiteral] = STATE(173),
    [sym_commandLiteral] = STATE(173),
    [sym_local_variable] = STATE(176),
    [sym_instance_variable] = STATE(176),
    [sym_class_variable] = STATE(176),
    [sym_constant] = STATE(176),
    [sym__variable] = STATE(176),
    [sym_assignment] = STATE(173),
    [aux_sym_program_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(160),
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
  [7] = {
    [sym__expression] = STATE(121),
    [sym_bool] = STATE(121),
    [sym_float] = STATE(121),
    [sym_integer] = STATE(121),
    [sym_symbol] = STATE(121),
    [sym_char] = STATE(121),
    [sym_string] = STATE(121),
    [sym_array] = STATE(121),
    [sym_hash] = STATE(121),
    [sym_index_expression] = STATE(84),
    [sym_regex] = STATE(121),
    [sym_tuple] = STATE(121),
    [sym_namedTupleLiteral] = STATE(121),
    [sym_commandLiteral] = STATE(121),
    [sym_local_variable] = STATE(166),
    [sym_instance_variable] = STATE(166),
    [sym_class_variable] = STATE(166),
    [sym_constant] = STATE(166),
    [sym__variable] = STATE(166),
    [sym_assignment] = STATE(121),
    [sym_nil] = ACTIONS(162),
    [anon_sym_true] = ACTIONS(164),
    [anon_sym_false] = ACTIONS(164),
    [aux_sym_float_token1] = ACTIONS(55),
    [aux_sym_float_token2] = ACTIONS(57),
    [aux_sym_float_token3] = ACTIONS(57),
    [aux_sym_integer_token1] = ACTIONS(59),
    [aux_sym_integer_token2] = ACTIONS(59),
    [aux_sym_integer_token3] = ACTIONS(59),
    [aux_sym_integer_token4] = ACTIONS(61),
    [anon_sym_COLON] = ACTIONS(166),
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
    [anon_sym___LINE__] = ACTIONS(45),
    [anon_sym___END_LINE__] = ACTIONS(45),
    [anon_sym___FILE__] = ACTIONS(45),
    [anon_sym___DIR__] = ACTIONS(45),
    [aux_sym_constant_token1] = ACTIONS(47),
  },
  [8] = {
    [sym__expression] = STATE(230),
    [sym_bool] = STATE(230),
    [sym_float] = STATE(230),
    [sym_integer] = STATE(230),
    [sym_symbol] = STATE(230),
    [sym_char] = STATE(230),
    [sym_string] = STATE(230),
    [sym_array] = STATE(230),
    [sym_hash] = STATE(230),
    [sym_index_expression] = STATE(185),
    [sym_regex] = STATE(230),
    [sym_tuple] = STATE(230),
    [sym_namedTupleLiteral] = STATE(230),
    [sym_commandLiteral] = STATE(230),
    [sym_local_variable] = STATE(177),
    [sym_instance_variable] = STATE(177),
    [sym_class_variable] = STATE(177),
    [sym_constant] = STATE(177),
    [sym__variable] = STATE(177),
    [sym_assignment] = STATE(230),
    [sym_nil] = ACTIONS(170),
    [anon_sym_true] = ACTIONS(172),
    [anon_sym_false] = ACTIONS(172),
    [aux_sym_float_token1] = ACTIONS(174),
    [aux_sym_float_token2] = ACTIONS(176),
    [aux_sym_float_token3] = ACTIONS(176),
    [aux_sym_integer_token1] = ACTIONS(178),
    [aux_sym_integer_token2] = ACTIONS(178),
    [aux_sym_integer_token3] = ACTIONS(178),
    [aux_sym_integer_token4] = ACTIONS(180),
    [anon_sym_COLON] = ACTIONS(182),
    [anon_sym_DQUOTE] = ACTIONS(184),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(186),
    [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = ACTIONS(186),
    [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = ACTIONS(186),
    [anon_sym_SQUOTE_BSLASHa_SQUOTE] = ACTIONS(186),
    [anon_sym_SQUOTE_BSLASHb_SQUOTE] = ACTIONS(186),
    [anon_sym_SQUOTE_BSLASHe_SQUOTE] = ACTIONS(186),
    [anon_sym_SQUOTE_BSLASHf_SQUOTE] = ACTIONS(186),
    [anon_sym_SQUOTE_BSLASHn_SQUOTE] = ACTIONS(186),
    [anon_sym_SQUOTE_BSLASHr_SQUOTE] = ACTIONS(186),
    [anon_sym_SQUOTE_BSLASHt_SQUOTE] = ACTIONS(186),
    [anon_sym_SQUOTE_BSLASHv_SQUOTE] = ACTIONS(186),
    [aux_sym_char_token1] = ACTIONS(186),
    [aux_sym_char_token2] = ACTIONS(188),
    [anon_sym_LBRACK] = ACTIONS(190),
    [anon_sym_LBRACE] = ACTIONS(192),
    [anon_sym_SLASH] = ACTIONS(194),
    [anon_sym_Tuple_DOTnew] = ACTIONS(196),
    [anon_sym_BQUOTE] = ACTIONS(198),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(200),
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
    [sym__expression] = STATE(175),
    [sym_bool] = STATE(175),
    [sym_float] = STATE(175),
    [sym_integer] = STATE(175),
    [sym_symbol] = STATE(175),
    [sym_char] = STATE(175),
    [sym_string] = STATE(175),
    [sym_array] = STATE(175),
    [sym_hash] = STATE(175),
    [sym_index_expression] = STATE(90),
    [sym_regex] = STATE(175),
    [sym_tuple] = STATE(175),
    [sym_namedTupleLiteral] = STATE(175),
    [sym_commandLiteral] = STATE(175),
    [sym_local_variable] = STATE(176),
    [sym_instance_variable] = STATE(176),
    [sym_class_variable] = STATE(176),
    [sym_constant] = STATE(176),
    [sym__variable] = STATE(176),
    [sym_assignment] = STATE(175),
    [sym_nil] = ACTIONS(202),
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
  [10] = {
    [sym__expression] = STATE(136),
    [sym_bool] = STATE(136),
    [sym_float] = STATE(136),
    [sym_integer] = STATE(136),
    [sym_symbol] = STATE(136),
    [sym_char] = STATE(136),
    [sym_string] = STATE(136),
    [sym_array] = STATE(136),
    [sym_hash] = STATE(136),
    [sym_index_expression] = STATE(84),
    [sym_regex] = STATE(136),
    [sym_tuple] = STATE(136),
    [sym_namedTupleLiteral] = STATE(136),
    [sym_commandLiteral] = STATE(136),
    [sym_local_variable] = STATE(166),
    [sym_instance_variable] = STATE(166),
    [sym_class_variable] = STATE(166),
    [sym_constant] = STATE(166),
    [sym__variable] = STATE(166),
    [sym_assignment] = STATE(136),
    [sym_nil] = ACTIONS(204),
    [anon_sym_true] = ACTIONS(164),
    [anon_sym_false] = ACTIONS(164),
    [aux_sym_float_token1] = ACTIONS(55),
    [aux_sym_float_token2] = ACTIONS(57),
    [aux_sym_float_token3] = ACTIONS(57),
    [aux_sym_integer_token1] = ACTIONS(59),
    [aux_sym_integer_token2] = ACTIONS(59),
    [aux_sym_integer_token3] = ACTIONS(59),
    [aux_sym_integer_token4] = ACTIONS(61),
    [anon_sym_COLON] = ACTIONS(166),
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
    [anon_sym___LINE__] = ACTIONS(45),
    [anon_sym___END_LINE__] = ACTIONS(45),
    [anon_sym___FILE__] = ACTIONS(45),
    [anon_sym___DIR__] = ACTIONS(45),
    [aux_sym_constant_token1] = ACTIONS(47),
  },
  [11] = {
    [sym__expression] = STATE(78),
    [sym_bool] = STATE(78),
    [sym_float] = STATE(78),
    [sym_integer] = STATE(78),
    [sym_symbol] = STATE(78),
    [sym_char] = STATE(78),
    [sym_string] = STATE(78),
    [sym_array] = STATE(78),
    [sym_hash] = STATE(78),
    [sym_index_expression] = STATE(84),
    [sym_regex] = STATE(78),
    [sym_tuple] = STATE(78),
    [sym_namedTupleLiteral] = STATE(78),
    [sym_commandLiteral] = STATE(78),
    [sym_local_variable] = STATE(166),
    [sym_instance_variable] = STATE(166),
    [sym_class_variable] = STATE(166),
    [sym_constant] = STATE(166),
    [sym__variable] = STATE(166),
    [sym_assignment] = STATE(78),
    [sym_nil] = ACTIONS(206),
    [anon_sym_true] = ACTIONS(164),
    [anon_sym_false] = ACTIONS(164),
    [aux_sym_float_token1] = ACTIONS(55),
    [aux_sym_float_token2] = ACTIONS(57),
    [aux_sym_float_token3] = ACTIONS(57),
    [aux_sym_integer_token1] = ACTIONS(59),
    [aux_sym_integer_token2] = ACTIONS(59),
    [aux_sym_integer_token3] = ACTIONS(59),
    [aux_sym_integer_token4] = ACTIONS(61),
    [anon_sym_COLON] = ACTIONS(166),
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
    [anon_sym___LINE__] = ACTIONS(45),
    [anon_sym___END_LINE__] = ACTIONS(45),
    [anon_sym___FILE__] = ACTIONS(45),
    [anon_sym___DIR__] = ACTIONS(45),
    [aux_sym_constant_token1] = ACTIONS(47),
  },
  [12] = {
    [sym__expression] = STATE(78),
    [sym_bool] = STATE(78),
    [sym_float] = STATE(78),
    [sym_integer] = STATE(78),
    [sym_symbol] = STATE(78),
    [sym_char] = STATE(78),
    [sym_string] = STATE(78),
    [sym_array] = STATE(78),
    [sym_hash] = STATE(78),
    [sym_index_expression] = STATE(115),
    [sym_regex] = STATE(78),
    [sym_tuple] = STATE(78),
    [sym_namedTupleLiteral] = STATE(78),
    [sym_commandLiteral] = STATE(78),
    [sym_local_variable] = STATE(161),
    [sym_instance_variable] = STATE(161),
    [sym_class_variable] = STATE(161),
    [sym_constant] = STATE(161),
    [sym__variable] = STATE(161),
    [sym_assignment] = STATE(78),
    [sym_nil] = ACTIONS(206),
    [anon_sym_true] = ACTIONS(164),
    [anon_sym_false] = ACTIONS(164),
    [aux_sym_float_token1] = ACTIONS(55),
    [aux_sym_float_token2] = ACTIONS(57),
    [aux_sym_float_token3] = ACTIONS(57),
    [aux_sym_integer_token1] = ACTIONS(59),
    [aux_sym_integer_token2] = ACTIONS(59),
    [aux_sym_integer_token3] = ACTIONS(59),
    [aux_sym_integer_token4] = ACTIONS(61),
    [anon_sym_COLON] = ACTIONS(208),
    [anon_sym_DQUOTE] = ACTIONS(210),
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
    [sym__expression] = STATE(122),
    [sym_bool] = STATE(122),
    [sym_float] = STATE(122),
    [sym_integer] = STATE(122),
    [sym_symbol] = STATE(122),
    [sym_char] = STATE(122),
    [sym_string] = STATE(122),
    [sym_array] = STATE(122),
    [sym_hash] = STATE(122),
    [sym_index_expression] = STATE(84),
    [sym_regex] = STATE(122),
    [sym_tuple] = STATE(122),
    [sym_namedTupleLiteral] = STATE(122),
    [sym_commandLiteral] = STATE(122),
    [sym_local_variable] = STATE(166),
    [sym_instance_variable] = STATE(166),
    [sym_class_variable] = STATE(166),
    [sym_constant] = STATE(166),
    [sym__variable] = STATE(166),
    [sym_assignment] = STATE(122),
    [sym_nil] = ACTIONS(212),
    [anon_sym_true] = ACTIONS(164),
    [anon_sym_false] = ACTIONS(164),
    [aux_sym_float_token1] = ACTIONS(55),
    [aux_sym_float_token2] = ACTIONS(57),
    [aux_sym_float_token3] = ACTIONS(57),
    [aux_sym_integer_token1] = ACTIONS(59),
    [aux_sym_integer_token2] = ACTIONS(59),
    [aux_sym_integer_token3] = ACTIONS(59),
    [aux_sym_integer_token4] = ACTIONS(61),
    [anon_sym_COLON] = ACTIONS(166),
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
    [anon_sym___LINE__] = ACTIONS(45),
    [anon_sym___END_LINE__] = ACTIONS(45),
    [anon_sym___FILE__] = ACTIONS(45),
    [anon_sym___DIR__] = ACTIONS(45),
    [aux_sym_constant_token1] = ACTIONS(47),
  },
  [14] = {
    [sym__expression] = STATE(195),
    [sym_bool] = STATE(195),
    [sym_float] = STATE(195),
    [sym_integer] = STATE(195),
    [sym_symbol] = STATE(195),
    [sym_char] = STATE(195),
    [sym_string] = STATE(195),
    [sym_array] = STATE(195),
    [sym_hash] = STATE(195),
    [sym_index_expression] = STATE(185),
    [sym_regex] = STATE(195),
    [sym_tuple] = STATE(195),
    [sym_namedTupleLiteral] = STATE(195),
    [sym_commandLiteral] = STATE(195),
    [sym_local_variable] = STATE(177),
    [sym_instance_variable] = STATE(177),
    [sym_class_variable] = STATE(177),
    [sym_constant] = STATE(177),
    [sym__variable] = STATE(177),
    [sym_assignment] = STATE(195),
    [sym_nil] = ACTIONS(214),
    [anon_sym_true] = ACTIONS(172),
    [anon_sym_false] = ACTIONS(172),
    [aux_sym_float_token1] = ACTIONS(174),
    [aux_sym_float_token2] = ACTIONS(176),
    [aux_sym_float_token3] = ACTIONS(176),
    [aux_sym_integer_token1] = ACTIONS(178),
    [aux_sym_integer_token2] = ACTIONS(178),
    [aux_sym_integer_token3] = ACTIONS(178),
    [aux_sym_integer_token4] = ACTIONS(180),
    [anon_sym_COLON] = ACTIONS(182),
    [anon_sym_DQUOTE] = ACTIONS(184),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(186),
    [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = ACTIONS(186),
    [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = ACTIONS(186),
    [anon_sym_SQUOTE_BSLASHa_SQUOTE] = ACTIONS(186),
    [anon_sym_SQUOTE_BSLASHb_SQUOTE] = ACTIONS(186),
    [anon_sym_SQUOTE_BSLASHe_SQUOTE] = ACTIONS(186),
    [anon_sym_SQUOTE_BSLASHf_SQUOTE] = ACTIONS(186),
    [anon_sym_SQUOTE_BSLASHn_SQUOTE] = ACTIONS(186),
    [anon_sym_SQUOTE_BSLASHr_SQUOTE] = ACTIONS(186),
    [anon_sym_SQUOTE_BSLASHt_SQUOTE] = ACTIONS(186),
    [anon_sym_SQUOTE_BSLASHv_SQUOTE] = ACTIONS(186),
    [aux_sym_char_token1] = ACTIONS(186),
    [aux_sym_char_token2] = ACTIONS(188),
    [anon_sym_LBRACK] = ACTIONS(190),
    [anon_sym_LBRACE] = ACTIONS(192),
    [anon_sym_SLASH] = ACTIONS(194),
    [anon_sym_Tuple_DOTnew] = ACTIONS(196),
    [anon_sym_BQUOTE] = ACTIONS(198),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(200),
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
    [sym__expression] = STATE(93),
    [sym_bool] = STATE(93),
    [sym_float] = STATE(93),
    [sym_integer] = STATE(93),
    [sym_symbol] = STATE(93),
    [sym_char] = STATE(93),
    [sym_string] = STATE(93),
    [sym_array] = STATE(93),
    [sym_hash] = STATE(93),
    [sym_index_expression] = STATE(84),
    [sym_regex] = STATE(93),
    [sym_tuple] = STATE(93),
    [sym_namedTupleLiteral] = STATE(93),
    [sym_commandLiteral] = STATE(93),
    [sym_local_variable] = STATE(166),
    [sym_instance_variable] = STATE(166),
    [sym_class_variable] = STATE(166),
    [sym_constant] = STATE(166),
    [sym__variable] = STATE(166),
    [sym_assignment] = STATE(93),
    [sym_nil] = ACTIONS(216),
    [anon_sym_true] = ACTIONS(164),
    [anon_sym_false] = ACTIONS(164),
    [aux_sym_float_token1] = ACTIONS(55),
    [aux_sym_float_token2] = ACTIONS(57),
    [aux_sym_float_token3] = ACTIONS(57),
    [aux_sym_integer_token1] = ACTIONS(59),
    [aux_sym_integer_token2] = ACTIONS(59),
    [aux_sym_integer_token3] = ACTIONS(59),
    [aux_sym_integer_token4] = ACTIONS(61),
    [anon_sym_COLON] = ACTIONS(166),
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
    [anon_sym___LINE__] = ACTIONS(45),
    [anon_sym___END_LINE__] = ACTIONS(45),
    [anon_sym___FILE__] = ACTIONS(45),
    [anon_sym___DIR__] = ACTIONS(45),
    [aux_sym_constant_token1] = ACTIONS(47),
  },
  [16] = {
    [sym__expression] = STATE(128),
    [sym_bool] = STATE(128),
    [sym_float] = STATE(128),
    [sym_integer] = STATE(128),
    [sym_symbol] = STATE(128),
    [sym_char] = STATE(128),
    [sym_string] = STATE(128),
    [sym_array] = STATE(128),
    [sym_hash] = STATE(128),
    [sym_index_expression] = STATE(115),
    [sym_regex] = STATE(128),
    [sym_tuple] = STATE(128),
    [sym_namedTupleLiteral] = STATE(128),
    [sym_commandLiteral] = STATE(128),
    [sym_local_variable] = STATE(161),
    [sym_instance_variable] = STATE(161),
    [sym_class_variable] = STATE(161),
    [sym_constant] = STATE(161),
    [sym__variable] = STATE(161),
    [sym_assignment] = STATE(128),
    [sym_nil] = ACTIONS(218),
    [anon_sym_true] = ACTIONS(164),
    [anon_sym_false] = ACTIONS(164),
    [aux_sym_float_token1] = ACTIONS(55),
    [aux_sym_float_token2] = ACTIONS(57),
    [aux_sym_float_token3] = ACTIONS(57),
    [aux_sym_integer_token1] = ACTIONS(59),
    [aux_sym_integer_token2] = ACTIONS(59),
    [aux_sym_integer_token3] = ACTIONS(59),
    [aux_sym_integer_token4] = ACTIONS(61),
    [anon_sym_COLON] = ACTIONS(208),
    [anon_sym_DQUOTE] = ACTIONS(210),
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
    [sym__expression] = STATE(93),
    [sym_bool] = STATE(93),
    [sym_float] = STATE(93),
    [sym_integer] = STATE(93),
    [sym_symbol] = STATE(93),
    [sym_char] = STATE(93),
    [sym_string] = STATE(93),
    [sym_array] = STATE(93),
    [sym_hash] = STATE(93),
    [sym_index_expression] = STATE(115),
    [sym_regex] = STATE(93),
    [sym_tuple] = STATE(93),
    [sym_namedTupleLiteral] = STATE(93),
    [sym_commandLiteral] = STATE(93),
    [sym_local_variable] = STATE(161),
    [sym_instance_variable] = STATE(161),
    [sym_class_variable] = STATE(161),
    [sym_constant] = STATE(161),
    [sym__variable] = STATE(161),
    [sym_assignment] = STATE(93),
    [sym_nil] = ACTIONS(216),
    [anon_sym_true] = ACTIONS(164),
    [anon_sym_false] = ACTIONS(164),
    [aux_sym_float_token1] = ACTIONS(55),
    [aux_sym_float_token2] = ACTIONS(57),
    [aux_sym_float_token3] = ACTIONS(57),
    [aux_sym_integer_token1] = ACTIONS(59),
    [aux_sym_integer_token2] = ACTIONS(59),
    [aux_sym_integer_token3] = ACTIONS(59),
    [aux_sym_integer_token4] = ACTIONS(61),
    [anon_sym_COLON] = ACTIONS(208),
    [anon_sym_DQUOTE] = ACTIONS(210),
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
    [sym__expression] = STATE(78),
    [sym_bool] = STATE(78),
    [sym_float] = STATE(78),
    [sym_integer] = STATE(78),
    [sym_symbol] = STATE(78),
    [sym_char] = STATE(78),
    [sym_string] = STATE(78),
    [sym_array] = STATE(78),
    [sym_hash] = STATE(78),
    [sym_index_expression] = STATE(73),
    [sym_regex] = STATE(78),
    [sym_tuple] = STATE(78),
    [sym_namedTupleLiteral] = STATE(78),
    [sym_commandLiteral] = STATE(78),
    [sym_local_variable] = STATE(170),
    [sym_instance_variable] = STATE(170),
    [sym_class_variable] = STATE(170),
    [sym_constant] = STATE(170),
    [sym__variable] = STATE(170),
    [sym_assignment] = STATE(78),
    [sym_nil] = ACTIONS(206),
    [anon_sym_true] = ACTIONS(164),
    [anon_sym_false] = ACTIONS(164),
    [aux_sym_float_token1] = ACTIONS(55),
    [aux_sym_float_token2] = ACTIONS(57),
    [aux_sym_float_token3] = ACTIONS(57),
    [aux_sym_integer_token1] = ACTIONS(59),
    [aux_sym_integer_token2] = ACTIONS(59),
    [aux_sym_integer_token3] = ACTIONS(59),
    [aux_sym_integer_token4] = ACTIONS(61),
    [anon_sym_COLON] = ACTIONS(63),
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
    [anon_sym___LINE__] = ACTIONS(45),
    [anon_sym___END_LINE__] = ACTIONS(45),
    [anon_sym___FILE__] = ACTIONS(45),
    [anon_sym___DIR__] = ACTIONS(45),
    [aux_sym_constant_token1] = ACTIONS(47),
  },
  [19] = {
    [sym__expression] = STATE(135),
    [sym_bool] = STATE(135),
    [sym_float] = STATE(135),
    [sym_integer] = STATE(135),
    [sym_symbol] = STATE(135),
    [sym_char] = STATE(135),
    [sym_string] = STATE(135),
    [sym_array] = STATE(135),
    [sym_hash] = STATE(135),
    [sym_index_expression] = STATE(84),
    [sym_regex] = STATE(135),
    [sym_tuple] = STATE(135),
    [sym_namedTupleLiteral] = STATE(135),
    [sym_commandLiteral] = STATE(135),
    [sym_local_variable] = STATE(166),
    [sym_instance_variable] = STATE(166),
    [sym_class_variable] = STATE(166),
    [sym_constant] = STATE(166),
    [sym__variable] = STATE(166),
    [sym_assignment] = STATE(135),
    [sym_nil] = ACTIONS(222),
    [anon_sym_true] = ACTIONS(164),
    [anon_sym_false] = ACTIONS(164),
    [aux_sym_float_token1] = ACTIONS(55),
    [aux_sym_float_token2] = ACTIONS(57),
    [aux_sym_float_token3] = ACTIONS(57),
    [aux_sym_integer_token1] = ACTIONS(59),
    [aux_sym_integer_token2] = ACTIONS(59),
    [aux_sym_integer_token3] = ACTIONS(59),
    [aux_sym_integer_token4] = ACTIONS(61),
    [anon_sym_COLON] = ACTIONS(166),
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
    [anon_sym___LINE__] = ACTIONS(45),
    [anon_sym___END_LINE__] = ACTIONS(45),
    [anon_sym___FILE__] = ACTIONS(45),
    [anon_sym___DIR__] = ACTIONS(45),
    [aux_sym_constant_token1] = ACTIONS(47),
  },
  [20] = {
    [sym__expression] = STATE(211),
    [sym_bool] = STATE(211),
    [sym_float] = STATE(211),
    [sym_integer] = STATE(211),
    [sym_symbol] = STATE(211),
    [sym_char] = STATE(211),
    [sym_string] = STATE(211),
    [sym_array] = STATE(211),
    [sym_hash] = STATE(211),
    [sym_index_expression] = STATE(185),
    [sym_regex] = STATE(211),
    [sym_tuple] = STATE(211),
    [sym_namedTupleLiteral] = STATE(211),
    [sym_commandLiteral] = STATE(211),
    [sym_local_variable] = STATE(177),
    [sym_instance_variable] = STATE(177),
    [sym_class_variable] = STATE(177),
    [sym_constant] = STATE(177),
    [sym__variable] = STATE(177),
    [sym_assignment] = STATE(211),
    [sym_nil] = ACTIONS(224),
    [anon_sym_true] = ACTIONS(172),
    [anon_sym_false] = ACTIONS(172),
    [aux_sym_float_token1] = ACTIONS(174),
    [aux_sym_float_token2] = ACTIONS(176),
    [aux_sym_float_token3] = ACTIONS(176),
    [aux_sym_integer_token1] = ACTIONS(178),
    [aux_sym_integer_token2] = ACTIONS(178),
    [aux_sym_integer_token3] = ACTIONS(178),
    [aux_sym_integer_token4] = ACTIONS(180),
    [anon_sym_COLON] = ACTIONS(182),
    [anon_sym_DQUOTE] = ACTIONS(184),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(186),
    [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = ACTIONS(186),
    [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = ACTIONS(186),
    [anon_sym_SQUOTE_BSLASHa_SQUOTE] = ACTIONS(186),
    [anon_sym_SQUOTE_BSLASHb_SQUOTE] = ACTIONS(186),
    [anon_sym_SQUOTE_BSLASHe_SQUOTE] = ACTIONS(186),
    [anon_sym_SQUOTE_BSLASHf_SQUOTE] = ACTIONS(186),
    [anon_sym_SQUOTE_BSLASHn_SQUOTE] = ACTIONS(186),
    [anon_sym_SQUOTE_BSLASHr_SQUOTE] = ACTIONS(186),
    [anon_sym_SQUOTE_BSLASHt_SQUOTE] = ACTIONS(186),
    [anon_sym_SQUOTE_BSLASHv_SQUOTE] = ACTIONS(186),
    [aux_sym_char_token1] = ACTIONS(186),
    [aux_sym_char_token2] = ACTIONS(188),
    [anon_sym_LBRACK] = ACTIONS(190),
    [anon_sym_LBRACE] = ACTIONS(192),
    [anon_sym_SLASH] = ACTIONS(194),
    [anon_sym_Tuple_DOTnew] = ACTIONS(196),
    [anon_sym_BQUOTE] = ACTIONS(198),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(200),
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
    [sym__expression] = STATE(215),
    [sym_bool] = STATE(215),
    [sym_float] = STATE(215),
    [sym_integer] = STATE(215),
    [sym_symbol] = STATE(215),
    [sym_char] = STATE(215),
    [sym_string] = STATE(215),
    [sym_array] = STATE(215),
    [sym_hash] = STATE(215),
    [sym_index_expression] = STATE(185),
    [sym_regex] = STATE(215),
    [sym_tuple] = STATE(215),
    [sym_namedTupleLiteral] = STATE(215),
    [sym_commandLiteral] = STATE(215),
    [sym_local_variable] = STATE(177),
    [sym_instance_variable] = STATE(177),
    [sym_class_variable] = STATE(177),
    [sym_constant] = STATE(177),
    [sym__variable] = STATE(177),
    [sym_assignment] = STATE(215),
    [sym_nil] = ACTIONS(226),
    [anon_sym_true] = ACTIONS(172),
    [anon_sym_false] = ACTIONS(172),
    [aux_sym_float_token1] = ACTIONS(174),
    [aux_sym_float_token2] = ACTIONS(176),
    [aux_sym_float_token3] = ACTIONS(176),
    [aux_sym_integer_token1] = ACTIONS(178),
    [aux_sym_integer_token2] = ACTIONS(178),
    [aux_sym_integer_token3] = ACTIONS(178),
    [aux_sym_integer_token4] = ACTIONS(180),
    [anon_sym_COLON] = ACTIONS(182),
    [anon_sym_DQUOTE] = ACTIONS(184),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(186),
    [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = ACTIONS(186),
    [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = ACTIONS(186),
    [anon_sym_SQUOTE_BSLASHa_SQUOTE] = ACTIONS(186),
    [anon_sym_SQUOTE_BSLASHb_SQUOTE] = ACTIONS(186),
    [anon_sym_SQUOTE_BSLASHe_SQUOTE] = ACTIONS(186),
    [anon_sym_SQUOTE_BSLASHf_SQUOTE] = ACTIONS(186),
    [anon_sym_SQUOTE_BSLASHn_SQUOTE] = ACTIONS(186),
    [anon_sym_SQUOTE_BSLASHr_SQUOTE] = ACTIONS(186),
    [anon_sym_SQUOTE_BSLASHt_SQUOTE] = ACTIONS(186),
    [anon_sym_SQUOTE_BSLASHv_SQUOTE] = ACTIONS(186),
    [aux_sym_char_token1] = ACTIONS(186),
    [aux_sym_char_token2] = ACTIONS(188),
    [anon_sym_LBRACK] = ACTIONS(190),
    [anon_sym_LBRACE] = ACTIONS(192),
    [anon_sym_SLASH] = ACTIONS(194),
    [anon_sym_Tuple_DOTnew] = ACTIONS(196),
    [anon_sym_BQUOTE] = ACTIONS(198),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(200),
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
  [22] = {
    [sym__expression] = STATE(97),
    [sym_bool] = STATE(97),
    [sym_float] = STATE(97),
    [sym_integer] = STATE(97),
    [sym_symbol] = STATE(97),
    [sym_char] = STATE(97),
    [sym_string] = STATE(97),
    [sym_array] = STATE(97),
    [sym_hash] = STATE(97),
    [sym_index_expression] = STATE(84),
    [sym_regex] = STATE(97),
    [sym_tuple] = STATE(97),
    [sym_namedTupleLiteral] = STATE(97),
    [sym_commandLiteral] = STATE(97),
    [sym_local_variable] = STATE(166),
    [sym_instance_variable] = STATE(166),
    [sym_class_variable] = STATE(166),
    [sym_constant] = STATE(166),
    [sym__variable] = STATE(166),
    [sym_assignment] = STATE(97),
    [sym_nil] = ACTIONS(228),
    [anon_sym_true] = ACTIONS(164),
    [anon_sym_false] = ACTIONS(164),
    [aux_sym_float_token1] = ACTIONS(55),
    [aux_sym_float_token2] = ACTIONS(57),
    [aux_sym_float_token3] = ACTIONS(57),
    [aux_sym_integer_token1] = ACTIONS(59),
    [aux_sym_integer_token2] = ACTIONS(59),
    [aux_sym_integer_token3] = ACTIONS(59),
    [aux_sym_integer_token4] = ACTIONS(61),
    [anon_sym_COLON] = ACTIONS(166),
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
    [anon_sym___LINE__] = ACTIONS(45),
    [anon_sym___END_LINE__] = ACTIONS(45),
    [anon_sym___FILE__] = ACTIONS(45),
    [anon_sym___DIR__] = ACTIONS(45),
    [aux_sym_constant_token1] = ACTIONS(47),
  },
  [23] = {
    [sym__expression] = STATE(78),
    [sym_bool] = STATE(78),
    [sym_float] = STATE(78),
    [sym_integer] = STATE(78),
    [sym_symbol] = STATE(78),
    [sym_char] = STATE(78),
    [sym_string] = STATE(78),
    [sym_array] = STATE(78),
    [sym_hash] = STATE(78),
    [sym_index_expression] = STATE(158),
    [sym_regex] = STATE(78),
    [sym_tuple] = STATE(78),
    [sym_namedTupleLiteral] = STATE(78),
    [sym_commandLiteral] = STATE(78),
    [sym_local_variable] = STATE(164),
    [sym_instance_variable] = STATE(164),
    [sym_class_variable] = STATE(164),
    [sym_constant] = STATE(164),
    [sym__variable] = STATE(164),
    [sym_assignment] = STATE(78),
    [sym_nil] = ACTIONS(206),
    [anon_sym_true] = ACTIONS(164),
    [anon_sym_false] = ACTIONS(164),
    [aux_sym_float_token1] = ACTIONS(55),
    [aux_sym_float_token2] = ACTIONS(57),
    [aux_sym_float_token3] = ACTIONS(57),
    [aux_sym_integer_token1] = ACTIONS(59),
    [aux_sym_integer_token2] = ACTIONS(59),
    [aux_sym_integer_token3] = ACTIONS(59),
    [aux_sym_integer_token4] = ACTIONS(61),
    [anon_sym_COLON] = ACTIONS(230),
    [anon_sym_DQUOTE] = ACTIONS(232),
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
  [24] = {
    [sym__expression] = STATE(187),
    [sym_bool] = STATE(187),
    [sym_float] = STATE(187),
    [sym_integer] = STATE(187),
    [sym_symbol] = STATE(187),
    [sym_char] = STATE(187),
    [sym_string] = STATE(187),
    [sym_array] = STATE(187),
    [sym_hash] = STATE(187),
    [sym_index_expression] = STATE(84),
    [sym_regex] = STATE(187),
    [sym_tuple] = STATE(187),
    [sym_namedTupleLiteral] = STATE(187),
    [sym_commandLiteral] = STATE(187),
    [sym_local_variable] = STATE(166),
    [sym_instance_variable] = STATE(166),
    [sym_class_variable] = STATE(166),
    [sym_constant] = STATE(166),
    [sym__variable] = STATE(166),
    [sym_assignment] = STATE(187),
    [sym_nil] = ACTIONS(234),
    [anon_sym_true] = ACTIONS(164),
    [anon_sym_false] = ACTIONS(164),
    [aux_sym_float_token1] = ACTIONS(55),
    [aux_sym_float_token2] = ACTIONS(57),
    [aux_sym_float_token3] = ACTIONS(57),
    [aux_sym_integer_token1] = ACTIONS(59),
    [aux_sym_integer_token2] = ACTIONS(59),
    [aux_sym_integer_token3] = ACTIONS(59),
    [aux_sym_integer_token4] = ACTIONS(61),
    [anon_sym_COLON] = ACTIONS(166),
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
    [anon_sym___LINE__] = ACTIONS(45),
    [anon_sym___END_LINE__] = ACTIONS(45),
    [anon_sym___FILE__] = ACTIONS(45),
    [anon_sym___DIR__] = ACTIONS(45),
    [aux_sym_constant_token1] = ACTIONS(47),
  },
  [25] = {
    [sym__expression] = STATE(148),
    [sym_bool] = STATE(148),
    [sym_float] = STATE(148),
    [sym_integer] = STATE(148),
    [sym_symbol] = STATE(148),
    [sym_char] = STATE(148),
    [sym_string] = STATE(148),
    [sym_array] = STATE(148),
    [sym_hash] = STATE(148),
    [sym_index_expression] = STATE(115),
    [sym_regex] = STATE(148),
    [sym_tuple] = STATE(148),
    [sym_namedTupleLiteral] = STATE(148),
    [sym_commandLiteral] = STATE(148),
    [sym_local_variable] = STATE(161),
    [sym_instance_variable] = STATE(161),
    [sym_class_variable] = STATE(161),
    [sym_constant] = STATE(161),
    [sym__variable] = STATE(161),
    [sym_assignment] = STATE(148),
    [sym_nil] = ACTIONS(236),
    [anon_sym_true] = ACTIONS(164),
    [anon_sym_false] = ACTIONS(164),
    [aux_sym_float_token1] = ACTIONS(55),
    [aux_sym_float_token2] = ACTIONS(57),
    [aux_sym_float_token3] = ACTIONS(57),
    [aux_sym_integer_token1] = ACTIONS(59),
    [aux_sym_integer_token2] = ACTIONS(59),
    [aux_sym_integer_token3] = ACTIONS(59),
    [aux_sym_integer_token4] = ACTIONS(61),
    [anon_sym_COLON] = ACTIONS(208),
    [anon_sym_DQUOTE] = ACTIONS(210),
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
  [26] = {
    [sym__expression] = STATE(186),
    [sym_bool] = STATE(186),
    [sym_float] = STATE(186),
    [sym_integer] = STATE(186),
    [sym_symbol] = STATE(186),
    [sym_char] = STATE(186),
    [sym_string] = STATE(186),
    [sym_array] = STATE(186),
    [sym_hash] = STATE(186),
    [sym_index_expression] = STATE(84),
    [sym_regex] = STATE(186),
    [sym_tuple] = STATE(186),
    [sym_namedTupleLiteral] = STATE(186),
    [sym_commandLiteral] = STATE(186),
    [sym_local_variable] = STATE(166),
    [sym_instance_variable] = STATE(166),
    [sym_class_variable] = STATE(166),
    [sym_constant] = STATE(166),
    [sym__variable] = STATE(166),
    [sym_assignment] = STATE(186),
    [sym_nil] = ACTIONS(238),
    [anon_sym_true] = ACTIONS(164),
    [anon_sym_false] = ACTIONS(164),
    [aux_sym_float_token1] = ACTIONS(55),
    [aux_sym_float_token2] = ACTIONS(57),
    [aux_sym_float_token3] = ACTIONS(57),
    [aux_sym_integer_token1] = ACTIONS(59),
    [aux_sym_integer_token2] = ACTIONS(59),
    [aux_sym_integer_token3] = ACTIONS(59),
    [aux_sym_integer_token4] = ACTIONS(61),
    [anon_sym_COLON] = ACTIONS(166),
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
    [anon_sym___LINE__] = ACTIONS(45),
    [anon_sym___END_LINE__] = ACTIONS(45),
    [anon_sym___FILE__] = ACTIONS(45),
    [anon_sym___DIR__] = ACTIONS(45),
    [aux_sym_constant_token1] = ACTIONS(47),
  },
  [27] = {
    [sym__expression] = STATE(203),
    [sym_bool] = STATE(203),
    [sym_float] = STATE(203),
    [sym_integer] = STATE(203),
    [sym_symbol] = STATE(203),
    [sym_char] = STATE(203),
    [sym_string] = STATE(203),
    [sym_array] = STATE(203),
    [sym_hash] = STATE(203),
    [sym_index_expression] = STATE(158),
    [sym_regex] = STATE(203),
    [sym_tuple] = STATE(203),
    [sym_namedTupleLiteral] = STATE(203),
    [sym_commandLiteral] = STATE(203),
    [sym_local_variable] = STATE(164),
    [sym_instance_variable] = STATE(164),
    [sym_class_variable] = STATE(164),
    [sym_constant] = STATE(164),
    [sym__variable] = STATE(164),
    [sym_assignment] = STATE(203),
    [sym_nil] = ACTIONS(240),
    [anon_sym_true] = ACTIONS(164),
    [anon_sym_false] = ACTIONS(164),
    [aux_sym_float_token1] = ACTIONS(55),
    [aux_sym_float_token2] = ACTIONS(57),
    [aux_sym_float_token3] = ACTIONS(57),
    [aux_sym_integer_token1] = ACTIONS(59),
    [aux_sym_integer_token2] = ACTIONS(59),
    [aux_sym_integer_token3] = ACTIONS(59),
    [aux_sym_integer_token4] = ACTIONS(61),
    [anon_sym_COLON] = ACTIONS(230),
    [anon_sym_DQUOTE] = ACTIONS(232),
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
  [28] = {
    [sym__expression] = STATE(99),
    [sym_bool] = STATE(99),
    [sym_float] = STATE(99),
    [sym_integer] = STATE(99),
    [sym_symbol] = STATE(99),
    [sym_char] = STATE(99),
    [sym_string] = STATE(99),
    [sym_array] = STATE(99),
    [sym_hash] = STATE(99),
    [sym_index_expression] = STATE(84),
    [sym_regex] = STATE(99),
    [sym_tuple] = STATE(99),
    [sym_namedTupleLiteral] = STATE(99),
    [sym_commandLiteral] = STATE(99),
    [sym_local_variable] = STATE(166),
    [sym_instance_variable] = STATE(166),
    [sym_class_variable] = STATE(166),
    [sym_constant] = STATE(166),
    [sym__variable] = STATE(166),
    [sym_assignment] = STATE(99),
    [sym_nil] = ACTIONS(242),
    [anon_sym_true] = ACTIONS(164),
    [anon_sym_false] = ACTIONS(164),
    [aux_sym_float_token1] = ACTIONS(55),
    [aux_sym_float_token2] = ACTIONS(57),
    [aux_sym_float_token3] = ACTIONS(57),
    [aux_sym_integer_token1] = ACTIONS(59),
    [aux_sym_integer_token2] = ACTIONS(59),
    [aux_sym_integer_token3] = ACTIONS(59),
    [aux_sym_integer_token4] = ACTIONS(61),
    [anon_sym_COLON] = ACTIONS(166),
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
    [anon_sym___LINE__] = ACTIONS(45),
    [anon_sym___END_LINE__] = ACTIONS(45),
    [anon_sym___FILE__] = ACTIONS(45),
    [anon_sym___DIR__] = ACTIONS(45),
    [aux_sym_constant_token1] = ACTIONS(47),
  },
  [29] = {
    [sym__expression] = STATE(126),
    [sym_bool] = STATE(126),
    [sym_float] = STATE(126),
    [sym_integer] = STATE(126),
    [sym_symbol] = STATE(126),
    [sym_char] = STATE(126),
    [sym_string] = STATE(126),
    [sym_array] = STATE(126),
    [sym_hash] = STATE(126),
    [sym_index_expression] = STATE(115),
    [sym_regex] = STATE(126),
    [sym_tuple] = STATE(126),
    [sym_namedTupleLiteral] = STATE(126),
    [sym_commandLiteral] = STATE(126),
    [sym_local_variable] = STATE(161),
    [sym_instance_variable] = STATE(161),
    [sym_class_variable] = STATE(161),
    [sym_constant] = STATE(161),
    [sym__variable] = STATE(161),
    [sym_assignment] = STATE(126),
    [sym_nil] = ACTIONS(244),
    [anon_sym_true] = ACTIONS(164),
    [anon_sym_false] = ACTIONS(164),
    [aux_sym_float_token1] = ACTIONS(55),
    [aux_sym_float_token2] = ACTIONS(57),
    [aux_sym_float_token3] = ACTIONS(57),
    [aux_sym_integer_token1] = ACTIONS(59),
    [aux_sym_integer_token2] = ACTIONS(59),
    [aux_sym_integer_token3] = ACTIONS(59),
    [aux_sym_integer_token4] = ACTIONS(61),
    [anon_sym_COLON] = ACTIONS(208),
    [anon_sym_DQUOTE] = ACTIONS(210),
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
    ACTIONS(248), 7,
      aux_sym_float_token2,
      aux_sym_float_token3,
      aux_sym_integer_token4,
      aux_sym_char_token2,
      aux_sym_local_variable_token1,
      anon_sym_AT,
      aux_sym_constant_token1,
    ACTIONS(246), 33,
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
    ACTIONS(252), 1,
      anon_sym_DQUOTE,
    STATE(67), 1,
      sym__operator,
    ACTIONS(254), 7,
      anon_sym_STAR,
      anon_sym_EQ_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_LBRACK_RBRACK,
      anon_sym_BANG,
    ACTIONS(250), 20,
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
    ACTIONS(258), 1,
      anon_sym_DQUOTE,
    STATE(196), 1,
      sym__operator,
    ACTIONS(260), 7,
      anon_sym_STAR,
      anon_sym_EQ_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_LBRACK_RBRACK,
      anon_sym_BANG,
    ACTIONS(256), 20,
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
    ACTIONS(262), 1,
      anon_sym_DQUOTE,
    STATE(67), 1,
      sym__operator,
    ACTIONS(254), 7,
      anon_sym_STAR,
      anon_sym_EQ_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_LBRACK_RBRACK,
      anon_sym_BANG,
    ACTIONS(250), 20,
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
    ACTIONS(264), 1,
      anon_sym_DQUOTE,
    STATE(67), 1,
      sym__operator,
    ACTIONS(254), 7,
      anon_sym_STAR,
      anon_sym_EQ_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_LBRACK_RBRACK,
      anon_sym_BANG,
    ACTIONS(250), 20,
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
    ACTIONS(268), 1,
      anon_sym_DQUOTE,
    STATE(178), 1,
      sym__operator,
    ACTIONS(270), 7,
      anon_sym_STAR,
      anon_sym_EQ_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_LBRACK_RBRACK,
      anon_sym_BANG,
    ACTIONS(266), 20,
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
    ACTIONS(272), 1,
      anon_sym_DQUOTE,
    STATE(67), 1,
      sym__operator,
    ACTIONS(254), 7,
      anon_sym_STAR,
      anon_sym_EQ_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_LBRACK_RBRACK,
      anon_sym_BANG,
    ACTIONS(250), 20,
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
  [294] = 3,
    ACTIONS(278), 1,
      sym_comment,
    ACTIONS(276), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
    ACTIONS(274), 4,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [308] = 3,
    ACTIONS(278), 1,
      sym_comment,
    ACTIONS(276), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
    ACTIONS(280), 4,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [322] = 3,
    ACTIONS(278), 1,
      sym_comment,
    ACTIONS(276), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
    ACTIONS(282), 3,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [335] = 3,
    ACTIONS(278), 1,
      sym_comment,
    ACTIONS(276), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
    ACTIONS(280), 3,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [348] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 1,
      anon_sym_EQ,
    ACTIONS(284), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [361] = 3,
    ACTIONS(278), 1,
      sym_comment,
    ACTIONS(276), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
    ACTIONS(288), 3,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [374] = 3,
    ACTIONS(278), 1,
      sym_comment,
    ACTIONS(276), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
    ACTIONS(274), 3,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [387] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [397] = 3,
    ACTIONS(278), 1,
      sym_comment,
    ACTIONS(276), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
    ACTIONS(280), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [409] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      anon_sym_COLON,
    ACTIONS(294), 3,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [421] = 3,
    ACTIONS(278), 1,
      sym_comment,
    ACTIONS(276), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
    ACTIONS(280), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [433] = 3,
    ACTIONS(278), 1,
      sym_comment,
    ACTIONS(276), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
    ACTIONS(288), 2,
      anon_sym_SEMI,
      aux_sym__statement_token1,
  [445] = 3,
    ACTIONS(278), 1,
      sym_comment,
    ACTIONS(276), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
    ACTIONS(282), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [457] = 3,
    ACTIONS(278), 1,
      sym_comment,
    ACTIONS(276), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
    ACTIONS(280), 2,
      anon_sym_SEMI,
      aux_sym__statement_token1,
  [469] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [479] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [489] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      anon_sym_COLON,
    ACTIONS(294), 3,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [501] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [511] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      anon_sym_COMMA,
    ACTIONS(306), 1,
      anon_sym_EQ_GT,
    ACTIONS(308), 1,
      anon_sym_RBRACE,
    STATE(86), 1,
      aux_sym_array_repeat1,
  [527] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      anon_sym_COMMA,
    ACTIONS(310), 1,
      anon_sym_EQ_GT,
    ACTIONS(312), 1,
      anon_sym_RBRACE,
    STATE(137), 1,
      aux_sym_array_repeat1,
  [543] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      anon_sym_COMMA,
    ACTIONS(314), 1,
      anon_sym_EQ_GT,
    ACTIONS(316), 1,
      anon_sym_RBRACE,
    STATE(124), 1,
      aux_sym_array_repeat1,
  [559] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [569] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [579] = 3,
    ACTIONS(278), 1,
      sym_comment,
    ACTIONS(276), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
    ACTIONS(288), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [591] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [601] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [611] = 3,
    ACTIONS(278), 1,
      sym_comment,
    ACTIONS(274), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(276), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
  [623] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [633] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [643] = 3,
    ACTIONS(278), 1,
      sym_comment,
    ACTIONS(274), 2,
      anon_sym_SEMI,
      aux_sym__statement_token1,
    ACTIONS(276), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
  [655] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [665] = 3,
    ACTIONS(278), 1,
      sym_comment,
    ACTIONS(274), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(276), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
  [677] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 1,
      anon_sym_COLON,
    ACTIONS(294), 3,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [689] = 3,
    ACTIONS(278), 1,
      sym_comment,
    ACTIONS(276), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
    ACTIONS(288), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [701] = 3,
    ACTIONS(278), 1,
      sym_comment,
    ACTIONS(276), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
    ACTIONS(282), 2,
      anon_sym_SEMI,
      aux_sym__statement_token1,
  [713] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [723] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 1,
      anon_sym_EQ,
    ACTIONS(294), 3,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [735] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [745] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [755] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      aux_sym_identifier_token1,
    ACTIONS(344), 1,
      anon_sym_DQUOTE,
    STATE(190), 2,
      sym_identifier,
      sym_string,
  [769] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [779] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [789] = 3,
    ACTIONS(278), 1,
      sym_comment,
    ACTIONS(276), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
    ACTIONS(282), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [801] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [811] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [821] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      anon_sym_COMMA,
    ACTIONS(356), 1,
      anon_sym_RBRACK,
    STATE(95), 1,
      aux_sym_array_repeat1,
  [834] = 3,
    ACTIONS(278), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_COLON,
    ACTIONS(276), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
  [845] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 1,
      anon_sym_EQ,
    ACTIONS(294), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [856] = 4,
    ACTIONS(278), 1,
      sym_comment,
    ACTIONS(360), 1,
      anon_sym_DQUOTE,
    ACTIONS(362), 1,
      aux_sym_symbol_token1,
    STATE(92), 1,
      aux_sym_symbol_repeat1,
  [869] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      anon_sym_COMMA,
    ACTIONS(364), 1,
      anon_sym_RBRACE,
    STATE(89), 1,
      aux_sym_array_repeat1,
  [882] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 1,
      aux_sym_identifier_token1,
    ACTIONS(368), 2,
      anon_sym_LBRACK2,
      anon_sym_EQ,
  [893] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      aux_sym_identifier_token1,
    ACTIONS(372), 2,
      anon_sym_LBRACK2,
      anon_sym_EQ,
  [904] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 1,
      anon_sym_COMMA,
    ACTIONS(377), 1,
      anon_sym_RBRACE,
    STATE(89), 1,
      aux_sym_array_repeat1,
  [917] = 4,
    ACTIONS(278), 1,
      sym_comment,
    ACTIONS(294), 1,
      aux_sym__statement_token1,
    ACTIONS(379), 1,
      anon_sym_SEMI,
    ACTIONS(381), 1,
      anon_sym_EQ,
  [930] = 4,
    ACTIONS(278), 1,
      sym_comment,
    ACTIONS(383), 1,
      anon_sym_DQUOTE,
    ACTIONS(385), 1,
      aux_sym_symbol_token1,
    STATE(131), 1,
      aux_sym_symbol_repeat1,
  [943] = 4,
    ACTIONS(278), 1,
      sym_comment,
    ACTIONS(387), 1,
      anon_sym_DQUOTE,
    ACTIONS(389), 1,
      aux_sym_symbol_token1,
    STATE(125), 1,
      aux_sym_symbol_repeat1,
  [956] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [965] = 4,
    ACTIONS(278), 1,
      sym_comment,
    ACTIONS(389), 1,
      aux_sym_symbol_token1,
    ACTIONS(391), 1,
      anon_sym_DQUOTE,
    STATE(125), 1,
      aux_sym_symbol_repeat1,
  [978] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 1,
      anon_sym_RBRACK,
    ACTIONS(393), 1,
      anon_sym_COMMA,
    STATE(95), 1,
      aux_sym_array_repeat1,
  [991] = 4,
    ACTIONS(278), 1,
      sym_comment,
    ACTIONS(396), 1,
      anon_sym_DQUOTE,
    ACTIONS(398), 1,
      aux_sym_symbol_token1,
    STATE(94), 1,
      aux_sym_symbol_repeat1,
  [1004] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(400), 1,
      anon_sym_COMMA,
    ACTIONS(402), 1,
      anon_sym_RBRACE,
    STATE(103), 1,
      aux_sym_hash_repeat1,
  [1017] = 4,
    ACTIONS(278), 1,
      sym_comment,
    ACTIONS(389), 1,
      aux_sym_symbol_token1,
    ACTIONS(404), 1,
      anon_sym_DQUOTE,
    STATE(125), 1,
      aux_sym_symbol_repeat1,
  [1030] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(406), 1,
      anon_sym_COMMA,
    ACTIONS(408), 1,
      anon_sym_RBRACE,
    STATE(105), 1,
      aux_sym_namedTupleLiteral_repeat1,
  [1043] = 3,
    ACTIONS(278), 1,
      sym_comment,
    ACTIONS(284), 1,
      aux_sym__statement_token1,
    ACTIONS(286), 2,
      anon_sym_SEMI,
      anon_sym_EQ,
  [1054] = 4,
    ACTIONS(278), 1,
      sym_comment,
    ACTIONS(410), 1,
      anon_sym_DQUOTE,
    ACTIONS(412), 1,
      aux_sym_symbol_token1,
    STATE(98), 1,
      aux_sym_symbol_repeat1,
  [1067] = 4,
    ACTIONS(278), 1,
      sym_comment,
    ACTIONS(389), 1,
      aux_sym_symbol_token1,
    ACTIONS(414), 1,
      anon_sym_DQUOTE,
    STATE(125), 1,
      aux_sym_symbol_repeat1,
  [1080] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(400), 1,
      anon_sym_COMMA,
    ACTIONS(416), 1,
      anon_sym_RBRACE,
    STATE(109), 1,
      aux_sym_hash_repeat1,
  [1093] = 4,
    ACTIONS(278), 1,
      sym_comment,
    ACTIONS(389), 1,
      aux_sym_symbol_token1,
    ACTIONS(418), 1,
      anon_sym_DQUOTE,
    STATE(125), 1,
      aux_sym_symbol_repeat1,
  [1106] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(406), 1,
      anon_sym_COMMA,
    ACTIONS(420), 1,
      anon_sym_RBRACE,
    STATE(112), 1,
      aux_sym_namedTupleLiteral_repeat1,
  [1119] = 4,
    ACTIONS(278), 1,
      sym_comment,
    ACTIONS(422), 1,
      anon_sym_DQUOTE,
    ACTIONS(424), 1,
      aux_sym_symbol_token1,
    STATE(102), 1,
      aux_sym_symbol_repeat1,
  [1132] = 4,
    ACTIONS(278), 1,
      sym_comment,
    ACTIONS(426), 1,
      anon_sym_DQUOTE,
    ACTIONS(428), 1,
      aux_sym_symbol_token1,
    STATE(104), 1,
      aux_sym_symbol_repeat1,
  [1145] = 4,
    ACTIONS(278), 1,
      sym_comment,
    ACTIONS(389), 1,
      aux_sym_symbol_token1,
    ACTIONS(430), 1,
      anon_sym_DQUOTE,
    STATE(125), 1,
      aux_sym_symbol_repeat1,
  [1158] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 1,
      anon_sym_COMMA,
    ACTIONS(435), 1,
      anon_sym_RBRACE,
    STATE(109), 1,
      aux_sym_hash_repeat1,
  [1171] = 4,
    ACTIONS(278), 1,
      sym_comment,
    ACTIONS(389), 1,
      aux_sym_symbol_token1,
    ACTIONS(437), 1,
      anon_sym_DQUOTE,
    STATE(125), 1,
      aux_sym_symbol_repeat1,
  [1184] = 4,
    ACTIONS(278), 1,
      sym_comment,
    ACTIONS(439), 1,
      anon_sym_DQUOTE,
    ACTIONS(441), 1,
      aux_sym_symbol_token1,
    STATE(108), 1,
      aux_sym_symbol_repeat1,
  [1197] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      anon_sym_COMMA,
    ACTIONS(446), 1,
      anon_sym_RBRACE,
    STATE(112), 1,
      aux_sym_namedTupleLiteral_repeat1,
  [1210] = 4,
    ACTIONS(278), 1,
      sym_comment,
    ACTIONS(448), 1,
      anon_sym_DQUOTE,
    ACTIONS(450), 1,
      aux_sym_symbol_token1,
    STATE(110), 1,
      aux_sym_symbol_repeat1,
  [1223] = 4,
    ACTIONS(278), 1,
      sym_comment,
    ACTIONS(389), 1,
      aux_sym_symbol_token1,
    ACTIONS(452), 1,
      anon_sym_DQUOTE,
    STATE(125), 1,
      aux_sym_symbol_repeat1,
  [1236] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 1,
      anon_sym_EQ,
    ACTIONS(294), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1247] = 4,
    ACTIONS(278), 1,
      sym_comment,
    ACTIONS(389), 1,
      aux_sym_symbol_token1,
    ACTIONS(456), 1,
      anon_sym_DQUOTE,
    STATE(125), 1,
      aux_sym_symbol_repeat1,
  [1260] = 4,
    ACTIONS(278), 1,
      sym_comment,
    ACTIONS(458), 1,
      anon_sym_DQUOTE,
    ACTIONS(460), 1,
      aux_sym_symbol_token1,
    STATE(114), 1,
      aux_sym_symbol_repeat1,
  [1273] = 4,
    ACTIONS(278), 1,
      sym_comment,
    ACTIONS(462), 1,
      anon_sym_DQUOTE,
    ACTIONS(464), 1,
      aux_sym_symbol_token1,
    STATE(116), 1,
      aux_sym_symbol_repeat1,
  [1286] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(406), 1,
      anon_sym_COMMA,
    ACTIONS(466), 1,
      anon_sym_RBRACE,
    STATE(112), 1,
      aux_sym_namedTupleLiteral_repeat1,
  [1299] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(400), 1,
      anon_sym_COMMA,
    ACTIONS(468), 1,
      anon_sym_RBRACE,
    STATE(109), 1,
      aux_sym_hash_repeat1,
  [1312] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(406), 1,
      anon_sym_COMMA,
    ACTIONS(470), 1,
      anon_sym_RBRACE,
    STATE(119), 1,
      aux_sym_namedTupleLiteral_repeat1,
  [1325] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(400), 1,
      anon_sym_COMMA,
    ACTIONS(472), 1,
      anon_sym_RBRACE,
    STATE(120), 1,
      aux_sym_hash_repeat1,
  [1338] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      anon_sym_COMMA,
    ACTIONS(474), 1,
      anon_sym_RBRACK,
    STATE(95), 1,
      aux_sym_array_repeat1,
  [1351] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      anon_sym_COMMA,
    ACTIONS(476), 1,
      anon_sym_RBRACE,
    STATE(89), 1,
      aux_sym_array_repeat1,
  [1364] = 3,
    ACTIONS(278), 1,
      sym_comment,
    STATE(125), 1,
      aux_sym_symbol_repeat1,
    ACTIONS(478), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
  [1375] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      anon_sym_COMMA,
    ACTIONS(481), 1,
      anon_sym_RBRACK,
    STATE(123), 1,
      aux_sym_array_repeat1,
  [1388] = 4,
    ACTIONS(278), 1,
      sym_comment,
    ACTIONS(389), 1,
      aux_sym_symbol_token1,
    ACTIONS(483), 1,
      anon_sym_DQUOTE,
    STATE(125), 1,
      aux_sym_symbol_repeat1,
  [1401] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      anon_sym_COMMA,
    ACTIONS(485), 1,
      anon_sym_RBRACK,
    STATE(82), 1,
      aux_sym_array_repeat1,
  [1414] = 4,
    ACTIONS(278), 1,
      sym_comment,
    ACTIONS(389), 1,
      aux_sym_symbol_token1,
    ACTIONS(487), 1,
      anon_sym_DQUOTE,
    STATE(125), 1,
      aux_sym_symbol_repeat1,
  [1427] = 4,
    ACTIONS(278), 1,
      sym_comment,
    ACTIONS(489), 1,
      anon_sym_DQUOTE,
    ACTIONS(491), 1,
      aux_sym_symbol_token1,
    STATE(127), 1,
      aux_sym_symbol_repeat1,
  [1440] = 4,
    ACTIONS(278), 1,
      sym_comment,
    ACTIONS(389), 1,
      aux_sym_symbol_token1,
    ACTIONS(493), 1,
      anon_sym_DQUOTE,
    STATE(125), 1,
      aux_sym_symbol_repeat1,
  [1453] = 4,
    ACTIONS(278), 1,
      sym_comment,
    ACTIONS(495), 1,
      anon_sym_DQUOTE,
    ACTIONS(497), 1,
      aux_sym_symbol_token1,
    STATE(129), 1,
      aux_sym_symbol_repeat1,
  [1466] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(406), 1,
      anon_sym_COMMA,
    ACTIONS(499), 1,
      anon_sym_RBRACE,
    STATE(112), 1,
      aux_sym_namedTupleLiteral_repeat1,
  [1479] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(400), 1,
      anon_sym_COMMA,
    ACTIONS(501), 1,
      anon_sym_RBRACE,
    STATE(109), 1,
      aux_sym_hash_repeat1,
  [1492] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(406), 1,
      anon_sym_COMMA,
    ACTIONS(503), 1,
      anon_sym_RBRACE,
    STATE(133), 1,
      aux_sym_namedTupleLiteral_repeat1,
  [1505] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(400), 1,
      anon_sym_COMMA,
    ACTIONS(505), 1,
      anon_sym_RBRACE,
    STATE(134), 1,
      aux_sym_hash_repeat1,
  [1518] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      anon_sym_COMMA,
    ACTIONS(507), 1,
      anon_sym_RBRACE,
    STATE(89), 1,
      aux_sym_array_repeat1,
  [1531] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      anon_sym_COMMA,
    ACTIONS(509), 1,
      anon_sym_RBRACK,
    STATE(95), 1,
      aux_sym_array_repeat1,
  [1544] = 4,
    ACTIONS(278), 1,
      sym_comment,
    ACTIONS(389), 1,
      aux_sym_symbol_token1,
    ACTIONS(511), 1,
      anon_sym_DQUOTE,
    STATE(125), 1,
      aux_sym_symbol_repeat1,
  [1557] = 3,
    ACTIONS(278), 1,
      sym_comment,
    ACTIONS(513), 1,
      anon_sym_RBRACK2,
    ACTIONS(276), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
  [1568] = 3,
    ACTIONS(278), 1,
      sym_comment,
    ACTIONS(515), 1,
      anon_sym_RBRACK2,
    ACTIONS(276), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
  [1579] = 3,
    ACTIONS(278), 1,
      sym_comment,
    ACTIONS(517), 1,
      anon_sym_RBRACK2,
    ACTIONS(276), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
  [1590] = 3,
    ACTIONS(278), 1,
      sym_comment,
    ACTIONS(519), 1,
      anon_sym_RBRACK2,
    ACTIONS(276), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
  [1601] = 4,
    ACTIONS(278), 1,
      sym_comment,
    ACTIONS(389), 1,
      aux_sym_symbol_token1,
    ACTIONS(521), 1,
      anon_sym_DQUOTE,
    STATE(125), 1,
      aux_sym_symbol_repeat1,
  [1614] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 1,
      aux_sym_identifier_token1,
    ACTIONS(525), 2,
      anon_sym_LBRACK2,
      anon_sym_EQ,
  [1625] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 1,
      aux_sym_identifier_token1,
    ACTIONS(529), 2,
      anon_sym_LBRACK2,
      anon_sym_EQ,
  [1636] = 4,
    ACTIONS(278), 1,
      sym_comment,
    ACTIONS(531), 1,
      anon_sym_DQUOTE,
    ACTIONS(533), 1,
      aux_sym_symbol_token1,
    STATE(144), 1,
      aux_sym_symbol_repeat1,
  [1649] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      anon_sym_COMMA,
    ACTIONS(535), 1,
      anon_sym_RBRACK,
    STATE(138), 1,
      aux_sym_array_repeat1,
  [1662] = 3,
    ACTIONS(278), 1,
      sym_comment,
    ACTIONS(288), 1,
      anon_sym_EQ_GT,
    ACTIONS(276), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
  [1673] = 4,
    ACTIONS(278), 1,
      sym_comment,
    ACTIONS(537), 1,
      anon_sym_DQUOTE,
    ACTIONS(539), 1,
      aux_sym_symbol_token1,
    STATE(139), 1,
      aux_sym_symbol_repeat1,
  [1686] = 3,
    ACTIONS(278), 1,
      sym_comment,
    ACTIONS(282), 1,
      anon_sym_EQ_GT,
    ACTIONS(276), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
  [1697] = 3,
    ACTIONS(274), 1,
      anon_sym_EQ_GT,
    ACTIONS(278), 1,
      sym_comment,
    ACTIONS(276), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
  [1708] = 3,
    ACTIONS(278), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_EQ_GT,
    ACTIONS(276), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
  [1719] = 3,
    ACTIONS(274), 1,
      anon_sym_COLON,
    ACTIONS(278), 1,
      sym_comment,
    ACTIONS(276), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
  [1730] = 3,
    ACTIONS(278), 1,
      sym_comment,
    ACTIONS(290), 1,
      aux_sym__statement_token1,
    ACTIONS(541), 1,
      anon_sym_SEMI,
  [1740] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(543), 2,
      anon_sym_LBRACK2,
      anon_sym_EQ,
  [1748] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(545), 2,
      anon_sym_LBRACK2,
      anon_sym_EQ,
  [1756] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      anon_sym_EQ_GT,
    ACTIONS(547), 1,
      anon_sym_EQ,
  [1766] = 3,
    ACTIONS(278), 1,
      sym_comment,
    ACTIONS(338), 1,
      aux_sym__statement_token1,
    ACTIONS(549), 1,
      anon_sym_SEMI,
  [1776] = 3,
    ACTIONS(278), 1,
      sym_comment,
    ACTIONS(322), 1,
      aux_sym__statement_token1,
    ACTIONS(551), 1,
      anon_sym_SEMI,
  [1786] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 1,
      anon_sym_EQ,
    ACTIONS(553), 1,
      anon_sym_LBRACK2,
  [1796] = 3,
    ACTIONS(278), 1,
      sym_comment,
    ACTIONS(350), 1,
      aux_sym__statement_token1,
    ACTIONS(555), 1,
      anon_sym_SEMI,
  [1806] = 3,
    ACTIONS(278), 1,
      sym_comment,
    ACTIONS(340), 1,
      aux_sym__statement_token1,
    ACTIONS(557), 1,
      anon_sym_SEMI,
  [1816] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 1,
      anon_sym_LBRACK2,
    ACTIONS(559), 1,
      anon_sym_EQ,
  [1826] = 3,
    ACTIONS(278), 1,
      sym_comment,
    ACTIONS(302), 1,
      aux_sym__statement_token1,
    ACTIONS(561), 1,
      anon_sym_SEMI,
  [1836] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 1,
      anon_sym_EQ,
    ACTIONS(553), 1,
      anon_sym_LBRACK2,
  [1846] = 3,
    ACTIONS(278), 1,
      sym_comment,
    ACTIONS(328), 1,
      aux_sym__statement_token1,
    ACTIONS(563), 1,
      anon_sym_SEMI,
  [1856] = 3,
    ACTIONS(278), 1,
      sym_comment,
    ACTIONS(346), 1,
      aux_sym__statement_token1,
    ACTIONS(565), 1,
      anon_sym_SEMI,
  [1866] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 2,
      anon_sym_LBRACK2,
      anon_sym_EQ,
  [1874] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 1,
      anon_sym_LBRACK2,
    ACTIONS(567), 1,
      anon_sym_EQ,
  [1884] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 2,
      anon_sym_LBRACK2,
      anon_sym_EQ,
  [1892] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(571), 2,
      anon_sym_LBRACK2,
      anon_sym_EQ,
  [1900] = 3,
    ACTIONS(278), 1,
      sym_comment,
    ACTIONS(573), 1,
      anon_sym_SEMI,
    ACTIONS(575), 1,
      aux_sym__statement_token1,
  [1910] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 2,
      anon_sym_RBRACK2,
      anon_sym_EQ,
  [1918] = 3,
    ACTIONS(278), 1,
      sym_comment,
    ACTIONS(348), 1,
      aux_sym__statement_token1,
    ACTIONS(577), 1,
      anon_sym_SEMI,
  [1928] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(579), 1,
      anon_sym_LBRACK2,
    ACTIONS(581), 1,
      anon_sym_EQ,
  [1938] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(583), 1,
      anon_sym_LBRACK2,
    ACTIONS(585), 1,
      anon_sym_EQ,
  [1948] = 3,
    ACTIONS(278), 1,
      sym_comment,
    ACTIONS(330), 1,
      aux_sym__statement_token1,
    ACTIONS(587), 1,
      anon_sym_SEMI,
  [1958] = 3,
    ACTIONS(278), 1,
      sym_comment,
    ACTIONS(324), 1,
      aux_sym__statement_token1,
    ACTIONS(589), 1,
      anon_sym_SEMI,
  [1968] = 3,
    ACTIONS(278), 1,
      sym_comment,
    ACTIONS(352), 1,
      aux_sym__statement_token1,
    ACTIONS(591), 1,
      anon_sym_SEMI,
  [1978] = 3,
    ACTIONS(278), 1,
      sym_comment,
    ACTIONS(296), 1,
      aux_sym__statement_token1,
    ACTIONS(593), 1,
      anon_sym_SEMI,
  [1988] = 3,
    ACTIONS(278), 1,
      sym_comment,
    ACTIONS(298), 1,
      aux_sym__statement_token1,
    ACTIONS(595), 1,
      anon_sym_SEMI,
  [1998] = 3,
    ACTIONS(278), 1,
      sym_comment,
    ACTIONS(326), 1,
      aux_sym__statement_token1,
    ACTIONS(597), 1,
      anon_sym_SEMI,
  [2008] = 3,
    ACTIONS(278), 1,
      sym_comment,
    ACTIONS(318), 1,
      aux_sym__statement_token1,
    ACTIONS(599), 1,
      anon_sym_SEMI,
  [2018] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      anon_sym_RBRACK2,
    ACTIONS(585), 1,
      anon_sym_EQ,
  [2028] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(601), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2036] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(603), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2044] = 3,
    ACTIONS(278), 1,
      sym_comment,
    ACTIONS(320), 1,
      aux_sym__statement_token1,
    ACTIONS(605), 1,
      anon_sym_SEMI,
  [2054] = 3,
    ACTIONS(278), 1,
      sym_comment,
    ACTIONS(334), 1,
      aux_sym__statement_token1,
    ACTIONS(607), 1,
      anon_sym_SEMI,
  [2064] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(609), 1,
      anon_sym_COLON,
  [2071] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      anon_sym_RBRACK2,
  [2078] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 1,
      anon_sym_RBRACK2,
  [2085] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 1,
      anon_sym_RBRACK2,
  [2092] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_RBRACK2,
  [2099] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 1,
      anon_sym_RBRACK2,
  [2106] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      anon_sym_RBRACK2,
  [2113] = 2,
    ACTIONS(278), 1,
      sym_comment,
    ACTIONS(613), 1,
      aux_sym_hash_token1,
  [2120] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      anon_sym_RBRACK2,
  [2127] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 1,
      anon_sym_RBRACK2,
  [2134] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 1,
      anon_sym_RBRACK2,
  [2141] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_RBRACK2,
  [2148] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 1,
      anon_sym_RBRACK2,
  [2155] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(615), 1,
      anon_sym_EQ_GT,
  [2162] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(617), 1,
      anon_sym_RPAREN,
  [2169] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(619), 1,
      anon_sym_BQUOTE,
  [2176] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(621), 1,
      anon_sym_SLASH,
  [2183] = 2,
    ACTIONS(278), 1,
      sym_comment,
    ACTIONS(623), 1,
      aux_sym_hash_token1,
  [2190] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(625), 1,
      anon_sym_COLON,
  [2197] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(627), 1,
      anon_sym_EQ_GT,
  [2204] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 1,
      anon_sym_RBRACK2,
  [2211] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(629), 1,
      anon_sym_RBRACK2,
  [2218] = 2,
    ACTIONS(278), 1,
      sym_comment,
    ACTIONS(631), 1,
      aux_sym_regex_token1,
  [2225] = 2,
    ACTIONS(278), 1,
      sym_comment,
    ACTIONS(633), 1,
      aux_sym_commandLiteral_token1,
  [2232] = 2,
    ACTIONS(278), 1,
      sym_comment,
    ACTIONS(635), 1,
      aux_sym_commandLiteral_token2,
  [2239] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 1,
      anon_sym_RBRACK2,
  [2246] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 1,
      anon_sym_RBRACK2,
  [2253] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 1,
      anon_sym_RBRACK2,
  [2260] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(637), 1,
      anon_sym_of,
  [2267] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(619), 1,
      anon_sym_RPAREN,
  [2274] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(639), 1,
      anon_sym_EQ_GT,
  [2281] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(641), 1,
      ts_builtin_sym_end,
  [2288] = 2,
    ACTIONS(278), 1,
      sym_comment,
    ACTIONS(643), 1,
      aux_sym_hash_token1,
  [2295] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 1,
      anon_sym_RBRACK2,
  [2302] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      anon_sym_RBRACK2,
  [2309] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(645), 1,
      aux_sym_local_variable_token1,
  [2316] = 2,
    ACTIONS(278), 1,
      sym_comment,
    ACTIONS(647), 1,
      aux_sym_regex_token1,
  [2323] = 2,
    ACTIONS(278), 1,
      sym_comment,
    ACTIONS(649), 1,
      aux_sym_commandLiteral_token1,
  [2330] = 2,
    ACTIONS(278), 1,
      sym_comment,
    ACTIONS(651), 1,
      aux_sym_commandLiteral_token2,
  [2337] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(653), 1,
      aux_sym_local_variable_token1,
  [2344] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(655), 1,
      anon_sym_RBRACK2,
  [2351] = 2,
    ACTIONS(278), 1,
      sym_comment,
    ACTIONS(657), 1,
      aux_sym_commandLiteral_token2,
  [2358] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(659), 1,
      anon_sym_EQ_GT,
  [2365] = 2,
    ACTIONS(278), 1,
      sym_comment,
    ACTIONS(661), 1,
      aux_sym_commandLiteral_token1,
  [2372] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      anon_sym_RBRACK2,
  [2379] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 1,
      anon_sym_RBRACK2,
  [2386] = 2,
    ACTIONS(278), 1,
      sym_comment,
    ACTIONS(663), 1,
      aux_sym_regex_token1,
  [2393] = 2,
    ACTIONS(278), 1,
      sym_comment,
    ACTIONS(665), 1,
      aux_sym_hash_token1,
  [2400] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(667), 1,
      anon_sym_RPAREN,
  [2407] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 1,
      anon_sym_COLON,
  [2414] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(667), 1,
      anon_sym_BQUOTE,
  [2421] = 2,
    ACTIONS(278), 1,
      sym_comment,
    ACTIONS(669), 1,
      aux_sym_hash_token1,
  [2428] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(671), 1,
      anon_sym_SLASH,
  [2435] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      anon_sym_COLON,
  [2442] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      anon_sym_COLON,
  [2449] = 2,
    ACTIONS(278), 1,
      sym_comment,
    ACTIONS(673), 1,
      aux_sym_hash_token1,
  [2456] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(675), 1,
      anon_sym_SLASH,
  [2463] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(617), 1,
      anon_sym_BQUOTE,
  [2470] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(677), 1,
      anon_sym_of,
  [2477] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(679), 1,
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
  [SMALL_STATE(38)] = 308,
  [SMALL_STATE(39)] = 322,
  [SMALL_STATE(40)] = 335,
  [SMALL_STATE(41)] = 348,
  [SMALL_STATE(42)] = 361,
  [SMALL_STATE(43)] = 374,
  [SMALL_STATE(44)] = 387,
  [SMALL_STATE(45)] = 397,
  [SMALL_STATE(46)] = 409,
  [SMALL_STATE(47)] = 421,
  [SMALL_STATE(48)] = 433,
  [SMALL_STATE(49)] = 445,
  [SMALL_STATE(50)] = 457,
  [SMALL_STATE(51)] = 469,
  [SMALL_STATE(52)] = 479,
  [SMALL_STATE(53)] = 489,
  [SMALL_STATE(54)] = 501,
  [SMALL_STATE(55)] = 511,
  [SMALL_STATE(56)] = 527,
  [SMALL_STATE(57)] = 543,
  [SMALL_STATE(58)] = 559,
  [SMALL_STATE(59)] = 569,
  [SMALL_STATE(60)] = 579,
  [SMALL_STATE(61)] = 591,
  [SMALL_STATE(62)] = 601,
  [SMALL_STATE(63)] = 611,
  [SMALL_STATE(64)] = 623,
  [SMALL_STATE(65)] = 633,
  [SMALL_STATE(66)] = 643,
  [SMALL_STATE(67)] = 655,
  [SMALL_STATE(68)] = 665,
  [SMALL_STATE(69)] = 677,
  [SMALL_STATE(70)] = 689,
  [SMALL_STATE(71)] = 701,
  [SMALL_STATE(72)] = 713,
  [SMALL_STATE(73)] = 723,
  [SMALL_STATE(74)] = 735,
  [SMALL_STATE(75)] = 745,
  [SMALL_STATE(76)] = 755,
  [SMALL_STATE(77)] = 769,
  [SMALL_STATE(78)] = 779,
  [SMALL_STATE(79)] = 789,
  [SMALL_STATE(80)] = 801,
  [SMALL_STATE(81)] = 811,
  [SMALL_STATE(82)] = 821,
  [SMALL_STATE(83)] = 834,
  [SMALL_STATE(84)] = 845,
  [SMALL_STATE(85)] = 856,
  [SMALL_STATE(86)] = 869,
  [SMALL_STATE(87)] = 882,
  [SMALL_STATE(88)] = 893,
  [SMALL_STATE(89)] = 904,
  [SMALL_STATE(90)] = 917,
  [SMALL_STATE(91)] = 930,
  [SMALL_STATE(92)] = 943,
  [SMALL_STATE(93)] = 956,
  [SMALL_STATE(94)] = 965,
  [SMALL_STATE(95)] = 978,
  [SMALL_STATE(96)] = 991,
  [SMALL_STATE(97)] = 1004,
  [SMALL_STATE(98)] = 1017,
  [SMALL_STATE(99)] = 1030,
  [SMALL_STATE(100)] = 1043,
  [SMALL_STATE(101)] = 1054,
  [SMALL_STATE(102)] = 1067,
  [SMALL_STATE(103)] = 1080,
  [SMALL_STATE(104)] = 1093,
  [SMALL_STATE(105)] = 1106,
  [SMALL_STATE(106)] = 1119,
  [SMALL_STATE(107)] = 1132,
  [SMALL_STATE(108)] = 1145,
  [SMALL_STATE(109)] = 1158,
  [SMALL_STATE(110)] = 1171,
  [SMALL_STATE(111)] = 1184,
  [SMALL_STATE(112)] = 1197,
  [SMALL_STATE(113)] = 1210,
  [SMALL_STATE(114)] = 1223,
  [SMALL_STATE(115)] = 1236,
  [SMALL_STATE(116)] = 1247,
  [SMALL_STATE(117)] = 1260,
  [SMALL_STATE(118)] = 1273,
  [SMALL_STATE(119)] = 1286,
  [SMALL_STATE(120)] = 1299,
  [SMALL_STATE(121)] = 1312,
  [SMALL_STATE(122)] = 1325,
  [SMALL_STATE(123)] = 1338,
  [SMALL_STATE(124)] = 1351,
  [SMALL_STATE(125)] = 1364,
  [SMALL_STATE(126)] = 1375,
  [SMALL_STATE(127)] = 1388,
  [SMALL_STATE(128)] = 1401,
  [SMALL_STATE(129)] = 1414,
  [SMALL_STATE(130)] = 1427,
  [SMALL_STATE(131)] = 1440,
  [SMALL_STATE(132)] = 1453,
  [SMALL_STATE(133)] = 1466,
  [SMALL_STATE(134)] = 1479,
  [SMALL_STATE(135)] = 1492,
  [SMALL_STATE(136)] = 1505,
  [SMALL_STATE(137)] = 1518,
  [SMALL_STATE(138)] = 1531,
  [SMALL_STATE(139)] = 1544,
  [SMALL_STATE(140)] = 1557,
  [SMALL_STATE(141)] = 1568,
  [SMALL_STATE(142)] = 1579,
  [SMALL_STATE(143)] = 1590,
  [SMALL_STATE(144)] = 1601,
  [SMALL_STATE(145)] = 1614,
  [SMALL_STATE(146)] = 1625,
  [SMALL_STATE(147)] = 1636,
  [SMALL_STATE(148)] = 1649,
  [SMALL_STATE(149)] = 1662,
  [SMALL_STATE(150)] = 1673,
  [SMALL_STATE(151)] = 1686,
  [SMALL_STATE(152)] = 1697,
  [SMALL_STATE(153)] = 1708,
  [SMALL_STATE(154)] = 1719,
  [SMALL_STATE(155)] = 1730,
  [SMALL_STATE(156)] = 1740,
  [SMALL_STATE(157)] = 1748,
  [SMALL_STATE(158)] = 1756,
  [SMALL_STATE(159)] = 1766,
  [SMALL_STATE(160)] = 1776,
  [SMALL_STATE(161)] = 1786,
  [SMALL_STATE(162)] = 1796,
  [SMALL_STATE(163)] = 1806,
  [SMALL_STATE(164)] = 1816,
  [SMALL_STATE(165)] = 1826,
  [SMALL_STATE(166)] = 1836,
  [SMALL_STATE(167)] = 1846,
  [SMALL_STATE(168)] = 1856,
  [SMALL_STATE(169)] = 1866,
  [SMALL_STATE(170)] = 1874,
  [SMALL_STATE(171)] = 1884,
  [SMALL_STATE(172)] = 1892,
  [SMALL_STATE(173)] = 1900,
  [SMALL_STATE(174)] = 1910,
  [SMALL_STATE(175)] = 1918,
  [SMALL_STATE(176)] = 1928,
  [SMALL_STATE(177)] = 1938,
  [SMALL_STATE(178)] = 1948,
  [SMALL_STATE(179)] = 1958,
  [SMALL_STATE(180)] = 1968,
  [SMALL_STATE(181)] = 1978,
  [SMALL_STATE(182)] = 1988,
  [SMALL_STATE(183)] = 1998,
  [SMALL_STATE(184)] = 2008,
  [SMALL_STATE(185)] = 2018,
  [SMALL_STATE(186)] = 2028,
  [SMALL_STATE(187)] = 2036,
  [SMALL_STATE(188)] = 2044,
  [SMALL_STATE(189)] = 2054,
  [SMALL_STATE(190)] = 2064,
  [SMALL_STATE(191)] = 2071,
  [SMALL_STATE(192)] = 2078,
  [SMALL_STATE(193)] = 2085,
  [SMALL_STATE(194)] = 2092,
  [SMALL_STATE(195)] = 2099,
  [SMALL_STATE(196)] = 2106,
  [SMALL_STATE(197)] = 2113,
  [SMALL_STATE(198)] = 2120,
  [SMALL_STATE(199)] = 2127,
  [SMALL_STATE(200)] = 2134,
  [SMALL_STATE(201)] = 2141,
  [SMALL_STATE(202)] = 2148,
  [SMALL_STATE(203)] = 2155,
  [SMALL_STATE(204)] = 2162,
  [SMALL_STATE(205)] = 2169,
  [SMALL_STATE(206)] = 2176,
  [SMALL_STATE(207)] = 2183,
  [SMALL_STATE(208)] = 2190,
  [SMALL_STATE(209)] = 2197,
  [SMALL_STATE(210)] = 2204,
  [SMALL_STATE(211)] = 2211,
  [SMALL_STATE(212)] = 2218,
  [SMALL_STATE(213)] = 2225,
  [SMALL_STATE(214)] = 2232,
  [SMALL_STATE(215)] = 2239,
  [SMALL_STATE(216)] = 2246,
  [SMALL_STATE(217)] = 2253,
  [SMALL_STATE(218)] = 2260,
  [SMALL_STATE(219)] = 2267,
  [SMALL_STATE(220)] = 2274,
  [SMALL_STATE(221)] = 2281,
  [SMALL_STATE(222)] = 2288,
  [SMALL_STATE(223)] = 2295,
  [SMALL_STATE(224)] = 2302,
  [SMALL_STATE(225)] = 2309,
  [SMALL_STATE(226)] = 2316,
  [SMALL_STATE(227)] = 2323,
  [SMALL_STATE(228)] = 2330,
  [SMALL_STATE(229)] = 2337,
  [SMALL_STATE(230)] = 2344,
  [SMALL_STATE(231)] = 2351,
  [SMALL_STATE(232)] = 2358,
  [SMALL_STATE(233)] = 2365,
  [SMALL_STATE(234)] = 2372,
  [SMALL_STATE(235)] = 2379,
  [SMALL_STATE(236)] = 2386,
  [SMALL_STATE(237)] = 2393,
  [SMALL_STATE(238)] = 2400,
  [SMALL_STATE(239)] = 2407,
  [SMALL_STATE(240)] = 2414,
  [SMALL_STATE(241)] = 2421,
  [SMALL_STATE(242)] = 2428,
  [SMALL_STATE(243)] = 2435,
  [SMALL_STATE(244)] = 2442,
  [SMALL_STATE(245)] = 2449,
  [SMALL_STATE(246)] = 2456,
  [SMALL_STATE(247)] = 2463,
  [SMALL_STATE(248)] = 2470,
  [SMALL_STATE(249)] = 2477,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(173),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(155),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(160),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(160),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(162),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(162),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(35),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(85),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(165),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(165),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(29),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(236),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(167),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(233),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(231),
  [141] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(87),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(229),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(225),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(169),
  [153] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(88),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_symbol_repeat1, 1),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 4),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_expression, 4, .production_id = 2),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index_expression, 4, .production_id = 2),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 3),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hash, 5, .production_id = 3),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namedTupleLiteral, 5, .production_id = 3),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 1),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hash, 6, .production_id = 4),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namedTupleLiteral, 6, .production_id = 4),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 1),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 4),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hash, 6),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 1),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 2),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3),
  [336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 3),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 3),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commandLiteral, 3),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3, .production_id = 1),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 4),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [360] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [362] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_variable, 1),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [374] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(15),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [389] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [391] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [393] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(17),
  [396] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [398] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [404] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [410] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [412] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [414] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [418] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [422] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [424] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [426] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [428] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [430] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [432] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hash_repeat1, 2, .production_id = 5), SHIFT_REPEAT(27),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_hash_repeat1, 2, .production_id = 5),
  [437] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [439] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [441] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [443] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_namedTupleLiteral_repeat1, 2, .production_id = 5), SHIFT_REPEAT(76),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_namedTupleLiteral_repeat1, 2, .production_id = 5),
  [448] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [450] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [452] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [456] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [458] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [460] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [462] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [464] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [478] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_symbol_repeat1, 2), SHIFT_REPEAT(125),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [483] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [487] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [489] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [491] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [493] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [495] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [497] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [511] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 3),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 4),
  [521] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_variable, 2),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance_variable, 2),
  [531] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [533] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [537] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [539] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [541] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool, 1),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 2),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_variable, 2),
  [547] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [549] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 3),
  [551] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 1),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [555] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1),
  [557] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex, 3),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [561] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char, 1),
  [563] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 1),
  [565] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commandLiteral, 3),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance_variable, 3),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_variable, 3),
  [573] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [577] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 3, .production_id = 1),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [587] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 2),
  [589] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 4),
  [591] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 4),
  [593] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hash, 5, .production_id = 3),
  [595] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namedTupleLiteral, 5, .production_id = 3),
  [597] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hash, 6),
  [599] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hash, 6, .production_id = 4),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_namedTupleLiteral_repeat1, 4, .production_id = 3),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_hash_repeat1, 4, .production_id = 3),
  [605] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namedTupleLiteral, 6, .production_id = 4),
  [607] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 3),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [613] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [623] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [631] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [633] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [635] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [641] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [643] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [647] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [649] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [651] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [657] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [661] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [663] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [665] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [669] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [673] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
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

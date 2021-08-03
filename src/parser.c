#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 181
#define LARGE_STATE_COUNT 22
#define SYMBOL_COUNT 104
#define ALIAS_COUNT 0
#define TOKEN_COUNT 77
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
  aux_sym_constant_token1 = 50,
  anon_sym_EQ = 51,
  anon_sym_PLUS = 52,
  anon_sym_DASH = 53,
  anon_sym_STAR = 54,
  anon_sym_PERCENT = 55,
  anon_sym_AMP = 56,
  anon_sym_PIPE = 57,
  anon_sym_CARET = 58,
  anon_sym_STAR_STAR = 59,
  anon_sym_GT_GT = 60,
  anon_sym_LT_LT = 61,
  anon_sym_EQ_EQ = 62,
  anon_sym_BANG_EQ = 63,
  anon_sym_LT = 64,
  anon_sym_LT_EQ = 65,
  anon_sym_GT = 66,
  anon_sym_GT_EQ = 67,
  anon_sym_LT_EQ_GT = 68,
  anon_sym_EQ_EQ_EQ = 69,
  anon_sym_LBRACK_RBRACK = 70,
  anon_sym_LBRACK_RBRACK_QMARK = 71,
  anon_sym_LBRACK_RBRACK_EQ = 72,
  anon_sym_BANG = 73,
  anon_sym_TILDE = 74,
  anon_sym_BANG_TILDE = 75,
  anon_sym_EQ_TILDE = 76,
  sym_program = 77,
  sym__statement = 78,
  sym__expression = 79,
  sym_identifier = 80,
  sym_bool = 81,
  sym_float = 82,
  sym_integer = 83,
  sym_symbol = 84,
  sym_char = 85,
  sym_string = 86,
  sym_array = 87,
  sym_hash = 88,
  sym_regex = 89,
  sym_tuple = 90,
  sym_namedTupleLiteral = 91,
  sym_commandLiteral = 92,
  sym_local_variable = 93,
  sym_instance_variable = 94,
  sym_class_variable = 95,
  sym_constant = 96,
  sym_assignment = 97,
  sym__operator = 98,
  aux_sym_program_repeat1 = 99,
  aux_sym_symbol_repeat1 = 100,
  aux_sym_array_repeat1 = 101,
  aux_sym_hash_repeat1 = 102,
  aux_sym_namedTupleLiteral_repeat1 = 103,
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
      if (eof) ADVANCE(89);
      if (lookahead == '!') ADVANCE(217);
      if (lookahead == '"') ADVANCE(130);
      if (lookahead == '#') ADVANCE(87);
      if (lookahead == '%') ADVANCE(199);
      if (lookahead == '&') ADVANCE(200);
      if (lookahead == '\'') ADVANCE(16);
      if (lookahead == ')') ADVANCE(181);
      if (lookahead == '*') ADVANCE(197);
      if (lookahead == '+') ADVANCE(194);
      if (lookahead == ',') ADVANCE(158);
      if (lookahead == '-') ADVANCE(196);
      if (lookahead == '/') ADVANCE(166);
      if (lookahead == '0') ADVANCE(31);
      if (lookahead == ':') ADVANCE(129);
      if (lookahead == ';') ADVANCE(90);
      if (lookahead == '<') ADVANCE(208);
      if (lookahead == '=') ADVANCE(192);
      if (lookahead == '>') ADVANCE(210);
      if (lookahead == '@') ADVANCE(187);
      if (lookahead == 'T') ADVANCE(106);
      if (lookahead == '[') ADVANCE(157);
      if (lookahead == ']') ADVANCE(159);
      if (lookahead == '^') ADVANCE(202);
      if (lookahead == '`') ADVANCE(173);
      if (lookahead == 'f') ADVANCE(95);
      if (lookahead == 'n') ADVANCE(99);
      if (lookahead == 't') ADVANCE(104);
      if (lookahead == '{') ADVANCE(160);
      if (lookahead == '|') ADVANCE(201);
      if (lookahead == '}') ADVANCE(162);
      if (lookahead == '~') ADVANCE(218);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(128);
      if (('_' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(108);
      if (lookahead != 0 &&
          lookahead > 159) ADVANCE(108);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == '"') ADVANCE(130);
      if (lookahead == '#') ADVANCE(141);
      if (lookahead == ';') ADVANCE(90);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(132);
      if (lookahead != 0) ADVANCE(131);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(92);
      if (lookahead == '#') ADVANCE(87);
      if (lookahead == ';') ADVANCE(90);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(217);
      if (lookahead == '"') ADVANCE(130);
      if (lookahead == '#') ADVANCE(87);
      if (lookahead == '%') ADVANCE(198);
      if (lookahead == '&') ADVANCE(200);
      if (lookahead == '*') ADVANCE(197);
      if (lookahead == '+') ADVANCE(193);
      if (lookahead == '-') ADVANCE(195);
      if (lookahead == '/') ADVANCE(166);
      if (lookahead == '<') ADVANCE(208);
      if (lookahead == '=') ADVANCE(60);
      if (lookahead == '>') ADVANCE(210);
      if (lookahead == '[') ADVANCE(62);
      if (lookahead == '^') ADVANCE(202);
      if (lookahead == '|') ADVANCE(201);
      if (lookahead == '~') ADVANCE(218);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (lookahead != 0 &&
          lookahead > '@' &&
          lookahead != '\\' &&
          lookahead != ']' &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(108);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(130);
      if (lookahead == '#') ADVANCE(87);
      if (lookahead == '%') ADVANCE(76);
      if (lookahead == '\'') ADVANCE(16);
      if (lookahead == '/') ADVANCE(166);
      if (lookahead == '0') ADVANCE(31);
      if (lookahead == ':') ADVANCE(129);
      if (lookahead == '=') ADVANCE(191);
      if (lookahead == '@') ADVANCE(187);
      if (lookahead == 'T') ADVANCE(106);
      if (lookahead == '[') ADVANCE(156);
      if (lookahead == '`') ADVANCE(173);
      if (lookahead == 'f') ADVANCE(95);
      if (lookahead == 'n') ADVANCE(99);
      if (lookahead == 't') ADVANCE(104);
      if (lookahead == '{') ADVANCE(160);
      if (lookahead == '}') ADVANCE(162);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(128);
      if (('_' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(108);
      if (lookahead != 0 &&
          lookahead > 159) ADVANCE(108);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(130);
      if (lookahead == '#') ADVANCE(141);
      if (lookahead == ',') ADVANCE(158);
      if (lookahead == ':') ADVANCE(129);
      if (lookahead == '=') ADVANCE(140);
      if (lookahead == '}') ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(133);
      if (lookahead != 0) ADVANCE(131);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(130);
      if (lookahead == '#') ADVANCE(141);
      if (lookahead == ',') ADVANCE(158);
      if (lookahead == '=') ADVANCE(140);
      if (lookahead == '}') ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(134);
      if (lookahead != 0) ADVANCE(131);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(130);
      if (lookahead == '#') ADVANCE(141);
      if (lookahead == ',') ADVANCE(158);
      if (lookahead == ']') ADVANCE(159);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(135);
      if (lookahead != 0) ADVANCE(131);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(130);
      if (lookahead == '#') ADVANCE(141);
      if (lookahead == ',') ADVANCE(158);
      if (lookahead == '}') ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(136);
      if (lookahead != 0) ADVANCE(131);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(130);
      if (lookahead == '#') ADVANCE(141);
      if (lookahead == ':') ADVANCE(129);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(137);
      if (lookahead != 0) ADVANCE(131);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(130);
      if (lookahead == '#') ADVANCE(141);
      if (lookahead == '=') ADVANCE(140);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(138);
      if (lookahead != 0) ADVANCE(131);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(130);
      if (lookahead == '#') ADVANCE(141);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(139);
      if (lookahead != 0) ADVANCE(131);
      END_STATE();
    case 12:
      if (lookahead == '#') ADVANCE(87);
      if (lookahead == '=') ADVANCE(191);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (lookahead != 0 &&
          lookahead > '@' &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(108);
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(87);
      if (lookahead == 'o') ADVANCE(67);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      END_STATE();
    case 14:
      if (lookahead == '#') ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 15:
      if (lookahead == '#') ADVANCE(164);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (lookahead != 0) ADVANCE(165);
      END_STATE();
    case 16:
      if (lookahead == '\'') ADVANCE(142);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 17:
      if (lookahead == '\'') ADVANCE(155);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == 'a') ADVANCE(20);
      if (lookahead == 'b') ADVANCE(21);
      if (lookahead == 'e') ADVANCE(22);
      if (lookahead == 'f') ADVANCE(23);
      if (lookahead == 'n') ADVANCE(24);
      if (lookahead == 'r') ADVANCE(25);
      if (lookahead == 't') ADVANCE(26);
      if (lookahead == 'u') ADVANCE(77);
      if (lookahead == 'v') ADVANCE(27);
      END_STATE();
    case 18:
      if (lookahead == '\'') ADVANCE(154);
      END_STATE();
    case 19:
      if (lookahead == '\'') ADVANCE(144);
      END_STATE();
    case 20:
      if (lookahead == '\'') ADVANCE(145);
      END_STATE();
    case 21:
      if (lookahead == '\'') ADVANCE(146);
      END_STATE();
    case 22:
      if (lookahead == '\'') ADVANCE(147);
      END_STATE();
    case 23:
      if (lookahead == '\'') ADVANCE(148);
      END_STATE();
    case 24:
      if (lookahead == '\'') ADVANCE(149);
      END_STATE();
    case 25:
      if (lookahead == '\'') ADVANCE(150);
      END_STATE();
    case 26:
      if (lookahead == '\'') ADVANCE(151);
      END_STATE();
    case 27:
      if (lookahead == '\'') ADVANCE(152);
      END_STATE();
    case 28:
      if (lookahead == '\'') ADVANCE(153);
      END_STATE();
    case 29:
      if (lookahead == '\'') ADVANCE(153);
      if (lookahead == '}') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(29);
      END_STATE();
    case 30:
      if (lookahead == '(') ADVANCE(177);
      END_STATE();
    case 31:
      if (lookahead == '.') ADVANCE(84);
      if (lookahead == 'b') ADVANCE(80);
      if (lookahead == 'e') ADVANCE(78);
      if (lookahead == 'f') ADVANCE(46);
      if (lookahead == 'o') ADVANCE(81);
      if (lookahead == 'x') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(32);
      END_STATE();
    case 32:
      if (lookahead == '.') ADVANCE(84);
      if (lookahead == 'e') ADVANCE(78);
      if (lookahead == 'f') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(32);
      END_STATE();
    case 33:
      if (lookahead == '.') ADVANCE(71);
      END_STATE();
    case 34:
      if (lookahead == '0') ADVANCE(31);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(128);
      END_STATE();
    case 35:
      if (lookahead == '1') ADVANCE(56);
      if (lookahead == '3') ADVANCE(39);
      if (lookahead == '6') ADVANCE(49);
      if (lookahead == '8') ADVANCE(127);
      END_STATE();
    case 36:
      if (lookahead == '1') ADVANCE(57);
      if (lookahead == '3') ADVANCE(41);
      if (lookahead == '6') ADVANCE(51);
      if (lookahead == '8') ADVANCE(121);
      END_STATE();
    case 37:
      if (lookahead == '1') ADVANCE(58);
      if (lookahead == '3') ADVANCE(42);
      if (lookahead == '6') ADVANCE(52);
      if (lookahead == '8') ADVANCE(123);
      END_STATE();
    case 38:
      if (lookahead == '1') ADVANCE(59);
      if (lookahead == '3') ADVANCE(43);
      if (lookahead == '6') ADVANCE(53);
      if (lookahead == '8') ADVANCE(125);
      END_STATE();
    case 39:
      if (lookahead == '2') ADVANCE(127);
      END_STATE();
    case 40:
      if (lookahead == '2') ADVANCE(120);
      END_STATE();
    case 41:
      if (lookahead == '2') ADVANCE(121);
      END_STATE();
    case 42:
      if (lookahead == '2') ADVANCE(123);
      END_STATE();
    case 43:
      if (lookahead == '2') ADVANCE(125);
      END_STATE();
    case 44:
      if (lookahead == '2') ADVANCE(115);
      END_STATE();
    case 45:
      if (lookahead == '2') ADVANCE(118);
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
      if (lookahead == '4') ADVANCE(127);
      END_STATE();
    case 50:
      if (lookahead == '4') ADVANCE(120);
      END_STATE();
    case 51:
      if (lookahead == '4') ADVANCE(121);
      END_STATE();
    case 52:
      if (lookahead == '4') ADVANCE(123);
      END_STATE();
    case 53:
      if (lookahead == '4') ADVANCE(125);
      END_STATE();
    case 54:
      if (lookahead == '4') ADVANCE(115);
      END_STATE();
    case 55:
      if (lookahead == '4') ADVANCE(118);
      END_STATE();
    case 56:
      if (lookahead == '6') ADVANCE(127);
      END_STATE();
    case 57:
      if (lookahead == '6') ADVANCE(121);
      END_STATE();
    case 58:
      if (lookahead == '6') ADVANCE(123);
      END_STATE();
    case 59:
      if (lookahead == '6') ADVANCE(125);
      END_STATE();
    case 60:
      if (lookahead == '=') ADVANCE(206);
      if (lookahead == '~') ADVANCE(220);
      END_STATE();
    case 61:
      if (lookahead == '>') ADVANCE(161);
      END_STATE();
    case 62:
      if (lookahead == ']') ADVANCE(214);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(111);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 67:
      if (lookahead == 'f') ADVANCE(163);
      END_STATE();
    case 68:
      if (lookahead == 'l') ADVANCE(73);
      END_STATE();
    case 69:
      if (lookahead == 'l') ADVANCE(109);
      END_STATE();
    case 70:
      if (lookahead == 'l') ADVANCE(65);
      END_STATE();
    case 71:
      if (lookahead == 'n') ADVANCE(63);
      END_STATE();
    case 72:
      if (lookahead == 'p') ADVANCE(70);
      END_STATE();
    case 73:
      if (lookahead == 's') ADVANCE(66);
      END_STATE();
    case 74:
      if (lookahead == 'u') ADVANCE(64);
      END_STATE();
    case 75:
      if (lookahead == 'w') ADVANCE(172);
      END_STATE();
    case 76:
      if (lookahead == 'x') ADVANCE(30);
      END_STATE();
    case 77:
      if (lookahead == '{') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(29);
      END_STATE();
    case 78:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(119);
      END_STATE();
    case 79:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      END_STATE();
    case 80:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(122);
      END_STATE();
    case 81:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(124);
      END_STATE();
    case 82:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(119);
      END_STATE();
    case 83:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      END_STATE();
    case 84:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(116);
      END_STATE();
    case 85:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(126);
      END_STATE();
    case 86:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(29);
      END_STATE();
    case 87:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(182);
      END_STATE();
    case 88:
      if (eof) ADVANCE(89);
      if (lookahead == '"') ADVANCE(130);
      if (lookahead == '#') ADVANCE(87);
      if (lookahead == '%') ADVANCE(76);
      if (lookahead == '\'') ADVANCE(16);
      if (lookahead == ',') ADVANCE(158);
      if (lookahead == '/') ADVANCE(166);
      if (lookahead == '0') ADVANCE(31);
      if (lookahead == ':') ADVANCE(129);
      if (lookahead == '=') ADVANCE(61);
      if (lookahead == '@') ADVANCE(187);
      if (lookahead == 'T') ADVANCE(190);
      if (lookahead == '[') ADVANCE(156);
      if (lookahead == ']') ADVANCE(159);
      if (lookahead == '`') ADVANCE(173);
      if (lookahead == 'f') ADVANCE(184);
      if (lookahead == 'n') ADVANCE(185);
      if (lookahead == 't') ADVANCE(186);
      if (lookahead == '{') ADVANCE(160);
      if (lookahead == '}') ADVANCE(162);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(88)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(128);
      if (('_' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(189);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym__statement_token1);
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(132);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym__statement_token1);
      if (lookahead == '\n') ADVANCE(92);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(71);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(108);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(100);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(108);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(112);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(108);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(94);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(108);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(114);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(108);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(101);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(108);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(105);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(108);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(110);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(108);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(97);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(108);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'p') ADVANCE(102);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(108);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(107);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(108);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 's') ADVANCE(98);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(108);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'u') ADVANCE(103);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(108);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'u') ADVANCE(96);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(108);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(108);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_nil);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_nil);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(108);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(108);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(108);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_float_token1);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (lookahead == 'e') ADVANCE(79);
      if (lookahead == 'f') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(116);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (lookahead == 'f') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_float_token2);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (lookahead == 'f') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(119);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_float_token3);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == 'i') ADVANCE(36);
      if (lookahead == 'u') ADVANCE(36);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(122);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_integer_token2);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_integer_token2);
      if (lookahead == 'i') ADVANCE(37);
      if (lookahead == 'u') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(124);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_integer_token3);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_integer_token3);
      if (lookahead == 'i') ADVANCE(38);
      if (lookahead == 'u') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(126);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_integer_token4);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_integer_token4);
      if (lookahead == '.') ADVANCE(84);
      if (lookahead == 'e') ADVANCE(78);
      if (lookahead == 'f') ADVANCE(46);
      if (lookahead == 'i') ADVANCE(35);
      if (lookahead == 'u') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(128);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == '#') ADVANCE(141);
      if (lookahead == ';') ADVANCE(90);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(132);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(131);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(141);
      if (lookahead == ',') ADVANCE(158);
      if (lookahead == ':') ADVANCE(129);
      if (lookahead == '=') ADVANCE(140);
      if (lookahead == '}') ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(131);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(141);
      if (lookahead == ',') ADVANCE(158);
      if (lookahead == '=') ADVANCE(140);
      if (lookahead == '}') ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(131);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(141);
      if (lookahead == ',') ADVANCE(158);
      if (lookahead == ']') ADVANCE(159);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(131);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(141);
      if (lookahead == ',') ADVANCE(158);
      if (lookahead == '}') ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(131);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(141);
      if (lookahead == ':') ADVANCE(129);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(137);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(131);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(141);
      if (lookahead == '=') ADVANCE(140);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(131);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(141);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(139);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(131);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '>') ADVANCE(161);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(182);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_SQUOTE_BSLASHa_SQUOTE);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_SQUOTE_BSLASHb_SQUOTE);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_SQUOTE_BSLASHe_SQUOTE);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_SQUOTE_BSLASHf_SQUOTE);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_SQUOTE_BSLASHn_SQUOTE);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_SQUOTE_BSLASHr_SQUOTE);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_SQUOTE_BSLASHt_SQUOTE);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_SQUOTE_BSLASHv_SQUOTE);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_char_token1);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_char_token2);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_char_token2);
      if (lookahead == '\'') ADVANCE(143);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == ']') ADVANCE(214);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_hash_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(164);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_hash_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(165);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_regex_token1);
      if (lookahead == '\n') ADVANCE(170);
      if (lookahead == '/') ADVANCE(182);
      if (lookahead == '\\') ADVANCE(168);
      if (lookahead != 0) ADVANCE(167);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_regex_token1);
      if (lookahead == '\n') ADVANCE(170);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(167);
      if (lookahead == '\\') ADVANCE(168);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_regex_token1);
      if (lookahead == '#') ADVANCE(167);
      if (lookahead == '\\') ADVANCE(171);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(169);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(170);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_regex_token1);
      if (lookahead == '\\') ADVANCE(171);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(170);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_regex_token1);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(170);
      if (lookahead == '\\') ADVANCE(171);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_Tuple_DOTnew);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_commandLiteral_token1);
      if (lookahead == '\n') ADVANCE(176);
      if (lookahead == '`') ADVANCE(182);
      if (lookahead != 0) ADVANCE(174);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_commandLiteral_token1);
      if (lookahead == '#') ADVANCE(174);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(175);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(176);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_commandLiteral_token1);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(176);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_PERCENTx_LPAREN);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_commandLiteral_token2);
      if (lookahead == '\n') ADVANCE(180);
      if (lookahead == ')') ADVANCE(182);
      if (lookahead != 0) ADVANCE(178);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_commandLiteral_token2);
      if (lookahead == '#') ADVANCE(178);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(179);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(180);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_commandLiteral_token2);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(180);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(182);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_local_variable_token1);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_local_variable_token1);
      if (lookahead == 'a') ADVANCE(68);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_local_variable_token1);
      if (lookahead == 'i') ADVANCE(69);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_local_variable_token1);
      if (lookahead == 'r') ADVANCE(74);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '@') ADVANCE(188);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == 'u') ADVANCE(72);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(206);
      if (lookahead == '>') ADVANCE(161);
      if (lookahead == '~') ADVANCE(220);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '0') ADVANCE(31);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(128);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '0') ADVANCE(31);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(128);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(203);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == 'x') ADVANCE(30);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      if (lookahead == '=') ADVANCE(213);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(205);
      if (lookahead == '=') ADVANCE(209);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      if (lookahead == '>') ADVANCE(212);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(211);
      if (lookahead == '>') ADVANCE(204);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_LT_EQ_GT);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_EQ_EQ_EQ);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_LBRACK_RBRACK);
      if (lookahead == '=') ADVANCE(216);
      if (lookahead == '?') ADVANCE(215);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_LBRACK_RBRACK_QMARK);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_LBRACK_RBRACK_EQ);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(207);
      if (lookahead == '~') ADVANCE(219);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_BANG_TILDE);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_EQ_TILDE);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 88},
  [2] = {.lex_state = 4},
  [3] = {.lex_state = 88},
  [4] = {.lex_state = 88},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 88},
  [7] = {.lex_state = 88},
  [8] = {.lex_state = 88},
  [9] = {.lex_state = 88},
  [10] = {.lex_state = 88},
  [11] = {.lex_state = 88},
  [12] = {.lex_state = 88},
  [13] = {.lex_state = 88},
  [14] = {.lex_state = 88},
  [15] = {.lex_state = 88},
  [16] = {.lex_state = 88},
  [17] = {.lex_state = 88},
  [18] = {.lex_state = 88},
  [19] = {.lex_state = 88},
  [20] = {.lex_state = 88},
  [21] = {.lex_state = 88},
  [22] = {.lex_state = 88},
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
  [34] = {.lex_state = 88},
  [35] = {.lex_state = 88},
  [36] = {.lex_state = 88},
  [37] = {.lex_state = 88},
  [38] = {.lex_state = 88},
  [39] = {.lex_state = 8},
  [40] = {.lex_state = 88},
  [41] = {.lex_state = 8},
  [42] = {.lex_state = 8},
  [43] = {.lex_state = 8},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 88},
  [46] = {.lex_state = 7},
  [47] = {.lex_state = 88},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 7},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 7},
  [53] = {.lex_state = 88},
  [54] = {.lex_state = 88},
  [55] = {.lex_state = 88},
  [56] = {.lex_state = 88},
  [57] = {.lex_state = 88},
  [58] = {.lex_state = 7},
  [59] = {.lex_state = 88},
  [60] = {.lex_state = 88},
  [61] = {.lex_state = 88},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 88},
  [64] = {.lex_state = 88},
  [65] = {.lex_state = 88},
  [66] = {.lex_state = 88},
  [67] = {.lex_state = 88},
  [68] = {.lex_state = 88},
  [69] = {.lex_state = 11},
  [70] = {.lex_state = 11},
  [71] = {.lex_state = 11},
  [72] = {.lex_state = 11},
  [73] = {.lex_state = 11},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 11},
  [77] = {.lex_state = 11},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 11},
  [80] = {.lex_state = 11},
  [81] = {.lex_state = 11},
  [82] = {.lex_state = 11},
  [83] = {.lex_state = 11},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 11},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 11},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 11},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 11},
  [92] = {.lex_state = 11},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 11},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 11},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 11},
  [107] = {.lex_state = 11},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 11},
  [110] = {.lex_state = 11},
  [111] = {.lex_state = 11},
  [112] = {.lex_state = 11},
  [113] = {.lex_state = 9},
  [114] = {.lex_state = 9},
  [115] = {.lex_state = 10},
  [116] = {.lex_state = 10},
  [117] = {.lex_state = 10},
  [118] = {.lex_state = 10},
  [119] = {.lex_state = 2},
  [120] = {.lex_state = 2},
  [121] = {.lex_state = 2},
  [122] = {.lex_state = 2},
  [123] = {.lex_state = 2},
  [124] = {.lex_state = 12},
  [125] = {.lex_state = 2},
  [126] = {.lex_state = 2},
  [127] = {.lex_state = 12},
  [128] = {.lex_state = 2},
  [129] = {.lex_state = 12},
  [130] = {.lex_state = 2},
  [131] = {.lex_state = 2},
  [132] = {.lex_state = 2},
  [133] = {.lex_state = 12},
  [134] = {.lex_state = 2},
  [135] = {.lex_state = 2},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 2},
  [139] = {.lex_state = 2},
  [140] = {.lex_state = 2},
  [141] = {.lex_state = 2},
  [142] = {.lex_state = 2},
  [143] = {.lex_state = 2},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 88},
  [147] = {.lex_state = 15},
  [148] = {.lex_state = 88},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 15},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 4},
  [153] = {.lex_state = 4},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 15},
  [158] = {.lex_state = 14},
  [159] = {.lex_state = 14},
  [160] = {.lex_state = 169},
  [161] = {.lex_state = 175},
  [162] = {.lex_state = 179},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 179},
  [165] = {.lex_state = 175},
  [166] = {.lex_state = 4},
  [167] = {.lex_state = 88},
  [168] = {.lex_state = 4},
  [169] = {.lex_state = 169},
  [170] = {.lex_state = 4},
  [171] = {.lex_state = 4},
  [172] = {.lex_state = 4},
  [173] = {.lex_state = 4},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 4},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 13},
  [179] = {.lex_state = 15},
  [180] = {.lex_state = 13},
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
    [sym_program] = STATE(154),
    [sym__statement] = STATE(4),
    [sym__expression] = STATE(120),
    [sym_bool] = STATE(120),
    [sym_float] = STATE(120),
    [sym_integer] = STATE(120),
    [sym_symbol] = STATE(120),
    [sym_char] = STATE(120),
    [sym_string] = STATE(120),
    [sym_array] = STATE(120),
    [sym_hash] = STATE(120),
    [sym_regex] = STATE(120),
    [sym_tuple] = STATE(120),
    [sym_namedTupleLiteral] = STATE(120),
    [sym_commandLiteral] = STATE(120),
    [sym_local_variable] = STATE(166),
    [sym_instance_variable] = STATE(166),
    [sym_class_variable] = STATE(166),
    [sym_constant] = STATE(166),
    [sym_assignment] = STATE(120),
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
    [aux_sym_constant_token1] = ACTIONS(45),
  },
  [2] = {
    [sym__expression] = STATE(37),
    [sym_identifier] = STATE(177),
    [sym_bool] = STATE(37),
    [sym_float] = STATE(37),
    [sym_integer] = STATE(37),
    [sym_symbol] = STATE(37),
    [sym_char] = STATE(37),
    [sym_string] = STATE(36),
    [sym_array] = STATE(37),
    [sym_hash] = STATE(37),
    [sym_regex] = STATE(37),
    [sym_tuple] = STATE(37),
    [sym_namedTupleLiteral] = STATE(37),
    [sym_commandLiteral] = STATE(37),
    [sym_local_variable] = STATE(170),
    [sym_instance_variable] = STATE(170),
    [sym_class_variable] = STATE(170),
    [sym_constant] = STATE(170),
    [sym_assignment] = STATE(37),
    [aux_sym_identifier_token1] = ACTIONS(47),
    [sym_nil] = ACTIONS(49),
    [anon_sym_true] = ACTIONS(51),
    [anon_sym_false] = ACTIONS(51),
    [aux_sym_float_token1] = ACTIONS(53),
    [aux_sym_float_token2] = ACTIONS(55),
    [aux_sym_float_token3] = ACTIONS(55),
    [aux_sym_integer_token1] = ACTIONS(57),
    [aux_sym_integer_token2] = ACTIONS(57),
    [aux_sym_integer_token3] = ACTIONS(57),
    [aux_sym_integer_token4] = ACTIONS(59),
    [anon_sym_COLON] = ACTIONS(61),
    [anon_sym_DQUOTE] = ACTIONS(63),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASHa_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASHb_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASHe_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASHf_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASHn_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASHr_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASHt_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASHv_SQUOTE] = ACTIONS(65),
    [aux_sym_char_token1] = ACTIONS(65),
    [aux_sym_char_token2] = ACTIONS(67),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_LBRACE] = ACTIONS(71),
    [anon_sym_RBRACE] = ACTIONS(73),
    [anon_sym_SLASH] = ACTIONS(75),
    [anon_sym_Tuple_DOTnew] = ACTIONS(77),
    [anon_sym_BQUOTE] = ACTIONS(79),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(81),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(39),
    [anon_sym_AT] = ACTIONS(41),
    [anon_sym_AT_AT] = ACTIONS(43),
    [aux_sym_constant_token1] = ACTIONS(45),
  },
  [3] = {
    [sym__statement] = STATE(3),
    [sym__expression] = STATE(120),
    [sym_bool] = STATE(120),
    [sym_float] = STATE(120),
    [sym_integer] = STATE(120),
    [sym_symbol] = STATE(120),
    [sym_char] = STATE(120),
    [sym_string] = STATE(120),
    [sym_array] = STATE(120),
    [sym_hash] = STATE(120),
    [sym_regex] = STATE(120),
    [sym_tuple] = STATE(120),
    [sym_namedTupleLiteral] = STATE(120),
    [sym_commandLiteral] = STATE(120),
    [sym_local_variable] = STATE(166),
    [sym_instance_variable] = STATE(166),
    [sym_class_variable] = STATE(166),
    [sym_constant] = STATE(166),
    [sym_assignment] = STATE(120),
    [aux_sym_program_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(83),
    [sym_nil] = ACTIONS(85),
    [anon_sym_true] = ACTIONS(88),
    [anon_sym_false] = ACTIONS(88),
    [aux_sym_float_token1] = ACTIONS(91),
    [aux_sym_float_token2] = ACTIONS(94),
    [aux_sym_float_token3] = ACTIONS(94),
    [aux_sym_integer_token1] = ACTIONS(97),
    [aux_sym_integer_token2] = ACTIONS(97),
    [aux_sym_integer_token3] = ACTIONS(97),
    [aux_sym_integer_token4] = ACTIONS(100),
    [anon_sym_COLON] = ACTIONS(103),
    [anon_sym_DQUOTE] = ACTIONS(106),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(109),
    [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = ACTIONS(109),
    [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = ACTIONS(109),
    [anon_sym_SQUOTE_BSLASHa_SQUOTE] = ACTIONS(109),
    [anon_sym_SQUOTE_BSLASHb_SQUOTE] = ACTIONS(109),
    [anon_sym_SQUOTE_BSLASHe_SQUOTE] = ACTIONS(109),
    [anon_sym_SQUOTE_BSLASHf_SQUOTE] = ACTIONS(109),
    [anon_sym_SQUOTE_BSLASHn_SQUOTE] = ACTIONS(109),
    [anon_sym_SQUOTE_BSLASHr_SQUOTE] = ACTIONS(109),
    [anon_sym_SQUOTE_BSLASHt_SQUOTE] = ACTIONS(109),
    [anon_sym_SQUOTE_BSLASHv_SQUOTE] = ACTIONS(109),
    [aux_sym_char_token1] = ACTIONS(109),
    [aux_sym_char_token2] = ACTIONS(112),
    [anon_sym_LBRACK] = ACTIONS(115),
    [anon_sym_LBRACE] = ACTIONS(118),
    [anon_sym_SLASH] = ACTIONS(121),
    [anon_sym_Tuple_DOTnew] = ACTIONS(124),
    [anon_sym_BQUOTE] = ACTIONS(127),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(130),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(133),
    [anon_sym_AT] = ACTIONS(136),
    [anon_sym_AT_AT] = ACTIONS(139),
    [aux_sym_constant_token1] = ACTIONS(142),
  },
  [4] = {
    [sym__statement] = STATE(3),
    [sym__expression] = STATE(120),
    [sym_bool] = STATE(120),
    [sym_float] = STATE(120),
    [sym_integer] = STATE(120),
    [sym_symbol] = STATE(120),
    [sym_char] = STATE(120),
    [sym_string] = STATE(120),
    [sym_array] = STATE(120),
    [sym_hash] = STATE(120),
    [sym_regex] = STATE(120),
    [sym_tuple] = STATE(120),
    [sym_namedTupleLiteral] = STATE(120),
    [sym_commandLiteral] = STATE(120),
    [sym_local_variable] = STATE(166),
    [sym_instance_variable] = STATE(166),
    [sym_class_variable] = STATE(166),
    [sym_constant] = STATE(166),
    [sym_assignment] = STATE(120),
    [aux_sym_program_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(145),
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
    [aux_sym_constant_token1] = ACTIONS(45),
  },
  [5] = {
    [sym__expression] = STATE(38),
    [sym_identifier] = STATE(145),
    [sym_bool] = STATE(38),
    [sym_float] = STATE(38),
    [sym_integer] = STATE(38),
    [sym_symbol] = STATE(38),
    [sym_char] = STATE(38),
    [sym_string] = STATE(40),
    [sym_array] = STATE(38),
    [sym_hash] = STATE(38),
    [sym_regex] = STATE(38),
    [sym_tuple] = STATE(38),
    [sym_namedTupleLiteral] = STATE(38),
    [sym_commandLiteral] = STATE(38),
    [sym_local_variable] = STATE(170),
    [sym_instance_variable] = STATE(170),
    [sym_class_variable] = STATE(170),
    [sym_constant] = STATE(170),
    [sym_assignment] = STATE(38),
    [aux_sym_identifier_token1] = ACTIONS(47),
    [sym_nil] = ACTIONS(147),
    [anon_sym_true] = ACTIONS(51),
    [anon_sym_false] = ACTIONS(51),
    [aux_sym_float_token1] = ACTIONS(53),
    [aux_sym_float_token2] = ACTIONS(55),
    [aux_sym_float_token3] = ACTIONS(55),
    [aux_sym_integer_token1] = ACTIONS(57),
    [aux_sym_integer_token2] = ACTIONS(57),
    [aux_sym_integer_token3] = ACTIONS(57),
    [aux_sym_integer_token4] = ACTIONS(59),
    [anon_sym_COLON] = ACTIONS(61),
    [anon_sym_DQUOTE] = ACTIONS(63),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASHa_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASHb_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASHe_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASHf_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASHn_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASHr_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASHt_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASHv_SQUOTE] = ACTIONS(65),
    [aux_sym_char_token1] = ACTIONS(65),
    [aux_sym_char_token2] = ACTIONS(67),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_LBRACE] = ACTIONS(71),
    [anon_sym_RBRACE] = ACTIONS(149),
    [anon_sym_SLASH] = ACTIONS(75),
    [anon_sym_Tuple_DOTnew] = ACTIONS(77),
    [anon_sym_BQUOTE] = ACTIONS(79),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(81),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(39),
    [anon_sym_AT] = ACTIONS(41),
    [anon_sym_AT_AT] = ACTIONS(43),
    [aux_sym_constant_token1] = ACTIONS(45),
  },
  [6] = {
    [sym__expression] = STATE(57),
    [sym_bool] = STATE(57),
    [sym_float] = STATE(57),
    [sym_integer] = STATE(57),
    [sym_symbol] = STATE(57),
    [sym_char] = STATE(57),
    [sym_string] = STATE(57),
    [sym_array] = STATE(57),
    [sym_hash] = STATE(57),
    [sym_regex] = STATE(57),
    [sym_tuple] = STATE(57),
    [sym_namedTupleLiteral] = STATE(57),
    [sym_commandLiteral] = STATE(57),
    [sym_local_variable] = STATE(168),
    [sym_instance_variable] = STATE(168),
    [sym_class_variable] = STATE(168),
    [sym_constant] = STATE(168),
    [sym_assignment] = STATE(57),
    [sym_nil] = ACTIONS(151),
    [anon_sym_true] = ACTIONS(153),
    [anon_sym_false] = ACTIONS(153),
    [aux_sym_float_token1] = ACTIONS(53),
    [aux_sym_float_token2] = ACTIONS(55),
    [aux_sym_float_token3] = ACTIONS(55),
    [aux_sym_integer_token1] = ACTIONS(57),
    [aux_sym_integer_token2] = ACTIONS(57),
    [aux_sym_integer_token3] = ACTIONS(57),
    [aux_sym_integer_token4] = ACTIONS(59),
    [anon_sym_COLON] = ACTIONS(155),
    [anon_sym_DQUOTE] = ACTIONS(157),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASHa_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASHb_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASHe_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASHf_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASHn_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASHr_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASHt_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASHv_SQUOTE] = ACTIONS(65),
    [aux_sym_char_token1] = ACTIONS(65),
    [aux_sym_char_token2] = ACTIONS(67),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_LBRACE] = ACTIONS(71),
    [anon_sym_SLASH] = ACTIONS(75),
    [anon_sym_Tuple_DOTnew] = ACTIONS(77),
    [anon_sym_BQUOTE] = ACTIONS(79),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(81),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(39),
    [anon_sym_AT] = ACTIONS(41),
    [anon_sym_AT_AT] = ACTIONS(43),
    [aux_sym_constant_token1] = ACTIONS(45),
  },
  [7] = {
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
    [sym_local_variable] = STATE(173),
    [sym_instance_variable] = STATE(173),
    [sym_class_variable] = STATE(173),
    [sym_constant] = STATE(173),
    [sym_assignment] = STATE(136),
    [sym_nil] = ACTIONS(159),
    [anon_sym_true] = ACTIONS(153),
    [anon_sym_false] = ACTIONS(153),
    [aux_sym_float_token1] = ACTIONS(53),
    [aux_sym_float_token2] = ACTIONS(55),
    [aux_sym_float_token3] = ACTIONS(55),
    [aux_sym_integer_token1] = ACTIONS(57),
    [aux_sym_integer_token2] = ACTIONS(57),
    [aux_sym_integer_token3] = ACTIONS(57),
    [aux_sym_integer_token4] = ACTIONS(59),
    [anon_sym_COLON] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASHa_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASHb_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASHe_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASHf_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASHn_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASHr_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASHt_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASHv_SQUOTE] = ACTIONS(65),
    [aux_sym_char_token1] = ACTIONS(65),
    [aux_sym_char_token2] = ACTIONS(67),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_LBRACE] = ACTIONS(71),
    [anon_sym_SLASH] = ACTIONS(75),
    [anon_sym_Tuple_DOTnew] = ACTIONS(77),
    [anon_sym_BQUOTE] = ACTIONS(79),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(81),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(39),
    [anon_sym_AT] = ACTIONS(41),
    [anon_sym_AT_AT] = ACTIONS(43),
    [aux_sym_constant_token1] = ACTIONS(45),
  },
  [8] = {
    [sym__expression] = STATE(57),
    [sym_bool] = STATE(57),
    [sym_float] = STATE(57),
    [sym_integer] = STATE(57),
    [sym_symbol] = STATE(57),
    [sym_char] = STATE(57),
    [sym_string] = STATE(57),
    [sym_array] = STATE(57),
    [sym_hash] = STATE(57),
    [sym_regex] = STATE(57),
    [sym_tuple] = STATE(57),
    [sym_namedTupleLiteral] = STATE(57),
    [sym_commandLiteral] = STATE(57),
    [sym_local_variable] = STATE(173),
    [sym_instance_variable] = STATE(173),
    [sym_class_variable] = STATE(173),
    [sym_constant] = STATE(173),
    [sym_assignment] = STATE(57),
    [sym_nil] = ACTIONS(151),
    [anon_sym_true] = ACTIONS(153),
    [anon_sym_false] = ACTIONS(153),
    [aux_sym_float_token1] = ACTIONS(53),
    [aux_sym_float_token2] = ACTIONS(55),
    [aux_sym_float_token3] = ACTIONS(55),
    [aux_sym_integer_token1] = ACTIONS(57),
    [aux_sym_integer_token2] = ACTIONS(57),
    [aux_sym_integer_token3] = ACTIONS(57),
    [aux_sym_integer_token4] = ACTIONS(59),
    [anon_sym_COLON] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASHa_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASHb_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASHe_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASHf_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASHn_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASHr_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASHt_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASHv_SQUOTE] = ACTIONS(65),
    [aux_sym_char_token1] = ACTIONS(65),
    [aux_sym_char_token2] = ACTIONS(67),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_LBRACE] = ACTIONS(71),
    [anon_sym_SLASH] = ACTIONS(75),
    [anon_sym_Tuple_DOTnew] = ACTIONS(77),
    [anon_sym_BQUOTE] = ACTIONS(79),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(81),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(39),
    [anon_sym_AT] = ACTIONS(41),
    [anon_sym_AT_AT] = ACTIONS(43),
    [aux_sym_constant_token1] = ACTIONS(45),
  },
  [9] = {
    [sym__expression] = STATE(90),
    [sym_bool] = STATE(90),
    [sym_float] = STATE(90),
    [sym_integer] = STATE(90),
    [sym_symbol] = STATE(90),
    [sym_char] = STATE(90),
    [sym_string] = STATE(90),
    [sym_array] = STATE(90),
    [sym_hash] = STATE(90),
    [sym_regex] = STATE(90),
    [sym_tuple] = STATE(90),
    [sym_namedTupleLiteral] = STATE(90),
    [sym_commandLiteral] = STATE(90),
    [sym_local_variable] = STATE(173),
    [sym_instance_variable] = STATE(173),
    [sym_class_variable] = STATE(173),
    [sym_constant] = STATE(173),
    [sym_assignment] = STATE(90),
    [sym_nil] = ACTIONS(165),
    [anon_sym_true] = ACTIONS(153),
    [anon_sym_false] = ACTIONS(153),
    [aux_sym_float_token1] = ACTIONS(53),
    [aux_sym_float_token2] = ACTIONS(55),
    [aux_sym_float_token3] = ACTIONS(55),
    [aux_sym_integer_token1] = ACTIONS(57),
    [aux_sym_integer_token2] = ACTIONS(57),
    [aux_sym_integer_token3] = ACTIONS(57),
    [aux_sym_integer_token4] = ACTIONS(59),
    [anon_sym_COLON] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASHa_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASHb_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASHe_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASHf_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASHn_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASHr_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASHt_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASHv_SQUOTE] = ACTIONS(65),
    [aux_sym_char_token1] = ACTIONS(65),
    [aux_sym_char_token2] = ACTIONS(67),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_LBRACE] = ACTIONS(71),
    [anon_sym_SLASH] = ACTIONS(75),
    [anon_sym_Tuple_DOTnew] = ACTIONS(77),
    [anon_sym_BQUOTE] = ACTIONS(79),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(81),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(39),
    [anon_sym_AT] = ACTIONS(41),
    [anon_sym_AT_AT] = ACTIONS(43),
    [aux_sym_constant_token1] = ACTIONS(45),
  },
  [10] = {
    [sym__expression] = STATE(96),
    [sym_bool] = STATE(96),
    [sym_float] = STATE(96),
    [sym_integer] = STATE(96),
    [sym_symbol] = STATE(96),
    [sym_char] = STATE(96),
    [sym_string] = STATE(96),
    [sym_array] = STATE(96),
    [sym_hash] = STATE(96),
    [sym_regex] = STATE(96),
    [sym_tuple] = STATE(96),
    [sym_namedTupleLiteral] = STATE(96),
    [sym_commandLiteral] = STATE(96),
    [sym_local_variable] = STATE(168),
    [sym_instance_variable] = STATE(168),
    [sym_class_variable] = STATE(168),
    [sym_constant] = STATE(168),
    [sym_assignment] = STATE(96),
    [sym_nil] = ACTIONS(167),
    [anon_sym_true] = ACTIONS(153),
    [anon_sym_false] = ACTIONS(153),
    [aux_sym_float_token1] = ACTIONS(53),
    [aux_sym_float_token2] = ACTIONS(55),
    [aux_sym_float_token3] = ACTIONS(55),
    [aux_sym_integer_token1] = ACTIONS(57),
    [aux_sym_integer_token2] = ACTIONS(57),
    [aux_sym_integer_token3] = ACTIONS(57),
    [aux_sym_integer_token4] = ACTIONS(59),
    [anon_sym_COLON] = ACTIONS(155),
    [anon_sym_DQUOTE] = ACTIONS(157),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASHa_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASHb_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASHe_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASHf_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASHn_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASHr_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASHt_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASHv_SQUOTE] = ACTIONS(65),
    [aux_sym_char_token1] = ACTIONS(65),
    [aux_sym_char_token2] = ACTIONS(67),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_LBRACE] = ACTIONS(71),
    [anon_sym_SLASH] = ACTIONS(75),
    [anon_sym_Tuple_DOTnew] = ACTIONS(77),
    [anon_sym_BQUOTE] = ACTIONS(79),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(81),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(39),
    [anon_sym_AT] = ACTIONS(41),
    [anon_sym_AT_AT] = ACTIONS(43),
    [aux_sym_constant_token1] = ACTIONS(45),
  },
  [11] = {
    [sym__expression] = STATE(57),
    [sym_bool] = STATE(57),
    [sym_float] = STATE(57),
    [sym_integer] = STATE(57),
    [sym_symbol] = STATE(57),
    [sym_char] = STATE(57),
    [sym_string] = STATE(57),
    [sym_array] = STATE(57),
    [sym_hash] = STATE(57),
    [sym_regex] = STATE(57),
    [sym_tuple] = STATE(57),
    [sym_namedTupleLiteral] = STATE(57),
    [sym_commandLiteral] = STATE(57),
    [sym_local_variable] = STATE(170),
    [sym_instance_variable] = STATE(170),
    [sym_class_variable] = STATE(170),
    [sym_constant] = STATE(170),
    [sym_assignment] = STATE(57),
    [sym_nil] = ACTIONS(151),
    [anon_sym_true] = ACTIONS(153),
    [anon_sym_false] = ACTIONS(153),
    [aux_sym_float_token1] = ACTIONS(53),
    [aux_sym_float_token2] = ACTIONS(55),
    [aux_sym_float_token3] = ACTIONS(55),
    [aux_sym_integer_token1] = ACTIONS(57),
    [aux_sym_integer_token2] = ACTIONS(57),
    [aux_sym_integer_token3] = ACTIONS(57),
    [aux_sym_integer_token4] = ACTIONS(59),
    [anon_sym_COLON] = ACTIONS(61),
    [anon_sym_DQUOTE] = ACTIONS(169),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASHa_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASHb_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASHe_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASHf_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASHn_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASHr_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASHt_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASHv_SQUOTE] = ACTIONS(65),
    [aux_sym_char_token1] = ACTIONS(65),
    [aux_sym_char_token2] = ACTIONS(67),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_LBRACE] = ACTIONS(71),
    [anon_sym_SLASH] = ACTIONS(75),
    [anon_sym_Tuple_DOTnew] = ACTIONS(77),
    [anon_sym_BQUOTE] = ACTIONS(79),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(81),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(39),
    [anon_sym_AT] = ACTIONS(41),
    [anon_sym_AT_AT] = ACTIONS(43),
    [aux_sym_constant_token1] = ACTIONS(45),
  },
  [12] = {
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
    [sym_local_variable] = STATE(173),
    [sym_instance_variable] = STATE(173),
    [sym_class_variable] = STATE(173),
    [sym_constant] = STATE(173),
    [sym_assignment] = STATE(101),
    [sym_nil] = ACTIONS(171),
    [anon_sym_true] = ACTIONS(153),
    [anon_sym_false] = ACTIONS(153),
    [aux_sym_float_token1] = ACTIONS(53),
    [aux_sym_float_token2] = ACTIONS(55),
    [aux_sym_float_token3] = ACTIONS(55),
    [aux_sym_integer_token1] = ACTIONS(57),
    [aux_sym_integer_token2] = ACTIONS(57),
    [aux_sym_integer_token3] = ACTIONS(57),
    [aux_sym_integer_token4] = ACTIONS(59),
    [anon_sym_COLON] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASHa_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASHb_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASHe_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASHf_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASHn_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASHr_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASHt_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASHv_SQUOTE] = ACTIONS(65),
    [aux_sym_char_token1] = ACTIONS(65),
    [aux_sym_char_token2] = ACTIONS(67),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_LBRACE] = ACTIONS(71),
    [anon_sym_SLASH] = ACTIONS(75),
    [anon_sym_Tuple_DOTnew] = ACTIONS(77),
    [anon_sym_BQUOTE] = ACTIONS(79),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(81),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(39),
    [anon_sym_AT] = ACTIONS(41),
    [anon_sym_AT_AT] = ACTIONS(43),
    [aux_sym_constant_token1] = ACTIONS(45),
  },
  [13] = {
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
    [sym_local_variable] = STATE(173),
    [sym_instance_variable] = STATE(173),
    [sym_class_variable] = STATE(173),
    [sym_constant] = STATE(173),
    [sym_assignment] = STATE(103),
    [sym_nil] = ACTIONS(173),
    [anon_sym_true] = ACTIONS(153),
    [anon_sym_false] = ACTIONS(153),
    [aux_sym_float_token1] = ACTIONS(53),
    [aux_sym_float_token2] = ACTIONS(55),
    [aux_sym_float_token3] = ACTIONS(55),
    [aux_sym_integer_token1] = ACTIONS(57),
    [aux_sym_integer_token2] = ACTIONS(57),
    [aux_sym_integer_token3] = ACTIONS(57),
    [aux_sym_integer_token4] = ACTIONS(59),
    [anon_sym_COLON] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASHa_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASHb_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASHe_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASHf_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASHn_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASHr_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASHt_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASHv_SQUOTE] = ACTIONS(65),
    [aux_sym_char_token1] = ACTIONS(65),
    [aux_sym_char_token2] = ACTIONS(67),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_LBRACE] = ACTIONS(71),
    [anon_sym_SLASH] = ACTIONS(75),
    [anon_sym_Tuple_DOTnew] = ACTIONS(77),
    [anon_sym_BQUOTE] = ACTIONS(79),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(81),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(39),
    [anon_sym_AT] = ACTIONS(41),
    [anon_sym_AT_AT] = ACTIONS(43),
    [aux_sym_constant_token1] = ACTIONS(45),
  },
  [14] = {
    [sym__expression] = STATE(84),
    [sym_bool] = STATE(84),
    [sym_float] = STATE(84),
    [sym_integer] = STATE(84),
    [sym_symbol] = STATE(84),
    [sym_char] = STATE(84),
    [sym_string] = STATE(84),
    [sym_array] = STATE(84),
    [sym_hash] = STATE(84),
    [sym_regex] = STATE(84),
    [sym_tuple] = STATE(84),
    [sym_namedTupleLiteral] = STATE(84),
    [sym_commandLiteral] = STATE(84),
    [sym_local_variable] = STATE(173),
    [sym_instance_variable] = STATE(173),
    [sym_class_variable] = STATE(173),
    [sym_constant] = STATE(173),
    [sym_assignment] = STATE(84),
    [sym_nil] = ACTIONS(175),
    [anon_sym_true] = ACTIONS(153),
    [anon_sym_false] = ACTIONS(153),
    [aux_sym_float_token1] = ACTIONS(53),
    [aux_sym_float_token2] = ACTIONS(55),
    [aux_sym_float_token3] = ACTIONS(55),
    [aux_sym_integer_token1] = ACTIONS(57),
    [aux_sym_integer_token2] = ACTIONS(57),
    [aux_sym_integer_token3] = ACTIONS(57),
    [aux_sym_integer_token4] = ACTIONS(59),
    [anon_sym_COLON] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASHa_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASHb_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASHe_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASHf_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASHn_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASHr_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASHt_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASHv_SQUOTE] = ACTIONS(65),
    [aux_sym_char_token1] = ACTIONS(65),
    [aux_sym_char_token2] = ACTIONS(67),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_LBRACE] = ACTIONS(71),
    [anon_sym_SLASH] = ACTIONS(75),
    [anon_sym_Tuple_DOTnew] = ACTIONS(77),
    [anon_sym_BQUOTE] = ACTIONS(79),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(81),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(39),
    [anon_sym_AT] = ACTIONS(41),
    [anon_sym_AT_AT] = ACTIONS(43),
    [aux_sym_constant_token1] = ACTIONS(45),
  },
  [15] = {
    [sym__expression] = STATE(108),
    [sym_bool] = STATE(108),
    [sym_float] = STATE(108),
    [sym_integer] = STATE(108),
    [sym_symbol] = STATE(108),
    [sym_char] = STATE(108),
    [sym_string] = STATE(108),
    [sym_array] = STATE(108),
    [sym_hash] = STATE(108),
    [sym_regex] = STATE(108),
    [sym_tuple] = STATE(108),
    [sym_namedTupleLiteral] = STATE(108),
    [sym_commandLiteral] = STATE(108),
    [sym_local_variable] = STATE(168),
    [sym_instance_variable] = STATE(168),
    [sym_class_variable] = STATE(168),
    [sym_constant] = STATE(168),
    [sym_assignment] = STATE(108),
    [sym_nil] = ACTIONS(177),
    [anon_sym_true] = ACTIONS(153),
    [anon_sym_false] = ACTIONS(153),
    [aux_sym_float_token1] = ACTIONS(53),
    [aux_sym_float_token2] = ACTIONS(55),
    [aux_sym_float_token3] = ACTIONS(55),
    [aux_sym_integer_token1] = ACTIONS(57),
    [aux_sym_integer_token2] = ACTIONS(57),
    [aux_sym_integer_token3] = ACTIONS(57),
    [aux_sym_integer_token4] = ACTIONS(59),
    [anon_sym_COLON] = ACTIONS(155),
    [anon_sym_DQUOTE] = ACTIONS(157),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASHa_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASHb_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASHe_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASHf_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASHn_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASHr_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASHt_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASHv_SQUOTE] = ACTIONS(65),
    [aux_sym_char_token1] = ACTIONS(65),
    [aux_sym_char_token2] = ACTIONS(67),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_LBRACE] = ACTIONS(71),
    [anon_sym_SLASH] = ACTIONS(75),
    [anon_sym_Tuple_DOTnew] = ACTIONS(77),
    [anon_sym_BQUOTE] = ACTIONS(79),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(81),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(39),
    [anon_sym_AT] = ACTIONS(41),
    [anon_sym_AT_AT] = ACTIONS(43),
    [aux_sym_constant_token1] = ACTIONS(45),
  },
  [16] = {
    [sym__expression] = STATE(57),
    [sym_bool] = STATE(57),
    [sym_float] = STATE(57),
    [sym_integer] = STATE(57),
    [sym_symbol] = STATE(57),
    [sym_char] = STATE(57),
    [sym_string] = STATE(57),
    [sym_array] = STATE(57),
    [sym_hash] = STATE(57),
    [sym_regex] = STATE(57),
    [sym_tuple] = STATE(57),
    [sym_namedTupleLiteral] = STATE(57),
    [sym_commandLiteral] = STATE(57),
    [sym_local_variable] = STATE(176),
    [sym_instance_variable] = STATE(176),
    [sym_class_variable] = STATE(176),
    [sym_constant] = STATE(176),
    [sym_assignment] = STATE(57),
    [sym_nil] = ACTIONS(151),
    [anon_sym_true] = ACTIONS(153),
    [anon_sym_false] = ACTIONS(153),
    [aux_sym_float_token1] = ACTIONS(53),
    [aux_sym_float_token2] = ACTIONS(55),
    [aux_sym_float_token3] = ACTIONS(55),
    [aux_sym_integer_token1] = ACTIONS(57),
    [aux_sym_integer_token2] = ACTIONS(57),
    [aux_sym_integer_token3] = ACTIONS(57),
    [aux_sym_integer_token4] = ACTIONS(59),
    [anon_sym_COLON] = ACTIONS(179),
    [anon_sym_DQUOTE] = ACTIONS(181),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASHa_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASHb_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASHe_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASHf_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASHn_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASHr_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASHt_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASHv_SQUOTE] = ACTIONS(65),
    [aux_sym_char_token1] = ACTIONS(65),
    [aux_sym_char_token2] = ACTIONS(67),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_LBRACE] = ACTIONS(71),
    [anon_sym_SLASH] = ACTIONS(75),
    [anon_sym_Tuple_DOTnew] = ACTIONS(77),
    [anon_sym_BQUOTE] = ACTIONS(79),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(81),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(39),
    [anon_sym_AT] = ACTIONS(41),
    [anon_sym_AT_AT] = ACTIONS(43),
    [aux_sym_constant_token1] = ACTIONS(45),
  },
  [17] = {
    [sym__expression] = STATE(134),
    [sym_bool] = STATE(134),
    [sym_float] = STATE(134),
    [sym_integer] = STATE(134),
    [sym_symbol] = STATE(134),
    [sym_char] = STATE(134),
    [sym_string] = STATE(134),
    [sym_array] = STATE(134),
    [sym_hash] = STATE(134),
    [sym_regex] = STATE(134),
    [sym_tuple] = STATE(134),
    [sym_namedTupleLiteral] = STATE(134),
    [sym_commandLiteral] = STATE(134),
    [sym_local_variable] = STATE(166),
    [sym_instance_variable] = STATE(166),
    [sym_class_variable] = STATE(166),
    [sym_constant] = STATE(166),
    [sym_assignment] = STATE(134),
    [sym_nil] = ACTIONS(183),
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
    [aux_sym_constant_token1] = ACTIONS(45),
  },
  [18] = {
    [sym__expression] = STATE(146),
    [sym_bool] = STATE(146),
    [sym_float] = STATE(146),
    [sym_integer] = STATE(146),
    [sym_symbol] = STATE(146),
    [sym_char] = STATE(146),
    [sym_string] = STATE(146),
    [sym_array] = STATE(146),
    [sym_hash] = STATE(146),
    [sym_regex] = STATE(146),
    [sym_tuple] = STATE(146),
    [sym_namedTupleLiteral] = STATE(146),
    [sym_commandLiteral] = STATE(146),
    [sym_local_variable] = STATE(176),
    [sym_instance_variable] = STATE(176),
    [sym_class_variable] = STATE(176),
    [sym_constant] = STATE(176),
    [sym_assignment] = STATE(146),
    [sym_nil] = ACTIONS(185),
    [anon_sym_true] = ACTIONS(153),
    [anon_sym_false] = ACTIONS(153),
    [aux_sym_float_token1] = ACTIONS(53),
    [aux_sym_float_token2] = ACTIONS(55),
    [aux_sym_float_token3] = ACTIONS(55),
    [aux_sym_integer_token1] = ACTIONS(57),
    [aux_sym_integer_token2] = ACTIONS(57),
    [aux_sym_integer_token3] = ACTIONS(57),
    [aux_sym_integer_token4] = ACTIONS(59),
    [anon_sym_COLON] = ACTIONS(179),
    [anon_sym_DQUOTE] = ACTIONS(181),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASHa_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASHb_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASHe_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASHf_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASHn_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASHr_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASHt_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASHv_SQUOTE] = ACTIONS(65),
    [aux_sym_char_token1] = ACTIONS(65),
    [aux_sym_char_token2] = ACTIONS(67),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_LBRACE] = ACTIONS(71),
    [anon_sym_SLASH] = ACTIONS(75),
    [anon_sym_Tuple_DOTnew] = ACTIONS(77),
    [anon_sym_BQUOTE] = ACTIONS(79),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(81),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(39),
    [anon_sym_AT] = ACTIONS(41),
    [anon_sym_AT_AT] = ACTIONS(43),
    [aux_sym_constant_token1] = ACTIONS(45),
  },
  [19] = {
    [sym__expression] = STATE(84),
    [sym_bool] = STATE(84),
    [sym_float] = STATE(84),
    [sym_integer] = STATE(84),
    [sym_symbol] = STATE(84),
    [sym_char] = STATE(84),
    [sym_string] = STATE(84),
    [sym_array] = STATE(84),
    [sym_hash] = STATE(84),
    [sym_regex] = STATE(84),
    [sym_tuple] = STATE(84),
    [sym_namedTupleLiteral] = STATE(84),
    [sym_commandLiteral] = STATE(84),
    [sym_local_variable] = STATE(168),
    [sym_instance_variable] = STATE(168),
    [sym_class_variable] = STATE(168),
    [sym_constant] = STATE(168),
    [sym_assignment] = STATE(84),
    [sym_nil] = ACTIONS(175),
    [anon_sym_true] = ACTIONS(153),
    [anon_sym_false] = ACTIONS(153),
    [aux_sym_float_token1] = ACTIONS(53),
    [aux_sym_float_token2] = ACTIONS(55),
    [aux_sym_float_token3] = ACTIONS(55),
    [aux_sym_integer_token1] = ACTIONS(57),
    [aux_sym_integer_token2] = ACTIONS(57),
    [aux_sym_integer_token3] = ACTIONS(57),
    [aux_sym_integer_token4] = ACTIONS(59),
    [anon_sym_COLON] = ACTIONS(155),
    [anon_sym_DQUOTE] = ACTIONS(157),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASHa_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASHb_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASHe_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASHf_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASHn_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASHr_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASHt_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASHv_SQUOTE] = ACTIONS(65),
    [aux_sym_char_token1] = ACTIONS(65),
    [aux_sym_char_token2] = ACTIONS(67),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_LBRACE] = ACTIONS(71),
    [anon_sym_SLASH] = ACTIONS(75),
    [anon_sym_Tuple_DOTnew] = ACTIONS(77),
    [anon_sym_BQUOTE] = ACTIONS(79),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(81),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(39),
    [anon_sym_AT] = ACTIONS(41),
    [anon_sym_AT_AT] = ACTIONS(43),
    [aux_sym_constant_token1] = ACTIONS(45),
  },
  [20] = {
    [sym__expression] = STATE(137),
    [sym_bool] = STATE(137),
    [sym_float] = STATE(137),
    [sym_integer] = STATE(137),
    [sym_symbol] = STATE(137),
    [sym_char] = STATE(137),
    [sym_string] = STATE(137),
    [sym_array] = STATE(137),
    [sym_hash] = STATE(137),
    [sym_regex] = STATE(137),
    [sym_tuple] = STATE(137),
    [sym_namedTupleLiteral] = STATE(137),
    [sym_commandLiteral] = STATE(137),
    [sym_local_variable] = STATE(173),
    [sym_instance_variable] = STATE(173),
    [sym_class_variable] = STATE(173),
    [sym_constant] = STATE(173),
    [sym_assignment] = STATE(137),
    [sym_nil] = ACTIONS(187),
    [anon_sym_true] = ACTIONS(153),
    [anon_sym_false] = ACTIONS(153),
    [aux_sym_float_token1] = ACTIONS(53),
    [aux_sym_float_token2] = ACTIONS(55),
    [aux_sym_float_token3] = ACTIONS(55),
    [aux_sym_integer_token1] = ACTIONS(57),
    [aux_sym_integer_token2] = ACTIONS(57),
    [aux_sym_integer_token3] = ACTIONS(57),
    [aux_sym_integer_token4] = ACTIONS(59),
    [anon_sym_COLON] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASHa_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASHb_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASHe_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASHf_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASHn_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASHr_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASHt_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASHv_SQUOTE] = ACTIONS(65),
    [aux_sym_char_token1] = ACTIONS(65),
    [aux_sym_char_token2] = ACTIONS(67),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_LBRACE] = ACTIONS(71),
    [anon_sym_SLASH] = ACTIONS(75),
    [anon_sym_Tuple_DOTnew] = ACTIONS(77),
    [anon_sym_BQUOTE] = ACTIONS(79),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(81),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(39),
    [anon_sym_AT] = ACTIONS(41),
    [anon_sym_AT_AT] = ACTIONS(43),
    [aux_sym_constant_token1] = ACTIONS(45),
  },
  [21] = {
    [sym__expression] = STATE(88),
    [sym_bool] = STATE(88),
    [sym_float] = STATE(88),
    [sym_integer] = STATE(88),
    [sym_symbol] = STATE(88),
    [sym_char] = STATE(88),
    [sym_string] = STATE(88),
    [sym_array] = STATE(88),
    [sym_hash] = STATE(88),
    [sym_regex] = STATE(88),
    [sym_tuple] = STATE(88),
    [sym_namedTupleLiteral] = STATE(88),
    [sym_commandLiteral] = STATE(88),
    [sym_local_variable] = STATE(173),
    [sym_instance_variable] = STATE(173),
    [sym_class_variable] = STATE(173),
    [sym_constant] = STATE(173),
    [sym_assignment] = STATE(88),
    [sym_nil] = ACTIONS(189),
    [anon_sym_true] = ACTIONS(153),
    [anon_sym_false] = ACTIONS(153),
    [aux_sym_float_token1] = ACTIONS(53),
    [aux_sym_float_token2] = ACTIONS(55),
    [aux_sym_float_token3] = ACTIONS(55),
    [aux_sym_integer_token1] = ACTIONS(57),
    [aux_sym_integer_token2] = ACTIONS(57),
    [aux_sym_integer_token3] = ACTIONS(57),
    [aux_sym_integer_token4] = ACTIONS(59),
    [anon_sym_COLON] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASHa_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASHb_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASHe_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASHf_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASHn_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASHr_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASHt_SQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE_BSLASHv_SQUOTE] = ACTIONS(65),
    [aux_sym_char_token1] = ACTIONS(65),
    [aux_sym_char_token2] = ACTIONS(67),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_LBRACE] = ACTIONS(71),
    [anon_sym_SLASH] = ACTIONS(75),
    [anon_sym_Tuple_DOTnew] = ACTIONS(77),
    [anon_sym_BQUOTE] = ACTIONS(79),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(81),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(39),
    [anon_sym_AT] = ACTIONS(41),
    [anon_sym_AT_AT] = ACTIONS(43),
    [aux_sym_constant_token1] = ACTIONS(45),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 7,
      aux_sym_float_token2,
      aux_sym_float_token3,
      aux_sym_integer_token4,
      aux_sym_char_token2,
      aux_sym_local_variable_token1,
      anon_sym_AT,
      aux_sym_constant_token1,
    ACTIONS(191), 29,
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
  [44] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_DQUOTE,
    STATE(34), 1,
      sym__operator,
    ACTIONS(199), 7,
      anon_sym_STAR,
      anon_sym_EQ_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_LBRACK_RBRACK,
      anon_sym_BANG,
    ACTIONS(195), 20,
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
  [85] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_DQUOTE,
    STATE(34), 1,
      sym__operator,
    ACTIONS(199), 7,
      anon_sym_STAR,
      anon_sym_EQ_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_LBRACK_RBRACK,
      anon_sym_BANG,
    ACTIONS(195), 20,
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
  [126] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 1,
      anon_sym_DQUOTE,
    STATE(128), 1,
      sym__operator,
    ACTIONS(207), 7,
      anon_sym_STAR,
      anon_sym_EQ_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_LBRACK_RBRACK,
      anon_sym_BANG,
    ACTIONS(203), 20,
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
  [167] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      anon_sym_DQUOTE,
    STATE(34), 1,
      sym__operator,
    ACTIONS(199), 7,
      anon_sym_STAR,
      anon_sym_EQ_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_LBRACK_RBRACK,
      anon_sym_BANG,
    ACTIONS(195), 20,
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
  [208] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      anon_sym_DQUOTE,
    STATE(34), 1,
      sym__operator,
    ACTIONS(199), 7,
      anon_sym_STAR,
      anon_sym_EQ_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_LBRACK_RBRACK,
      anon_sym_BANG,
    ACTIONS(195), 20,
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
  [249] = 3,
    ACTIONS(217), 1,
      sym_comment,
    ACTIONS(215), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
    ACTIONS(213), 4,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [263] = 3,
    ACTIONS(217), 1,
      sym_comment,
    ACTIONS(215), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
    ACTIONS(219), 4,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [277] = 3,
    ACTIONS(217), 1,
      sym_comment,
    ACTIONS(215), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
    ACTIONS(221), 3,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [290] = 3,
    ACTIONS(217), 1,
      sym_comment,
    ACTIONS(215), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
    ACTIONS(223), 3,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [303] = 3,
    ACTIONS(217), 1,
      sym_comment,
    ACTIONS(215), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
    ACTIONS(213), 3,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [316] = 3,
    ACTIONS(217), 1,
      sym_comment,
    ACTIONS(215), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
    ACTIONS(219), 3,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [329] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [339] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [349] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      anon_sym_COLON,
    ACTIONS(231), 3,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [361] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_COMMA,
    ACTIONS(235), 1,
      anon_sym_EQ_GT,
    ACTIONS(237), 1,
      anon_sym_RBRACE,
    STATE(104), 1,
      aux_sym_array_repeat1,
  [377] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_COMMA,
    ACTIONS(239), 1,
      anon_sym_EQ_GT,
    ACTIONS(241), 1,
      anon_sym_RBRACE,
    STATE(78), 1,
      aux_sym_array_repeat1,
  [393] = 3,
    ACTIONS(217), 1,
      sym_comment,
    ACTIONS(215), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
    ACTIONS(223), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [405] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_COLON,
    ACTIONS(231), 3,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [417] = 3,
    ACTIONS(217), 1,
      sym_comment,
    ACTIONS(215), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
    ACTIONS(219), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [429] = 3,
    ACTIONS(217), 1,
      sym_comment,
    ACTIONS(215), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
    ACTIONS(221), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [441] = 3,
    ACTIONS(217), 1,
      sym_comment,
    ACTIONS(213), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(215), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
  [453] = 3,
    ACTIONS(217), 1,
      sym_comment,
    ACTIONS(213), 2,
      anon_sym_SEMI,
      aux_sym__statement_token1,
    ACTIONS(215), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
  [465] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [475] = 3,
    ACTIONS(217), 1,
      sym_comment,
    ACTIONS(213), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(215), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
  [487] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [497] = 3,
    ACTIONS(217), 1,
      sym_comment,
    ACTIONS(215), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
    ACTIONS(221), 2,
      anon_sym_SEMI,
      aux_sym__statement_token1,
  [509] = 3,
    ACTIONS(217), 1,
      sym_comment,
    ACTIONS(215), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
    ACTIONS(221), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [521] = 3,
    ACTIONS(217), 1,
      sym_comment,
    ACTIONS(215), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
    ACTIONS(219), 2,
      anon_sym_SEMI,
      aux_sym__statement_token1,
  [533] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 1,
      aux_sym_identifier_token1,
    ACTIONS(251), 1,
      anon_sym_DQUOTE,
    STATE(163), 2,
      sym_identifier,
      sym_string,
  [547] = 3,
    ACTIONS(217), 1,
      sym_comment,
    ACTIONS(215), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
    ACTIONS(219), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [559] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [569] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [579] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [589] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [599] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [609] = 3,
    ACTIONS(217), 1,
      sym_comment,
    ACTIONS(215), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
    ACTIONS(223), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [621] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [631] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [641] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [651] = 3,
    ACTIONS(217), 1,
      sym_comment,
    ACTIONS(215), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
    ACTIONS(223), 2,
      anon_sym_SEMI,
      aux_sym__statement_token1,
  [663] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [673] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [683] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [693] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [703] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [713] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [723] = 4,
    ACTIONS(217), 1,
      sym_comment,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    ACTIONS(283), 1,
      aux_sym_symbol_token1,
    STATE(92), 1,
      aux_sym_symbol_repeat1,
  [736] = 4,
    ACTIONS(217), 1,
      sym_comment,
    ACTIONS(285), 1,
      anon_sym_DQUOTE,
    ACTIONS(287), 1,
      aux_sym_symbol_token1,
    STATE(81), 1,
      aux_sym_symbol_repeat1,
  [749] = 4,
    ACTIONS(217), 1,
      sym_comment,
    ACTIONS(289), 1,
      anon_sym_DQUOTE,
    ACTIONS(291), 1,
      aux_sym_symbol_token1,
    STATE(106), 1,
      aux_sym_symbol_repeat1,
  [762] = 4,
    ACTIONS(217), 1,
      sym_comment,
    ACTIONS(293), 1,
      anon_sym_DQUOTE,
    ACTIONS(295), 1,
      aux_sym_symbol_token1,
    STATE(73), 1,
      aux_sym_symbol_repeat1,
  [775] = 3,
    ACTIONS(217), 1,
      sym_comment,
    STATE(73), 1,
      aux_sym_symbol_repeat1,
    ACTIONS(297), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
  [786] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      anon_sym_COMMA,
    ACTIONS(303), 1,
      anon_sym_RBRACE,
    STATE(74), 1,
      aux_sym_array_repeat1,
  [799] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 1,
      anon_sym_COMMA,
    ACTIONS(307), 1,
      anon_sym_RBRACK,
    STATE(86), 1,
      aux_sym_array_repeat1,
  [812] = 4,
    ACTIONS(217), 1,
      sym_comment,
    ACTIONS(295), 1,
      aux_sym_symbol_token1,
    ACTIONS(309), 1,
      anon_sym_DQUOTE,
    STATE(73), 1,
      aux_sym_symbol_repeat1,
  [825] = 4,
    ACTIONS(217), 1,
      sym_comment,
    ACTIONS(311), 1,
      anon_sym_DQUOTE,
    ACTIONS(313), 1,
      aux_sym_symbol_token1,
    STATE(76), 1,
      aux_sym_symbol_repeat1,
  [838] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_COMMA,
    ACTIONS(315), 1,
      anon_sym_RBRACE,
    STATE(74), 1,
      aux_sym_array_repeat1,
  [851] = 4,
    ACTIONS(217), 1,
      sym_comment,
    ACTIONS(295), 1,
      aux_sym_symbol_token1,
    ACTIONS(317), 1,
      anon_sym_DQUOTE,
    STATE(73), 1,
      aux_sym_symbol_repeat1,
  [864] = 4,
    ACTIONS(217), 1,
      sym_comment,
    ACTIONS(319), 1,
      anon_sym_DQUOTE,
    ACTIONS(321), 1,
      aux_sym_symbol_token1,
    STATE(79), 1,
      aux_sym_symbol_repeat1,
  [877] = 4,
    ACTIONS(217), 1,
      sym_comment,
    ACTIONS(295), 1,
      aux_sym_symbol_token1,
    ACTIONS(323), 1,
      anon_sym_DQUOTE,
    STATE(73), 1,
      aux_sym_symbol_repeat1,
  [890] = 4,
    ACTIONS(217), 1,
      sym_comment,
    ACTIONS(295), 1,
      aux_sym_symbol_token1,
    ACTIONS(325), 1,
      anon_sym_DQUOTE,
    STATE(73), 1,
      aux_sym_symbol_repeat1,
  [903] = 4,
    ACTIONS(217), 1,
      sym_comment,
    ACTIONS(327), 1,
      anon_sym_DQUOTE,
    ACTIONS(329), 1,
      aux_sym_symbol_token1,
    STATE(82), 1,
      aux_sym_symbol_repeat1,
  [916] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [925] = 4,
    ACTIONS(217), 1,
      sym_comment,
    ACTIONS(295), 1,
      aux_sym_symbol_token1,
    ACTIONS(331), 1,
      anon_sym_DQUOTE,
    STATE(73), 1,
      aux_sym_symbol_repeat1,
  [938] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 1,
      anon_sym_RBRACK,
    ACTIONS(333), 1,
      anon_sym_COMMA,
    STATE(86), 1,
      aux_sym_array_repeat1,
  [951] = 4,
    ACTIONS(217), 1,
      sym_comment,
    ACTIONS(295), 1,
      aux_sym_symbol_token1,
    ACTIONS(336), 1,
      anon_sym_DQUOTE,
    STATE(73), 1,
      aux_sym_symbol_repeat1,
  [964] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 1,
      anon_sym_COMMA,
    ACTIONS(340), 1,
      anon_sym_RBRACE,
    STATE(93), 1,
      aux_sym_hash_repeat1,
  [977] = 4,
    ACTIONS(217), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_DQUOTE,
    ACTIONS(344), 1,
      aux_sym_symbol_token1,
    STATE(85), 1,
      aux_sym_symbol_repeat1,
  [990] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 1,
      anon_sym_COMMA,
    ACTIONS(348), 1,
      anon_sym_RBRACE,
    STATE(95), 1,
      aux_sym_namedTupleLiteral_repeat1,
  [1003] = 4,
    ACTIONS(217), 1,
      sym_comment,
    ACTIONS(350), 1,
      anon_sym_DQUOTE,
    ACTIONS(352), 1,
      aux_sym_symbol_token1,
    STATE(87), 1,
      aux_sym_symbol_repeat1,
  [1016] = 4,
    ACTIONS(217), 1,
      sym_comment,
    ACTIONS(295), 1,
      aux_sym_symbol_token1,
    ACTIONS(354), 1,
      anon_sym_DQUOTE,
    STATE(73), 1,
      aux_sym_symbol_repeat1,
  [1029] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 1,
      anon_sym_COMMA,
    ACTIONS(356), 1,
      anon_sym_RBRACE,
    STATE(99), 1,
      aux_sym_hash_repeat1,
  [1042] = 4,
    ACTIONS(217), 1,
      sym_comment,
    ACTIONS(295), 1,
      aux_sym_symbol_token1,
    ACTIONS(358), 1,
      anon_sym_DQUOTE,
    STATE(73), 1,
      aux_sym_symbol_repeat1,
  [1055] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 1,
      anon_sym_COMMA,
    ACTIONS(360), 1,
      anon_sym_RBRACE,
    STATE(102), 1,
      aux_sym_namedTupleLiteral_repeat1,
  [1068] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 1,
      anon_sym_COMMA,
    ACTIONS(362), 1,
      anon_sym_RBRACK,
    STATE(75), 1,
      aux_sym_array_repeat1,
  [1081] = 4,
    ACTIONS(217), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_DQUOTE,
    ACTIONS(366), 1,
      aux_sym_symbol_token1,
    STATE(94), 1,
      aux_sym_symbol_repeat1,
  [1094] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 1,
      anon_sym_COMMA,
    ACTIONS(368), 1,
      anon_sym_RBRACE,
    STATE(102), 1,
      aux_sym_namedTupleLiteral_repeat1,
  [1107] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      anon_sym_COMMA,
    ACTIONS(373), 1,
      anon_sym_RBRACE,
    STATE(99), 1,
      aux_sym_hash_repeat1,
  [1120] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 1,
      anon_sym_COMMA,
    ACTIONS(375), 1,
      anon_sym_RBRACE,
    STATE(99), 1,
      aux_sym_hash_repeat1,
  [1133] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 1,
      anon_sym_COMMA,
    ACTIONS(377), 1,
      anon_sym_RBRACE,
    STATE(98), 1,
      aux_sym_namedTupleLiteral_repeat1,
  [1146] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 1,
      anon_sym_COMMA,
    ACTIONS(382), 1,
      anon_sym_RBRACE,
    STATE(102), 1,
      aux_sym_namedTupleLiteral_repeat1,
  [1159] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 1,
      anon_sym_COMMA,
    ACTIONS(384), 1,
      anon_sym_RBRACE,
    STATE(100), 1,
      aux_sym_hash_repeat1,
  [1172] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_COMMA,
    ACTIONS(386), 1,
      anon_sym_RBRACE,
    STATE(74), 1,
      aux_sym_array_repeat1,
  [1185] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 1,
      anon_sym_COMMA,
    ACTIONS(388), 1,
      anon_sym_RBRACK,
    STATE(86), 1,
      aux_sym_array_repeat1,
  [1198] = 4,
    ACTIONS(217), 1,
      sym_comment,
    ACTIONS(295), 1,
      aux_sym_symbol_token1,
    ACTIONS(390), 1,
      anon_sym_DQUOTE,
    STATE(73), 1,
      aux_sym_symbol_repeat1,
  [1211] = 4,
    ACTIONS(217), 1,
      sym_comment,
    ACTIONS(295), 1,
      aux_sym_symbol_token1,
    ACTIONS(392), 1,
      anon_sym_DQUOTE,
    STATE(73), 1,
      aux_sym_symbol_repeat1,
  [1224] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 1,
      anon_sym_COMMA,
    ACTIONS(394), 1,
      anon_sym_RBRACK,
    STATE(105), 1,
      aux_sym_array_repeat1,
  [1237] = 4,
    ACTIONS(217), 1,
      sym_comment,
    ACTIONS(396), 1,
      anon_sym_DQUOTE,
    ACTIONS(398), 1,
      aux_sym_symbol_token1,
    STATE(72), 1,
      aux_sym_symbol_repeat1,
  [1250] = 4,
    ACTIONS(217), 1,
      sym_comment,
    ACTIONS(295), 1,
      aux_sym_symbol_token1,
    ACTIONS(400), 1,
      anon_sym_DQUOTE,
    STATE(73), 1,
      aux_sym_symbol_repeat1,
  [1263] = 4,
    ACTIONS(217), 1,
      sym_comment,
    ACTIONS(402), 1,
      anon_sym_DQUOTE,
    ACTIONS(404), 1,
      aux_sym_symbol_token1,
    STATE(107), 1,
      aux_sym_symbol_repeat1,
  [1276] = 4,
    ACTIONS(217), 1,
      sym_comment,
    ACTIONS(406), 1,
      anon_sym_DQUOTE,
    ACTIONS(408), 1,
      aux_sym_symbol_token1,
    STATE(110), 1,
      aux_sym_symbol_repeat1,
  [1289] = 3,
    ACTIONS(217), 1,
      sym_comment,
    ACTIONS(219), 1,
      anon_sym_COLON,
    ACTIONS(215), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
  [1300] = 3,
    ACTIONS(213), 1,
      anon_sym_COLON,
    ACTIONS(217), 1,
      sym_comment,
    ACTIONS(215), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
  [1311] = 3,
    ACTIONS(217), 1,
      sym_comment,
    ACTIONS(219), 1,
      anon_sym_EQ_GT,
    ACTIONS(215), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
  [1322] = 3,
    ACTIONS(213), 1,
      anon_sym_EQ_GT,
    ACTIONS(217), 1,
      sym_comment,
    ACTIONS(215), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
  [1333] = 3,
    ACTIONS(217), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_EQ_GT,
    ACTIONS(215), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
  [1344] = 3,
    ACTIONS(217), 1,
      sym_comment,
    ACTIONS(223), 1,
      anon_sym_EQ_GT,
    ACTIONS(215), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
  [1355] = 3,
    ACTIONS(217), 1,
      sym_comment,
    ACTIONS(269), 1,
      aux_sym__statement_token1,
    ACTIONS(410), 1,
      anon_sym_SEMI,
  [1365] = 3,
    ACTIONS(217), 1,
      sym_comment,
    ACTIONS(412), 1,
      anon_sym_SEMI,
    ACTIONS(414), 1,
      aux_sym__statement_token1,
  [1375] = 3,
    ACTIONS(217), 1,
      sym_comment,
    ACTIONS(273), 1,
      aux_sym__statement_token1,
    ACTIONS(416), 1,
      anon_sym_SEMI,
  [1385] = 3,
    ACTIONS(217), 1,
      sym_comment,
    ACTIONS(275), 1,
      aux_sym__statement_token1,
    ACTIONS(418), 1,
      anon_sym_SEMI,
  [1395] = 3,
    ACTIONS(217), 1,
      sym_comment,
    ACTIONS(277), 1,
      aux_sym__statement_token1,
    ACTIONS(420), 1,
      anon_sym_SEMI,
  [1405] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 1,
      aux_sym_identifier_token1,
    ACTIONS(424), 1,
      anon_sym_EQ,
  [1415] = 3,
    ACTIONS(217), 1,
      sym_comment,
    ACTIONS(279), 1,
      aux_sym__statement_token1,
    ACTIONS(426), 1,
      anon_sym_SEMI,
  [1425] = 3,
    ACTIONS(217), 1,
      sym_comment,
    ACTIONS(253), 1,
      aux_sym__statement_token1,
    ACTIONS(428), 1,
      anon_sym_SEMI,
  [1435] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 1,
      aux_sym_identifier_token1,
    ACTIONS(432), 1,
      anon_sym_EQ,
  [1445] = 3,
    ACTIONS(217), 1,
      sym_comment,
    ACTIONS(225), 1,
      aux_sym__statement_token1,
    ACTIONS(434), 1,
      anon_sym_SEMI,
  [1455] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(436), 1,
      aux_sym_identifier_token1,
    ACTIONS(438), 1,
      anon_sym_EQ,
  [1465] = 3,
    ACTIONS(217), 1,
      sym_comment,
    ACTIONS(255), 1,
      aux_sym__statement_token1,
    ACTIONS(440), 1,
      anon_sym_SEMI,
  [1475] = 3,
    ACTIONS(217), 1,
      sym_comment,
    ACTIONS(257), 1,
      aux_sym__statement_token1,
    ACTIONS(442), 1,
      anon_sym_SEMI,
  [1485] = 3,
    ACTIONS(217), 1,
      sym_comment,
    ACTIONS(259), 1,
      aux_sym__statement_token1,
    ACTIONS(444), 1,
      anon_sym_SEMI,
  [1495] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 1,
      aux_sym_identifier_token1,
    ACTIONS(448), 1,
      anon_sym_EQ,
  [1505] = 3,
    ACTIONS(217), 1,
      sym_comment,
    ACTIONS(261), 1,
      aux_sym__statement_token1,
    ACTIONS(450), 1,
      anon_sym_SEMI,
  [1515] = 3,
    ACTIONS(217), 1,
      sym_comment,
    ACTIONS(271), 1,
      aux_sym__statement_token1,
    ACTIONS(452), 1,
      anon_sym_SEMI,
  [1525] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1533] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1541] = 3,
    ACTIONS(217), 1,
      sym_comment,
    ACTIONS(245), 1,
      aux_sym__statement_token1,
    ACTIONS(458), 1,
      anon_sym_SEMI,
  [1551] = 3,
    ACTIONS(217), 1,
      sym_comment,
    ACTIONS(263), 1,
      aux_sym__statement_token1,
    ACTIONS(460), 1,
      anon_sym_SEMI,
  [1561] = 3,
    ACTIONS(217), 1,
      sym_comment,
    ACTIONS(267), 1,
      aux_sym__statement_token1,
    ACTIONS(462), 1,
      anon_sym_SEMI,
  [1571] = 3,
    ACTIONS(217), 1,
      sym_comment,
    ACTIONS(247), 1,
      aux_sym__statement_token1,
    ACTIONS(464), 1,
      anon_sym_SEMI,
  [1581] = 3,
    ACTIONS(217), 1,
      sym_comment,
    ACTIONS(265), 1,
      aux_sym__statement_token1,
    ACTIONS(466), 1,
      anon_sym_SEMI,
  [1591] = 3,
    ACTIONS(217), 1,
      sym_comment,
    ACTIONS(227), 1,
      aux_sym__statement_token1,
    ACTIONS(468), 1,
      anon_sym_SEMI,
  [1601] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 1,
      anon_sym_RPAREN,
  [1608] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_COLON,
  [1615] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 1,
      anon_sym_EQ_GT,
  [1622] = 2,
    ACTIONS(217), 1,
      sym_comment,
    ACTIONS(474), 1,
      aux_sym_hash_token1,
  [1629] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 1,
      anon_sym_EQ_GT,
  [1636] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(478), 1,
      anon_sym_SLASH,
  [1643] = 2,
    ACTIONS(217), 1,
      sym_comment,
    ACTIONS(480), 1,
      aux_sym_hash_token1,
  [1650] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 1,
      anon_sym_COLON,
  [1657] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(484), 1,
      anon_sym_EQ,
  [1664] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      anon_sym_EQ,
  [1671] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 1,
      ts_builtin_sym_end,
  [1678] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 1,
      anon_sym_BQUOTE,
  [1685] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(490), 1,
      anon_sym_SLASH,
  [1692] = 2,
    ACTIONS(217), 1,
      sym_comment,
    ACTIONS(492), 1,
      aux_sym_hash_token1,
  [1699] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(494), 1,
      aux_sym_local_variable_token1,
  [1706] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 1,
      aux_sym_local_variable_token1,
  [1713] = 2,
    ACTIONS(217), 1,
      sym_comment,
    ACTIONS(498), 1,
      aux_sym_regex_token1,
  [1720] = 2,
    ACTIONS(217), 1,
      sym_comment,
    ACTIONS(500), 1,
      aux_sym_commandLiteral_token1,
  [1727] = 2,
    ACTIONS(217), 1,
      sym_comment,
    ACTIONS(502), 1,
      aux_sym_commandLiteral_token2,
  [1734] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(504), 1,
      anon_sym_COLON,
  [1741] = 2,
    ACTIONS(217), 1,
      sym_comment,
    ACTIONS(506), 1,
      aux_sym_commandLiteral_token2,
  [1748] = 2,
    ACTIONS(217), 1,
      sym_comment,
    ACTIONS(508), 1,
      aux_sym_commandLiteral_token1,
  [1755] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(510), 1,
      anon_sym_EQ,
  [1762] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      anon_sym_EQ_GT,
  [1769] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(514), 1,
      anon_sym_EQ,
  [1776] = 2,
    ACTIONS(217), 1,
      sym_comment,
    ACTIONS(516), 1,
      aux_sym_regex_token1,
  [1783] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(518), 1,
      anon_sym_EQ,
  [1790] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 1,
      anon_sym_EQ,
  [1797] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 1,
      anon_sym_EQ,
  [1804] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 1,
      anon_sym_EQ,
  [1811] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      anon_sym_RPAREN,
  [1818] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      anon_sym_BQUOTE,
  [1825] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 1,
      anon_sym_EQ,
  [1832] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      anon_sym_COLON,
  [1839] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 1,
      anon_sym_of,
  [1846] = 2,
    ACTIONS(217), 1,
      sym_comment,
    ACTIONS(532), 1,
      aux_sym_hash_token1,
  [1853] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_of,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(22)] = 0,
  [SMALL_STATE(23)] = 44,
  [SMALL_STATE(24)] = 85,
  [SMALL_STATE(25)] = 126,
  [SMALL_STATE(26)] = 167,
  [SMALL_STATE(27)] = 208,
  [SMALL_STATE(28)] = 249,
  [SMALL_STATE(29)] = 263,
  [SMALL_STATE(30)] = 277,
  [SMALL_STATE(31)] = 290,
  [SMALL_STATE(32)] = 303,
  [SMALL_STATE(33)] = 316,
  [SMALL_STATE(34)] = 329,
  [SMALL_STATE(35)] = 339,
  [SMALL_STATE(36)] = 349,
  [SMALL_STATE(37)] = 361,
  [SMALL_STATE(38)] = 377,
  [SMALL_STATE(39)] = 393,
  [SMALL_STATE(40)] = 405,
  [SMALL_STATE(41)] = 417,
  [SMALL_STATE(42)] = 429,
  [SMALL_STATE(43)] = 441,
  [SMALL_STATE(44)] = 453,
  [SMALL_STATE(45)] = 465,
  [SMALL_STATE(46)] = 475,
  [SMALL_STATE(47)] = 487,
  [SMALL_STATE(48)] = 497,
  [SMALL_STATE(49)] = 509,
  [SMALL_STATE(50)] = 521,
  [SMALL_STATE(51)] = 533,
  [SMALL_STATE(52)] = 547,
  [SMALL_STATE(53)] = 559,
  [SMALL_STATE(54)] = 569,
  [SMALL_STATE(55)] = 579,
  [SMALL_STATE(56)] = 589,
  [SMALL_STATE(57)] = 599,
  [SMALL_STATE(58)] = 609,
  [SMALL_STATE(59)] = 621,
  [SMALL_STATE(60)] = 631,
  [SMALL_STATE(61)] = 641,
  [SMALL_STATE(62)] = 651,
  [SMALL_STATE(63)] = 663,
  [SMALL_STATE(64)] = 673,
  [SMALL_STATE(65)] = 683,
  [SMALL_STATE(66)] = 693,
  [SMALL_STATE(67)] = 703,
  [SMALL_STATE(68)] = 713,
  [SMALL_STATE(69)] = 723,
  [SMALL_STATE(70)] = 736,
  [SMALL_STATE(71)] = 749,
  [SMALL_STATE(72)] = 762,
  [SMALL_STATE(73)] = 775,
  [SMALL_STATE(74)] = 786,
  [SMALL_STATE(75)] = 799,
  [SMALL_STATE(76)] = 812,
  [SMALL_STATE(77)] = 825,
  [SMALL_STATE(78)] = 838,
  [SMALL_STATE(79)] = 851,
  [SMALL_STATE(80)] = 864,
  [SMALL_STATE(81)] = 877,
  [SMALL_STATE(82)] = 890,
  [SMALL_STATE(83)] = 903,
  [SMALL_STATE(84)] = 916,
  [SMALL_STATE(85)] = 925,
  [SMALL_STATE(86)] = 938,
  [SMALL_STATE(87)] = 951,
  [SMALL_STATE(88)] = 964,
  [SMALL_STATE(89)] = 977,
  [SMALL_STATE(90)] = 990,
  [SMALL_STATE(91)] = 1003,
  [SMALL_STATE(92)] = 1016,
  [SMALL_STATE(93)] = 1029,
  [SMALL_STATE(94)] = 1042,
  [SMALL_STATE(95)] = 1055,
  [SMALL_STATE(96)] = 1068,
  [SMALL_STATE(97)] = 1081,
  [SMALL_STATE(98)] = 1094,
  [SMALL_STATE(99)] = 1107,
  [SMALL_STATE(100)] = 1120,
  [SMALL_STATE(101)] = 1133,
  [SMALL_STATE(102)] = 1146,
  [SMALL_STATE(103)] = 1159,
  [SMALL_STATE(104)] = 1172,
  [SMALL_STATE(105)] = 1185,
  [SMALL_STATE(106)] = 1198,
  [SMALL_STATE(107)] = 1211,
  [SMALL_STATE(108)] = 1224,
  [SMALL_STATE(109)] = 1237,
  [SMALL_STATE(110)] = 1250,
  [SMALL_STATE(111)] = 1263,
  [SMALL_STATE(112)] = 1276,
  [SMALL_STATE(113)] = 1289,
  [SMALL_STATE(114)] = 1300,
  [SMALL_STATE(115)] = 1311,
  [SMALL_STATE(116)] = 1322,
  [SMALL_STATE(117)] = 1333,
  [SMALL_STATE(118)] = 1344,
  [SMALL_STATE(119)] = 1355,
  [SMALL_STATE(120)] = 1365,
  [SMALL_STATE(121)] = 1375,
  [SMALL_STATE(122)] = 1385,
  [SMALL_STATE(123)] = 1395,
  [SMALL_STATE(124)] = 1405,
  [SMALL_STATE(125)] = 1415,
  [SMALL_STATE(126)] = 1425,
  [SMALL_STATE(127)] = 1435,
  [SMALL_STATE(128)] = 1445,
  [SMALL_STATE(129)] = 1455,
  [SMALL_STATE(130)] = 1465,
  [SMALL_STATE(131)] = 1475,
  [SMALL_STATE(132)] = 1485,
  [SMALL_STATE(133)] = 1495,
  [SMALL_STATE(134)] = 1505,
  [SMALL_STATE(135)] = 1515,
  [SMALL_STATE(136)] = 1525,
  [SMALL_STATE(137)] = 1533,
  [SMALL_STATE(138)] = 1541,
  [SMALL_STATE(139)] = 1551,
  [SMALL_STATE(140)] = 1561,
  [SMALL_STATE(141)] = 1571,
  [SMALL_STATE(142)] = 1581,
  [SMALL_STATE(143)] = 1591,
  [SMALL_STATE(144)] = 1601,
  [SMALL_STATE(145)] = 1608,
  [SMALL_STATE(146)] = 1615,
  [SMALL_STATE(147)] = 1622,
  [SMALL_STATE(148)] = 1629,
  [SMALL_STATE(149)] = 1636,
  [SMALL_STATE(150)] = 1643,
  [SMALL_STATE(151)] = 1650,
  [SMALL_STATE(152)] = 1657,
  [SMALL_STATE(153)] = 1664,
  [SMALL_STATE(154)] = 1671,
  [SMALL_STATE(155)] = 1678,
  [SMALL_STATE(156)] = 1685,
  [SMALL_STATE(157)] = 1692,
  [SMALL_STATE(158)] = 1699,
  [SMALL_STATE(159)] = 1706,
  [SMALL_STATE(160)] = 1713,
  [SMALL_STATE(161)] = 1720,
  [SMALL_STATE(162)] = 1727,
  [SMALL_STATE(163)] = 1734,
  [SMALL_STATE(164)] = 1741,
  [SMALL_STATE(165)] = 1748,
  [SMALL_STATE(166)] = 1755,
  [SMALL_STATE(167)] = 1762,
  [SMALL_STATE(168)] = 1769,
  [SMALL_STATE(169)] = 1776,
  [SMALL_STATE(170)] = 1783,
  [SMALL_STATE(171)] = 1790,
  [SMALL_STATE(172)] = 1797,
  [SMALL_STATE(173)] = 1804,
  [SMALL_STATE(174)] = 1811,
  [SMALL_STATE(175)] = 1818,
  [SMALL_STATE(176)] = 1825,
  [SMALL_STATE(177)] = 1832,
  [SMALL_STATE(178)] = 1839,
  [SMALL_STATE(179)] = 1846,
  [SMALL_STATE(180)] = 1853,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(120),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(135),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(121),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(121),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(122),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(122),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(25),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(71),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(123),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(123),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(10),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(5),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(169),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(125),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(165),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(164),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(127),
  [136] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(159),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(158),
  [142] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(124),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_symbol_repeat1, 1),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 3),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 4),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 2),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hash, 6),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namedTupleLiteral, 6, .production_id = 3),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hash, 6, .production_id = 3),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 3),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 3),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commandLiteral, 3),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3, .production_id = 1),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 4),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 4),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hash, 5, .production_id = 2),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namedTupleLiteral, 5, .production_id = 2),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 1),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 1),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 1),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [297] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_symbol_repeat1, 2), SHIFT_REPEAT(73),
  [300] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(14),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [333] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(19),
  [336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [342] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [344] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [350] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [352] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [354] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [358] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [364] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [366] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [370] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hash_repeat1, 2, .production_id = 4), SHIFT_REPEAT(18),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_hash_repeat1, 2, .production_id = 4),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [379] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_namedTupleLiteral_repeat1, 2, .production_id = 4), SHIFT_REPEAT(51),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_namedTupleLiteral_repeat1, 2, .production_id = 4),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [390] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [392] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [396] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [398] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [400] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [402] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [404] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [406] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [408] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namedTupleLiteral, 5, .production_id = 2),
  [412] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 1),
  [418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1),
  [420] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char, 1),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [426] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 1),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 3),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_variable, 1),
  [434] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 2),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance_variable, 2),
  [440] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 3),
  [442] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex, 3),
  [444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commandLiteral, 3),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_variable, 2),
  [450] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 3, .production_id = 1),
  [452] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool, 1),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_namedTupleLiteral_repeat1, 4, .production_id = 2),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_hash_repeat1, 4, .production_id = 2),
  [458] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namedTupleLiteral, 6, .production_id = 3),
  [460] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 4),
  [462] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hash, 5, .production_id = 2),
  [464] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hash, 6, .production_id = 3),
  [466] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 4),
  [468] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hash, 6),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [474] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [480] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_variable, 3),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance_variable, 3),
  [488] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [492] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [498] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [500] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [502] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [506] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [508] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [516] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_variable, 2),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 2),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [532] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
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

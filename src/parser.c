#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 328
#define LARGE_STATE_COUNT 55
#define SYMBOL_COUNT 116
#define ALIAS_COUNT 0
#define TOKEN_COUNT 86
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 8
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 10

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
  anon_sym_class = 58,
  anon_sym_LPAREN = 59,
  anon_sym_LT = 60,
  anon_sym_end = 61,
  anon_sym_PLUS = 62,
  anon_sym_DASH = 63,
  anon_sym_STAR = 64,
  anon_sym_PERCENT = 65,
  anon_sym_AMP = 66,
  anon_sym_PIPE = 67,
  anon_sym_CARET = 68,
  anon_sym_STAR_STAR = 69,
  anon_sym_GT_GT = 70,
  anon_sym_LT_LT = 71,
  anon_sym_EQ_EQ = 72,
  anon_sym_BANG_EQ = 73,
  anon_sym_LT_EQ = 74,
  anon_sym_GT = 75,
  anon_sym_GT_EQ = 76,
  anon_sym_LT_EQ_GT = 77,
  anon_sym_EQ_EQ_EQ = 78,
  anon_sym_LBRACK_RBRACK = 79,
  anon_sym_LBRACK_RBRACK_QMARK = 80,
  anon_sym_LBRACK_RBRACK_EQ = 81,
  anon_sym_BANG = 82,
  anon_sym_TILDE = 83,
  anon_sym_BANG_TILDE = 84,
  anon_sym_EQ_TILDE = 85,
  sym_program = 86,
  sym__statement = 87,
  sym__expression = 88,
  sym_identifier = 89,
  sym_bool = 90,
  sym_float = 91,
  sym_integer = 92,
  sym_symbol = 93,
  sym_char = 94,
  sym_string = 95,
  sym_array = 96,
  sym_hash = 97,
  sym_index_expression = 98,
  sym_regex = 99,
  sym_tuple = 100,
  sym_namedTupleLiteral = 101,
  sym_commandLiteral = 102,
  sym_local_variable = 103,
  sym_instance_variable = 104,
  sym_class_variable = 105,
  sym_constant = 106,
  sym__variable = 107,
  sym_assignment = 108,
  sym_class_definition = 109,
  sym__operator = 110,
  aux_sym_program_repeat1 = 111,
  aux_sym_symbol_repeat1 = 112,
  aux_sym_array_repeat1 = 113,
  aux_sym_hash_repeat1 = 114,
  aux_sym_namedTupleLiteral_repeat1 = 115,
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
  [anon_sym_class] = "class",
  [anon_sym_LPAREN] = "(",
  [anon_sym_LT] = "<",
  [anon_sym_end] = "end",
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
  [sym_class_definition] = "class_definition",
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
  [anon_sym_class] = anon_sym_class,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_end] = anon_sym_end,
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
  [sym_class_definition] = sym_class_definition,
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
  [anon_sym_class] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_end] = {
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
  [sym_class_definition] = {
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
  field_generic_param = 1,
  field_key = 2,
  field_lhs = 3,
  field_name = 4,
  field_rhs = 5,
  field_superclass = 6,
  field_target = 7,
  field_value = 8,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_generic_param] = "generic_param",
  [field_key] = "key",
  [field_lhs] = "lhs",
  [field_name] = "name",
  [field_rhs] = "rhs",
  [field_superclass] = "superclass",
  [field_target] = "target",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 2},
  [5] = {.index = 7, .length = 2},
  [6] = {.index = 9, .length = 4},
  [7] = {.index = 13, .length = 4},
  [8] = {.index = 17, .length = 2},
  [9] = {.index = 19, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_lhs, 0},
    {field_rhs, 2},
  [3] =
    {field_key, 2},
    {field_target, 0},
  [5] =
    {field_key, 1},
    {field_value, 3},
  [7] =
    {field_name, 1},
    {field_superclass, 3},
  [9] =
    {field_key, 1},
    {field_key, 4, .inherited = true},
    {field_value, 3},
    {field_value, 4, .inherited = true},
  [13] =
    {field_key, 0, .inherited = true},
    {field_key, 1, .inherited = true},
    {field_value, 0, .inherited = true},
    {field_value, 1, .inherited = true},
  [17] =
    {field_generic_param, 3},
    {field_name, 1},
  [19] =
    {field_generic_param, 3},
    {field_name, 1},
    {field_superclass, 6},
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
      if (eof) ADVANCE(127);
      if (lookahead == '!') ADVANCE(307);
      if (lookahead == '"') ADVANCE(199);
      if (lookahead == '#') ADVANCE(124);
      if (lookahead == '%') ADVANCE(290);
      if (lookahead == '&') ADVANCE(291);
      if (lookahead == '\'') ADVANCE(25);
      if (lookahead == '(') ADVANCE(279);
      if (lookahead == ')') ADVANCE(253);
      if (lookahead == '*') ADVANCE(288);
      if (lookahead == '+') ADVANCE(285);
      if (lookahead == ',') ADVANCE(227);
      if (lookahead == '-') ADVANCE(287);
      if (lookahead == '/') ADVANCE(238);
      if (lookahead == '0') ADVANCE(40);
      if (lookahead == ':') ADVANCE(198);
      if (lookahead == ';') ADVANCE(128);
      if (lookahead == '<') ADVANCE(281);
      if (lookahead == '=') ADVANCE(275);
      if (lookahead == '>') ADVANCE(300);
      if (lookahead == '@') ADVANCE(262);
      if (lookahead == 'T') ADVANCE(175);
      if (lookahead == '[') ADVANCE(236);
      if (lookahead == ']') ADVANCE(237);
      if (lookahead == '^') ADVANCE(293);
      if (lookahead == '_') ADVANCE(148);
      if (lookahead == '`') ADVANCE(245);
      if (lookahead == 'c') ADVANCE(166);
      if (lookahead == 'e') ADVANCE(169);
      if (lookahead == 'f') ADVANCE(159);
      if (lookahead == 'n') ADVANCE(164);
      if (lookahead == 't') ADVANCE(171);
      if (lookahead == '{') ADVANCE(229);
      if (lookahead == '|') ADVANCE(292);
      if (lookahead == '}') ADVANCE(231);
      if (lookahead == '~') ADVANCE(308);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(125)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(197);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(177);
      if (lookahead != 0 &&
          lookahead > 159) ADVANCE(177);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(129);
      if (lookahead == '#') ADVANCE(124);
      if (lookahead == ';') ADVANCE(128);
      if (lookahead == '=') ADVANCE(274);
      if (lookahead == '[') ADVANCE(235);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (lookahead != 0 &&
          lookahead > '@' &&
          (lookahead < '\\' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(177);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(129);
      if (lookahead == '#') ADVANCE(124);
      if (lookahead == ';') ADVANCE(128);
      if (lookahead == '=') ADVANCE(274);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (lookahead != 0 &&
          lookahead > '@' &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(177);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(130);
      if (lookahead == '"') ADVANCE(199);
      if (lookahead == '#') ADVANCE(210);
      if (lookahead == ';') ADVANCE(128);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(201);
      if (lookahead != 0) ADVANCE(200);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(307);
      if (lookahead == '"') ADVANCE(199);
      if (lookahead == '#') ADVANCE(124);
      if (lookahead == '%') ADVANCE(289);
      if (lookahead == '&') ADVANCE(291);
      if (lookahead == '*') ADVANCE(288);
      if (lookahead == '+') ADVANCE(284);
      if (lookahead == '-') ADVANCE(286);
      if (lookahead == '/') ADVANCE(238);
      if (lookahead == '<') ADVANCE(281);
      if (lookahead == '=') ADVANCE(69);
      if (lookahead == '>') ADVANCE(300);
      if (lookahead == '[') ADVANCE(85);
      if (lookahead == '^') ADVANCE(293);
      if (lookahead == '|') ADVANCE(292);
      if (lookahead == '~') ADVANCE(308);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (lookahead != 0 &&
          lookahead > '@' &&
          lookahead != '\\' &&
          lookahead != ']' &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(177);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(199);
      if (lookahead == '#') ADVANCE(124);
      if (lookahead == '%') ADVANCE(113);
      if (lookahead == '\'') ADVANCE(25);
      if (lookahead == '(') ADVANCE(279);
      if (lookahead == '/') ADVANCE(238);
      if (lookahead == '0') ADVANCE(40);
      if (lookahead == ':') ADVANCE(198);
      if (lookahead == '<') ADVANCE(280);
      if (lookahead == '=') ADVANCE(274);
      if (lookahead == '@') ADVANCE(262);
      if (lookahead == 'T') ADVANCE(273);
      if (lookahead == '[') ADVANCE(225);
      if (lookahead == ']') ADVANCE(237);
      if (lookahead == '_') ADVANCE(256);
      if (lookahead == '`') ADVANCE(245);
      if (lookahead == 'c') ADVANCE(259);
      if (lookahead == 'e') ADVANCE(260);
      if (lookahead == 'f') ADVANCE(257);
      if (lookahead == 'n') ADVANCE(258);
      if (lookahead == 't') ADVANCE(261);
      if (lookahead == '{') ADVANCE(229);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(197);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(272);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(199);
      if (lookahead == '#') ADVANCE(124);
      if (lookahead == '%') ADVANCE(113);
      if (lookahead == '\'') ADVANCE(25);
      if (lookahead == '(') ADVANCE(279);
      if (lookahead == '/') ADVANCE(238);
      if (lookahead == '0') ADVANCE(40);
      if (lookahead == ':') ADVANCE(198);
      if (lookahead == '<') ADVANCE(280);
      if (lookahead == '=') ADVANCE(274);
      if (lookahead == '@') ADVANCE(262);
      if (lookahead == 'T') ADVANCE(273);
      if (lookahead == '[') ADVANCE(225);
      if (lookahead == '_') ADVANCE(256);
      if (lookahead == '`') ADVANCE(245);
      if (lookahead == 'c') ADVANCE(259);
      if (lookahead == 'e') ADVANCE(260);
      if (lookahead == 'f') ADVANCE(257);
      if (lookahead == 'n') ADVANCE(258);
      if (lookahead == 't') ADVANCE(261);
      if (lookahead == '{') ADVANCE(229);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(197);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(272);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(199);
      if (lookahead == '#') ADVANCE(124);
      if (lookahead == '%') ADVANCE(113);
      if (lookahead == '\'') ADVANCE(25);
      if (lookahead == '(') ADVANCE(279);
      if (lookahead == '/') ADVANCE(238);
      if (lookahead == '0') ADVANCE(40);
      if (lookahead == ':') ADVANCE(198);
      if (lookahead == '<') ADVANCE(280);
      if (lookahead == '@') ADVANCE(262);
      if (lookahead == 'T') ADVANCE(175);
      if (lookahead == '[') ADVANCE(225);
      if (lookahead == '_') ADVANCE(148);
      if (lookahead == '`') ADVANCE(245);
      if (lookahead == 'c') ADVANCE(166);
      if (lookahead == 'e') ADVANCE(169);
      if (lookahead == 'f') ADVANCE(159);
      if (lookahead == 'n') ADVANCE(164);
      if (lookahead == 't') ADVANCE(171);
      if (lookahead == '{') ADVANCE(229);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(197);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(177);
      if (lookahead != 0 &&
          lookahead > 159) ADVANCE(177);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(199);
      if (lookahead == '#') ADVANCE(124);
      if (lookahead == '%') ADVANCE(113);
      if (lookahead == '\'') ADVANCE(25);
      if (lookahead == '/') ADVANCE(238);
      if (lookahead == '0') ADVANCE(40);
      if (lookahead == ':') ADVANCE(198);
      if (lookahead == '@') ADVANCE(262);
      if (lookahead == 'T') ADVANCE(175);
      if (lookahead == '[') ADVANCE(225);
      if (lookahead == '_') ADVANCE(148);
      if (lookahead == '`') ADVANCE(245);
      if (lookahead == 'c') ADVANCE(166);
      if (lookahead == 'f') ADVANCE(159);
      if (lookahead == 'n') ADVANCE(164);
      if (lookahead == 't') ADVANCE(171);
      if (lookahead == '{') ADVANCE(229);
      if (lookahead == '}') ADVANCE(231);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(197);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(177);
      if (lookahead != 0 &&
          lookahead > 159) ADVANCE(177);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(199);
      if (lookahead == '#') ADVANCE(210);
      if (lookahead == ',') ADVANCE(227);
      if (lookahead == ':') ADVANCE(198);
      if (lookahead == '=') ADVANCE(209);
      if (lookahead == '}') ADVANCE(231);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(202);
      if (lookahead != 0) ADVANCE(200);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(199);
      if (lookahead == '#') ADVANCE(210);
      if (lookahead == ',') ADVANCE(227);
      if (lookahead == '=') ADVANCE(209);
      if (lookahead == '}') ADVANCE(231);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(203);
      if (lookahead != 0) ADVANCE(200);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(199);
      if (lookahead == '#') ADVANCE(210);
      if (lookahead == ',') ADVANCE(227);
      if (lookahead == ']') ADVANCE(228);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(204);
      if (lookahead != 0) ADVANCE(200);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(199);
      if (lookahead == '#') ADVANCE(210);
      if (lookahead == ',') ADVANCE(227);
      if (lookahead == '}') ADVANCE(231);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(205);
      if (lookahead != 0) ADVANCE(200);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(199);
      if (lookahead == '#') ADVANCE(210);
      if (lookahead == ':') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(206);
      if (lookahead != 0) ADVANCE(200);
      END_STATE();
    case 14:
      if (lookahead == '"') ADVANCE(199);
      if (lookahead == '#') ADVANCE(210);
      if (lookahead == '=') ADVANCE(209);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(207);
      if (lookahead != 0) ADVANCE(200);
      END_STATE();
    case 15:
      if (lookahead == '"') ADVANCE(199);
      if (lookahead == '#') ADVANCE(210);
      if (lookahead == ']') ADVANCE(237);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(208);
      if (lookahead != 0) ADVANCE(200);
      END_STATE();
    case 16:
      if (lookahead == '"') ADVANCE(199);
      if (lookahead == '#') ADVANCE(210);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(208);
      if (lookahead != 0) ADVANCE(200);
      END_STATE();
    case 17:
      if (lookahead == '#') ADVANCE(124);
      if (lookahead == ')') ADVANCE(253);
      if (lookahead == ',') ADVANCE(227);
      if (lookahead == '=') ADVANCE(276);
      if (lookahead == '[') ADVANCE(235);
      if (lookahead == ']') ADVANCE(228);
      if (lookahead == '}') ADVANCE(231);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (lookahead != 0 &&
          lookahead > '@' &&
          (lookahead < '\\' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(177);
      END_STATE();
    case 18:
      if (lookahead == '#') ADVANCE(124);
      if (lookahead == ')') ADVANCE(253);
      if (lookahead == ',') ADVANCE(227);
      if (lookahead == '=') ADVANCE(276);
      if (lookahead == ']') ADVANCE(228);
      if (lookahead == '}') ADVANCE(231);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (lookahead != 0 &&
          lookahead > '@' &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(177);
      END_STATE();
    case 19:
      if (lookahead == '#') ADVANCE(124);
      if (lookahead == '=') ADVANCE(274);
      if (lookahead == '[') ADVANCE(235);
      if (lookahead == ']') ADVANCE(237);
      if (lookahead == '_') ADVANCE(86);
      if (lookahead == 'o') ADVANCE(102);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(272);
      END_STATE();
    case 20:
      if (lookahead == '#') ADVANCE(124);
      if (lookahead == '=') ADVANCE(274);
      if (lookahead == '[') ADVANCE(235);
      if (lookahead == ']') ADVANCE(237);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (lookahead != 0 &&
          lookahead > '@' &&
          (lookahead < '\\' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(177);
      END_STATE();
    case 21:
      if (lookahead == '#') ADVANCE(124);
      if (lookahead == '=') ADVANCE(274);
      if (lookahead == '_') ADVANCE(86);
      if (lookahead == 'o') ADVANCE(102);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(272);
      END_STATE();
    case 22:
      if (lookahead == '#') ADVANCE(124);
      if (lookahead == '=') ADVANCE(274);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (lookahead != 0 &&
          lookahead > '@' &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(177);
      END_STATE();
    case 23:
      if (lookahead == '#') ADVANCE(124);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 24:
      if (lookahead == '#') ADVANCE(233);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      if (lookahead != 0) ADVANCE(234);
      END_STATE();
    case 25:
      if (lookahead == '\'') ADVANCE(211);
      if (lookahead == '\\') ADVANCE(26);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 26:
      if (lookahead == '\'') ADVANCE(224);
      if (lookahead == '\\') ADVANCE(28);
      if (lookahead == 'a') ADVANCE(29);
      if (lookahead == 'b') ADVANCE(30);
      if (lookahead == 'e') ADVANCE(31);
      if (lookahead == 'f') ADVANCE(32);
      if (lookahead == 'n') ADVANCE(33);
      if (lookahead == 'r') ADVANCE(34);
      if (lookahead == 't') ADVANCE(35);
      if (lookahead == 'u') ADVANCE(114);
      if (lookahead == 'v') ADVANCE(36);
      END_STATE();
    case 27:
      if (lookahead == '\'') ADVANCE(223);
      END_STATE();
    case 28:
      if (lookahead == '\'') ADVANCE(213);
      END_STATE();
    case 29:
      if (lookahead == '\'') ADVANCE(214);
      END_STATE();
    case 30:
      if (lookahead == '\'') ADVANCE(215);
      END_STATE();
    case 31:
      if (lookahead == '\'') ADVANCE(216);
      END_STATE();
    case 32:
      if (lookahead == '\'') ADVANCE(217);
      END_STATE();
    case 33:
      if (lookahead == '\'') ADVANCE(218);
      END_STATE();
    case 34:
      if (lookahead == '\'') ADVANCE(219);
      END_STATE();
    case 35:
      if (lookahead == '\'') ADVANCE(220);
      END_STATE();
    case 36:
      if (lookahead == '\'') ADVANCE(221);
      END_STATE();
    case 37:
      if (lookahead == '\'') ADVANCE(222);
      END_STATE();
    case 38:
      if (lookahead == '\'') ADVANCE(222);
      if (lookahead == '}') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(38);
      END_STATE();
    case 39:
      if (lookahead == '(') ADVANCE(249);
      END_STATE();
    case 40:
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'b') ADVANCE(117);
      if (lookahead == 'e') ADVANCE(115);
      if (lookahead == 'f') ADVANCE(55);
      if (lookahead == 'o') ADVANCE(118);
      if (lookahead == 'x') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(41);
      END_STATE();
    case 41:
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'e') ADVANCE(115);
      if (lookahead == 'f') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(41);
      END_STATE();
    case 42:
      if (lookahead == '.') ADVANCE(106);
      END_STATE();
    case 43:
      if (lookahead == '0') ADVANCE(40);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(197);
      END_STATE();
    case 44:
      if (lookahead == '1') ADVANCE(65);
      if (lookahead == '3') ADVANCE(48);
      if (lookahead == '6') ADVANCE(58);
      if (lookahead == '8') ADVANCE(196);
      END_STATE();
    case 45:
      if (lookahead == '1') ADVANCE(66);
      if (lookahead == '3') ADVANCE(50);
      if (lookahead == '6') ADVANCE(60);
      if (lookahead == '8') ADVANCE(190);
      END_STATE();
    case 46:
      if (lookahead == '1') ADVANCE(67);
      if (lookahead == '3') ADVANCE(51);
      if (lookahead == '6') ADVANCE(61);
      if (lookahead == '8') ADVANCE(192);
      END_STATE();
    case 47:
      if (lookahead == '1') ADVANCE(68);
      if (lookahead == '3') ADVANCE(52);
      if (lookahead == '6') ADVANCE(62);
      if (lookahead == '8') ADVANCE(194);
      END_STATE();
    case 48:
      if (lookahead == '2') ADVANCE(196);
      END_STATE();
    case 49:
      if (lookahead == '2') ADVANCE(189);
      END_STATE();
    case 50:
      if (lookahead == '2') ADVANCE(190);
      END_STATE();
    case 51:
      if (lookahead == '2') ADVANCE(192);
      END_STATE();
    case 52:
      if (lookahead == '2') ADVANCE(194);
      END_STATE();
    case 53:
      if (lookahead == '2') ADVANCE(184);
      END_STATE();
    case 54:
      if (lookahead == '2') ADVANCE(187);
      END_STATE();
    case 55:
      if (lookahead == '3') ADVANCE(49);
      if (lookahead == '6') ADVANCE(59);
      END_STATE();
    case 56:
      if (lookahead == '3') ADVANCE(53);
      if (lookahead == '6') ADVANCE(63);
      END_STATE();
    case 57:
      if (lookahead == '3') ADVANCE(54);
      if (lookahead == '6') ADVANCE(64);
      END_STATE();
    case 58:
      if (lookahead == '4') ADVANCE(196);
      END_STATE();
    case 59:
      if (lookahead == '4') ADVANCE(189);
      END_STATE();
    case 60:
      if (lookahead == '4') ADVANCE(190);
      END_STATE();
    case 61:
      if (lookahead == '4') ADVANCE(192);
      END_STATE();
    case 62:
      if (lookahead == '4') ADVANCE(194);
      END_STATE();
    case 63:
      if (lookahead == '4') ADVANCE(184);
      END_STATE();
    case 64:
      if (lookahead == '4') ADVANCE(187);
      END_STATE();
    case 65:
      if (lookahead == '6') ADVANCE(196);
      END_STATE();
    case 66:
      if (lookahead == '6') ADVANCE(190);
      END_STATE();
    case 67:
      if (lookahead == '6') ADVANCE(192);
      END_STATE();
    case 68:
      if (lookahead == '6') ADVANCE(194);
      END_STATE();
    case 69:
      if (lookahead == '=') ADVANCE(297);
      if (lookahead == '~') ADVANCE(310);
      END_STATE();
    case 70:
      if (lookahead == 'D') ADVANCE(75);
      if (lookahead == 'E') ADVANCE(81);
      if (lookahead == 'F') ADVANCE(76);
      if (lookahead == 'L') ADVANCE(77);
      END_STATE();
    case 71:
      if (lookahead == 'D') ADVANCE(91);
      END_STATE();
    case 72:
      if (lookahead == 'E') ADVANCE(93);
      END_STATE();
    case 73:
      if (lookahead == 'E') ADVANCE(94);
      END_STATE();
    case 74:
      if (lookahead == 'E') ADVANCE(95);
      END_STATE();
    case 75:
      if (lookahead == 'I') ADVANCE(84);
      END_STATE();
    case 76:
      if (lookahead == 'I') ADVANCE(79);
      END_STATE();
    case 77:
      if (lookahead == 'I') ADVANCE(82);
      END_STATE();
    case 78:
      if (lookahead == 'I') ADVANCE(83);
      END_STATE();
    case 79:
      if (lookahead == 'L') ADVANCE(72);
      END_STATE();
    case 80:
      if (lookahead == 'L') ADVANCE(78);
      END_STATE();
    case 81:
      if (lookahead == 'N') ADVANCE(71);
      END_STATE();
    case 82:
      if (lookahead == 'N') ADVANCE(73);
      END_STATE();
    case 83:
      if (lookahead == 'N') ADVANCE(74);
      END_STATE();
    case 84:
      if (lookahead == 'R') ADVANCE(92);
      END_STATE();
    case 85:
      if (lookahead == ']') ADVANCE(304);
      END_STATE();
    case 86:
      if (lookahead == '_') ADVANCE(70);
      END_STATE();
    case 87:
      if (lookahead == '_') ADVANCE(270);
      END_STATE();
    case 88:
      if (lookahead == '_') ADVANCE(268);
      END_STATE();
    case 89:
      if (lookahead == '_') ADVANCE(264);
      END_STATE();
    case 90:
      if (lookahead == '_') ADVANCE(266);
      END_STATE();
    case 91:
      if (lookahead == '_') ADVANCE(80);
      END_STATE();
    case 92:
      if (lookahead == '_') ADVANCE(87);
      END_STATE();
    case 93:
      if (lookahead == '_') ADVANCE(88);
      END_STATE();
    case 94:
      if (lookahead == '_') ADVANCE(89);
      END_STATE();
    case 95:
      if (lookahead == '_') ADVANCE(90);
      END_STATE();
    case 96:
      if (lookahead == 'a') ADVANCE(109);
      END_STATE();
    case 97:
      if (lookahead == 'd') ADVANCE(282);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(180);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(182);
      END_STATE();
    case 102:
      if (lookahead == 'f') ADVANCE(232);
      END_STATE();
    case 103:
      if (lookahead == 'l') ADVANCE(178);
      END_STATE();
    case 104:
      if (lookahead == 'l') ADVANCE(110);
      END_STATE();
    case 105:
      if (lookahead == 'l') ADVANCE(100);
      END_STATE();
    case 106:
      if (lookahead == 'n') ADVANCE(98);
      END_STATE();
    case 107:
      if (lookahead == 'p') ADVANCE(105);
      END_STATE();
    case 108:
      if (lookahead == 's') ADVANCE(277);
      END_STATE();
    case 109:
      if (lookahead == 's') ADVANCE(108);
      END_STATE();
    case 110:
      if (lookahead == 's') ADVANCE(101);
      END_STATE();
    case 111:
      if (lookahead == 'u') ADVANCE(99);
      END_STATE();
    case 112:
      if (lookahead == 'w') ADVANCE(244);
      END_STATE();
    case 113:
      if (lookahead == 'x') ADVANCE(39);
      END_STATE();
    case 114:
      if (lookahead == '{') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(38);
      END_STATE();
    case 115:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(188);
      END_STATE();
    case 116:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      END_STATE();
    case 117:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(191);
      END_STATE();
    case 118:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(193);
      END_STATE();
    case 119:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(188);
      END_STATE();
    case 120:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      END_STATE();
    case 121:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(185);
      END_STATE();
    case 122:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(195);
      END_STATE();
    case 123:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(38);
      END_STATE();
    case 124:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(254);
      END_STATE();
    case 125:
      if (eof) ADVANCE(127);
      if (lookahead == '!') ADVANCE(307);
      if (lookahead == '"') ADVANCE(199);
      if (lookahead == '#') ADVANCE(124);
      if (lookahead == '%') ADVANCE(290);
      if (lookahead == '&') ADVANCE(291);
      if (lookahead == '\'') ADVANCE(25);
      if (lookahead == '(') ADVANCE(279);
      if (lookahead == ')') ADVANCE(253);
      if (lookahead == '*') ADVANCE(288);
      if (lookahead == '+') ADVANCE(285);
      if (lookahead == ',') ADVANCE(227);
      if (lookahead == '-') ADVANCE(287);
      if (lookahead == '/') ADVANCE(238);
      if (lookahead == '0') ADVANCE(40);
      if (lookahead == ':') ADVANCE(198);
      if (lookahead == ';') ADVANCE(128);
      if (lookahead == '<') ADVANCE(281);
      if (lookahead == '=') ADVANCE(275);
      if (lookahead == '>') ADVANCE(300);
      if (lookahead == '@') ADVANCE(262);
      if (lookahead == 'T') ADVANCE(175);
      if (lookahead == '[') ADVANCE(226);
      if (lookahead == ']') ADVANCE(228);
      if (lookahead == '^') ADVANCE(293);
      if (lookahead == '_') ADVANCE(148);
      if (lookahead == '`') ADVANCE(245);
      if (lookahead == 'c') ADVANCE(166);
      if (lookahead == 'e') ADVANCE(169);
      if (lookahead == 'f') ADVANCE(159);
      if (lookahead == 'n') ADVANCE(164);
      if (lookahead == 't') ADVANCE(171);
      if (lookahead == '{') ADVANCE(229);
      if (lookahead == '|') ADVANCE(292);
      if (lookahead == '}') ADVANCE(231);
      if (lookahead == '~') ADVANCE(308);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(125)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(197);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(177);
      if (lookahead != 0 &&
          lookahead > 159) ADVANCE(177);
      END_STATE();
    case 126:
      if (eof) ADVANCE(127);
      if (lookahead == '"') ADVANCE(199);
      if (lookahead == '#') ADVANCE(124);
      if (lookahead == '%') ADVANCE(113);
      if (lookahead == '\'') ADVANCE(25);
      if (lookahead == ',') ADVANCE(227);
      if (lookahead == '/') ADVANCE(238);
      if (lookahead == '0') ADVANCE(40);
      if (lookahead == ':') ADVANCE(198);
      if (lookahead == '=') ADVANCE(276);
      if (lookahead == '@') ADVANCE(262);
      if (lookahead == 'T') ADVANCE(273);
      if (lookahead == '[') ADVANCE(225);
      if (lookahead == ']') ADVANCE(228);
      if (lookahead == '_') ADVANCE(256);
      if (lookahead == '`') ADVANCE(245);
      if (lookahead == 'c') ADVANCE(259);
      if (lookahead == 'f') ADVANCE(257);
      if (lookahead == 'n') ADVANCE(258);
      if (lookahead == 't') ADVANCE(261);
      if (lookahead == '{') ADVANCE(229);
      if (lookahead == '}') ADVANCE(231);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(126)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(197);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(272);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym__statement_token1);
      if (lookahead == '\n') ADVANCE(129);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym__statement_token1);
      if (lookahead == '\n') ADVANCE(130);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(201);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(106);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(131);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(177);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'D') ADVANCE(138);
      if (lookahead == 'E') ADVANCE(144);
      if (lookahead == 'F') ADVANCE(139);
      if (lookahead == 'L') ADVANCE(140);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(131);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(177);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'D') ADVANCE(153);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(131);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(177);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'E') ADVANCE(155);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(131);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(177);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'E') ADVANCE(156);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(131);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(177);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'E') ADVANCE(157);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(131);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(177);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'I') ADVANCE(147);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(131);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(177);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'I') ADVANCE(142);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(131);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(177);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'I') ADVANCE(145);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(131);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(177);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'I') ADVANCE(146);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(131);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(177);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'L') ADVANCE(135);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(131);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(177);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'L') ADVANCE(141);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(131);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(177);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'N') ADVANCE(134);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(131);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(177);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'N') ADVANCE(136);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(131);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(177);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'N') ADVANCE(137);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(131);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(177);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'R') ADVANCE(154);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(131);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(177);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '_') ADVANCE(133);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(131);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(177);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '_') ADVANCE(271);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(131);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(177);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '_') ADVANCE(269);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(131);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(177);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '_') ADVANCE(265);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(131);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(177);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '_') ADVANCE(267);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(131);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(177);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '_') ADVANCE(143);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(131);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(177);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '_') ADVANCE(149);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(131);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(177);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '_') ADVANCE(150);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(131);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(177);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '_') ADVANCE(151);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(131);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(177);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '_') ADVANCE(152);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(131);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(177);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(173);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(131);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(177);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(167);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(131);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(177);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'd') ADVANCE(283);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(131);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(177);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(181);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(131);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(177);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(132);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(131);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(177);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(183);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(131);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(177);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(165);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(131);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(177);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(179);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(131);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(177);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(158);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(131);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(177);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(174);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(131);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(177);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(162);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(131);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(177);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(160);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(131);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(177);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'p') ADVANCE(168);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(131);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(177);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(176);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(131);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(177);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 's') ADVANCE(278);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(131);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(177);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 's') ADVANCE(172);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(131);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(177);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 's') ADVANCE(163);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(131);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(177);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'u') ADVANCE(170);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(131);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(177);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'u') ADVANCE(161);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(131);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(177);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(131);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(177);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_nil);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_nil);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(131);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(177);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(131);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(177);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(131);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(177);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_float_token1);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (lookahead == 'e') ADVANCE(116);
      if (lookahead == 'f') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(185);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (lookahead == 'f') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_float_token2);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (lookahead == 'f') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(188);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_float_token3);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == 'i') ADVANCE(45);
      if (lookahead == 'u') ADVANCE(45);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(191);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_integer_token2);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_integer_token2);
      if (lookahead == 'i') ADVANCE(46);
      if (lookahead == 'u') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(193);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_integer_token3);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_integer_token3);
      if (lookahead == 'i') ADVANCE(47);
      if (lookahead == 'u') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(195);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_integer_token4);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_integer_token4);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'e') ADVANCE(115);
      if (lookahead == 'f') ADVANCE(55);
      if (lookahead == 'i') ADVANCE(44);
      if (lookahead == 'u') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(197);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\n') ADVANCE(130);
      if (lookahead == '#') ADVANCE(210);
      if (lookahead == ';') ADVANCE(128);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(200);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(210);
      if (lookahead == ',') ADVANCE(227);
      if (lookahead == ':') ADVANCE(198);
      if (lookahead == '=') ADVANCE(209);
      if (lookahead == '}') ADVANCE(231);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(200);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(210);
      if (lookahead == ',') ADVANCE(227);
      if (lookahead == '=') ADVANCE(209);
      if (lookahead == '}') ADVANCE(231);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(200);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(210);
      if (lookahead == ',') ADVANCE(227);
      if (lookahead == ']') ADVANCE(228);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(200);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(210);
      if (lookahead == ',') ADVANCE(227);
      if (lookahead == '}') ADVANCE(231);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(205);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(200);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(210);
      if (lookahead == ':') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(206);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(200);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(210);
      if (lookahead == '=') ADVANCE(209);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(207);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(200);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(210);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(208);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(200);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '>') ADVANCE(230);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(254);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_SQUOTE_BSLASHa_SQUOTE);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_SQUOTE_BSLASHb_SQUOTE);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_SQUOTE_BSLASHe_SQUOTE);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_SQUOTE_BSLASHf_SQUOTE);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_SQUOTE_BSLASHn_SQUOTE);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_SQUOTE_BSLASHr_SQUOTE);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_SQUOTE_BSLASHt_SQUOTE);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_SQUOTE_BSLASHv_SQUOTE);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_char_token1);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_char_token2);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_char_token2);
      if (lookahead == '\'') ADVANCE(212);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == ']') ADVANCE(304);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_hash_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(233);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_hash_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(234);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_LBRACK2);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_LBRACK2);
      if (lookahead == ']') ADVANCE(304);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_RBRACK2);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_regex_token1);
      if (lookahead == '\n') ADVANCE(242);
      if (lookahead == '/') ADVANCE(254);
      if (lookahead == '\\') ADVANCE(240);
      if (lookahead != 0) ADVANCE(239);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_regex_token1);
      if (lookahead == '\n') ADVANCE(242);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(239);
      if (lookahead == '\\') ADVANCE(240);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_regex_token1);
      if (lookahead == '#') ADVANCE(239);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(242);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_regex_token1);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(242);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_regex_token1);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(242);
      if (lookahead == '\\') ADVANCE(243);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_Tuple_DOTnew);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_commandLiteral_token1);
      if (lookahead == '\n') ADVANCE(248);
      if (lookahead == '`') ADVANCE(254);
      if (lookahead != 0) ADVANCE(246);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_commandLiteral_token1);
      if (lookahead == '#') ADVANCE(246);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(248);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_commandLiteral_token1);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(248);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_PERCENTx_LPAREN);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_commandLiteral_token2);
      if (lookahead == '\n') ADVANCE(252);
      if (lookahead == ')') ADVANCE(254);
      if (lookahead != 0) ADVANCE(250);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_commandLiteral_token2);
      if (lookahead == '#') ADVANCE(250);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(251);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(252);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_commandLiteral_token2);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(252);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(254);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_local_variable_token1);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_local_variable_token1);
      if (lookahead == '_') ADVANCE(70);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_local_variable_token1);
      if (lookahead == 'a') ADVANCE(104);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_local_variable_token1);
      if (lookahead == 'i') ADVANCE(103);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_local_variable_token1);
      if (lookahead == 'l') ADVANCE(96);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_local_variable_token1);
      if (lookahead == 'n') ADVANCE(97);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_local_variable_token1);
      if (lookahead == 'r') ADVANCE(111);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '@') ADVANCE(263);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym___LINE__);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym___LINE__);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(131);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(177);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym___END_LINE__);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym___END_LINE__);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(131);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(177);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym___FILE__);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym___FILE__);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(131);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(177);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym___DIR__);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym___DIR__);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(131);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(177);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == 'u') ADVANCE(107);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(297);
      if (lookahead == '>') ADVANCE(230);
      if (lookahead == '~') ADVANCE(310);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>') ADVANCE(230);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_class);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(131);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(177);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(296);
      if (lookahead == '=') ADVANCE(299);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(131);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(177);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '0') ADVANCE(40);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(197);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '0') ADVANCE(40);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(197);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(294);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == 'x') ADVANCE(39);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      if (lookahead == '=') ADVANCE(303);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      if (lookahead == '>') ADVANCE(302);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(301);
      if (lookahead == '>') ADVANCE(295);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_LT_EQ_GT);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_EQ_EQ_EQ);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_LBRACK_RBRACK);
      if (lookahead == '=') ADVANCE(306);
      if (lookahead == '?') ADVANCE(305);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_LBRACK_RBRACK_QMARK);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_LBRACK_RBRACK_EQ);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(298);
      if (lookahead == '~') ADVANCE(309);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_BANG_TILDE);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_EQ_TILDE);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 126},
  [2] = {.lex_state = 5},
  [3] = {.lex_state = 5},
  [4] = {.lex_state = 5},
  [5] = {.lex_state = 5},
  [6] = {.lex_state = 5},
  [7] = {.lex_state = 5},
  [8] = {.lex_state = 5},
  [9] = {.lex_state = 126},
  [10] = {.lex_state = 5},
  [11] = {.lex_state = 8},
  [12] = {.lex_state = 5},
  [13] = {.lex_state = 5},
  [14] = {.lex_state = 5},
  [15] = {.lex_state = 5},
  [16] = {.lex_state = 5},
  [17] = {.lex_state = 5},
  [18] = {.lex_state = 5},
  [19] = {.lex_state = 5},
  [20] = {.lex_state = 5},
  [21] = {.lex_state = 5},
  [22] = {.lex_state = 5},
  [23] = {.lex_state = 5},
  [24] = {.lex_state = 8},
  [25] = {.lex_state = 126},
  [26] = {.lex_state = 8},
  [27] = {.lex_state = 5},
  [28] = {.lex_state = 5},
  [29] = {.lex_state = 5},
  [30] = {.lex_state = 5},
  [31] = {.lex_state = 5},
  [32] = {.lex_state = 126},
  [33] = {.lex_state = 126},
  [34] = {.lex_state = 126},
  [35] = {.lex_state = 126},
  [36] = {.lex_state = 126},
  [37] = {.lex_state = 126},
  [38] = {.lex_state = 126},
  [39] = {.lex_state = 126},
  [40] = {.lex_state = 126},
  [41] = {.lex_state = 126},
  [42] = {.lex_state = 126},
  [43] = {.lex_state = 126},
  [44] = {.lex_state = 126},
  [45] = {.lex_state = 126},
  [46] = {.lex_state = 126},
  [47] = {.lex_state = 126},
  [48] = {.lex_state = 126},
  [49] = {.lex_state = 126},
  [50] = {.lex_state = 126},
  [51] = {.lex_state = 126},
  [52] = {.lex_state = 126},
  [53] = {.lex_state = 126},
  [54] = {.lex_state = 126},
  [55] = {.lex_state = 7},
  [56] = {.lex_state = 5},
  [57] = {.lex_state = 5},
  [58] = {.lex_state = 5},
  [59] = {.lex_state = 126},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 4},
  [63] = {.lex_state = 4},
  [64] = {.lex_state = 4},
  [65] = {.lex_state = 4},
  [66] = {.lex_state = 17},
  [67] = {.lex_state = 17},
  [68] = {.lex_state = 17},
  [69] = {.lex_state = 19},
  [70] = {.lex_state = 19},
  [71] = {.lex_state = 19},
  [72] = {.lex_state = 17},
  [73] = {.lex_state = 19},
  [74] = {.lex_state = 19},
  [75] = {.lex_state = 19},
  [76] = {.lex_state = 19},
  [77] = {.lex_state = 19},
  [78] = {.lex_state = 19},
  [79] = {.lex_state = 9},
  [80] = {.lex_state = 19},
  [81] = {.lex_state = 19},
  [82] = {.lex_state = 9},
  [83] = {.lex_state = 19},
  [84] = {.lex_state = 10},
  [85] = {.lex_state = 10},
  [86] = {.lex_state = 10},
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 126},
  [89] = {.lex_state = 10},
  [90] = {.lex_state = 20},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 4},
  [94] = {.lex_state = 12},
  [95] = {.lex_state = 12},
  [96] = {.lex_state = 12},
  [97] = {.lex_state = 126},
  [98] = {.lex_state = 126},
  [99] = {.lex_state = 12},
  [100] = {.lex_state = 126},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 126},
  [103] = {.lex_state = 3},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 126},
  [107] = {.lex_state = 126},
  [108] = {.lex_state = 126},
  [109] = {.lex_state = 126},
  [110] = {.lex_state = 126},
  [111] = {.lex_state = 126},
  [112] = {.lex_state = 126},
  [113] = {.lex_state = 126},
  [114] = {.lex_state = 126},
  [115] = {.lex_state = 126},
  [116] = {.lex_state = 126},
  [117] = {.lex_state = 3},
  [118] = {.lex_state = 3},
  [119] = {.lex_state = 126},
  [120] = {.lex_state = 1},
  [121] = {.lex_state = 126},
  [122] = {.lex_state = 11},
  [123] = {.lex_state = 126},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 11},
  [128] = {.lex_state = 11},
  [129] = {.lex_state = 126},
  [130] = {.lex_state = 126},
  [131] = {.lex_state = 126},
  [132] = {.lex_state = 126},
  [133] = {.lex_state = 126},
  [134] = {.lex_state = 126},
  [135] = {.lex_state = 11},
  [136] = {.lex_state = 126},
  [137] = {.lex_state = 126},
  [138] = {.lex_state = 126},
  [139] = {.lex_state = 3},
  [140] = {.lex_state = 1},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 126},
  [143] = {.lex_state = 126},
  [144] = {.lex_state = 16},
  [145] = {.lex_state = 17},
  [146] = {.lex_state = 1},
  [147] = {.lex_state = 16},
  [148] = {.lex_state = 16},
  [149] = {.lex_state = 126},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 17},
  [153] = {.lex_state = 17},
  [154] = {.lex_state = 16},
  [155] = {.lex_state = 16},
  [156] = {.lex_state = 16},
  [157] = {.lex_state = 16},
  [158] = {.lex_state = 16},
  [159] = {.lex_state = 19},
  [160] = {.lex_state = 16},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 16},
  [163] = {.lex_state = 16},
  [164] = {.lex_state = 16},
  [165] = {.lex_state = 16},
  [166] = {.lex_state = 16},
  [167] = {.lex_state = 16},
  [168] = {.lex_state = 16},
  [169] = {.lex_state = 16},
  [170] = {.lex_state = 16},
  [171] = {.lex_state = 16},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 16},
  [174] = {.lex_state = 16},
  [175] = {.lex_state = 126},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 126},
  [183] = {.lex_state = 16},
  [184] = {.lex_state = 126},
  [185] = {.lex_state = 16},
  [186] = {.lex_state = 16},
  [187] = {.lex_state = 16},
  [188] = {.lex_state = 19},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 15},
  [191] = {.lex_state = 19},
  [192] = {.lex_state = 15},
  [193] = {.lex_state = 15},
  [194] = {.lex_state = 15},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 126},
  [198] = {.lex_state = 16},
  [199] = {.lex_state = 126},
  [200] = {.lex_state = 14},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 14},
  [203] = {.lex_state = 14},
  [204] = {.lex_state = 14},
  [205] = {.lex_state = 13},
  [206] = {.lex_state = 13},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 16},
  [209] = {.lex_state = 126},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 16},
  [212] = {.lex_state = 16},
  [213] = {.lex_state = 126},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 1},
  [216] = {.lex_state = 1},
  [217] = {.lex_state = 1},
  [218] = {.lex_state = 126},
  [219] = {.lex_state = 1},
  [220] = {.lex_state = 1},
  [221] = {.lex_state = 1},
  [222] = {.lex_state = 1},
  [223] = {.lex_state = 17},
  [224] = {.lex_state = 1},
  [225] = {.lex_state = 1},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 1},
  [228] = {.lex_state = 17},
  [229] = {.lex_state = 1},
  [230] = {.lex_state = 1},
  [231] = {.lex_state = 17},
  [232] = {.lex_state = 1},
  [233] = {.lex_state = 1},
  [234] = {.lex_state = 17},
  [235] = {.lex_state = 17},
  [236] = {.lex_state = 1},
  [237] = {.lex_state = 17},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 1},
  [240] = {.lex_state = 1},
  [241] = {.lex_state = 1},
  [242] = {.lex_state = 17},
  [243] = {.lex_state = 1},
  [244] = {.lex_state = 1},
  [245] = {.lex_state = 1},
  [246] = {.lex_state = 17},
  [247] = {.lex_state = 1},
  [248] = {.lex_state = 17},
  [249] = {.lex_state = 1},
  [250] = {.lex_state = 5},
  [251] = {.lex_state = 1},
  [252] = {.lex_state = 5},
  [253] = {.lex_state = 1},
  [254] = {.lex_state = 1},
  [255] = {.lex_state = 1},
  [256] = {.lex_state = 1},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 24},
  [260] = {.lex_state = 5},
  [261] = {.lex_state = 5},
  [262] = {.lex_state = 24},
  [263] = {.lex_state = 5},
  [264] = {.lex_state = 5},
  [265] = {.lex_state = 5},
  [266] = {.lex_state = 5},
  [267] = {.lex_state = 5},
  [268] = {.lex_state = 5},
  [269] = {.lex_state = 5},
  [270] = {.lex_state = 5},
  [271] = {.lex_state = 5},
  [272] = {.lex_state = 24},
  [273] = {.lex_state = 5},
  [274] = {.lex_state = 5},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 5},
  [277] = {.lex_state = 5},
  [278] = {.lex_state = 5},
  [279] = {.lex_state = 5},
  [280] = {.lex_state = 241},
  [281] = {.lex_state = 247},
  [282] = {.lex_state = 251},
  [283] = {.lex_state = 5},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 19},
  [289] = {.lex_state = 5},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 5},
  [293] = {.lex_state = 5},
  [294] = {.lex_state = 5},
  [295] = {.lex_state = 5},
  [296] = {.lex_state = 5},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 241},
  [299] = {.lex_state = 247},
  [300] = {.lex_state = 251},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 5},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 23},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 23},
  [309] = {.lex_state = 5},
  [310] = {.lex_state = 251},
  [311] = {.lex_state = 5},
  [312] = {.lex_state = 247},
  [313] = {.lex_state = 5},
  [314] = {.lex_state = 24},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 241},
  [317] = {.lex_state = 24},
  [318] = {.lex_state = 5},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 24},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 19},
  [327] = {.lex_state = 19},
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
    [anon_sym_class] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(1),
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
    [sym_program] = STATE(304),
    [sym__statement] = STATE(25),
    [sym__expression] = STATE(239),
    [sym_bool] = STATE(239),
    [sym_float] = STATE(239),
    [sym_integer] = STATE(239),
    [sym_symbol] = STATE(239),
    [sym_char] = STATE(239),
    [sym_string] = STATE(239),
    [sym_array] = STATE(239),
    [sym_hash] = STATE(239),
    [sym_index_expression] = STATE(146),
    [sym_regex] = STATE(239),
    [sym_tuple] = STATE(239),
    [sym_namedTupleLiteral] = STATE(239),
    [sym_commandLiteral] = STATE(239),
    [sym_local_variable] = STATE(242),
    [sym_instance_variable] = STATE(242),
    [sym_class_variable] = STATE(242),
    [sym_constant] = STATE(92),
    [sym__variable] = STATE(242),
    [sym_assignment] = STATE(239),
    [sym_class_definition] = STATE(239),
    [aux_sym_program_repeat1] = STATE(25),
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
    [anon_sym_class] = ACTIONS(49),
  },
  [2] = {
    [sym__statement] = STATE(8),
    [sym__expression] = STATE(222),
    [sym_bool] = STATE(222),
    [sym_float] = STATE(222),
    [sym_integer] = STATE(222),
    [sym_symbol] = STATE(222),
    [sym_char] = STATE(222),
    [sym_string] = STATE(222),
    [sym_array] = STATE(222),
    [sym_hash] = STATE(222),
    [sym_index_expression] = STATE(146),
    [sym_regex] = STATE(222),
    [sym_tuple] = STATE(222),
    [sym_namedTupleLiteral] = STATE(222),
    [sym_commandLiteral] = STATE(222),
    [sym_local_variable] = STATE(242),
    [sym_instance_variable] = STATE(242),
    [sym_class_variable] = STATE(242),
    [sym_constant] = STATE(92),
    [sym__variable] = STATE(242),
    [sym_assignment] = STATE(222),
    [sym_class_definition] = STATE(222),
    [aux_sym_program_repeat1] = STATE(8),
    [sym_nil] = ACTIONS(51),
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
    [anon_sym_class] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(53),
    [anon_sym_LT] = ACTIONS(55),
    [anon_sym_end] = ACTIONS(57),
  },
  [3] = {
    [sym__statement] = STATE(20),
    [sym__expression] = STATE(222),
    [sym_bool] = STATE(222),
    [sym_float] = STATE(222),
    [sym_integer] = STATE(222),
    [sym_symbol] = STATE(222),
    [sym_char] = STATE(222),
    [sym_string] = STATE(222),
    [sym_array] = STATE(222),
    [sym_hash] = STATE(222),
    [sym_index_expression] = STATE(146),
    [sym_regex] = STATE(222),
    [sym_tuple] = STATE(222),
    [sym_namedTupleLiteral] = STATE(222),
    [sym_commandLiteral] = STATE(222),
    [sym_local_variable] = STATE(242),
    [sym_instance_variable] = STATE(242),
    [sym_class_variable] = STATE(242),
    [sym_constant] = STATE(92),
    [sym__variable] = STATE(242),
    [sym_assignment] = STATE(222),
    [sym_class_definition] = STATE(222),
    [aux_sym_program_repeat1] = STATE(20),
    [sym_nil] = ACTIONS(51),
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
    [anon_sym_class] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(59),
    [anon_sym_LT] = ACTIONS(61),
    [anon_sym_end] = ACTIONS(63),
  },
  [4] = {
    [sym__statement] = STATE(13),
    [sym__expression] = STATE(222),
    [sym_bool] = STATE(222),
    [sym_float] = STATE(222),
    [sym_integer] = STATE(222),
    [sym_symbol] = STATE(222),
    [sym_char] = STATE(222),
    [sym_string] = STATE(222),
    [sym_array] = STATE(222),
    [sym_hash] = STATE(222),
    [sym_index_expression] = STATE(146),
    [sym_regex] = STATE(222),
    [sym_tuple] = STATE(222),
    [sym_namedTupleLiteral] = STATE(222),
    [sym_commandLiteral] = STATE(222),
    [sym_local_variable] = STATE(242),
    [sym_instance_variable] = STATE(242),
    [sym_class_variable] = STATE(242),
    [sym_constant] = STATE(92),
    [sym__variable] = STATE(242),
    [sym_assignment] = STATE(222),
    [sym_class_definition] = STATE(222),
    [aux_sym_program_repeat1] = STATE(13),
    [sym_nil] = ACTIONS(51),
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
    [anon_sym_class] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(65),
    [anon_sym_LT] = ACTIONS(67),
    [anon_sym_end] = ACTIONS(69),
  },
  [5] = {
    [sym__statement] = STATE(23),
    [sym__expression] = STATE(222),
    [sym_bool] = STATE(222),
    [sym_float] = STATE(222),
    [sym_integer] = STATE(222),
    [sym_symbol] = STATE(222),
    [sym_char] = STATE(222),
    [sym_string] = STATE(222),
    [sym_array] = STATE(222),
    [sym_hash] = STATE(222),
    [sym_index_expression] = STATE(146),
    [sym_regex] = STATE(222),
    [sym_tuple] = STATE(222),
    [sym_namedTupleLiteral] = STATE(222),
    [sym_commandLiteral] = STATE(222),
    [sym_local_variable] = STATE(242),
    [sym_instance_variable] = STATE(242),
    [sym_class_variable] = STATE(242),
    [sym_constant] = STATE(92),
    [sym__variable] = STATE(242),
    [sym_assignment] = STATE(222),
    [sym_class_definition] = STATE(222),
    [aux_sym_program_repeat1] = STATE(23),
    [sym_nil] = ACTIONS(51),
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
    [anon_sym_class] = ACTIONS(49),
    [anon_sym_LT] = ACTIONS(71),
    [anon_sym_end] = ACTIONS(73),
  },
  [6] = {
    [sym__statement] = STATE(17),
    [sym__expression] = STATE(222),
    [sym_bool] = STATE(222),
    [sym_float] = STATE(222),
    [sym_integer] = STATE(222),
    [sym_symbol] = STATE(222),
    [sym_char] = STATE(222),
    [sym_string] = STATE(222),
    [sym_array] = STATE(222),
    [sym_hash] = STATE(222),
    [sym_index_expression] = STATE(146),
    [sym_regex] = STATE(222),
    [sym_tuple] = STATE(222),
    [sym_namedTupleLiteral] = STATE(222),
    [sym_commandLiteral] = STATE(222),
    [sym_local_variable] = STATE(242),
    [sym_instance_variable] = STATE(242),
    [sym_class_variable] = STATE(242),
    [sym_constant] = STATE(92),
    [sym__variable] = STATE(242),
    [sym_assignment] = STATE(222),
    [sym_class_definition] = STATE(222),
    [aux_sym_program_repeat1] = STATE(17),
    [sym_nil] = ACTIONS(51),
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
    [anon_sym_class] = ACTIONS(49),
    [anon_sym_LT] = ACTIONS(75),
    [anon_sym_end] = ACTIONS(77),
  },
  [7] = {
    [sym__statement] = STATE(19),
    [sym__expression] = STATE(222),
    [sym_bool] = STATE(222),
    [sym_float] = STATE(222),
    [sym_integer] = STATE(222),
    [sym_symbol] = STATE(222),
    [sym_char] = STATE(222),
    [sym_string] = STATE(222),
    [sym_array] = STATE(222),
    [sym_hash] = STATE(222),
    [sym_index_expression] = STATE(146),
    [sym_regex] = STATE(222),
    [sym_tuple] = STATE(222),
    [sym_namedTupleLiteral] = STATE(222),
    [sym_commandLiteral] = STATE(222),
    [sym_local_variable] = STATE(242),
    [sym_instance_variable] = STATE(242),
    [sym_class_variable] = STATE(242),
    [sym_constant] = STATE(92),
    [sym__variable] = STATE(242),
    [sym_assignment] = STATE(222),
    [sym_class_definition] = STATE(222),
    [aux_sym_program_repeat1] = STATE(19),
    [sym_nil] = ACTIONS(51),
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
    [anon_sym_class] = ACTIONS(49),
    [anon_sym_LT] = ACTIONS(79),
    [anon_sym_end] = ACTIONS(81),
  },
  [8] = {
    [sym__statement] = STATE(22),
    [sym__expression] = STATE(222),
    [sym_bool] = STATE(222),
    [sym_float] = STATE(222),
    [sym_integer] = STATE(222),
    [sym_symbol] = STATE(222),
    [sym_char] = STATE(222),
    [sym_string] = STATE(222),
    [sym_array] = STATE(222),
    [sym_hash] = STATE(222),
    [sym_index_expression] = STATE(146),
    [sym_regex] = STATE(222),
    [sym_tuple] = STATE(222),
    [sym_namedTupleLiteral] = STATE(222),
    [sym_commandLiteral] = STATE(222),
    [sym_local_variable] = STATE(242),
    [sym_instance_variable] = STATE(242),
    [sym_class_variable] = STATE(242),
    [sym_constant] = STATE(92),
    [sym__variable] = STATE(242),
    [sym_assignment] = STATE(222),
    [sym_class_definition] = STATE(222),
    [aux_sym_program_repeat1] = STATE(22),
    [sym_nil] = ACTIONS(51),
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
    [anon_sym_class] = ACTIONS(49),
    [anon_sym_end] = ACTIONS(83),
  },
  [9] = {
    [sym__statement] = STATE(9),
    [sym__expression] = STATE(239),
    [sym_bool] = STATE(239),
    [sym_float] = STATE(239),
    [sym_integer] = STATE(239),
    [sym_symbol] = STATE(239),
    [sym_char] = STATE(239),
    [sym_string] = STATE(239),
    [sym_array] = STATE(239),
    [sym_hash] = STATE(239),
    [sym_index_expression] = STATE(146),
    [sym_regex] = STATE(239),
    [sym_tuple] = STATE(239),
    [sym_namedTupleLiteral] = STATE(239),
    [sym_commandLiteral] = STATE(239),
    [sym_local_variable] = STATE(242),
    [sym_instance_variable] = STATE(242),
    [sym_class_variable] = STATE(242),
    [sym_constant] = STATE(92),
    [sym__variable] = STATE(242),
    [sym_assignment] = STATE(239),
    [sym_class_definition] = STATE(239),
    [aux_sym_program_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(85),
    [sym_nil] = ACTIONS(87),
    [anon_sym_true] = ACTIONS(90),
    [anon_sym_false] = ACTIONS(90),
    [aux_sym_float_token1] = ACTIONS(93),
    [aux_sym_float_token2] = ACTIONS(96),
    [aux_sym_float_token3] = ACTIONS(96),
    [aux_sym_integer_token1] = ACTIONS(99),
    [aux_sym_integer_token2] = ACTIONS(99),
    [aux_sym_integer_token3] = ACTIONS(99),
    [aux_sym_integer_token4] = ACTIONS(102),
    [anon_sym_COLON] = ACTIONS(105),
    [anon_sym_DQUOTE] = ACTIONS(108),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(111),
    [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = ACTIONS(111),
    [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = ACTIONS(111),
    [anon_sym_SQUOTE_BSLASHa_SQUOTE] = ACTIONS(111),
    [anon_sym_SQUOTE_BSLASHb_SQUOTE] = ACTIONS(111),
    [anon_sym_SQUOTE_BSLASHe_SQUOTE] = ACTIONS(111),
    [anon_sym_SQUOTE_BSLASHf_SQUOTE] = ACTIONS(111),
    [anon_sym_SQUOTE_BSLASHn_SQUOTE] = ACTIONS(111),
    [anon_sym_SQUOTE_BSLASHr_SQUOTE] = ACTIONS(111),
    [anon_sym_SQUOTE_BSLASHt_SQUOTE] = ACTIONS(111),
    [anon_sym_SQUOTE_BSLASHv_SQUOTE] = ACTIONS(111),
    [aux_sym_char_token1] = ACTIONS(111),
    [aux_sym_char_token2] = ACTIONS(114),
    [anon_sym_LBRACK] = ACTIONS(117),
    [anon_sym_LBRACE] = ACTIONS(120),
    [anon_sym_SLASH] = ACTIONS(123),
    [anon_sym_Tuple_DOTnew] = ACTIONS(126),
    [anon_sym_BQUOTE] = ACTIONS(129),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(132),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(135),
    [anon_sym_AT] = ACTIONS(138),
    [anon_sym_AT_AT] = ACTIONS(141),
    [anon_sym___LINE__] = ACTIONS(144),
    [anon_sym___END_LINE__] = ACTIONS(144),
    [anon_sym___FILE__] = ACTIONS(144),
    [anon_sym___DIR__] = ACTIONS(144),
    [aux_sym_constant_token1] = ACTIONS(147),
    [anon_sym_class] = ACTIONS(150),
  },
  [10] = {
    [sym__statement] = STATE(22),
    [sym__expression] = STATE(222),
    [sym_bool] = STATE(222),
    [sym_float] = STATE(222),
    [sym_integer] = STATE(222),
    [sym_symbol] = STATE(222),
    [sym_char] = STATE(222),
    [sym_string] = STATE(222),
    [sym_array] = STATE(222),
    [sym_hash] = STATE(222),
    [sym_index_expression] = STATE(146),
    [sym_regex] = STATE(222),
    [sym_tuple] = STATE(222),
    [sym_namedTupleLiteral] = STATE(222),
    [sym_commandLiteral] = STATE(222),
    [sym_local_variable] = STATE(242),
    [sym_instance_variable] = STATE(242),
    [sym_class_variable] = STATE(242),
    [sym_constant] = STATE(92),
    [sym__variable] = STATE(242),
    [sym_assignment] = STATE(222),
    [sym_class_definition] = STATE(222),
    [aux_sym_program_repeat1] = STATE(22),
    [sym_nil] = ACTIONS(51),
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
    [anon_sym_class] = ACTIONS(49),
    [anon_sym_end] = ACTIONS(153),
  },
  [11] = {
    [sym__expression] = STATE(125),
    [sym_identifier] = STATE(287),
    [sym_bool] = STATE(125),
    [sym_float] = STATE(125),
    [sym_integer] = STATE(125),
    [sym_symbol] = STATE(125),
    [sym_char] = STATE(125),
    [sym_string] = STATE(124),
    [sym_array] = STATE(125),
    [sym_hash] = STATE(125),
    [sym_index_expression] = STATE(110),
    [sym_regex] = STATE(125),
    [sym_tuple] = STATE(125),
    [sym_namedTupleLiteral] = STATE(125),
    [sym_commandLiteral] = STATE(125),
    [sym_local_variable] = STATE(246),
    [sym_instance_variable] = STATE(246),
    [sym_class_variable] = STATE(246),
    [sym_constant] = STATE(72),
    [sym__variable] = STATE(246),
    [sym_assignment] = STATE(125),
    [sym_class_definition] = STATE(125),
    [aux_sym_identifier_token1] = ACTIONS(155),
    [sym_nil] = ACTIONS(157),
    [anon_sym_true] = ACTIONS(159),
    [anon_sym_false] = ACTIONS(159),
    [aux_sym_float_token1] = ACTIONS(161),
    [aux_sym_float_token2] = ACTIONS(163),
    [aux_sym_float_token3] = ACTIONS(163),
    [aux_sym_integer_token1] = ACTIONS(165),
    [aux_sym_integer_token2] = ACTIONS(165),
    [aux_sym_integer_token3] = ACTIONS(165),
    [aux_sym_integer_token4] = ACTIONS(167),
    [anon_sym_COLON] = ACTIONS(169),
    [anon_sym_DQUOTE] = ACTIONS(171),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHa_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHb_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHe_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHf_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHn_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHr_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHt_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHv_SQUOTE] = ACTIONS(173),
    [aux_sym_char_token1] = ACTIONS(173),
    [aux_sym_char_token2] = ACTIONS(175),
    [anon_sym_LBRACK] = ACTIONS(177),
    [anon_sym_LBRACE] = ACTIONS(179),
    [anon_sym_RBRACE] = ACTIONS(181),
    [anon_sym_SLASH] = ACTIONS(183),
    [anon_sym_Tuple_DOTnew] = ACTIONS(185),
    [anon_sym_BQUOTE] = ACTIONS(187),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(189),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(39),
    [anon_sym_AT] = ACTIONS(41),
    [anon_sym_AT_AT] = ACTIONS(43),
    [anon_sym___LINE__] = ACTIONS(191),
    [anon_sym___END_LINE__] = ACTIONS(191),
    [anon_sym___FILE__] = ACTIONS(191),
    [anon_sym___DIR__] = ACTIONS(191),
    [aux_sym_constant_token1] = ACTIONS(193),
    [anon_sym_class] = ACTIONS(195),
  },
  [12] = {
    [sym__statement] = STATE(10),
    [sym__expression] = STATE(222),
    [sym_bool] = STATE(222),
    [sym_float] = STATE(222),
    [sym_integer] = STATE(222),
    [sym_symbol] = STATE(222),
    [sym_char] = STATE(222),
    [sym_string] = STATE(222),
    [sym_array] = STATE(222),
    [sym_hash] = STATE(222),
    [sym_index_expression] = STATE(146),
    [sym_regex] = STATE(222),
    [sym_tuple] = STATE(222),
    [sym_namedTupleLiteral] = STATE(222),
    [sym_commandLiteral] = STATE(222),
    [sym_local_variable] = STATE(242),
    [sym_instance_variable] = STATE(242),
    [sym_class_variable] = STATE(242),
    [sym_constant] = STATE(92),
    [sym__variable] = STATE(242),
    [sym_assignment] = STATE(222),
    [sym_class_definition] = STATE(222),
    [aux_sym_program_repeat1] = STATE(10),
    [sym_nil] = ACTIONS(51),
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
    [anon_sym_class] = ACTIONS(49),
    [anon_sym_end] = ACTIONS(197),
  },
  [13] = {
    [sym__statement] = STATE(22),
    [sym__expression] = STATE(222),
    [sym_bool] = STATE(222),
    [sym_float] = STATE(222),
    [sym_integer] = STATE(222),
    [sym_symbol] = STATE(222),
    [sym_char] = STATE(222),
    [sym_string] = STATE(222),
    [sym_array] = STATE(222),
    [sym_hash] = STATE(222),
    [sym_index_expression] = STATE(146),
    [sym_regex] = STATE(222),
    [sym_tuple] = STATE(222),
    [sym_namedTupleLiteral] = STATE(222),
    [sym_commandLiteral] = STATE(222),
    [sym_local_variable] = STATE(242),
    [sym_instance_variable] = STATE(242),
    [sym_class_variable] = STATE(242),
    [sym_constant] = STATE(92),
    [sym__variable] = STATE(242),
    [sym_assignment] = STATE(222),
    [sym_class_definition] = STATE(222),
    [aux_sym_program_repeat1] = STATE(22),
    [sym_nil] = ACTIONS(51),
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
    [anon_sym_class] = ACTIONS(49),
    [anon_sym_end] = ACTIONS(199),
  },
  [14] = {
    [sym__statement] = STATE(15),
    [sym__expression] = STATE(222),
    [sym_bool] = STATE(222),
    [sym_float] = STATE(222),
    [sym_integer] = STATE(222),
    [sym_symbol] = STATE(222),
    [sym_char] = STATE(222),
    [sym_string] = STATE(222),
    [sym_array] = STATE(222),
    [sym_hash] = STATE(222),
    [sym_index_expression] = STATE(146),
    [sym_regex] = STATE(222),
    [sym_tuple] = STATE(222),
    [sym_namedTupleLiteral] = STATE(222),
    [sym_commandLiteral] = STATE(222),
    [sym_local_variable] = STATE(242),
    [sym_instance_variable] = STATE(242),
    [sym_class_variable] = STATE(242),
    [sym_constant] = STATE(92),
    [sym__variable] = STATE(242),
    [sym_assignment] = STATE(222),
    [sym_class_definition] = STATE(222),
    [aux_sym_program_repeat1] = STATE(15),
    [sym_nil] = ACTIONS(51),
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
    [anon_sym_class] = ACTIONS(49),
    [anon_sym_end] = ACTIONS(201),
  },
  [15] = {
    [sym__statement] = STATE(22),
    [sym__expression] = STATE(222),
    [sym_bool] = STATE(222),
    [sym_float] = STATE(222),
    [sym_integer] = STATE(222),
    [sym_symbol] = STATE(222),
    [sym_char] = STATE(222),
    [sym_string] = STATE(222),
    [sym_array] = STATE(222),
    [sym_hash] = STATE(222),
    [sym_index_expression] = STATE(146),
    [sym_regex] = STATE(222),
    [sym_tuple] = STATE(222),
    [sym_namedTupleLiteral] = STATE(222),
    [sym_commandLiteral] = STATE(222),
    [sym_local_variable] = STATE(242),
    [sym_instance_variable] = STATE(242),
    [sym_class_variable] = STATE(242),
    [sym_constant] = STATE(92),
    [sym__variable] = STATE(242),
    [sym_assignment] = STATE(222),
    [sym_class_definition] = STATE(222),
    [aux_sym_program_repeat1] = STATE(22),
    [sym_nil] = ACTIONS(51),
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
    [anon_sym_class] = ACTIONS(49),
    [anon_sym_end] = ACTIONS(203),
  },
  [16] = {
    [sym__statement] = STATE(29),
    [sym__expression] = STATE(222),
    [sym_bool] = STATE(222),
    [sym_float] = STATE(222),
    [sym_integer] = STATE(222),
    [sym_symbol] = STATE(222),
    [sym_char] = STATE(222),
    [sym_string] = STATE(222),
    [sym_array] = STATE(222),
    [sym_hash] = STATE(222),
    [sym_index_expression] = STATE(146),
    [sym_regex] = STATE(222),
    [sym_tuple] = STATE(222),
    [sym_namedTupleLiteral] = STATE(222),
    [sym_commandLiteral] = STATE(222),
    [sym_local_variable] = STATE(242),
    [sym_instance_variable] = STATE(242),
    [sym_class_variable] = STATE(242),
    [sym_constant] = STATE(92),
    [sym__variable] = STATE(242),
    [sym_assignment] = STATE(222),
    [sym_class_definition] = STATE(222),
    [aux_sym_program_repeat1] = STATE(29),
    [sym_nil] = ACTIONS(51),
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
    [anon_sym_class] = ACTIONS(49),
    [anon_sym_end] = ACTIONS(205),
  },
  [17] = {
    [sym__statement] = STATE(22),
    [sym__expression] = STATE(222),
    [sym_bool] = STATE(222),
    [sym_float] = STATE(222),
    [sym_integer] = STATE(222),
    [sym_symbol] = STATE(222),
    [sym_char] = STATE(222),
    [sym_string] = STATE(222),
    [sym_array] = STATE(222),
    [sym_hash] = STATE(222),
    [sym_index_expression] = STATE(146),
    [sym_regex] = STATE(222),
    [sym_tuple] = STATE(222),
    [sym_namedTupleLiteral] = STATE(222),
    [sym_commandLiteral] = STATE(222),
    [sym_local_variable] = STATE(242),
    [sym_instance_variable] = STATE(242),
    [sym_class_variable] = STATE(242),
    [sym_constant] = STATE(92),
    [sym__variable] = STATE(242),
    [sym_assignment] = STATE(222),
    [sym_class_definition] = STATE(222),
    [aux_sym_program_repeat1] = STATE(22),
    [sym_nil] = ACTIONS(51),
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
    [anon_sym_class] = ACTIONS(49),
    [anon_sym_end] = ACTIONS(207),
  },
  [18] = {
    [sym__statement] = STATE(22),
    [sym__expression] = STATE(222),
    [sym_bool] = STATE(222),
    [sym_float] = STATE(222),
    [sym_integer] = STATE(222),
    [sym_symbol] = STATE(222),
    [sym_char] = STATE(222),
    [sym_string] = STATE(222),
    [sym_array] = STATE(222),
    [sym_hash] = STATE(222),
    [sym_index_expression] = STATE(146),
    [sym_regex] = STATE(222),
    [sym_tuple] = STATE(222),
    [sym_namedTupleLiteral] = STATE(222),
    [sym_commandLiteral] = STATE(222),
    [sym_local_variable] = STATE(242),
    [sym_instance_variable] = STATE(242),
    [sym_class_variable] = STATE(242),
    [sym_constant] = STATE(92),
    [sym__variable] = STATE(242),
    [sym_assignment] = STATE(222),
    [sym_class_definition] = STATE(222),
    [aux_sym_program_repeat1] = STATE(22),
    [sym_nil] = ACTIONS(51),
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
    [anon_sym_class] = ACTIONS(49),
    [anon_sym_end] = ACTIONS(209),
  },
  [19] = {
    [sym__statement] = STATE(22),
    [sym__expression] = STATE(222),
    [sym_bool] = STATE(222),
    [sym_float] = STATE(222),
    [sym_integer] = STATE(222),
    [sym_symbol] = STATE(222),
    [sym_char] = STATE(222),
    [sym_string] = STATE(222),
    [sym_array] = STATE(222),
    [sym_hash] = STATE(222),
    [sym_index_expression] = STATE(146),
    [sym_regex] = STATE(222),
    [sym_tuple] = STATE(222),
    [sym_namedTupleLiteral] = STATE(222),
    [sym_commandLiteral] = STATE(222),
    [sym_local_variable] = STATE(242),
    [sym_instance_variable] = STATE(242),
    [sym_class_variable] = STATE(242),
    [sym_constant] = STATE(92),
    [sym__variable] = STATE(242),
    [sym_assignment] = STATE(222),
    [sym_class_definition] = STATE(222),
    [aux_sym_program_repeat1] = STATE(22),
    [sym_nil] = ACTIONS(51),
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
    [anon_sym_class] = ACTIONS(49),
    [anon_sym_end] = ACTIONS(211),
  },
  [20] = {
    [sym__statement] = STATE(22),
    [sym__expression] = STATE(222),
    [sym_bool] = STATE(222),
    [sym_float] = STATE(222),
    [sym_integer] = STATE(222),
    [sym_symbol] = STATE(222),
    [sym_char] = STATE(222),
    [sym_string] = STATE(222),
    [sym_array] = STATE(222),
    [sym_hash] = STATE(222),
    [sym_index_expression] = STATE(146),
    [sym_regex] = STATE(222),
    [sym_tuple] = STATE(222),
    [sym_namedTupleLiteral] = STATE(222),
    [sym_commandLiteral] = STATE(222),
    [sym_local_variable] = STATE(242),
    [sym_instance_variable] = STATE(242),
    [sym_class_variable] = STATE(242),
    [sym_constant] = STATE(92),
    [sym__variable] = STATE(242),
    [sym_assignment] = STATE(222),
    [sym_class_definition] = STATE(222),
    [aux_sym_program_repeat1] = STATE(22),
    [sym_nil] = ACTIONS(51),
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
    [anon_sym_class] = ACTIONS(49),
    [anon_sym_end] = ACTIONS(213),
  },
  [21] = {
    [sym__statement] = STATE(28),
    [sym__expression] = STATE(222),
    [sym_bool] = STATE(222),
    [sym_float] = STATE(222),
    [sym_integer] = STATE(222),
    [sym_symbol] = STATE(222),
    [sym_char] = STATE(222),
    [sym_string] = STATE(222),
    [sym_array] = STATE(222),
    [sym_hash] = STATE(222),
    [sym_index_expression] = STATE(146),
    [sym_regex] = STATE(222),
    [sym_tuple] = STATE(222),
    [sym_namedTupleLiteral] = STATE(222),
    [sym_commandLiteral] = STATE(222),
    [sym_local_variable] = STATE(242),
    [sym_instance_variable] = STATE(242),
    [sym_class_variable] = STATE(242),
    [sym_constant] = STATE(92),
    [sym__variable] = STATE(242),
    [sym_assignment] = STATE(222),
    [sym_class_definition] = STATE(222),
    [aux_sym_program_repeat1] = STATE(28),
    [sym_nil] = ACTIONS(51),
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
    [anon_sym_class] = ACTIONS(49),
    [anon_sym_end] = ACTIONS(215),
  },
  [22] = {
    [sym__statement] = STATE(22),
    [sym__expression] = STATE(222),
    [sym_bool] = STATE(222),
    [sym_float] = STATE(222),
    [sym_integer] = STATE(222),
    [sym_symbol] = STATE(222),
    [sym_char] = STATE(222),
    [sym_string] = STATE(222),
    [sym_array] = STATE(222),
    [sym_hash] = STATE(222),
    [sym_index_expression] = STATE(146),
    [sym_regex] = STATE(222),
    [sym_tuple] = STATE(222),
    [sym_namedTupleLiteral] = STATE(222),
    [sym_commandLiteral] = STATE(222),
    [sym_local_variable] = STATE(242),
    [sym_instance_variable] = STATE(242),
    [sym_class_variable] = STATE(242),
    [sym_constant] = STATE(92),
    [sym__variable] = STATE(242),
    [sym_assignment] = STATE(222),
    [sym_class_definition] = STATE(222),
    [aux_sym_program_repeat1] = STATE(22),
    [sym_nil] = ACTIONS(217),
    [anon_sym_true] = ACTIONS(90),
    [anon_sym_false] = ACTIONS(90),
    [aux_sym_float_token1] = ACTIONS(93),
    [aux_sym_float_token2] = ACTIONS(96),
    [aux_sym_float_token3] = ACTIONS(96),
    [aux_sym_integer_token1] = ACTIONS(99),
    [aux_sym_integer_token2] = ACTIONS(99),
    [aux_sym_integer_token3] = ACTIONS(99),
    [aux_sym_integer_token4] = ACTIONS(102),
    [anon_sym_COLON] = ACTIONS(105),
    [anon_sym_DQUOTE] = ACTIONS(108),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(111),
    [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = ACTIONS(111),
    [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = ACTIONS(111),
    [anon_sym_SQUOTE_BSLASHa_SQUOTE] = ACTIONS(111),
    [anon_sym_SQUOTE_BSLASHb_SQUOTE] = ACTIONS(111),
    [anon_sym_SQUOTE_BSLASHe_SQUOTE] = ACTIONS(111),
    [anon_sym_SQUOTE_BSLASHf_SQUOTE] = ACTIONS(111),
    [anon_sym_SQUOTE_BSLASHn_SQUOTE] = ACTIONS(111),
    [anon_sym_SQUOTE_BSLASHr_SQUOTE] = ACTIONS(111),
    [anon_sym_SQUOTE_BSLASHt_SQUOTE] = ACTIONS(111),
    [anon_sym_SQUOTE_BSLASHv_SQUOTE] = ACTIONS(111),
    [aux_sym_char_token1] = ACTIONS(111),
    [aux_sym_char_token2] = ACTIONS(114),
    [anon_sym_LBRACK] = ACTIONS(117),
    [anon_sym_LBRACE] = ACTIONS(120),
    [anon_sym_SLASH] = ACTIONS(123),
    [anon_sym_Tuple_DOTnew] = ACTIONS(126),
    [anon_sym_BQUOTE] = ACTIONS(129),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(132),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(135),
    [anon_sym_AT] = ACTIONS(138),
    [anon_sym_AT_AT] = ACTIONS(141),
    [anon_sym___LINE__] = ACTIONS(144),
    [anon_sym___END_LINE__] = ACTIONS(144),
    [anon_sym___FILE__] = ACTIONS(144),
    [anon_sym___DIR__] = ACTIONS(144),
    [aux_sym_constant_token1] = ACTIONS(147),
    [anon_sym_class] = ACTIONS(150),
    [anon_sym_end] = ACTIONS(85),
  },
  [23] = {
    [sym__statement] = STATE(22),
    [sym__expression] = STATE(222),
    [sym_bool] = STATE(222),
    [sym_float] = STATE(222),
    [sym_integer] = STATE(222),
    [sym_symbol] = STATE(222),
    [sym_char] = STATE(222),
    [sym_string] = STATE(222),
    [sym_array] = STATE(222),
    [sym_hash] = STATE(222),
    [sym_index_expression] = STATE(146),
    [sym_regex] = STATE(222),
    [sym_tuple] = STATE(222),
    [sym_namedTupleLiteral] = STATE(222),
    [sym_commandLiteral] = STATE(222),
    [sym_local_variable] = STATE(242),
    [sym_instance_variable] = STATE(242),
    [sym_class_variable] = STATE(242),
    [sym_constant] = STATE(92),
    [sym__variable] = STATE(242),
    [sym_assignment] = STATE(222),
    [sym_class_definition] = STATE(222),
    [aux_sym_program_repeat1] = STATE(22),
    [sym_nil] = ACTIONS(51),
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
    [anon_sym_class] = ACTIONS(49),
    [anon_sym_end] = ACTIONS(220),
  },
  [24] = {
    [sym__expression] = STATE(105),
    [sym_identifier] = STATE(320),
    [sym_bool] = STATE(105),
    [sym_float] = STATE(105),
    [sym_integer] = STATE(105),
    [sym_symbol] = STATE(105),
    [sym_char] = STATE(105),
    [sym_string] = STATE(126),
    [sym_array] = STATE(105),
    [sym_hash] = STATE(105),
    [sym_index_expression] = STATE(110),
    [sym_regex] = STATE(105),
    [sym_tuple] = STATE(105),
    [sym_namedTupleLiteral] = STATE(105),
    [sym_commandLiteral] = STATE(105),
    [sym_local_variable] = STATE(246),
    [sym_instance_variable] = STATE(246),
    [sym_class_variable] = STATE(246),
    [sym_constant] = STATE(72),
    [sym__variable] = STATE(246),
    [sym_assignment] = STATE(105),
    [sym_class_definition] = STATE(105),
    [aux_sym_identifier_token1] = ACTIONS(155),
    [sym_nil] = ACTIONS(222),
    [anon_sym_true] = ACTIONS(159),
    [anon_sym_false] = ACTIONS(159),
    [aux_sym_float_token1] = ACTIONS(161),
    [aux_sym_float_token2] = ACTIONS(163),
    [aux_sym_float_token3] = ACTIONS(163),
    [aux_sym_integer_token1] = ACTIONS(165),
    [aux_sym_integer_token2] = ACTIONS(165),
    [aux_sym_integer_token3] = ACTIONS(165),
    [aux_sym_integer_token4] = ACTIONS(167),
    [anon_sym_COLON] = ACTIONS(169),
    [anon_sym_DQUOTE] = ACTIONS(171),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHa_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHb_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHe_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHf_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHn_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHr_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHt_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHv_SQUOTE] = ACTIONS(173),
    [aux_sym_char_token1] = ACTIONS(173),
    [aux_sym_char_token2] = ACTIONS(175),
    [anon_sym_LBRACK] = ACTIONS(177),
    [anon_sym_LBRACE] = ACTIONS(179),
    [anon_sym_RBRACE] = ACTIONS(224),
    [anon_sym_SLASH] = ACTIONS(183),
    [anon_sym_Tuple_DOTnew] = ACTIONS(185),
    [anon_sym_BQUOTE] = ACTIONS(187),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(189),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(39),
    [anon_sym_AT] = ACTIONS(41),
    [anon_sym_AT_AT] = ACTIONS(43),
    [anon_sym___LINE__] = ACTIONS(191),
    [anon_sym___END_LINE__] = ACTIONS(191),
    [anon_sym___FILE__] = ACTIONS(191),
    [anon_sym___DIR__] = ACTIONS(191),
    [aux_sym_constant_token1] = ACTIONS(193),
    [anon_sym_class] = ACTIONS(195),
  },
  [25] = {
    [sym__statement] = STATE(9),
    [sym__expression] = STATE(239),
    [sym_bool] = STATE(239),
    [sym_float] = STATE(239),
    [sym_integer] = STATE(239),
    [sym_symbol] = STATE(239),
    [sym_char] = STATE(239),
    [sym_string] = STATE(239),
    [sym_array] = STATE(239),
    [sym_hash] = STATE(239),
    [sym_index_expression] = STATE(146),
    [sym_regex] = STATE(239),
    [sym_tuple] = STATE(239),
    [sym_namedTupleLiteral] = STATE(239),
    [sym_commandLiteral] = STATE(239),
    [sym_local_variable] = STATE(242),
    [sym_instance_variable] = STATE(242),
    [sym_class_variable] = STATE(242),
    [sym_constant] = STATE(92),
    [sym__variable] = STATE(242),
    [sym_assignment] = STATE(239),
    [sym_class_definition] = STATE(239),
    [aux_sym_program_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(226),
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
    [anon_sym_class] = ACTIONS(49),
  },
  [26] = {
    [sym__expression] = STATE(101),
    [sym_identifier] = STATE(315),
    [sym_bool] = STATE(101),
    [sym_float] = STATE(101),
    [sym_integer] = STATE(101),
    [sym_symbol] = STATE(101),
    [sym_char] = STATE(101),
    [sym_string] = STATE(91),
    [sym_array] = STATE(101),
    [sym_hash] = STATE(101),
    [sym_index_expression] = STATE(110),
    [sym_regex] = STATE(101),
    [sym_tuple] = STATE(101),
    [sym_namedTupleLiteral] = STATE(101),
    [sym_commandLiteral] = STATE(101),
    [sym_local_variable] = STATE(246),
    [sym_instance_variable] = STATE(246),
    [sym_class_variable] = STATE(246),
    [sym_constant] = STATE(72),
    [sym__variable] = STATE(246),
    [sym_assignment] = STATE(101),
    [sym_class_definition] = STATE(101),
    [aux_sym_identifier_token1] = ACTIONS(155),
    [sym_nil] = ACTIONS(228),
    [anon_sym_true] = ACTIONS(159),
    [anon_sym_false] = ACTIONS(159),
    [aux_sym_float_token1] = ACTIONS(161),
    [aux_sym_float_token2] = ACTIONS(163),
    [aux_sym_float_token3] = ACTIONS(163),
    [aux_sym_integer_token1] = ACTIONS(165),
    [aux_sym_integer_token2] = ACTIONS(165),
    [aux_sym_integer_token3] = ACTIONS(165),
    [aux_sym_integer_token4] = ACTIONS(167),
    [anon_sym_COLON] = ACTIONS(169),
    [anon_sym_DQUOTE] = ACTIONS(171),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHa_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHb_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHe_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHf_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHn_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHr_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHt_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHv_SQUOTE] = ACTIONS(173),
    [aux_sym_char_token1] = ACTIONS(173),
    [aux_sym_char_token2] = ACTIONS(175),
    [anon_sym_LBRACK] = ACTIONS(177),
    [anon_sym_LBRACE] = ACTIONS(179),
    [anon_sym_RBRACE] = ACTIONS(230),
    [anon_sym_SLASH] = ACTIONS(183),
    [anon_sym_Tuple_DOTnew] = ACTIONS(185),
    [anon_sym_BQUOTE] = ACTIONS(187),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(189),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(39),
    [anon_sym_AT] = ACTIONS(41),
    [anon_sym_AT_AT] = ACTIONS(43),
    [anon_sym___LINE__] = ACTIONS(191),
    [anon_sym___END_LINE__] = ACTIONS(191),
    [anon_sym___FILE__] = ACTIONS(191),
    [anon_sym___DIR__] = ACTIONS(191),
    [aux_sym_constant_token1] = ACTIONS(193),
    [anon_sym_class] = ACTIONS(195),
  },
  [27] = {
    [sym__statement] = STATE(18),
    [sym__expression] = STATE(222),
    [sym_bool] = STATE(222),
    [sym_float] = STATE(222),
    [sym_integer] = STATE(222),
    [sym_symbol] = STATE(222),
    [sym_char] = STATE(222),
    [sym_string] = STATE(222),
    [sym_array] = STATE(222),
    [sym_hash] = STATE(222),
    [sym_index_expression] = STATE(146),
    [sym_regex] = STATE(222),
    [sym_tuple] = STATE(222),
    [sym_namedTupleLiteral] = STATE(222),
    [sym_commandLiteral] = STATE(222),
    [sym_local_variable] = STATE(242),
    [sym_instance_variable] = STATE(242),
    [sym_class_variable] = STATE(242),
    [sym_constant] = STATE(92),
    [sym__variable] = STATE(242),
    [sym_assignment] = STATE(222),
    [sym_class_definition] = STATE(222),
    [aux_sym_program_repeat1] = STATE(18),
    [sym_nil] = ACTIONS(51),
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
    [anon_sym_class] = ACTIONS(49),
    [anon_sym_end] = ACTIONS(232),
  },
  [28] = {
    [sym__statement] = STATE(22),
    [sym__expression] = STATE(222),
    [sym_bool] = STATE(222),
    [sym_float] = STATE(222),
    [sym_integer] = STATE(222),
    [sym_symbol] = STATE(222),
    [sym_char] = STATE(222),
    [sym_string] = STATE(222),
    [sym_array] = STATE(222),
    [sym_hash] = STATE(222),
    [sym_index_expression] = STATE(146),
    [sym_regex] = STATE(222),
    [sym_tuple] = STATE(222),
    [sym_namedTupleLiteral] = STATE(222),
    [sym_commandLiteral] = STATE(222),
    [sym_local_variable] = STATE(242),
    [sym_instance_variable] = STATE(242),
    [sym_class_variable] = STATE(242),
    [sym_constant] = STATE(92),
    [sym__variable] = STATE(242),
    [sym_assignment] = STATE(222),
    [sym_class_definition] = STATE(222),
    [aux_sym_program_repeat1] = STATE(22),
    [sym_nil] = ACTIONS(51),
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
    [anon_sym_class] = ACTIONS(49),
    [anon_sym_end] = ACTIONS(234),
  },
  [29] = {
    [sym__statement] = STATE(22),
    [sym__expression] = STATE(222),
    [sym_bool] = STATE(222),
    [sym_float] = STATE(222),
    [sym_integer] = STATE(222),
    [sym_symbol] = STATE(222),
    [sym_char] = STATE(222),
    [sym_string] = STATE(222),
    [sym_array] = STATE(222),
    [sym_hash] = STATE(222),
    [sym_index_expression] = STATE(146),
    [sym_regex] = STATE(222),
    [sym_tuple] = STATE(222),
    [sym_namedTupleLiteral] = STATE(222),
    [sym_commandLiteral] = STATE(222),
    [sym_local_variable] = STATE(242),
    [sym_instance_variable] = STATE(242),
    [sym_class_variable] = STATE(242),
    [sym_constant] = STATE(92),
    [sym__variable] = STATE(242),
    [sym_assignment] = STATE(222),
    [sym_class_definition] = STATE(222),
    [aux_sym_program_repeat1] = STATE(22),
    [sym_nil] = ACTIONS(51),
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
    [anon_sym_class] = ACTIONS(49),
    [anon_sym_end] = ACTIONS(236),
  },
  [30] = {
    [sym__statement] = STATE(31),
    [sym__expression] = STATE(222),
    [sym_bool] = STATE(222),
    [sym_float] = STATE(222),
    [sym_integer] = STATE(222),
    [sym_symbol] = STATE(222),
    [sym_char] = STATE(222),
    [sym_string] = STATE(222),
    [sym_array] = STATE(222),
    [sym_hash] = STATE(222),
    [sym_index_expression] = STATE(146),
    [sym_regex] = STATE(222),
    [sym_tuple] = STATE(222),
    [sym_namedTupleLiteral] = STATE(222),
    [sym_commandLiteral] = STATE(222),
    [sym_local_variable] = STATE(242),
    [sym_instance_variable] = STATE(242),
    [sym_class_variable] = STATE(242),
    [sym_constant] = STATE(92),
    [sym__variable] = STATE(242),
    [sym_assignment] = STATE(222),
    [sym_class_definition] = STATE(222),
    [aux_sym_program_repeat1] = STATE(31),
    [sym_nil] = ACTIONS(51),
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
    [anon_sym_class] = ACTIONS(49),
    [anon_sym_end] = ACTIONS(238),
  },
  [31] = {
    [sym__statement] = STATE(22),
    [sym__expression] = STATE(222),
    [sym_bool] = STATE(222),
    [sym_float] = STATE(222),
    [sym_integer] = STATE(222),
    [sym_symbol] = STATE(222),
    [sym_char] = STATE(222),
    [sym_string] = STATE(222),
    [sym_array] = STATE(222),
    [sym_hash] = STATE(222),
    [sym_index_expression] = STATE(146),
    [sym_regex] = STATE(222),
    [sym_tuple] = STATE(222),
    [sym_namedTupleLiteral] = STATE(222),
    [sym_commandLiteral] = STATE(222),
    [sym_local_variable] = STATE(242),
    [sym_instance_variable] = STATE(242),
    [sym_class_variable] = STATE(242),
    [sym_constant] = STATE(92),
    [sym__variable] = STATE(242),
    [sym_assignment] = STATE(222),
    [sym_class_definition] = STATE(222),
    [aux_sym_program_repeat1] = STATE(22),
    [sym_nil] = ACTIONS(51),
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
    [anon_sym_class] = ACTIONS(49),
    [anon_sym_end] = ACTIONS(240),
  },
  [32] = {
    [sym__expression] = STATE(197),
    [sym_bool] = STATE(197),
    [sym_float] = STATE(197),
    [sym_integer] = STATE(197),
    [sym_symbol] = STATE(197),
    [sym_char] = STATE(197),
    [sym_string] = STATE(197),
    [sym_array] = STATE(197),
    [sym_hash] = STATE(197),
    [sym_index_expression] = STATE(143),
    [sym_regex] = STATE(197),
    [sym_tuple] = STATE(197),
    [sym_namedTupleLiteral] = STATE(197),
    [sym_commandLiteral] = STATE(197),
    [sym_local_variable] = STATE(231),
    [sym_instance_variable] = STATE(231),
    [sym_class_variable] = STATE(231),
    [sym_constant] = STATE(72),
    [sym__variable] = STATE(231),
    [sym_assignment] = STATE(197),
    [sym_class_definition] = STATE(197),
    [sym_nil] = ACTIONS(242),
    [anon_sym_true] = ACTIONS(244),
    [anon_sym_false] = ACTIONS(244),
    [aux_sym_float_token1] = ACTIONS(161),
    [aux_sym_float_token2] = ACTIONS(163),
    [aux_sym_float_token3] = ACTIONS(163),
    [aux_sym_integer_token1] = ACTIONS(165),
    [aux_sym_integer_token2] = ACTIONS(165),
    [aux_sym_integer_token3] = ACTIONS(165),
    [aux_sym_integer_token4] = ACTIONS(167),
    [anon_sym_COLON] = ACTIONS(246),
    [anon_sym_DQUOTE] = ACTIONS(248),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHa_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHb_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHe_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHf_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHn_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHr_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHt_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHv_SQUOTE] = ACTIONS(173),
    [aux_sym_char_token1] = ACTIONS(173),
    [aux_sym_char_token2] = ACTIONS(175),
    [anon_sym_LBRACK] = ACTIONS(177),
    [anon_sym_LBRACE] = ACTIONS(179),
    [anon_sym_SLASH] = ACTIONS(183),
    [anon_sym_Tuple_DOTnew] = ACTIONS(185),
    [anon_sym_BQUOTE] = ACTIONS(187),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(189),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(39),
    [anon_sym_AT] = ACTIONS(41),
    [anon_sym_AT_AT] = ACTIONS(43),
    [anon_sym___LINE__] = ACTIONS(250),
    [anon_sym___END_LINE__] = ACTIONS(250),
    [anon_sym___FILE__] = ACTIONS(250),
    [anon_sym___DIR__] = ACTIONS(250),
    [aux_sym_constant_token1] = ACTIONS(193),
    [anon_sym_class] = ACTIONS(252),
  },
  [33] = {
    [sym__expression] = STATE(189),
    [sym_bool] = STATE(189),
    [sym_float] = STATE(189),
    [sym_integer] = STATE(189),
    [sym_symbol] = STATE(189),
    [sym_char] = STATE(189),
    [sym_string] = STATE(189),
    [sym_array] = STATE(189),
    [sym_hash] = STATE(189),
    [sym_index_expression] = STATE(143),
    [sym_regex] = STATE(189),
    [sym_tuple] = STATE(189),
    [sym_namedTupleLiteral] = STATE(189),
    [sym_commandLiteral] = STATE(189),
    [sym_local_variable] = STATE(231),
    [sym_instance_variable] = STATE(231),
    [sym_class_variable] = STATE(231),
    [sym_constant] = STATE(72),
    [sym__variable] = STATE(231),
    [sym_assignment] = STATE(189),
    [sym_class_definition] = STATE(189),
    [sym_nil] = ACTIONS(254),
    [anon_sym_true] = ACTIONS(244),
    [anon_sym_false] = ACTIONS(244),
    [aux_sym_float_token1] = ACTIONS(161),
    [aux_sym_float_token2] = ACTIONS(163),
    [aux_sym_float_token3] = ACTIONS(163),
    [aux_sym_integer_token1] = ACTIONS(165),
    [aux_sym_integer_token2] = ACTIONS(165),
    [aux_sym_integer_token3] = ACTIONS(165),
    [aux_sym_integer_token4] = ACTIONS(167),
    [anon_sym_COLON] = ACTIONS(246),
    [anon_sym_DQUOTE] = ACTIONS(248),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHa_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHb_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHe_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHf_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHn_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHr_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHt_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHv_SQUOTE] = ACTIONS(173),
    [aux_sym_char_token1] = ACTIONS(173),
    [aux_sym_char_token2] = ACTIONS(175),
    [anon_sym_LBRACK] = ACTIONS(177),
    [anon_sym_LBRACE] = ACTIONS(179),
    [anon_sym_SLASH] = ACTIONS(183),
    [anon_sym_Tuple_DOTnew] = ACTIONS(185),
    [anon_sym_BQUOTE] = ACTIONS(187),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(189),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(39),
    [anon_sym_AT] = ACTIONS(41),
    [anon_sym_AT_AT] = ACTIONS(43),
    [anon_sym___LINE__] = ACTIONS(250),
    [anon_sym___END_LINE__] = ACTIONS(250),
    [anon_sym___FILE__] = ACTIONS(250),
    [anon_sym___DIR__] = ACTIONS(250),
    [aux_sym_constant_token1] = ACTIONS(193),
    [anon_sym_class] = ACTIONS(252),
  },
  [34] = {
    [sym__expression] = STATE(149),
    [sym_bool] = STATE(149),
    [sym_float] = STATE(149),
    [sym_integer] = STATE(149),
    [sym_symbol] = STATE(149),
    [sym_char] = STATE(149),
    [sym_string] = STATE(149),
    [sym_array] = STATE(149),
    [sym_hash] = STATE(149),
    [sym_index_expression] = STATE(142),
    [sym_regex] = STATE(149),
    [sym_tuple] = STATE(149),
    [sym_namedTupleLiteral] = STATE(149),
    [sym_commandLiteral] = STATE(149),
    [sym_local_variable] = STATE(223),
    [sym_instance_variable] = STATE(223),
    [sym_class_variable] = STATE(223),
    [sym_constant] = STATE(72),
    [sym__variable] = STATE(223),
    [sym_assignment] = STATE(149),
    [sym_class_definition] = STATE(149),
    [sym_nil] = ACTIONS(256),
    [anon_sym_true] = ACTIONS(244),
    [anon_sym_false] = ACTIONS(244),
    [aux_sym_float_token1] = ACTIONS(161),
    [aux_sym_float_token2] = ACTIONS(163),
    [aux_sym_float_token3] = ACTIONS(163),
    [aux_sym_integer_token1] = ACTIONS(165),
    [aux_sym_integer_token2] = ACTIONS(165),
    [aux_sym_integer_token3] = ACTIONS(165),
    [aux_sym_integer_token4] = ACTIONS(167),
    [anon_sym_COLON] = ACTIONS(258),
    [anon_sym_DQUOTE] = ACTIONS(260),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHa_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHb_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHe_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHf_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHn_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHr_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHt_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHv_SQUOTE] = ACTIONS(173),
    [aux_sym_char_token1] = ACTIONS(173),
    [aux_sym_char_token2] = ACTIONS(175),
    [anon_sym_LBRACK] = ACTIONS(177),
    [anon_sym_LBRACE] = ACTIONS(179),
    [anon_sym_SLASH] = ACTIONS(183),
    [anon_sym_Tuple_DOTnew] = ACTIONS(185),
    [anon_sym_BQUOTE] = ACTIONS(187),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(189),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(39),
    [anon_sym_AT] = ACTIONS(41),
    [anon_sym_AT_AT] = ACTIONS(43),
    [anon_sym___LINE__] = ACTIONS(250),
    [anon_sym___END_LINE__] = ACTIONS(250),
    [anon_sym___FILE__] = ACTIONS(250),
    [anon_sym___DIR__] = ACTIONS(250),
    [aux_sym_constant_token1] = ACTIONS(193),
    [anon_sym_class] = ACTIONS(252),
  },
  [35] = {
    [sym__expression] = STATE(179),
    [sym_bool] = STATE(179),
    [sym_float] = STATE(179),
    [sym_integer] = STATE(179),
    [sym_symbol] = STATE(179),
    [sym_char] = STATE(179),
    [sym_string] = STATE(179),
    [sym_array] = STATE(179),
    [sym_hash] = STATE(179),
    [sym_index_expression] = STATE(143),
    [sym_regex] = STATE(179),
    [sym_tuple] = STATE(179),
    [sym_namedTupleLiteral] = STATE(179),
    [sym_commandLiteral] = STATE(179),
    [sym_local_variable] = STATE(231),
    [sym_instance_variable] = STATE(231),
    [sym_class_variable] = STATE(231),
    [sym_constant] = STATE(72),
    [sym__variable] = STATE(231),
    [sym_assignment] = STATE(179),
    [sym_class_definition] = STATE(179),
    [sym_nil] = ACTIONS(262),
    [anon_sym_true] = ACTIONS(244),
    [anon_sym_false] = ACTIONS(244),
    [aux_sym_float_token1] = ACTIONS(161),
    [aux_sym_float_token2] = ACTIONS(163),
    [aux_sym_float_token3] = ACTIONS(163),
    [aux_sym_integer_token1] = ACTIONS(165),
    [aux_sym_integer_token2] = ACTIONS(165),
    [aux_sym_integer_token3] = ACTIONS(165),
    [aux_sym_integer_token4] = ACTIONS(167),
    [anon_sym_COLON] = ACTIONS(246),
    [anon_sym_DQUOTE] = ACTIONS(248),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHa_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHb_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHe_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHf_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHn_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHr_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHt_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHv_SQUOTE] = ACTIONS(173),
    [aux_sym_char_token1] = ACTIONS(173),
    [aux_sym_char_token2] = ACTIONS(175),
    [anon_sym_LBRACK] = ACTIONS(177),
    [anon_sym_LBRACE] = ACTIONS(179),
    [anon_sym_SLASH] = ACTIONS(183),
    [anon_sym_Tuple_DOTnew] = ACTIONS(185),
    [anon_sym_BQUOTE] = ACTIONS(187),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(189),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(39),
    [anon_sym_AT] = ACTIONS(41),
    [anon_sym_AT_AT] = ACTIONS(43),
    [anon_sym___LINE__] = ACTIONS(250),
    [anon_sym___END_LINE__] = ACTIONS(250),
    [anon_sym___FILE__] = ACTIONS(250),
    [anon_sym___DIR__] = ACTIONS(250),
    [aux_sym_constant_token1] = ACTIONS(193),
    [anon_sym_class] = ACTIONS(252),
  },
  [36] = {
    [sym__expression] = STATE(276),
    [sym_bool] = STATE(276),
    [sym_float] = STATE(276),
    [sym_integer] = STATE(276),
    [sym_symbol] = STATE(276),
    [sym_char] = STATE(276),
    [sym_string] = STATE(276),
    [sym_array] = STATE(276),
    [sym_hash] = STATE(276),
    [sym_index_expression] = STATE(250),
    [sym_regex] = STATE(276),
    [sym_tuple] = STATE(276),
    [sym_namedTupleLiteral] = STATE(276),
    [sym_commandLiteral] = STATE(276),
    [sym_local_variable] = STATE(237),
    [sym_instance_variable] = STATE(237),
    [sym_class_variable] = STATE(237),
    [sym_constant] = STATE(159),
    [sym__variable] = STATE(237),
    [sym_assignment] = STATE(276),
    [sym_class_definition] = STATE(276),
    [sym_nil] = ACTIONS(264),
    [anon_sym_true] = ACTIONS(266),
    [anon_sym_false] = ACTIONS(266),
    [aux_sym_float_token1] = ACTIONS(268),
    [aux_sym_float_token2] = ACTIONS(270),
    [aux_sym_float_token3] = ACTIONS(270),
    [aux_sym_integer_token1] = ACTIONS(272),
    [aux_sym_integer_token2] = ACTIONS(272),
    [aux_sym_integer_token3] = ACTIONS(272),
    [aux_sym_integer_token4] = ACTIONS(274),
    [anon_sym_COLON] = ACTIONS(276),
    [anon_sym_DQUOTE] = ACTIONS(278),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(280),
    [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = ACTIONS(280),
    [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = ACTIONS(280),
    [anon_sym_SQUOTE_BSLASHa_SQUOTE] = ACTIONS(280),
    [anon_sym_SQUOTE_BSLASHb_SQUOTE] = ACTIONS(280),
    [anon_sym_SQUOTE_BSLASHe_SQUOTE] = ACTIONS(280),
    [anon_sym_SQUOTE_BSLASHf_SQUOTE] = ACTIONS(280),
    [anon_sym_SQUOTE_BSLASHn_SQUOTE] = ACTIONS(280),
    [anon_sym_SQUOTE_BSLASHr_SQUOTE] = ACTIONS(280),
    [anon_sym_SQUOTE_BSLASHt_SQUOTE] = ACTIONS(280),
    [anon_sym_SQUOTE_BSLASHv_SQUOTE] = ACTIONS(280),
    [aux_sym_char_token1] = ACTIONS(280),
    [aux_sym_char_token2] = ACTIONS(282),
    [anon_sym_LBRACK] = ACTIONS(284),
    [anon_sym_LBRACE] = ACTIONS(286),
    [anon_sym_SLASH] = ACTIONS(288),
    [anon_sym_Tuple_DOTnew] = ACTIONS(290),
    [anon_sym_BQUOTE] = ACTIONS(292),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(294),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(39),
    [anon_sym_AT] = ACTIONS(41),
    [anon_sym_AT_AT] = ACTIONS(43),
    [anon_sym___LINE__] = ACTIONS(296),
    [anon_sym___END_LINE__] = ACTIONS(296),
    [anon_sym___FILE__] = ACTIONS(296),
    [anon_sym___DIR__] = ACTIONS(296),
    [aux_sym_constant_token1] = ACTIONS(298),
    [anon_sym_class] = ACTIONS(300),
  },
  [37] = {
    [sym__expression] = STATE(266),
    [sym_bool] = STATE(266),
    [sym_float] = STATE(266),
    [sym_integer] = STATE(266),
    [sym_symbol] = STATE(266),
    [sym_char] = STATE(266),
    [sym_string] = STATE(266),
    [sym_array] = STATE(266),
    [sym_hash] = STATE(266),
    [sym_index_expression] = STATE(250),
    [sym_regex] = STATE(266),
    [sym_tuple] = STATE(266),
    [sym_namedTupleLiteral] = STATE(266),
    [sym_commandLiteral] = STATE(266),
    [sym_local_variable] = STATE(237),
    [sym_instance_variable] = STATE(237),
    [sym_class_variable] = STATE(237),
    [sym_constant] = STATE(159),
    [sym__variable] = STATE(237),
    [sym_assignment] = STATE(266),
    [sym_class_definition] = STATE(266),
    [sym_nil] = ACTIONS(302),
    [anon_sym_true] = ACTIONS(266),
    [anon_sym_false] = ACTIONS(266),
    [aux_sym_float_token1] = ACTIONS(268),
    [aux_sym_float_token2] = ACTIONS(270),
    [aux_sym_float_token3] = ACTIONS(270),
    [aux_sym_integer_token1] = ACTIONS(272),
    [aux_sym_integer_token2] = ACTIONS(272),
    [aux_sym_integer_token3] = ACTIONS(272),
    [aux_sym_integer_token4] = ACTIONS(274),
    [anon_sym_COLON] = ACTIONS(276),
    [anon_sym_DQUOTE] = ACTIONS(278),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(280),
    [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = ACTIONS(280),
    [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = ACTIONS(280),
    [anon_sym_SQUOTE_BSLASHa_SQUOTE] = ACTIONS(280),
    [anon_sym_SQUOTE_BSLASHb_SQUOTE] = ACTIONS(280),
    [anon_sym_SQUOTE_BSLASHe_SQUOTE] = ACTIONS(280),
    [anon_sym_SQUOTE_BSLASHf_SQUOTE] = ACTIONS(280),
    [anon_sym_SQUOTE_BSLASHn_SQUOTE] = ACTIONS(280),
    [anon_sym_SQUOTE_BSLASHr_SQUOTE] = ACTIONS(280),
    [anon_sym_SQUOTE_BSLASHt_SQUOTE] = ACTIONS(280),
    [anon_sym_SQUOTE_BSLASHv_SQUOTE] = ACTIONS(280),
    [aux_sym_char_token1] = ACTIONS(280),
    [aux_sym_char_token2] = ACTIONS(282),
    [anon_sym_LBRACK] = ACTIONS(284),
    [anon_sym_LBRACE] = ACTIONS(286),
    [anon_sym_SLASH] = ACTIONS(288),
    [anon_sym_Tuple_DOTnew] = ACTIONS(290),
    [anon_sym_BQUOTE] = ACTIONS(292),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(294),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(39),
    [anon_sym_AT] = ACTIONS(41),
    [anon_sym_AT_AT] = ACTIONS(43),
    [anon_sym___LINE__] = ACTIONS(296),
    [anon_sym___END_LINE__] = ACTIONS(296),
    [anon_sym___FILE__] = ACTIONS(296),
    [anon_sym___DIR__] = ACTIONS(296),
    [aux_sym_constant_token1] = ACTIONS(298),
    [anon_sym_class] = ACTIONS(300),
  },
  [38] = {
    [sym__expression] = STATE(214),
    [sym_bool] = STATE(214),
    [sym_float] = STATE(214),
    [sym_integer] = STATE(214),
    [sym_symbol] = STATE(214),
    [sym_char] = STATE(214),
    [sym_string] = STATE(214),
    [sym_array] = STATE(214),
    [sym_hash] = STATE(214),
    [sym_index_expression] = STATE(143),
    [sym_regex] = STATE(214),
    [sym_tuple] = STATE(214),
    [sym_namedTupleLiteral] = STATE(214),
    [sym_commandLiteral] = STATE(214),
    [sym_local_variable] = STATE(231),
    [sym_instance_variable] = STATE(231),
    [sym_class_variable] = STATE(231),
    [sym_constant] = STATE(72),
    [sym__variable] = STATE(231),
    [sym_assignment] = STATE(214),
    [sym_class_definition] = STATE(214),
    [sym_nil] = ACTIONS(304),
    [anon_sym_true] = ACTIONS(244),
    [anon_sym_false] = ACTIONS(244),
    [aux_sym_float_token1] = ACTIONS(161),
    [aux_sym_float_token2] = ACTIONS(163),
    [aux_sym_float_token3] = ACTIONS(163),
    [aux_sym_integer_token1] = ACTIONS(165),
    [aux_sym_integer_token2] = ACTIONS(165),
    [aux_sym_integer_token3] = ACTIONS(165),
    [aux_sym_integer_token4] = ACTIONS(167),
    [anon_sym_COLON] = ACTIONS(246),
    [anon_sym_DQUOTE] = ACTIONS(248),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHa_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHb_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHe_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHf_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHn_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHr_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHt_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHv_SQUOTE] = ACTIONS(173),
    [aux_sym_char_token1] = ACTIONS(173),
    [aux_sym_char_token2] = ACTIONS(175),
    [anon_sym_LBRACK] = ACTIONS(177),
    [anon_sym_LBRACE] = ACTIONS(179),
    [anon_sym_SLASH] = ACTIONS(183),
    [anon_sym_Tuple_DOTnew] = ACTIONS(185),
    [anon_sym_BQUOTE] = ACTIONS(187),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(189),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(39),
    [anon_sym_AT] = ACTIONS(41),
    [anon_sym_AT_AT] = ACTIONS(43),
    [anon_sym___LINE__] = ACTIONS(250),
    [anon_sym___END_LINE__] = ACTIONS(250),
    [anon_sym___FILE__] = ACTIONS(250),
    [anon_sym___DIR__] = ACTIONS(250),
    [aux_sym_constant_token1] = ACTIONS(193),
    [anon_sym_class] = ACTIONS(252),
  },
  [39] = {
    [sym__expression] = STATE(184),
    [sym_bool] = STATE(184),
    [sym_float] = STATE(184),
    [sym_integer] = STATE(184),
    [sym_symbol] = STATE(184),
    [sym_char] = STATE(184),
    [sym_string] = STATE(184),
    [sym_array] = STATE(184),
    [sym_hash] = STATE(184),
    [sym_index_expression] = STATE(142),
    [sym_regex] = STATE(184),
    [sym_tuple] = STATE(184),
    [sym_namedTupleLiteral] = STATE(184),
    [sym_commandLiteral] = STATE(184),
    [sym_local_variable] = STATE(223),
    [sym_instance_variable] = STATE(223),
    [sym_class_variable] = STATE(223),
    [sym_constant] = STATE(72),
    [sym__variable] = STATE(223),
    [sym_assignment] = STATE(184),
    [sym_class_definition] = STATE(184),
    [sym_nil] = ACTIONS(306),
    [anon_sym_true] = ACTIONS(244),
    [anon_sym_false] = ACTIONS(244),
    [aux_sym_float_token1] = ACTIONS(161),
    [aux_sym_float_token2] = ACTIONS(163),
    [aux_sym_float_token3] = ACTIONS(163),
    [aux_sym_integer_token1] = ACTIONS(165),
    [aux_sym_integer_token2] = ACTIONS(165),
    [aux_sym_integer_token3] = ACTIONS(165),
    [aux_sym_integer_token4] = ACTIONS(167),
    [anon_sym_COLON] = ACTIONS(258),
    [anon_sym_DQUOTE] = ACTIONS(260),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHa_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHb_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHe_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHf_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHn_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHr_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHt_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHv_SQUOTE] = ACTIONS(173),
    [aux_sym_char_token1] = ACTIONS(173),
    [aux_sym_char_token2] = ACTIONS(175),
    [anon_sym_LBRACK] = ACTIONS(177),
    [anon_sym_LBRACE] = ACTIONS(179),
    [anon_sym_SLASH] = ACTIONS(183),
    [anon_sym_Tuple_DOTnew] = ACTIONS(185),
    [anon_sym_BQUOTE] = ACTIONS(187),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(189),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(39),
    [anon_sym_AT] = ACTIONS(41),
    [anon_sym_AT_AT] = ACTIONS(43),
    [anon_sym___LINE__] = ACTIONS(250),
    [anon_sym___END_LINE__] = ACTIONS(250),
    [anon_sym___FILE__] = ACTIONS(250),
    [anon_sym___DIR__] = ACTIONS(250),
    [aux_sym_constant_token1] = ACTIONS(193),
    [anon_sym_class] = ACTIONS(252),
  },
  [40] = {
    [sym__expression] = STATE(257),
    [sym_bool] = STATE(257),
    [sym_float] = STATE(257),
    [sym_integer] = STATE(257),
    [sym_symbol] = STATE(257),
    [sym_char] = STATE(257),
    [sym_string] = STATE(257),
    [sym_array] = STATE(257),
    [sym_hash] = STATE(257),
    [sym_index_expression] = STATE(218),
    [sym_regex] = STATE(257),
    [sym_tuple] = STATE(257),
    [sym_namedTupleLiteral] = STATE(257),
    [sym_commandLiteral] = STATE(257),
    [sym_local_variable] = STATE(228),
    [sym_instance_variable] = STATE(228),
    [sym_class_variable] = STATE(228),
    [sym_constant] = STATE(72),
    [sym__variable] = STATE(228),
    [sym_assignment] = STATE(257),
    [sym_class_definition] = STATE(257),
    [sym_nil] = ACTIONS(308),
    [anon_sym_true] = ACTIONS(244),
    [anon_sym_false] = ACTIONS(244),
    [aux_sym_float_token1] = ACTIONS(161),
    [aux_sym_float_token2] = ACTIONS(163),
    [aux_sym_float_token3] = ACTIONS(163),
    [aux_sym_integer_token1] = ACTIONS(165),
    [aux_sym_integer_token2] = ACTIONS(165),
    [aux_sym_integer_token3] = ACTIONS(165),
    [aux_sym_integer_token4] = ACTIONS(167),
    [anon_sym_COLON] = ACTIONS(310),
    [anon_sym_DQUOTE] = ACTIONS(312),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHa_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHb_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHe_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHf_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHn_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHr_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHt_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHv_SQUOTE] = ACTIONS(173),
    [aux_sym_char_token1] = ACTIONS(173),
    [aux_sym_char_token2] = ACTIONS(175),
    [anon_sym_LBRACK] = ACTIONS(177),
    [anon_sym_LBRACE] = ACTIONS(179),
    [anon_sym_SLASH] = ACTIONS(183),
    [anon_sym_Tuple_DOTnew] = ACTIONS(185),
    [anon_sym_BQUOTE] = ACTIONS(187),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(189),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(39),
    [anon_sym_AT] = ACTIONS(41),
    [anon_sym_AT_AT] = ACTIONS(43),
    [anon_sym___LINE__] = ACTIONS(250),
    [anon_sym___END_LINE__] = ACTIONS(250),
    [anon_sym___FILE__] = ACTIONS(250),
    [anon_sym___DIR__] = ACTIONS(250),
    [aux_sym_constant_token1] = ACTIONS(193),
    [anon_sym_class] = ACTIONS(252),
  },
  [41] = {
    [sym__expression] = STATE(134),
    [sym_bool] = STATE(134),
    [sym_float] = STATE(134),
    [sym_integer] = STATE(134),
    [sym_symbol] = STATE(134),
    [sym_char] = STATE(134),
    [sym_string] = STATE(134),
    [sym_array] = STATE(134),
    [sym_hash] = STATE(134),
    [sym_index_expression] = STATE(142),
    [sym_regex] = STATE(134),
    [sym_tuple] = STATE(134),
    [sym_namedTupleLiteral] = STATE(134),
    [sym_commandLiteral] = STATE(134),
    [sym_local_variable] = STATE(223),
    [sym_instance_variable] = STATE(223),
    [sym_class_variable] = STATE(223),
    [sym_constant] = STATE(72),
    [sym__variable] = STATE(223),
    [sym_assignment] = STATE(134),
    [sym_class_definition] = STATE(134),
    [sym_nil] = ACTIONS(314),
    [anon_sym_true] = ACTIONS(244),
    [anon_sym_false] = ACTIONS(244),
    [aux_sym_float_token1] = ACTIONS(161),
    [aux_sym_float_token2] = ACTIONS(163),
    [aux_sym_float_token3] = ACTIONS(163),
    [aux_sym_integer_token1] = ACTIONS(165),
    [aux_sym_integer_token2] = ACTIONS(165),
    [aux_sym_integer_token3] = ACTIONS(165),
    [aux_sym_integer_token4] = ACTIONS(167),
    [anon_sym_COLON] = ACTIONS(258),
    [anon_sym_DQUOTE] = ACTIONS(260),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHa_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHb_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHe_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHf_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHn_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHr_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHt_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHv_SQUOTE] = ACTIONS(173),
    [aux_sym_char_token1] = ACTIONS(173),
    [aux_sym_char_token2] = ACTIONS(175),
    [anon_sym_LBRACK] = ACTIONS(177),
    [anon_sym_LBRACE] = ACTIONS(179),
    [anon_sym_SLASH] = ACTIONS(183),
    [anon_sym_Tuple_DOTnew] = ACTIONS(185),
    [anon_sym_BQUOTE] = ACTIONS(187),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(189),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(39),
    [anon_sym_AT] = ACTIONS(41),
    [anon_sym_AT_AT] = ACTIONS(43),
    [anon_sym___LINE__] = ACTIONS(250),
    [anon_sym___END_LINE__] = ACTIONS(250),
    [anon_sym___FILE__] = ACTIONS(250),
    [anon_sym___DIR__] = ACTIONS(250),
    [aux_sym_constant_token1] = ACTIONS(193),
    [anon_sym_class] = ACTIONS(252),
  },
  [42] = {
    [sym__expression] = STATE(134),
    [sym_bool] = STATE(134),
    [sym_float] = STATE(134),
    [sym_integer] = STATE(134),
    [sym_symbol] = STATE(134),
    [sym_char] = STATE(134),
    [sym_string] = STATE(134),
    [sym_array] = STATE(134),
    [sym_hash] = STATE(134),
    [sym_index_expression] = STATE(110),
    [sym_regex] = STATE(134),
    [sym_tuple] = STATE(134),
    [sym_namedTupleLiteral] = STATE(134),
    [sym_commandLiteral] = STATE(134),
    [sym_local_variable] = STATE(246),
    [sym_instance_variable] = STATE(246),
    [sym_class_variable] = STATE(246),
    [sym_constant] = STATE(72),
    [sym__variable] = STATE(246),
    [sym_assignment] = STATE(134),
    [sym_class_definition] = STATE(134),
    [sym_nil] = ACTIONS(314),
    [anon_sym_true] = ACTIONS(244),
    [anon_sym_false] = ACTIONS(244),
    [aux_sym_float_token1] = ACTIONS(161),
    [aux_sym_float_token2] = ACTIONS(163),
    [aux_sym_float_token3] = ACTIONS(163),
    [aux_sym_integer_token1] = ACTIONS(165),
    [aux_sym_integer_token2] = ACTIONS(165),
    [aux_sym_integer_token3] = ACTIONS(165),
    [aux_sym_integer_token4] = ACTIONS(167),
    [anon_sym_COLON] = ACTIONS(169),
    [anon_sym_DQUOTE] = ACTIONS(316),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHa_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHb_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHe_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHf_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHn_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHr_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHt_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHv_SQUOTE] = ACTIONS(173),
    [aux_sym_char_token1] = ACTIONS(173),
    [aux_sym_char_token2] = ACTIONS(175),
    [anon_sym_LBRACK] = ACTIONS(177),
    [anon_sym_LBRACE] = ACTIONS(179),
    [anon_sym_SLASH] = ACTIONS(183),
    [anon_sym_Tuple_DOTnew] = ACTIONS(185),
    [anon_sym_BQUOTE] = ACTIONS(187),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(189),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(39),
    [anon_sym_AT] = ACTIONS(41),
    [anon_sym_AT_AT] = ACTIONS(43),
    [anon_sym___LINE__] = ACTIONS(250),
    [anon_sym___END_LINE__] = ACTIONS(250),
    [anon_sym___FILE__] = ACTIONS(250),
    [anon_sym___DIR__] = ACTIONS(250),
    [aux_sym_constant_token1] = ACTIONS(193),
    [anon_sym_class] = ACTIONS(252),
  },
  [43] = {
    [sym__expression] = STATE(313),
    [sym_bool] = STATE(313),
    [sym_float] = STATE(313),
    [sym_integer] = STATE(313),
    [sym_symbol] = STATE(313),
    [sym_char] = STATE(313),
    [sym_string] = STATE(313),
    [sym_array] = STATE(313),
    [sym_hash] = STATE(313),
    [sym_index_expression] = STATE(250),
    [sym_regex] = STATE(313),
    [sym_tuple] = STATE(313),
    [sym_namedTupleLiteral] = STATE(313),
    [sym_commandLiteral] = STATE(313),
    [sym_local_variable] = STATE(237),
    [sym_instance_variable] = STATE(237),
    [sym_class_variable] = STATE(237),
    [sym_constant] = STATE(159),
    [sym__variable] = STATE(237),
    [sym_assignment] = STATE(313),
    [sym_class_definition] = STATE(313),
    [sym_nil] = ACTIONS(318),
    [anon_sym_true] = ACTIONS(266),
    [anon_sym_false] = ACTIONS(266),
    [aux_sym_float_token1] = ACTIONS(268),
    [aux_sym_float_token2] = ACTIONS(270),
    [aux_sym_float_token3] = ACTIONS(270),
    [aux_sym_integer_token1] = ACTIONS(272),
    [aux_sym_integer_token2] = ACTIONS(272),
    [aux_sym_integer_token3] = ACTIONS(272),
    [aux_sym_integer_token4] = ACTIONS(274),
    [anon_sym_COLON] = ACTIONS(276),
    [anon_sym_DQUOTE] = ACTIONS(278),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(280),
    [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = ACTIONS(280),
    [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = ACTIONS(280),
    [anon_sym_SQUOTE_BSLASHa_SQUOTE] = ACTIONS(280),
    [anon_sym_SQUOTE_BSLASHb_SQUOTE] = ACTIONS(280),
    [anon_sym_SQUOTE_BSLASHe_SQUOTE] = ACTIONS(280),
    [anon_sym_SQUOTE_BSLASHf_SQUOTE] = ACTIONS(280),
    [anon_sym_SQUOTE_BSLASHn_SQUOTE] = ACTIONS(280),
    [anon_sym_SQUOTE_BSLASHr_SQUOTE] = ACTIONS(280),
    [anon_sym_SQUOTE_BSLASHt_SQUOTE] = ACTIONS(280),
    [anon_sym_SQUOTE_BSLASHv_SQUOTE] = ACTIONS(280),
    [aux_sym_char_token1] = ACTIONS(280),
    [aux_sym_char_token2] = ACTIONS(282),
    [anon_sym_LBRACK] = ACTIONS(284),
    [anon_sym_LBRACE] = ACTIONS(286),
    [anon_sym_SLASH] = ACTIONS(288),
    [anon_sym_Tuple_DOTnew] = ACTIONS(290),
    [anon_sym_BQUOTE] = ACTIONS(292),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(294),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(39),
    [anon_sym_AT] = ACTIONS(41),
    [anon_sym_AT_AT] = ACTIONS(43),
    [anon_sym___LINE__] = ACTIONS(296),
    [anon_sym___END_LINE__] = ACTIONS(296),
    [anon_sym___FILE__] = ACTIONS(296),
    [anon_sym___DIR__] = ACTIONS(296),
    [aux_sym_constant_token1] = ACTIONS(298),
    [anon_sym_class] = ACTIONS(300),
  },
  [44] = {
    [sym__expression] = STATE(134),
    [sym_bool] = STATE(134),
    [sym_float] = STATE(134),
    [sym_integer] = STATE(134),
    [sym_symbol] = STATE(134),
    [sym_char] = STATE(134),
    [sym_string] = STATE(134),
    [sym_array] = STATE(134),
    [sym_hash] = STATE(134),
    [sym_index_expression] = STATE(218),
    [sym_regex] = STATE(134),
    [sym_tuple] = STATE(134),
    [sym_namedTupleLiteral] = STATE(134),
    [sym_commandLiteral] = STATE(134),
    [sym_local_variable] = STATE(228),
    [sym_instance_variable] = STATE(228),
    [sym_class_variable] = STATE(228),
    [sym_constant] = STATE(72),
    [sym__variable] = STATE(228),
    [sym_assignment] = STATE(134),
    [sym_class_definition] = STATE(134),
    [sym_nil] = ACTIONS(314),
    [anon_sym_true] = ACTIONS(244),
    [anon_sym_false] = ACTIONS(244),
    [aux_sym_float_token1] = ACTIONS(161),
    [aux_sym_float_token2] = ACTIONS(163),
    [aux_sym_float_token3] = ACTIONS(163),
    [aux_sym_integer_token1] = ACTIONS(165),
    [aux_sym_integer_token2] = ACTIONS(165),
    [aux_sym_integer_token3] = ACTIONS(165),
    [aux_sym_integer_token4] = ACTIONS(167),
    [anon_sym_COLON] = ACTIONS(310),
    [anon_sym_DQUOTE] = ACTIONS(312),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHa_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHb_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHe_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHf_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHn_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHr_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHt_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHv_SQUOTE] = ACTIONS(173),
    [aux_sym_char_token1] = ACTIONS(173),
    [aux_sym_char_token2] = ACTIONS(175),
    [anon_sym_LBRACK] = ACTIONS(177),
    [anon_sym_LBRACE] = ACTIONS(179),
    [anon_sym_SLASH] = ACTIONS(183),
    [anon_sym_Tuple_DOTnew] = ACTIONS(185),
    [anon_sym_BQUOTE] = ACTIONS(187),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(189),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(39),
    [anon_sym_AT] = ACTIONS(41),
    [anon_sym_AT_AT] = ACTIONS(43),
    [anon_sym___LINE__] = ACTIONS(250),
    [anon_sym___END_LINE__] = ACTIONS(250),
    [anon_sym___FILE__] = ACTIONS(250),
    [anon_sym___DIR__] = ACTIONS(250),
    [aux_sym_constant_token1] = ACTIONS(193),
    [anon_sym_class] = ACTIONS(252),
  },
  [45] = {
    [sym__expression] = STATE(201),
    [sym_bool] = STATE(201),
    [sym_float] = STATE(201),
    [sym_integer] = STATE(201),
    [sym_symbol] = STATE(201),
    [sym_char] = STATE(201),
    [sym_string] = STATE(201),
    [sym_array] = STATE(201),
    [sym_hash] = STATE(201),
    [sym_index_expression] = STATE(143),
    [sym_regex] = STATE(201),
    [sym_tuple] = STATE(201),
    [sym_namedTupleLiteral] = STATE(201),
    [sym_commandLiteral] = STATE(201),
    [sym_local_variable] = STATE(231),
    [sym_instance_variable] = STATE(231),
    [sym_class_variable] = STATE(231),
    [sym_constant] = STATE(72),
    [sym__variable] = STATE(231),
    [sym_assignment] = STATE(201),
    [sym_class_definition] = STATE(201),
    [sym_nil] = ACTIONS(320),
    [anon_sym_true] = ACTIONS(244),
    [anon_sym_false] = ACTIONS(244),
    [aux_sym_float_token1] = ACTIONS(161),
    [aux_sym_float_token2] = ACTIONS(163),
    [aux_sym_float_token3] = ACTIONS(163),
    [aux_sym_integer_token1] = ACTIONS(165),
    [aux_sym_integer_token2] = ACTIONS(165),
    [aux_sym_integer_token3] = ACTIONS(165),
    [aux_sym_integer_token4] = ACTIONS(167),
    [anon_sym_COLON] = ACTIONS(246),
    [anon_sym_DQUOTE] = ACTIONS(248),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHa_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHb_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHe_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHf_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHn_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHr_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHt_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHv_SQUOTE] = ACTIONS(173),
    [aux_sym_char_token1] = ACTIONS(173),
    [aux_sym_char_token2] = ACTIONS(175),
    [anon_sym_LBRACK] = ACTIONS(177),
    [anon_sym_LBRACE] = ACTIONS(179),
    [anon_sym_SLASH] = ACTIONS(183),
    [anon_sym_Tuple_DOTnew] = ACTIONS(185),
    [anon_sym_BQUOTE] = ACTIONS(187),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(189),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(39),
    [anon_sym_AT] = ACTIONS(41),
    [anon_sym_AT_AT] = ACTIONS(43),
    [anon_sym___LINE__] = ACTIONS(250),
    [anon_sym___END_LINE__] = ACTIONS(250),
    [anon_sym___FILE__] = ACTIONS(250),
    [anon_sym___DIR__] = ACTIONS(250),
    [aux_sym_constant_token1] = ACTIONS(193),
    [anon_sym_class] = ACTIONS(252),
  },
  [46] = {
    [sym__expression] = STATE(232),
    [sym_bool] = STATE(232),
    [sym_float] = STATE(232),
    [sym_integer] = STATE(232),
    [sym_symbol] = STATE(232),
    [sym_char] = STATE(232),
    [sym_string] = STATE(232),
    [sym_array] = STATE(232),
    [sym_hash] = STATE(232),
    [sym_index_expression] = STATE(146),
    [sym_regex] = STATE(232),
    [sym_tuple] = STATE(232),
    [sym_namedTupleLiteral] = STATE(232),
    [sym_commandLiteral] = STATE(232),
    [sym_local_variable] = STATE(242),
    [sym_instance_variable] = STATE(242),
    [sym_class_variable] = STATE(242),
    [sym_constant] = STATE(92),
    [sym__variable] = STATE(242),
    [sym_assignment] = STATE(232),
    [sym_class_definition] = STATE(232),
    [sym_nil] = ACTIONS(322),
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
    [anon_sym_class] = ACTIONS(49),
  },
  [47] = {
    [sym__expression] = STATE(141),
    [sym_bool] = STATE(141),
    [sym_float] = STATE(141),
    [sym_integer] = STATE(141),
    [sym_symbol] = STATE(141),
    [sym_char] = STATE(141),
    [sym_string] = STATE(141),
    [sym_array] = STATE(141),
    [sym_hash] = STATE(141),
    [sym_index_expression] = STATE(143),
    [sym_regex] = STATE(141),
    [sym_tuple] = STATE(141),
    [sym_namedTupleLiteral] = STATE(141),
    [sym_commandLiteral] = STATE(141),
    [sym_local_variable] = STATE(231),
    [sym_instance_variable] = STATE(231),
    [sym_class_variable] = STATE(231),
    [sym_constant] = STATE(72),
    [sym__variable] = STATE(231),
    [sym_assignment] = STATE(141),
    [sym_class_definition] = STATE(141),
    [sym_nil] = ACTIONS(324),
    [anon_sym_true] = ACTIONS(244),
    [anon_sym_false] = ACTIONS(244),
    [aux_sym_float_token1] = ACTIONS(161),
    [aux_sym_float_token2] = ACTIONS(163),
    [aux_sym_float_token3] = ACTIONS(163),
    [aux_sym_integer_token1] = ACTIONS(165),
    [aux_sym_integer_token2] = ACTIONS(165),
    [aux_sym_integer_token3] = ACTIONS(165),
    [aux_sym_integer_token4] = ACTIONS(167),
    [anon_sym_COLON] = ACTIONS(246),
    [anon_sym_DQUOTE] = ACTIONS(248),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHa_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHb_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHe_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHf_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHn_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHr_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHt_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHv_SQUOTE] = ACTIONS(173),
    [aux_sym_char_token1] = ACTIONS(173),
    [aux_sym_char_token2] = ACTIONS(175),
    [anon_sym_LBRACK] = ACTIONS(177),
    [anon_sym_LBRACE] = ACTIONS(179),
    [anon_sym_SLASH] = ACTIONS(183),
    [anon_sym_Tuple_DOTnew] = ACTIONS(185),
    [anon_sym_BQUOTE] = ACTIONS(187),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(189),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(39),
    [anon_sym_AT] = ACTIONS(41),
    [anon_sym_AT_AT] = ACTIONS(43),
    [anon_sym___LINE__] = ACTIONS(250),
    [anon_sym___END_LINE__] = ACTIONS(250),
    [anon_sym___FILE__] = ACTIONS(250),
    [anon_sym___DIR__] = ACTIONS(250),
    [aux_sym_constant_token1] = ACTIONS(193),
    [anon_sym_class] = ACTIONS(252),
  },
  [48] = {
    [sym__expression] = STATE(134),
    [sym_bool] = STATE(134),
    [sym_float] = STATE(134),
    [sym_integer] = STATE(134),
    [sym_symbol] = STATE(134),
    [sym_char] = STATE(134),
    [sym_string] = STATE(134),
    [sym_array] = STATE(134),
    [sym_hash] = STATE(134),
    [sym_index_expression] = STATE(143),
    [sym_regex] = STATE(134),
    [sym_tuple] = STATE(134),
    [sym_namedTupleLiteral] = STATE(134),
    [sym_commandLiteral] = STATE(134),
    [sym_local_variable] = STATE(231),
    [sym_instance_variable] = STATE(231),
    [sym_class_variable] = STATE(231),
    [sym_constant] = STATE(72),
    [sym__variable] = STATE(231),
    [sym_assignment] = STATE(134),
    [sym_class_definition] = STATE(134),
    [sym_nil] = ACTIONS(314),
    [anon_sym_true] = ACTIONS(244),
    [anon_sym_false] = ACTIONS(244),
    [aux_sym_float_token1] = ACTIONS(161),
    [aux_sym_float_token2] = ACTIONS(163),
    [aux_sym_float_token3] = ACTIONS(163),
    [aux_sym_integer_token1] = ACTIONS(165),
    [aux_sym_integer_token2] = ACTIONS(165),
    [aux_sym_integer_token3] = ACTIONS(165),
    [aux_sym_integer_token4] = ACTIONS(167),
    [anon_sym_COLON] = ACTIONS(246),
    [anon_sym_DQUOTE] = ACTIONS(248),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHa_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHb_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHe_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHf_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHn_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHr_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHt_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHv_SQUOTE] = ACTIONS(173),
    [aux_sym_char_token1] = ACTIONS(173),
    [aux_sym_char_token2] = ACTIONS(175),
    [anon_sym_LBRACK] = ACTIONS(177),
    [anon_sym_LBRACE] = ACTIONS(179),
    [anon_sym_SLASH] = ACTIONS(183),
    [anon_sym_Tuple_DOTnew] = ACTIONS(185),
    [anon_sym_BQUOTE] = ACTIONS(187),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(189),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(39),
    [anon_sym_AT] = ACTIONS(41),
    [anon_sym_AT_AT] = ACTIONS(43),
    [anon_sym___LINE__] = ACTIONS(250),
    [anon_sym___END_LINE__] = ACTIONS(250),
    [anon_sym___FILE__] = ACTIONS(250),
    [anon_sym___DIR__] = ACTIONS(250),
    [aux_sym_constant_token1] = ACTIONS(193),
    [anon_sym_class] = ACTIONS(252),
  },
  [49] = {
    [sym__expression] = STATE(178),
    [sym_bool] = STATE(178),
    [sym_float] = STATE(178),
    [sym_integer] = STATE(178),
    [sym_symbol] = STATE(178),
    [sym_char] = STATE(178),
    [sym_string] = STATE(178),
    [sym_array] = STATE(178),
    [sym_hash] = STATE(178),
    [sym_index_expression] = STATE(143),
    [sym_regex] = STATE(178),
    [sym_tuple] = STATE(178),
    [sym_namedTupleLiteral] = STATE(178),
    [sym_commandLiteral] = STATE(178),
    [sym_local_variable] = STATE(231),
    [sym_instance_variable] = STATE(231),
    [sym_class_variable] = STATE(231),
    [sym_constant] = STATE(72),
    [sym__variable] = STATE(231),
    [sym_assignment] = STATE(178),
    [sym_class_definition] = STATE(178),
    [sym_nil] = ACTIONS(326),
    [anon_sym_true] = ACTIONS(244),
    [anon_sym_false] = ACTIONS(244),
    [aux_sym_float_token1] = ACTIONS(161),
    [aux_sym_float_token2] = ACTIONS(163),
    [aux_sym_float_token3] = ACTIONS(163),
    [aux_sym_integer_token1] = ACTIONS(165),
    [aux_sym_integer_token2] = ACTIONS(165),
    [aux_sym_integer_token3] = ACTIONS(165),
    [aux_sym_integer_token4] = ACTIONS(167),
    [anon_sym_COLON] = ACTIONS(246),
    [anon_sym_DQUOTE] = ACTIONS(248),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHa_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHb_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHe_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHf_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHn_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHr_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHt_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHv_SQUOTE] = ACTIONS(173),
    [aux_sym_char_token1] = ACTIONS(173),
    [aux_sym_char_token2] = ACTIONS(175),
    [anon_sym_LBRACK] = ACTIONS(177),
    [anon_sym_LBRACE] = ACTIONS(179),
    [anon_sym_SLASH] = ACTIONS(183),
    [anon_sym_Tuple_DOTnew] = ACTIONS(185),
    [anon_sym_BQUOTE] = ACTIONS(187),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(189),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(39),
    [anon_sym_AT] = ACTIONS(41),
    [anon_sym_AT_AT] = ACTIONS(43),
    [anon_sym___LINE__] = ACTIONS(250),
    [anon_sym___END_LINE__] = ACTIONS(250),
    [anon_sym___FILE__] = ACTIONS(250),
    [anon_sym___DIR__] = ACTIONS(250),
    [aux_sym_constant_token1] = ACTIONS(193),
    [anon_sym_class] = ACTIONS(252),
  },
  [50] = {
    [sym__expression] = STATE(318),
    [sym_bool] = STATE(318),
    [sym_float] = STATE(318),
    [sym_integer] = STATE(318),
    [sym_symbol] = STATE(318),
    [sym_char] = STATE(318),
    [sym_string] = STATE(318),
    [sym_array] = STATE(318),
    [sym_hash] = STATE(318),
    [sym_index_expression] = STATE(250),
    [sym_regex] = STATE(318),
    [sym_tuple] = STATE(318),
    [sym_namedTupleLiteral] = STATE(318),
    [sym_commandLiteral] = STATE(318),
    [sym_local_variable] = STATE(237),
    [sym_instance_variable] = STATE(237),
    [sym_class_variable] = STATE(237),
    [sym_constant] = STATE(159),
    [sym__variable] = STATE(237),
    [sym_assignment] = STATE(318),
    [sym_class_definition] = STATE(318),
    [sym_nil] = ACTIONS(328),
    [anon_sym_true] = ACTIONS(266),
    [anon_sym_false] = ACTIONS(266),
    [aux_sym_float_token1] = ACTIONS(268),
    [aux_sym_float_token2] = ACTIONS(270),
    [aux_sym_float_token3] = ACTIONS(270),
    [aux_sym_integer_token1] = ACTIONS(272),
    [aux_sym_integer_token2] = ACTIONS(272),
    [aux_sym_integer_token3] = ACTIONS(272),
    [aux_sym_integer_token4] = ACTIONS(274),
    [anon_sym_COLON] = ACTIONS(276),
    [anon_sym_DQUOTE] = ACTIONS(278),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(280),
    [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = ACTIONS(280),
    [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = ACTIONS(280),
    [anon_sym_SQUOTE_BSLASHa_SQUOTE] = ACTIONS(280),
    [anon_sym_SQUOTE_BSLASHb_SQUOTE] = ACTIONS(280),
    [anon_sym_SQUOTE_BSLASHe_SQUOTE] = ACTIONS(280),
    [anon_sym_SQUOTE_BSLASHf_SQUOTE] = ACTIONS(280),
    [anon_sym_SQUOTE_BSLASHn_SQUOTE] = ACTIONS(280),
    [anon_sym_SQUOTE_BSLASHr_SQUOTE] = ACTIONS(280),
    [anon_sym_SQUOTE_BSLASHt_SQUOTE] = ACTIONS(280),
    [anon_sym_SQUOTE_BSLASHv_SQUOTE] = ACTIONS(280),
    [aux_sym_char_token1] = ACTIONS(280),
    [aux_sym_char_token2] = ACTIONS(282),
    [anon_sym_LBRACK] = ACTIONS(284),
    [anon_sym_LBRACE] = ACTIONS(286),
    [anon_sym_SLASH] = ACTIONS(288),
    [anon_sym_Tuple_DOTnew] = ACTIONS(290),
    [anon_sym_BQUOTE] = ACTIONS(292),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(294),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(39),
    [anon_sym_AT] = ACTIONS(41),
    [anon_sym_AT_AT] = ACTIONS(43),
    [anon_sym___LINE__] = ACTIONS(296),
    [anon_sym___END_LINE__] = ACTIONS(296),
    [anon_sym___FILE__] = ACTIONS(296),
    [anon_sym___DIR__] = ACTIONS(296),
    [aux_sym_constant_token1] = ACTIONS(298),
    [anon_sym_class] = ACTIONS(300),
  },
  [51] = {
    [sym__expression] = STATE(238),
    [sym_bool] = STATE(238),
    [sym_float] = STATE(238),
    [sym_integer] = STATE(238),
    [sym_symbol] = STATE(238),
    [sym_char] = STATE(238),
    [sym_string] = STATE(238),
    [sym_array] = STATE(238),
    [sym_hash] = STATE(238),
    [sym_index_expression] = STATE(143),
    [sym_regex] = STATE(238),
    [sym_tuple] = STATE(238),
    [sym_namedTupleLiteral] = STATE(238),
    [sym_commandLiteral] = STATE(238),
    [sym_local_variable] = STATE(231),
    [sym_instance_variable] = STATE(231),
    [sym_class_variable] = STATE(231),
    [sym_constant] = STATE(72),
    [sym__variable] = STATE(231),
    [sym_assignment] = STATE(238),
    [sym_class_definition] = STATE(238),
    [sym_nil] = ACTIONS(330),
    [anon_sym_true] = ACTIONS(244),
    [anon_sym_false] = ACTIONS(244),
    [aux_sym_float_token1] = ACTIONS(161),
    [aux_sym_float_token2] = ACTIONS(163),
    [aux_sym_float_token3] = ACTIONS(163),
    [aux_sym_integer_token1] = ACTIONS(165),
    [aux_sym_integer_token2] = ACTIONS(165),
    [aux_sym_integer_token3] = ACTIONS(165),
    [aux_sym_integer_token4] = ACTIONS(167),
    [anon_sym_COLON] = ACTIONS(246),
    [anon_sym_DQUOTE] = ACTIONS(248),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHa_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHb_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHe_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHf_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHn_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHr_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHt_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHv_SQUOTE] = ACTIONS(173),
    [aux_sym_char_token1] = ACTIONS(173),
    [aux_sym_char_token2] = ACTIONS(175),
    [anon_sym_LBRACK] = ACTIONS(177),
    [anon_sym_LBRACE] = ACTIONS(179),
    [anon_sym_SLASH] = ACTIONS(183),
    [anon_sym_Tuple_DOTnew] = ACTIONS(185),
    [anon_sym_BQUOTE] = ACTIONS(187),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(189),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(39),
    [anon_sym_AT] = ACTIONS(41),
    [anon_sym_AT_AT] = ACTIONS(43),
    [anon_sym___LINE__] = ACTIONS(250),
    [anon_sym___END_LINE__] = ACTIONS(250),
    [anon_sym___FILE__] = ACTIONS(250),
    [anon_sym___DIR__] = ACTIONS(250),
    [aux_sym_constant_token1] = ACTIONS(193),
    [anon_sym_class] = ACTIONS(252),
  },
  [52] = {
    [sym__expression] = STATE(213),
    [sym_bool] = STATE(213),
    [sym_float] = STATE(213),
    [sym_integer] = STATE(213),
    [sym_symbol] = STATE(213),
    [sym_char] = STATE(213),
    [sym_string] = STATE(213),
    [sym_array] = STATE(213),
    [sym_hash] = STATE(213),
    [sym_index_expression] = STATE(142),
    [sym_regex] = STATE(213),
    [sym_tuple] = STATE(213),
    [sym_namedTupleLiteral] = STATE(213),
    [sym_commandLiteral] = STATE(213),
    [sym_local_variable] = STATE(223),
    [sym_instance_variable] = STATE(223),
    [sym_class_variable] = STATE(223),
    [sym_constant] = STATE(72),
    [sym__variable] = STATE(223),
    [sym_assignment] = STATE(213),
    [sym_class_definition] = STATE(213),
    [sym_nil] = ACTIONS(332),
    [anon_sym_true] = ACTIONS(244),
    [anon_sym_false] = ACTIONS(244),
    [aux_sym_float_token1] = ACTIONS(161),
    [aux_sym_float_token2] = ACTIONS(163),
    [aux_sym_float_token3] = ACTIONS(163),
    [aux_sym_integer_token1] = ACTIONS(165),
    [aux_sym_integer_token2] = ACTIONS(165),
    [aux_sym_integer_token3] = ACTIONS(165),
    [aux_sym_integer_token4] = ACTIONS(167),
    [anon_sym_COLON] = ACTIONS(258),
    [anon_sym_DQUOTE] = ACTIONS(260),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHa_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHb_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHe_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHf_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHn_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHr_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHt_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHv_SQUOTE] = ACTIONS(173),
    [aux_sym_char_token1] = ACTIONS(173),
    [aux_sym_char_token2] = ACTIONS(175),
    [anon_sym_LBRACK] = ACTIONS(177),
    [anon_sym_LBRACE] = ACTIONS(179),
    [anon_sym_SLASH] = ACTIONS(183),
    [anon_sym_Tuple_DOTnew] = ACTIONS(185),
    [anon_sym_BQUOTE] = ACTIONS(187),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(189),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(39),
    [anon_sym_AT] = ACTIONS(41),
    [anon_sym_AT_AT] = ACTIONS(43),
    [anon_sym___LINE__] = ACTIONS(250),
    [anon_sym___END_LINE__] = ACTIONS(250),
    [anon_sym___FILE__] = ACTIONS(250),
    [anon_sym___DIR__] = ACTIONS(250),
    [aux_sym_constant_token1] = ACTIONS(193),
    [anon_sym_class] = ACTIONS(252),
  },
  [53] = {
    [sym__expression] = STATE(226),
    [sym_bool] = STATE(226),
    [sym_float] = STATE(226),
    [sym_integer] = STATE(226),
    [sym_symbol] = STATE(226),
    [sym_char] = STATE(226),
    [sym_string] = STATE(226),
    [sym_array] = STATE(226),
    [sym_hash] = STATE(226),
    [sym_index_expression] = STATE(143),
    [sym_regex] = STATE(226),
    [sym_tuple] = STATE(226),
    [sym_namedTupleLiteral] = STATE(226),
    [sym_commandLiteral] = STATE(226),
    [sym_local_variable] = STATE(231),
    [sym_instance_variable] = STATE(231),
    [sym_class_variable] = STATE(231),
    [sym_constant] = STATE(72),
    [sym__variable] = STATE(231),
    [sym_assignment] = STATE(226),
    [sym_class_definition] = STATE(226),
    [sym_nil] = ACTIONS(334),
    [anon_sym_true] = ACTIONS(244),
    [anon_sym_false] = ACTIONS(244),
    [aux_sym_float_token1] = ACTIONS(161),
    [aux_sym_float_token2] = ACTIONS(163),
    [aux_sym_float_token3] = ACTIONS(163),
    [aux_sym_integer_token1] = ACTIONS(165),
    [aux_sym_integer_token2] = ACTIONS(165),
    [aux_sym_integer_token3] = ACTIONS(165),
    [aux_sym_integer_token4] = ACTIONS(167),
    [anon_sym_COLON] = ACTIONS(246),
    [anon_sym_DQUOTE] = ACTIONS(248),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHa_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHb_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHe_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHf_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHn_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHr_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHt_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHv_SQUOTE] = ACTIONS(173),
    [aux_sym_char_token1] = ACTIONS(173),
    [aux_sym_char_token2] = ACTIONS(175),
    [anon_sym_LBRACK] = ACTIONS(177),
    [anon_sym_LBRACE] = ACTIONS(179),
    [anon_sym_SLASH] = ACTIONS(183),
    [anon_sym_Tuple_DOTnew] = ACTIONS(185),
    [anon_sym_BQUOTE] = ACTIONS(187),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(189),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(39),
    [anon_sym_AT] = ACTIONS(41),
    [anon_sym_AT_AT] = ACTIONS(43),
    [anon_sym___LINE__] = ACTIONS(250),
    [anon_sym___END_LINE__] = ACTIONS(250),
    [anon_sym___FILE__] = ACTIONS(250),
    [anon_sym___DIR__] = ACTIONS(250),
    [aux_sym_constant_token1] = ACTIONS(193),
    [anon_sym_class] = ACTIONS(252),
  },
  [54] = {
    [sym__expression] = STATE(197),
    [sym_bool] = STATE(197),
    [sym_float] = STATE(197),
    [sym_integer] = STATE(197),
    [sym_symbol] = STATE(197),
    [sym_char] = STATE(197),
    [sym_string] = STATE(197),
    [sym_array] = STATE(197),
    [sym_hash] = STATE(197),
    [sym_index_expression] = STATE(142),
    [sym_regex] = STATE(197),
    [sym_tuple] = STATE(197),
    [sym_namedTupleLiteral] = STATE(197),
    [sym_commandLiteral] = STATE(197),
    [sym_local_variable] = STATE(223),
    [sym_instance_variable] = STATE(223),
    [sym_class_variable] = STATE(223),
    [sym_constant] = STATE(72),
    [sym__variable] = STATE(223),
    [sym_assignment] = STATE(197),
    [sym_class_definition] = STATE(197),
    [sym_nil] = ACTIONS(242),
    [anon_sym_true] = ACTIONS(244),
    [anon_sym_false] = ACTIONS(244),
    [aux_sym_float_token1] = ACTIONS(161),
    [aux_sym_float_token2] = ACTIONS(163),
    [aux_sym_float_token3] = ACTIONS(163),
    [aux_sym_integer_token1] = ACTIONS(165),
    [aux_sym_integer_token2] = ACTIONS(165),
    [aux_sym_integer_token3] = ACTIONS(165),
    [aux_sym_integer_token4] = ACTIONS(167),
    [anon_sym_COLON] = ACTIONS(258),
    [anon_sym_DQUOTE] = ACTIONS(260),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHa_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHb_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHe_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHf_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHn_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHr_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHt_SQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_BSLASHv_SQUOTE] = ACTIONS(173),
    [aux_sym_char_token1] = ACTIONS(173),
    [aux_sym_char_token2] = ACTIONS(175),
    [anon_sym_LBRACK] = ACTIONS(177),
    [anon_sym_LBRACE] = ACTIONS(179),
    [anon_sym_SLASH] = ACTIONS(183),
    [anon_sym_Tuple_DOTnew] = ACTIONS(185),
    [anon_sym_BQUOTE] = ACTIONS(187),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(189),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(39),
    [anon_sym_AT] = ACTIONS(41),
    [anon_sym_AT_AT] = ACTIONS(43),
    [anon_sym___LINE__] = ACTIONS(250),
    [anon_sym___END_LINE__] = ACTIONS(250),
    [anon_sym___FILE__] = ACTIONS(250),
    [anon_sym___DIR__] = ACTIONS(250),
    [aux_sym_constant_token1] = ACTIONS(193),
    [anon_sym_class] = ACTIONS(252),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 1,
      aux_sym_identifier_token1,
    ACTIONS(338), 16,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      aux_sym_float_token2,
      aux_sym_float_token3,
      aux_sym_integer_token4,
      aux_sym_char_token2,
      aux_sym_local_variable_token1,
      anon_sym_AT,
      anon_sym___LINE__,
      anon_sym___END_LINE__,
      anon_sym___FILE__,
      anon_sym___DIR__,
      aux_sym_constant_token1,
      anon_sym_class,
      anon_sym_end,
    ACTIONS(340), 27,
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
      anon_sym_LPAREN,
      anon_sym_LT,
  [54] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 7,
      aux_sym_float_token2,
      aux_sym_float_token3,
      aux_sym_integer_token4,
      aux_sym_char_token2,
      aux_sym_local_variable_token1,
      anon_sym_AT,
      aux_sym_constant_token1,
    ACTIONS(340), 36,
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
      anon_sym_class,
      anon_sym_LPAREN,
      anon_sym_LT,
      anon_sym_end,
  [105] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 7,
      aux_sym_float_token2,
      aux_sym_float_token3,
      aux_sym_integer_token4,
      aux_sym_char_token2,
      aux_sym_local_variable_token1,
      anon_sym_AT,
      aux_sym_constant_token1,
    ACTIONS(342), 36,
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
      anon_sym_class,
      anon_sym_LPAREN,
      anon_sym_LT,
      anon_sym_end,
  [156] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 7,
      aux_sym_float_token2,
      aux_sym_float_token3,
      aux_sym_integer_token4,
      aux_sym_char_token2,
      aux_sym_local_variable_token1,
      anon_sym_AT,
      aux_sym_constant_token1,
    ACTIONS(346), 34,
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
      anon_sym_class,
      anon_sym_end,
  [205] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 7,
      aux_sym_float_token2,
      aux_sym_float_token3,
      aux_sym_integer_token4,
      aux_sym_char_token2,
      aux_sym_local_variable_token1,
      anon_sym_AT,
      aux_sym_constant_token1,
    ACTIONS(346), 34,
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
      anon_sym_class,
  [254] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 1,
      anon_sym_DQUOTE,
    STATE(121), 1,
      sym__operator,
    ACTIONS(354), 7,
      anon_sym_LT,
      anon_sym_STAR,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_LBRACK_RBRACK,
      anon_sym_BANG,
    ACTIONS(350), 20,
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
  [295] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 1,
      anon_sym_DQUOTE,
    STATE(243), 1,
      sym__operator,
    ACTIONS(360), 7,
      anon_sym_LT,
      anon_sym_STAR,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_LBRACK_RBRACK,
      anon_sym_BANG,
    ACTIONS(356), 20,
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
  [336] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 1,
      anon_sym_DQUOTE,
    STATE(121), 1,
      sym__operator,
    ACTIONS(354), 7,
      anon_sym_LT,
      anon_sym_STAR,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_LBRACK_RBRACK,
      anon_sym_BANG,
    ACTIONS(350), 20,
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
  [377] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 1,
      anon_sym_DQUOTE,
    STATE(273), 1,
      sym__operator,
    ACTIONS(368), 7,
      anon_sym_LT,
      anon_sym_STAR,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_LBRACK_RBRACK,
      anon_sym_BANG,
    ACTIONS(364), 20,
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
  [418] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      anon_sym_DQUOTE,
    STATE(121), 1,
      sym__operator,
    ACTIONS(354), 7,
      anon_sym_LT,
      anon_sym_STAR,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_LBRACK_RBRACK,
      anon_sym_BANG,
    ACTIONS(350), 20,
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
  [459] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      anon_sym_DQUOTE,
    STATE(121), 1,
      sym__operator,
    ACTIONS(354), 7,
      anon_sym_LT,
      anon_sym_STAR,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_LBRACK_RBRACK,
      anon_sym_BANG,
    ACTIONS(350), 20,
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
  [500] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 1,
      anon_sym_EQ,
    ACTIONS(374), 1,
      aux_sym_identifier_token1,
    ACTIONS(340), 6,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
      anon_sym_LBRACK2,
      anon_sym_RPAREN,
  [518] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 1,
      anon_sym_EQ,
    ACTIONS(340), 6,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
      anon_sym_LBRACK2,
      anon_sym_RPAREN,
  [533] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      anon_sym_EQ,
    ACTIONS(342), 6,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
      anon_sym_LBRACK2,
      anon_sym_RPAREN,
  [548] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 1,
      aux_sym_constant_token1,
    STATE(307), 1,
      sym_constant,
    ACTIONS(250), 4,
      anon_sym___LINE__,
      anon_sym___END_LINE__,
      anon_sym___FILE__,
      anon_sym___DIR__,
  [564] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 1,
      aux_sym_constant_token1,
    STATE(291), 1,
      sym_constant,
    ACTIONS(250), 4,
      anon_sym___LINE__,
      anon_sym___END_LINE__,
      anon_sym___FILE__,
      anon_sym___DIR__,
  [580] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 1,
      aux_sym_constant_token1,
    STATE(21), 1,
      sym_constant,
    ACTIONS(378), 4,
      anon_sym___LINE__,
      anon_sym___END_LINE__,
      anon_sym___FILE__,
      anon_sym___DIR__,
  [596] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      anon_sym_LBRACK2,
    ACTIONS(386), 1,
      anon_sym_EQ,
    ACTIONS(382), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [612] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 1,
      aux_sym_constant_token1,
    STATE(2), 1,
      sym_constant,
    ACTIONS(378), 4,
      anon_sym___LINE__,
      anon_sym___END_LINE__,
      anon_sym___FILE__,
      anon_sym___DIR__,
  [628] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 1,
      aux_sym_constant_token1,
    STATE(30), 1,
      sym_constant,
    ACTIONS(378), 4,
      anon_sym___LINE__,
      anon_sym___END_LINE__,
      anon_sym___FILE__,
      anon_sym___DIR__,
  [644] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 1,
      aux_sym_constant_token1,
    STATE(16), 1,
      sym_constant,
    ACTIONS(378), 4,
      anon_sym___LINE__,
      anon_sym___END_LINE__,
      anon_sym___FILE__,
      anon_sym___DIR__,
  [660] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 1,
      aux_sym_constant_token1,
    STATE(4), 1,
      sym_constant,
    ACTIONS(378), 4,
      anon_sym___LINE__,
      anon_sym___END_LINE__,
      anon_sym___FILE__,
      anon_sym___DIR__,
  [676] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 1,
      aux_sym_constant_token1,
    STATE(14), 1,
      sym_constant,
    ACTIONS(378), 4,
      anon_sym___LINE__,
      anon_sym___END_LINE__,
      anon_sym___FILE__,
      anon_sym___DIR__,
  [692] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 1,
      aux_sym_constant_token1,
    STATE(12), 1,
      sym_constant,
    ACTIONS(378), 4,
      anon_sym___LINE__,
      anon_sym___END_LINE__,
      anon_sym___FILE__,
      anon_sym___DIR__,
  [708] = 3,
    ACTIONS(392), 1,
      sym_comment,
    ACTIONS(390), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
    ACTIONS(388), 4,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [722] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 1,
      aux_sym_constant_token1,
    STATE(27), 1,
      sym_constant,
    ACTIONS(378), 4,
      anon_sym___LINE__,
      anon_sym___END_LINE__,
      anon_sym___FILE__,
      anon_sym___DIR__,
  [738] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 1,
      aux_sym_constant_token1,
    STATE(325), 1,
      sym_constant,
    ACTIONS(250), 4,
      anon_sym___LINE__,
      anon_sym___END_LINE__,
      anon_sym___FILE__,
      anon_sym___DIR__,
  [754] = 3,
    ACTIONS(392), 1,
      sym_comment,
    ACTIONS(390), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
    ACTIONS(394), 4,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [768] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 1,
      aux_sym_constant_token1,
    STATE(3), 1,
      sym_constant,
    ACTIONS(378), 4,
      anon_sym___LINE__,
      anon_sym___END_LINE__,
      anon_sym___FILE__,
      anon_sym___DIR__,
  [784] = 3,
    ACTIONS(392), 1,
      sym_comment,
    ACTIONS(390), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
    ACTIONS(394), 3,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [797] = 3,
    ACTIONS(392), 1,
      sym_comment,
    ACTIONS(390), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
    ACTIONS(388), 3,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [810] = 3,
    ACTIONS(392), 1,
      sym_comment,
    ACTIONS(390), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
    ACTIONS(396), 3,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [823] = 4,
    ACTIONS(392), 1,
      sym_comment,
    ACTIONS(398), 1,
      aux_sym_identifier_token1,
    ACTIONS(338), 2,
      anon_sym_SEMI,
      anon_sym_EQ,
    ACTIONS(340), 2,
      aux_sym__statement_token1,
      anon_sym_LBRACK2,
  [838] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(402), 1,
      anon_sym_EQ,
    ACTIONS(400), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [851] = 3,
    ACTIONS(392), 1,
      sym_comment,
    ACTIONS(390), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
    ACTIONS(404), 3,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [864] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(406), 1,
      aux_sym_identifier_token1,
    ACTIONS(340), 3,
      anon_sym_LBRACK2,
      anon_sym_RBRACK2,
      anon_sym_EQ,
  [876] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      anon_sym_COLON,
    ACTIONS(382), 3,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [888] = 5,
    ACTIONS(382), 1,
      aux_sym__statement_token1,
    ACTIONS(384), 1,
      anon_sym_LBRACK2,
    ACTIONS(386), 1,
      anon_sym_EQ,
    ACTIONS(392), 1,
      sym_comment,
    ACTIONS(410), 1,
      anon_sym_SEMI,
  [904] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 1,
      aux_sym_identifier_token1,
    ACTIONS(414), 1,
      anon_sym_DQUOTE,
    STATE(275), 2,
      sym_identifier,
      sym_string,
  [918] = 3,
    ACTIONS(392), 1,
      sym_comment,
    ACTIONS(388), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(390), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
  [930] = 3,
    ACTIONS(392), 1,
      sym_comment,
    ACTIONS(390), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
    ACTIONS(396), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [942] = 3,
    ACTIONS(392), 1,
      sym_comment,
    ACTIONS(390), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
    ACTIONS(394), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [954] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [964] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [974] = 3,
    ACTIONS(392), 1,
      sym_comment,
    ACTIONS(390), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
    ACTIONS(404), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [986] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [996] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 1,
      anon_sym_COMMA,
    ACTIONS(424), 1,
      anon_sym_EQ_GT,
    ACTIONS(426), 1,
      anon_sym_RBRACE,
    STATE(207), 1,
      aux_sym_array_repeat1,
  [1012] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [1022] = 3,
    ACTIONS(392), 1,
      sym_comment,
    ACTIONS(390), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
    ACTIONS(404), 2,
      anon_sym_SEMI,
      aux_sym__statement_token1,
  [1034] = 3,
    ACTIONS(392), 1,
      sym_comment,
    ACTIONS(338), 2,
      anon_sym_SEMI,
      anon_sym_EQ,
    ACTIONS(340), 2,
      aux_sym__statement_token1,
      anon_sym_LBRACK2,
  [1046] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 1,
      anon_sym_COMMA,
    ACTIONS(430), 1,
      anon_sym_EQ_GT,
    ACTIONS(432), 1,
      anon_sym_RBRACE,
    STATE(181), 1,
      aux_sym_array_repeat1,
  [1062] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(434), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [1072] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(436), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [1082] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(438), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [1092] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [1102] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 1,
      anon_sym_EQ,
    ACTIONS(382), 3,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [1114] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [1124] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [1134] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [1144] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [1154] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [1164] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [1174] = 3,
    ACTIONS(392), 1,
      sym_comment,
    ACTIONS(390), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
    ACTIONS(394), 2,
      anon_sym_SEMI,
      aux_sym__statement_token1,
  [1186] = 3,
    ACTIONS(392), 1,
      sym_comment,
    ACTIONS(390), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
    ACTIONS(396), 2,
      anon_sym_SEMI,
      aux_sym__statement_token1,
  [1198] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [1208] = 3,
    ACTIONS(392), 1,
      sym_comment,
    ACTIONS(342), 2,
      aux_sym__statement_token1,
      anon_sym_LBRACK2,
    ACTIONS(344), 2,
      anon_sym_SEMI,
      anon_sym_EQ,
  [1220] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [1230] = 3,
    ACTIONS(392), 1,
      sym_comment,
    ACTIONS(388), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(390), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
  [1242] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(460), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [1252] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      anon_sym_COLON,
    ACTIONS(382), 3,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [1264] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 1,
      anon_sym_COMMA,
    ACTIONS(464), 1,
      anon_sym_EQ_GT,
    ACTIONS(466), 1,
      anon_sym_RBRACE,
    STATE(180), 1,
      aux_sym_array_repeat1,
  [1280] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(468), 1,
      anon_sym_COLON,
    ACTIONS(382), 3,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [1292] = 3,
    ACTIONS(392), 1,
      sym_comment,
    ACTIONS(390), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
    ACTIONS(396), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1304] = 3,
    ACTIONS(392), 1,
      sym_comment,
    ACTIONS(390), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
    ACTIONS(394), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1316] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [1326] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [1336] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [1346] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [1356] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(478), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [1366] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [1376] = 3,
    ACTIONS(392), 1,
      sym_comment,
    ACTIONS(390), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
    ACTIONS(404), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1388] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [1398] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(484), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [1408] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [1418] = 3,
    ACTIONS(392), 1,
      sym_comment,
    ACTIONS(388), 2,
      anon_sym_SEMI,
      aux_sym__statement_token1,
    ACTIONS(390), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
  [1430] = 3,
    ACTIONS(392), 1,
      sym_comment,
    ACTIONS(400), 1,
      aux_sym__statement_token1,
    ACTIONS(402), 2,
      anon_sym_SEMI,
      anon_sym_EQ,
  [1441] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 1,
      anon_sym_COMMA,
    ACTIONS(490), 1,
      anon_sym_RBRACE,
    STATE(210), 1,
      aux_sym_hash_repeat1,
  [1454] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(492), 1,
      anon_sym_EQ,
    ACTIONS(382), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1465] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(494), 1,
      anon_sym_EQ,
    ACTIONS(382), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1476] = 4,
    ACTIONS(392), 1,
      sym_comment,
    ACTIONS(496), 1,
      anon_sym_DQUOTE,
    ACTIONS(498), 1,
      aux_sym_symbol_token1,
    STATE(148), 1,
      aux_sym_symbol_repeat1,
  [1489] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      aux_sym_identifier_token1,
    ACTIONS(502), 2,
      anon_sym_LBRACK2,
      anon_sym_EQ,
  [1500] = 4,
    ACTIONS(382), 1,
      aux_sym__statement_token1,
    ACTIONS(392), 1,
      sym_comment,
    ACTIONS(410), 1,
      anon_sym_SEMI,
    ACTIONS(504), 1,
      anon_sym_EQ,
  [1513] = 4,
    ACTIONS(392), 1,
      sym_comment,
    ACTIONS(506), 1,
      anon_sym_DQUOTE,
    ACTIONS(508), 1,
      aux_sym_symbol_token1,
    STATE(173), 1,
      aux_sym_symbol_repeat1,
  [1526] = 4,
    ACTIONS(392), 1,
      sym_comment,
    ACTIONS(510), 1,
      anon_sym_DQUOTE,
    ACTIONS(512), 1,
      aux_sym_symbol_token1,
    STATE(174), 1,
      aux_sym_symbol_repeat1,
  [1539] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(514), 1,
      anon_sym_COMMA,
    ACTIONS(516), 1,
      anon_sym_RBRACK,
    STATE(175), 1,
      aux_sym_array_repeat1,
  [1552] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(518), 1,
      anon_sym_COMMA,
    ACTIONS(521), 1,
      anon_sym_RBRACE,
    STATE(150), 1,
      aux_sym_namedTupleLiteral_repeat1,
  [1565] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 1,
      anon_sym_COMMA,
    ACTIONS(526), 1,
      anon_sym_RBRACE,
    STATE(151), 1,
      aux_sym_array_repeat1,
  [1578] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 1,
      aux_sym_identifier_token1,
    ACTIONS(530), 2,
      anon_sym_LBRACK2,
      anon_sym_EQ,
  [1589] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      aux_sym_identifier_token1,
    ACTIONS(534), 2,
      anon_sym_LBRACK2,
      anon_sym_EQ,
  [1600] = 4,
    ACTIONS(392), 1,
      sym_comment,
    ACTIONS(512), 1,
      aux_sym_symbol_token1,
    ACTIONS(536), 1,
      anon_sym_DQUOTE,
    STATE(174), 1,
      aux_sym_symbol_repeat1,
  [1613] = 4,
    ACTIONS(392), 1,
      sym_comment,
    ACTIONS(538), 1,
      anon_sym_DQUOTE,
    ACTIONS(540), 1,
      aux_sym_symbol_token1,
    STATE(154), 1,
      aux_sym_symbol_repeat1,
  [1626] = 4,
    ACTIONS(392), 1,
      sym_comment,
    ACTIONS(512), 1,
      aux_sym_symbol_token1,
    ACTIONS(542), 1,
      anon_sym_DQUOTE,
    STATE(174), 1,
      aux_sym_symbol_repeat1,
  [1639] = 4,
    ACTIONS(392), 1,
      sym_comment,
    ACTIONS(544), 1,
      anon_sym_DQUOTE,
    ACTIONS(546), 1,
      aux_sym_symbol_token1,
    STATE(156), 1,
      aux_sym_symbol_repeat1,
  [1652] = 4,
    ACTIONS(392), 1,
      sym_comment,
    ACTIONS(512), 1,
      aux_sym_symbol_token1,
    ACTIONS(548), 1,
      anon_sym_DQUOTE,
    STATE(174), 1,
      aux_sym_symbol_repeat1,
  [1665] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_RBRACK2,
    ACTIONS(384), 2,
      anon_sym_LBRACK2,
      anon_sym_EQ,
  [1676] = 4,
    ACTIONS(392), 1,
      sym_comment,
    ACTIONS(512), 1,
      aux_sym_symbol_token1,
    ACTIONS(550), 1,
      anon_sym_DQUOTE,
    STATE(174), 1,
      aux_sym_symbol_repeat1,
  [1689] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(552), 1,
      anon_sym_COMMA,
    ACTIONS(555), 1,
      anon_sym_RBRACE,
    STATE(161), 1,
      aux_sym_hash_repeat1,
  [1702] = 4,
    ACTIONS(392), 1,
      sym_comment,
    ACTIONS(557), 1,
      anon_sym_DQUOTE,
    ACTIONS(559), 1,
      aux_sym_symbol_token1,
    STATE(158), 1,
      aux_sym_symbol_repeat1,
  [1715] = 4,
    ACTIONS(392), 1,
      sym_comment,
    ACTIONS(561), 1,
      anon_sym_DQUOTE,
    ACTIONS(563), 1,
      aux_sym_symbol_token1,
    STATE(160), 1,
      aux_sym_symbol_repeat1,
  [1728] = 4,
    ACTIONS(392), 1,
      sym_comment,
    ACTIONS(512), 1,
      aux_sym_symbol_token1,
    ACTIONS(565), 1,
      anon_sym_DQUOTE,
    STATE(174), 1,
      aux_sym_symbol_repeat1,
  [1741] = 4,
    ACTIONS(392), 1,
      sym_comment,
    ACTIONS(512), 1,
      aux_sym_symbol_token1,
    ACTIONS(567), 1,
      anon_sym_DQUOTE,
    STATE(174), 1,
      aux_sym_symbol_repeat1,
  [1754] = 4,
    ACTIONS(392), 1,
      sym_comment,
    ACTIONS(569), 1,
      anon_sym_DQUOTE,
    ACTIONS(571), 1,
      aux_sym_symbol_token1,
    STATE(164), 1,
      aux_sym_symbol_repeat1,
  [1767] = 4,
    ACTIONS(392), 1,
      sym_comment,
    ACTIONS(573), 1,
      anon_sym_DQUOTE,
    ACTIONS(575), 1,
      aux_sym_symbol_token1,
    STATE(165), 1,
      aux_sym_symbol_repeat1,
  [1780] = 4,
    ACTIONS(392), 1,
      sym_comment,
    ACTIONS(512), 1,
      aux_sym_symbol_token1,
    ACTIONS(577), 1,
      anon_sym_DQUOTE,
    STATE(174), 1,
      aux_sym_symbol_repeat1,
  [1793] = 4,
    ACTIONS(392), 1,
      sym_comment,
    ACTIONS(512), 1,
      aux_sym_symbol_token1,
    ACTIONS(579), 1,
      anon_sym_DQUOTE,
    STATE(174), 1,
      aux_sym_symbol_repeat1,
  [1806] = 4,
    ACTIONS(392), 1,
      sym_comment,
    ACTIONS(581), 1,
      anon_sym_DQUOTE,
    ACTIONS(583), 1,
      aux_sym_symbol_token1,
    STATE(168), 1,
      aux_sym_symbol_repeat1,
  [1819] = 4,
    ACTIONS(392), 1,
      sym_comment,
    ACTIONS(585), 1,
      anon_sym_DQUOTE,
    ACTIONS(587), 1,
      aux_sym_symbol_token1,
    STATE(169), 1,
      aux_sym_symbol_repeat1,
  [1832] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      anon_sym_COMMA,
    ACTIONS(591), 1,
      anon_sym_RBRACE,
    STATE(150), 1,
      aux_sym_namedTupleLiteral_repeat1,
  [1845] = 4,
    ACTIONS(392), 1,
      sym_comment,
    ACTIONS(512), 1,
      aux_sym_symbol_token1,
    ACTIONS(593), 1,
      anon_sym_DQUOTE,
    STATE(174), 1,
      aux_sym_symbol_repeat1,
  [1858] = 3,
    ACTIONS(392), 1,
      sym_comment,
    STATE(174), 1,
      aux_sym_symbol_repeat1,
    ACTIONS(595), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
  [1869] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(514), 1,
      anon_sym_COMMA,
    ACTIONS(598), 1,
      anon_sym_RBRACK,
    STATE(209), 1,
      aux_sym_array_repeat1,
  [1882] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      anon_sym_COMMA,
    ACTIONS(600), 1,
      anon_sym_RBRACE,
    STATE(150), 1,
      aux_sym_namedTupleLiteral_repeat1,
  [1895] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 1,
      anon_sym_COMMA,
    ACTIONS(602), 1,
      anon_sym_RBRACE,
    STATE(161), 1,
      aux_sym_hash_repeat1,
  [1908] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      anon_sym_COMMA,
    ACTIONS(604), 1,
      anon_sym_RBRACE,
    STATE(176), 1,
      aux_sym_namedTupleLiteral_repeat1,
  [1921] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 1,
      anon_sym_COMMA,
    ACTIONS(606), 1,
      anon_sym_RBRACE,
    STATE(177), 1,
      aux_sym_hash_repeat1,
  [1934] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 1,
      anon_sym_COMMA,
    ACTIONS(608), 1,
      anon_sym_RBRACE,
    STATE(151), 1,
      aux_sym_array_repeat1,
  [1947] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 1,
      anon_sym_COMMA,
    ACTIONS(610), 1,
      anon_sym_RBRACE,
    STATE(151), 1,
      aux_sym_array_repeat1,
  [1960] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(514), 1,
      anon_sym_COMMA,
    ACTIONS(612), 1,
      anon_sym_RBRACK,
    STATE(209), 1,
      aux_sym_array_repeat1,
  [1973] = 4,
    ACTIONS(392), 1,
      sym_comment,
    ACTIONS(512), 1,
      aux_sym_symbol_token1,
    ACTIONS(614), 1,
      anon_sym_DQUOTE,
    STATE(174), 1,
      aux_sym_symbol_repeat1,
  [1986] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(514), 1,
      anon_sym_COMMA,
    ACTIONS(616), 1,
      anon_sym_RBRACK,
    STATE(182), 1,
      aux_sym_array_repeat1,
  [1999] = 4,
    ACTIONS(392), 1,
      sym_comment,
    ACTIONS(512), 1,
      aux_sym_symbol_token1,
    ACTIONS(618), 1,
      anon_sym_DQUOTE,
    STATE(174), 1,
      aux_sym_symbol_repeat1,
  [2012] = 4,
    ACTIONS(392), 1,
      sym_comment,
    ACTIONS(620), 1,
      anon_sym_DQUOTE,
    ACTIONS(622), 1,
      aux_sym_symbol_token1,
    STATE(183), 1,
      aux_sym_symbol_repeat1,
  [2025] = 4,
    ACTIONS(392), 1,
      sym_comment,
    ACTIONS(624), 1,
      anon_sym_DQUOTE,
    ACTIONS(626), 1,
      aux_sym_symbol_token1,
    STATE(185), 1,
      aux_sym_symbol_repeat1,
  [2038] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 3,
      anon_sym_LBRACK2,
      anon_sym_RBRACK2,
      anon_sym_EQ,
  [2047] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      anon_sym_COMMA,
    ACTIONS(628), 1,
      anon_sym_RBRACE,
    STATE(196), 1,
      aux_sym_namedTupleLiteral_repeat1,
  [2060] = 3,
    ACTIONS(392), 1,
      sym_comment,
    ACTIONS(630), 1,
      anon_sym_RBRACK2,
    ACTIONS(390), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
  [2071] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 3,
      anon_sym_LBRACK2,
      anon_sym_RBRACK2,
      anon_sym_EQ,
  [2080] = 3,
    ACTIONS(392), 1,
      sym_comment,
    ACTIONS(632), 1,
      anon_sym_RBRACK2,
    ACTIONS(390), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
  [2091] = 3,
    ACTIONS(392), 1,
      sym_comment,
    ACTIONS(634), 1,
      anon_sym_RBRACK2,
    ACTIONS(390), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
  [2102] = 3,
    ACTIONS(392), 1,
      sym_comment,
    ACTIONS(636), 1,
      anon_sym_RBRACK2,
    ACTIONS(390), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
  [2113] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 1,
      anon_sym_COMMA,
    ACTIONS(638), 1,
      anon_sym_RBRACE,
    STATE(161), 1,
      aux_sym_hash_repeat1,
  [2126] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      anon_sym_COMMA,
    ACTIONS(640), 1,
      anon_sym_RBRACE,
    STATE(150), 1,
      aux_sym_namedTupleLiteral_repeat1,
  [2139] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [2148] = 4,
    ACTIONS(392), 1,
      sym_comment,
    ACTIONS(512), 1,
      aux_sym_symbol_token1,
    ACTIONS(642), 1,
      anon_sym_DQUOTE,
    STATE(174), 1,
      aux_sym_symbol_repeat1,
  [2161] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(514), 1,
      anon_sym_COMMA,
    ACTIONS(644), 1,
      anon_sym_RBRACK,
    STATE(209), 1,
      aux_sym_array_repeat1,
  [2174] = 3,
    ACTIONS(392), 1,
      sym_comment,
    ACTIONS(396), 1,
      anon_sym_EQ_GT,
    ACTIONS(390), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
  [2185] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      anon_sym_COMMA,
    ACTIONS(646), 1,
      anon_sym_RBRACE,
    STATE(172), 1,
      aux_sym_namedTupleLiteral_repeat1,
  [2198] = 3,
    ACTIONS(392), 1,
      sym_comment,
    ACTIONS(404), 1,
      anon_sym_EQ_GT,
    ACTIONS(390), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
  [2209] = 3,
    ACTIONS(388), 1,
      anon_sym_EQ_GT,
    ACTIONS(392), 1,
      sym_comment,
    ACTIONS(390), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
  [2220] = 3,
    ACTIONS(392), 1,
      sym_comment,
    ACTIONS(394), 1,
      anon_sym_EQ_GT,
    ACTIONS(390), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
  [2231] = 3,
    ACTIONS(388), 1,
      anon_sym_COLON,
    ACTIONS(392), 1,
      sym_comment,
    ACTIONS(390), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
  [2242] = 3,
    ACTIONS(392), 1,
      sym_comment,
    ACTIONS(394), 1,
      anon_sym_COLON,
    ACTIONS(390), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
  [2253] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 1,
      anon_sym_COMMA,
    ACTIONS(648), 1,
      anon_sym_RBRACE,
    STATE(151), 1,
      aux_sym_array_repeat1,
  [2266] = 4,
    ACTIONS(392), 1,
      sym_comment,
    ACTIONS(650), 1,
      anon_sym_DQUOTE,
    ACTIONS(652), 1,
      aux_sym_symbol_token1,
    STATE(212), 1,
      aux_sym_symbol_repeat1,
  [2279] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      anon_sym_RBRACK,
    ACTIONS(654), 1,
      anon_sym_COMMA,
    STATE(209), 1,
      aux_sym_array_repeat1,
  [2292] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 1,
      anon_sym_COMMA,
    ACTIONS(657), 1,
      anon_sym_RBRACE,
    STATE(161), 1,
      aux_sym_hash_repeat1,
  [2305] = 4,
    ACTIONS(392), 1,
      sym_comment,
    ACTIONS(659), 1,
      anon_sym_DQUOTE,
    ACTIONS(661), 1,
      aux_sym_symbol_token1,
    STATE(198), 1,
      aux_sym_symbol_repeat1,
  [2318] = 4,
    ACTIONS(392), 1,
      sym_comment,
    ACTIONS(512), 1,
      aux_sym_symbol_token1,
    ACTIONS(663), 1,
      anon_sym_DQUOTE,
    STATE(174), 1,
      aux_sym_symbol_repeat1,
  [2331] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(514), 1,
      anon_sym_COMMA,
    ACTIONS(665), 1,
      anon_sym_RBRACK,
    STATE(199), 1,
      aux_sym_array_repeat1,
  [2344] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 1,
      anon_sym_COMMA,
    ACTIONS(667), 1,
      anon_sym_RBRACE,
    STATE(195), 1,
      aux_sym_hash_repeat1,
  [2357] = 3,
    ACTIONS(392), 1,
      sym_comment,
    ACTIONS(478), 1,
      aux_sym__statement_token1,
    ACTIONS(669), 1,
      anon_sym_SEMI,
  [2367] = 3,
    ACTIONS(392), 1,
      sym_comment,
    ACTIONS(456), 1,
      aux_sym__statement_token1,
    ACTIONS(671), 1,
      anon_sym_SEMI,
  [2377] = 3,
    ACTIONS(392), 1,
      sym_comment,
    ACTIONS(446), 1,
      aux_sym__statement_token1,
    ACTIONS(673), 1,
      anon_sym_SEMI,
  [2387] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_EQ_GT,
    ACTIONS(675), 1,
      anon_sym_EQ,
  [2397] = 3,
    ACTIONS(392), 1,
      sym_comment,
    ACTIONS(486), 1,
      aux_sym__statement_token1,
    ACTIONS(677), 1,
      anon_sym_SEMI,
  [2407] = 3,
    ACTIONS(392), 1,
      sym_comment,
    ACTIONS(418), 1,
      aux_sym__statement_token1,
    ACTIONS(679), 1,
      anon_sym_SEMI,
  [2417] = 3,
    ACTIONS(392), 1,
      sym_comment,
    ACTIONS(484), 1,
      aux_sym__statement_token1,
    ACTIONS(681), 1,
      anon_sym_SEMI,
  [2427] = 3,
    ACTIONS(392), 1,
      sym_comment,
    ACTIONS(683), 1,
      anon_sym_SEMI,
    ACTIONS(685), 1,
      aux_sym__statement_token1,
  [2437] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(492), 1,
      anon_sym_EQ,
    ACTIONS(687), 1,
      anon_sym_LBRACK2,
  [2447] = 3,
    ACTIONS(392), 1,
      sym_comment,
    ACTIONS(448), 1,
      aux_sym__statement_token1,
    ACTIONS(689), 1,
      anon_sym_SEMI,
  [2457] = 3,
    ACTIONS(392), 1,
      sym_comment,
    ACTIONS(450), 1,
      aux_sym__statement_token1,
    ACTIONS(691), 1,
      anon_sym_SEMI,
  [2467] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(693), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2475] = 3,
    ACTIONS(392), 1,
      sym_comment,
    ACTIONS(452), 1,
      aux_sym__statement_token1,
    ACTIONS(695), 1,
      anon_sym_SEMI,
  [2485] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(687), 1,
      anon_sym_LBRACK2,
    ACTIONS(697), 1,
      anon_sym_EQ,
  [2495] = 3,
    ACTIONS(392), 1,
      sym_comment,
    ACTIONS(482), 1,
      aux_sym__statement_token1,
    ACTIONS(699), 1,
      anon_sym_SEMI,
  [2505] = 3,
    ACTIONS(392), 1,
      sym_comment,
    ACTIONS(454), 1,
      aux_sym__statement_token1,
    ACTIONS(701), 1,
      anon_sym_SEMI,
  [2515] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(494), 1,
      anon_sym_EQ,
    ACTIONS(687), 1,
      anon_sym_LBRACK2,
  [2525] = 3,
    ACTIONS(392), 1,
      sym_comment,
    ACTIONS(480), 1,
      aux_sym__statement_token1,
    ACTIONS(703), 1,
      anon_sym_SEMI,
  [2535] = 3,
    ACTIONS(392), 1,
      sym_comment,
    ACTIONS(460), 1,
      aux_sym__statement_token1,
    ACTIONS(705), 1,
      anon_sym_SEMI,
  [2545] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(707), 2,
      anon_sym_LBRACK2,
      anon_sym_EQ,
  [2553] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(709), 2,
      anon_sym_LBRACK2,
      anon_sym_EQ,
  [2561] = 3,
    ACTIONS(392), 1,
      sym_comment,
    ACTIONS(416), 1,
      aux_sym__statement_token1,
    ACTIONS(711), 1,
      anon_sym_SEMI,
  [2571] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(713), 1,
      anon_sym_LBRACK2,
    ACTIONS(715), 1,
      anon_sym_EQ,
  [2581] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(717), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2589] = 3,
    ACTIONS(392), 1,
      sym_comment,
    ACTIONS(719), 1,
      anon_sym_SEMI,
    ACTIONS(721), 1,
      aux_sym__statement_token1,
  [2599] = 3,
    ACTIONS(392), 1,
      sym_comment,
    ACTIONS(420), 1,
      aux_sym__statement_token1,
    ACTIONS(723), 1,
      anon_sym_SEMI,
  [2609] = 3,
    ACTIONS(392), 1,
      sym_comment,
    ACTIONS(476), 1,
      aux_sym__statement_token1,
    ACTIONS(725), 1,
      anon_sym_SEMI,
  [2619] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(727), 1,
      anon_sym_LBRACK2,
    ACTIONS(729), 1,
      anon_sym_EQ,
  [2629] = 3,
    ACTIONS(392), 1,
      sym_comment,
    ACTIONS(458), 1,
      aux_sym__statement_token1,
    ACTIONS(731), 1,
      anon_sym_SEMI,
  [2639] = 3,
    ACTIONS(392), 1,
      sym_comment,
    ACTIONS(428), 1,
      aux_sym__statement_token1,
    ACTIONS(733), 1,
      anon_sym_SEMI,
  [2649] = 3,
    ACTIONS(392), 1,
      sym_comment,
    ACTIONS(474), 1,
      aux_sym__statement_token1,
    ACTIONS(735), 1,
      anon_sym_SEMI,
  [2659] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(687), 1,
      anon_sym_LBRACK2,
    ACTIONS(737), 1,
      anon_sym_EQ,
  [2669] = 3,
    ACTIONS(392), 1,
      sym_comment,
    ACTIONS(434), 1,
      aux_sym__statement_token1,
    ACTIONS(739), 1,
      anon_sym_SEMI,
  [2679] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(741), 2,
      anon_sym_LBRACK2,
      anon_sym_EQ,
  [2687] = 3,
    ACTIONS(392), 1,
      sym_comment,
    ACTIONS(436), 1,
      aux_sym__statement_token1,
    ACTIONS(743), 1,
      anon_sym_SEMI,
  [2697] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_RBRACK2,
    ACTIONS(715), 1,
      anon_sym_EQ,
  [2707] = 3,
    ACTIONS(392), 1,
      sym_comment,
    ACTIONS(438), 1,
      aux_sym__statement_token1,
    ACTIONS(745), 1,
      anon_sym_SEMI,
  [2717] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(400), 2,
      anon_sym_RBRACK2,
      anon_sym_EQ,
  [2725] = 3,
    ACTIONS(392), 1,
      sym_comment,
    ACTIONS(472), 1,
      aux_sym__statement_token1,
    ACTIONS(747), 1,
      anon_sym_SEMI,
  [2735] = 3,
    ACTIONS(392), 1,
      sym_comment,
    ACTIONS(470), 1,
      aux_sym__statement_token1,
    ACTIONS(749), 1,
      anon_sym_SEMI,
  [2745] = 3,
    ACTIONS(392), 1,
      sym_comment,
    ACTIONS(444), 1,
      aux_sym__statement_token1,
    ACTIONS(751), 1,
      anon_sym_SEMI,
  [2755] = 3,
    ACTIONS(392), 1,
      sym_comment,
    ACTIONS(440), 1,
      aux_sym__statement_token1,
    ACTIONS(753), 1,
      anon_sym_SEMI,
  [2765] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(755), 1,
      anon_sym_EQ_GT,
  [2772] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(757), 1,
      anon_sym_COLON,
  [2779] = 2,
    ACTIONS(392), 1,
      sym_comment,
    ACTIONS(759), 1,
      aux_sym_hash_token1,
  [2786] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 1,
      anon_sym_RBRACK2,
  [2793] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(460), 1,
      anon_sym_RBRACK2,
  [2800] = 2,
    ACTIONS(392), 1,
      sym_comment,
    ACTIONS(761), 1,
      aux_sym_hash_token1,
  [2807] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      anon_sym_RBRACK2,
  [2814] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(484), 1,
      anon_sym_RBRACK2,
  [2821] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 1,
      anon_sym_RBRACK2,
  [2828] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 1,
      anon_sym_RBRACK2,
  [2835] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(478), 1,
      anon_sym_RBRACK2,
  [2842] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 1,
      anon_sym_RBRACK2,
  [2849] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 1,
      anon_sym_RBRACK2,
  [2856] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 1,
      anon_sym_RBRACK2,
  [2863] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 1,
      anon_sym_RBRACK2,
  [2870] = 2,
    ACTIONS(392), 1,
      sym_comment,
    ACTIONS(763), 1,
      aux_sym_hash_token1,
  [2877] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 1,
      anon_sym_RBRACK2,
  [2884] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 1,
      anon_sym_RBRACK2,
  [2891] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(765), 1,
      anon_sym_COLON,
  [2898] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(767), 1,
      anon_sym_RBRACK2,
  [2905] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 1,
      anon_sym_RBRACK2,
  [2912] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_RBRACK2,
  [2919] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      anon_sym_RBRACK2,
  [2926] = 2,
    ACTIONS(392), 1,
      sym_comment,
    ACTIONS(769), 1,
      aux_sym_regex_token1,
  [2933] = 2,
    ACTIONS(392), 1,
      sym_comment,
    ACTIONS(771), 1,
      aux_sym_commandLiteral_token1,
  [2940] = 2,
    ACTIONS(392), 1,
      sym_comment,
    ACTIONS(773), 1,
      aux_sym_commandLiteral_token2,
  [2947] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(438), 1,
      anon_sym_RBRACK2,
  [2954] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(775), 1,
      anon_sym_RPAREN,
  [2961] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(775), 1,
      anon_sym_BQUOTE,
  [2968] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(777), 1,
      anon_sym_SLASH,
  [2975] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      anon_sym_COLON,
  [2982] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(779), 1,
      anon_sym_of,
  [2989] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 1,
      anon_sym_RBRACK2,
  [2996] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(781), 1,
      anon_sym_EQ_GT,
  [3003] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(783), 1,
      anon_sym_RPAREN,
  [3010] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 1,
      anon_sym_RBRACK2,
  [3017] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 1,
      anon_sym_RBRACK2,
  [3024] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(436), 1,
      anon_sym_RBRACK2,
  [3031] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(434), 1,
      anon_sym_RBRACK2,
  [3038] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 1,
      anon_sym_RBRACK2,
  [3045] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(785), 1,
      anon_sym_RPAREN,
  [3052] = 2,
    ACTIONS(392), 1,
      sym_comment,
    ACTIONS(787), 1,
      aux_sym_regex_token1,
  [3059] = 2,
    ACTIONS(392), 1,
      sym_comment,
    ACTIONS(789), 1,
      aux_sym_commandLiteral_token1,
  [3066] = 2,
    ACTIONS(392), 1,
      sym_comment,
    ACTIONS(791), 1,
      aux_sym_commandLiteral_token2,
  [3073] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(785), 1,
      anon_sym_BQUOTE,
  [3080] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(793), 1,
      anon_sym_SLASH,
  [3087] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 1,
      anon_sym_RBRACK2,
  [3094] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(795), 1,
      ts_builtin_sym_end,
  [3101] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(797), 1,
      aux_sym_local_variable_token1,
  [3108] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(799), 1,
      anon_sym_EQ_GT,
  [3115] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(801), 1,
      anon_sym_RPAREN,
  [3122] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(803), 1,
      aux_sym_local_variable_token1,
  [3129] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 1,
      anon_sym_RBRACK2,
  [3136] = 2,
    ACTIONS(392), 1,
      sym_comment,
    ACTIONS(805), 1,
      aux_sym_commandLiteral_token2,
  [3143] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 1,
      anon_sym_RBRACK2,
  [3150] = 2,
    ACTIONS(392), 1,
      sym_comment,
    ACTIONS(807), 1,
      aux_sym_commandLiteral_token1,
  [3157] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(809), 1,
      anon_sym_RBRACK2,
  [3164] = 2,
    ACTIONS(392), 1,
      sym_comment,
    ACTIONS(811), 1,
      aux_sym_hash_token1,
  [3171] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      anon_sym_COLON,
  [3178] = 2,
    ACTIONS(392), 1,
      sym_comment,
    ACTIONS(813), 1,
      aux_sym_regex_token1,
  [3185] = 2,
    ACTIONS(392), 1,
      sym_comment,
    ACTIONS(815), 1,
      aux_sym_hash_token1,
  [3192] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(817), 1,
      anon_sym_RBRACK2,
  [3199] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(819), 1,
      anon_sym_EQ_GT,
  [3206] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(468), 1,
      anon_sym_COLON,
  [3213] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(821), 1,
      anon_sym_RPAREN,
  [3220] = 2,
    ACTIONS(392), 1,
      sym_comment,
    ACTIONS(823), 1,
      aux_sym_hash_token1,
  [3227] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(821), 1,
      anon_sym_BQUOTE,
  [3234] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(825), 1,
      anon_sym_SLASH,
  [3241] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(827), 1,
      anon_sym_RPAREN,
  [3248] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(829), 1,
      anon_sym_of,
  [3255] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(831), 1,
      anon_sym_of,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(55)] = 0,
  [SMALL_STATE(56)] = 54,
  [SMALL_STATE(57)] = 105,
  [SMALL_STATE(58)] = 156,
  [SMALL_STATE(59)] = 205,
  [SMALL_STATE(60)] = 254,
  [SMALL_STATE(61)] = 295,
  [SMALL_STATE(62)] = 336,
  [SMALL_STATE(63)] = 377,
  [SMALL_STATE(64)] = 418,
  [SMALL_STATE(65)] = 459,
  [SMALL_STATE(66)] = 500,
  [SMALL_STATE(67)] = 518,
  [SMALL_STATE(68)] = 533,
  [SMALL_STATE(69)] = 548,
  [SMALL_STATE(70)] = 564,
  [SMALL_STATE(71)] = 580,
  [SMALL_STATE(72)] = 596,
  [SMALL_STATE(73)] = 612,
  [SMALL_STATE(74)] = 628,
  [SMALL_STATE(75)] = 644,
  [SMALL_STATE(76)] = 660,
  [SMALL_STATE(77)] = 676,
  [SMALL_STATE(78)] = 692,
  [SMALL_STATE(79)] = 708,
  [SMALL_STATE(80)] = 722,
  [SMALL_STATE(81)] = 738,
  [SMALL_STATE(82)] = 754,
  [SMALL_STATE(83)] = 768,
  [SMALL_STATE(84)] = 784,
  [SMALL_STATE(85)] = 797,
  [SMALL_STATE(86)] = 810,
  [SMALL_STATE(87)] = 823,
  [SMALL_STATE(88)] = 838,
  [SMALL_STATE(89)] = 851,
  [SMALL_STATE(90)] = 864,
  [SMALL_STATE(91)] = 876,
  [SMALL_STATE(92)] = 888,
  [SMALL_STATE(93)] = 904,
  [SMALL_STATE(94)] = 918,
  [SMALL_STATE(95)] = 930,
  [SMALL_STATE(96)] = 942,
  [SMALL_STATE(97)] = 954,
  [SMALL_STATE(98)] = 964,
  [SMALL_STATE(99)] = 974,
  [SMALL_STATE(100)] = 986,
  [SMALL_STATE(101)] = 996,
  [SMALL_STATE(102)] = 1012,
  [SMALL_STATE(103)] = 1022,
  [SMALL_STATE(104)] = 1034,
  [SMALL_STATE(105)] = 1046,
  [SMALL_STATE(106)] = 1062,
  [SMALL_STATE(107)] = 1072,
  [SMALL_STATE(108)] = 1082,
  [SMALL_STATE(109)] = 1092,
  [SMALL_STATE(110)] = 1102,
  [SMALL_STATE(111)] = 1114,
  [SMALL_STATE(112)] = 1124,
  [SMALL_STATE(113)] = 1134,
  [SMALL_STATE(114)] = 1144,
  [SMALL_STATE(115)] = 1154,
  [SMALL_STATE(116)] = 1164,
  [SMALL_STATE(117)] = 1174,
  [SMALL_STATE(118)] = 1186,
  [SMALL_STATE(119)] = 1198,
  [SMALL_STATE(120)] = 1208,
  [SMALL_STATE(121)] = 1220,
  [SMALL_STATE(122)] = 1230,
  [SMALL_STATE(123)] = 1242,
  [SMALL_STATE(124)] = 1252,
  [SMALL_STATE(125)] = 1264,
  [SMALL_STATE(126)] = 1280,
  [SMALL_STATE(127)] = 1292,
  [SMALL_STATE(128)] = 1304,
  [SMALL_STATE(129)] = 1316,
  [SMALL_STATE(130)] = 1326,
  [SMALL_STATE(131)] = 1336,
  [SMALL_STATE(132)] = 1346,
  [SMALL_STATE(133)] = 1356,
  [SMALL_STATE(134)] = 1366,
  [SMALL_STATE(135)] = 1376,
  [SMALL_STATE(136)] = 1388,
  [SMALL_STATE(137)] = 1398,
  [SMALL_STATE(138)] = 1408,
  [SMALL_STATE(139)] = 1418,
  [SMALL_STATE(140)] = 1430,
  [SMALL_STATE(141)] = 1441,
  [SMALL_STATE(142)] = 1454,
  [SMALL_STATE(143)] = 1465,
  [SMALL_STATE(144)] = 1476,
  [SMALL_STATE(145)] = 1489,
  [SMALL_STATE(146)] = 1500,
  [SMALL_STATE(147)] = 1513,
  [SMALL_STATE(148)] = 1526,
  [SMALL_STATE(149)] = 1539,
  [SMALL_STATE(150)] = 1552,
  [SMALL_STATE(151)] = 1565,
  [SMALL_STATE(152)] = 1578,
  [SMALL_STATE(153)] = 1589,
  [SMALL_STATE(154)] = 1600,
  [SMALL_STATE(155)] = 1613,
  [SMALL_STATE(156)] = 1626,
  [SMALL_STATE(157)] = 1639,
  [SMALL_STATE(158)] = 1652,
  [SMALL_STATE(159)] = 1665,
  [SMALL_STATE(160)] = 1676,
  [SMALL_STATE(161)] = 1689,
  [SMALL_STATE(162)] = 1702,
  [SMALL_STATE(163)] = 1715,
  [SMALL_STATE(164)] = 1728,
  [SMALL_STATE(165)] = 1741,
  [SMALL_STATE(166)] = 1754,
  [SMALL_STATE(167)] = 1767,
  [SMALL_STATE(168)] = 1780,
  [SMALL_STATE(169)] = 1793,
  [SMALL_STATE(170)] = 1806,
  [SMALL_STATE(171)] = 1819,
  [SMALL_STATE(172)] = 1832,
  [SMALL_STATE(173)] = 1845,
  [SMALL_STATE(174)] = 1858,
  [SMALL_STATE(175)] = 1869,
  [SMALL_STATE(176)] = 1882,
  [SMALL_STATE(177)] = 1895,
  [SMALL_STATE(178)] = 1908,
  [SMALL_STATE(179)] = 1921,
  [SMALL_STATE(180)] = 1934,
  [SMALL_STATE(181)] = 1947,
  [SMALL_STATE(182)] = 1960,
  [SMALL_STATE(183)] = 1973,
  [SMALL_STATE(184)] = 1986,
  [SMALL_STATE(185)] = 1999,
  [SMALL_STATE(186)] = 2012,
  [SMALL_STATE(187)] = 2025,
  [SMALL_STATE(188)] = 2038,
  [SMALL_STATE(189)] = 2047,
  [SMALL_STATE(190)] = 2060,
  [SMALL_STATE(191)] = 2071,
  [SMALL_STATE(192)] = 2080,
  [SMALL_STATE(193)] = 2091,
  [SMALL_STATE(194)] = 2102,
  [SMALL_STATE(195)] = 2113,
  [SMALL_STATE(196)] = 2126,
  [SMALL_STATE(197)] = 2139,
  [SMALL_STATE(198)] = 2148,
  [SMALL_STATE(199)] = 2161,
  [SMALL_STATE(200)] = 2174,
  [SMALL_STATE(201)] = 2185,
  [SMALL_STATE(202)] = 2198,
  [SMALL_STATE(203)] = 2209,
  [SMALL_STATE(204)] = 2220,
  [SMALL_STATE(205)] = 2231,
  [SMALL_STATE(206)] = 2242,
  [SMALL_STATE(207)] = 2253,
  [SMALL_STATE(208)] = 2266,
  [SMALL_STATE(209)] = 2279,
  [SMALL_STATE(210)] = 2292,
  [SMALL_STATE(211)] = 2305,
  [SMALL_STATE(212)] = 2318,
  [SMALL_STATE(213)] = 2331,
  [SMALL_STATE(214)] = 2344,
  [SMALL_STATE(215)] = 2357,
  [SMALL_STATE(216)] = 2367,
  [SMALL_STATE(217)] = 2377,
  [SMALL_STATE(218)] = 2387,
  [SMALL_STATE(219)] = 2397,
  [SMALL_STATE(220)] = 2407,
  [SMALL_STATE(221)] = 2417,
  [SMALL_STATE(222)] = 2427,
  [SMALL_STATE(223)] = 2437,
  [SMALL_STATE(224)] = 2447,
  [SMALL_STATE(225)] = 2457,
  [SMALL_STATE(226)] = 2467,
  [SMALL_STATE(227)] = 2475,
  [SMALL_STATE(228)] = 2485,
  [SMALL_STATE(229)] = 2495,
  [SMALL_STATE(230)] = 2505,
  [SMALL_STATE(231)] = 2515,
  [SMALL_STATE(232)] = 2525,
  [SMALL_STATE(233)] = 2535,
  [SMALL_STATE(234)] = 2545,
  [SMALL_STATE(235)] = 2553,
  [SMALL_STATE(236)] = 2561,
  [SMALL_STATE(237)] = 2571,
  [SMALL_STATE(238)] = 2581,
  [SMALL_STATE(239)] = 2589,
  [SMALL_STATE(240)] = 2599,
  [SMALL_STATE(241)] = 2609,
  [SMALL_STATE(242)] = 2619,
  [SMALL_STATE(243)] = 2629,
  [SMALL_STATE(244)] = 2639,
  [SMALL_STATE(245)] = 2649,
  [SMALL_STATE(246)] = 2659,
  [SMALL_STATE(247)] = 2669,
  [SMALL_STATE(248)] = 2679,
  [SMALL_STATE(249)] = 2687,
  [SMALL_STATE(250)] = 2697,
  [SMALL_STATE(251)] = 2707,
  [SMALL_STATE(252)] = 2717,
  [SMALL_STATE(253)] = 2725,
  [SMALL_STATE(254)] = 2735,
  [SMALL_STATE(255)] = 2745,
  [SMALL_STATE(256)] = 2755,
  [SMALL_STATE(257)] = 2765,
  [SMALL_STATE(258)] = 2772,
  [SMALL_STATE(259)] = 2779,
  [SMALL_STATE(260)] = 2786,
  [SMALL_STATE(261)] = 2793,
  [SMALL_STATE(262)] = 2800,
  [SMALL_STATE(263)] = 2807,
  [SMALL_STATE(264)] = 2814,
  [SMALL_STATE(265)] = 2821,
  [SMALL_STATE(266)] = 2828,
  [SMALL_STATE(267)] = 2835,
  [SMALL_STATE(268)] = 2842,
  [SMALL_STATE(269)] = 2849,
  [SMALL_STATE(270)] = 2856,
  [SMALL_STATE(271)] = 2863,
  [SMALL_STATE(272)] = 2870,
  [SMALL_STATE(273)] = 2877,
  [SMALL_STATE(274)] = 2884,
  [SMALL_STATE(275)] = 2891,
  [SMALL_STATE(276)] = 2898,
  [SMALL_STATE(277)] = 2905,
  [SMALL_STATE(278)] = 2912,
  [SMALL_STATE(279)] = 2919,
  [SMALL_STATE(280)] = 2926,
  [SMALL_STATE(281)] = 2933,
  [SMALL_STATE(282)] = 2940,
  [SMALL_STATE(283)] = 2947,
  [SMALL_STATE(284)] = 2954,
  [SMALL_STATE(285)] = 2961,
  [SMALL_STATE(286)] = 2968,
  [SMALL_STATE(287)] = 2975,
  [SMALL_STATE(288)] = 2982,
  [SMALL_STATE(289)] = 2989,
  [SMALL_STATE(290)] = 2996,
  [SMALL_STATE(291)] = 3003,
  [SMALL_STATE(292)] = 3010,
  [SMALL_STATE(293)] = 3017,
  [SMALL_STATE(294)] = 3024,
  [SMALL_STATE(295)] = 3031,
  [SMALL_STATE(296)] = 3038,
  [SMALL_STATE(297)] = 3045,
  [SMALL_STATE(298)] = 3052,
  [SMALL_STATE(299)] = 3059,
  [SMALL_STATE(300)] = 3066,
  [SMALL_STATE(301)] = 3073,
  [SMALL_STATE(302)] = 3080,
  [SMALL_STATE(303)] = 3087,
  [SMALL_STATE(304)] = 3094,
  [SMALL_STATE(305)] = 3101,
  [SMALL_STATE(306)] = 3108,
  [SMALL_STATE(307)] = 3115,
  [SMALL_STATE(308)] = 3122,
  [SMALL_STATE(309)] = 3129,
  [SMALL_STATE(310)] = 3136,
  [SMALL_STATE(311)] = 3143,
  [SMALL_STATE(312)] = 3150,
  [SMALL_STATE(313)] = 3157,
  [SMALL_STATE(314)] = 3164,
  [SMALL_STATE(315)] = 3171,
  [SMALL_STATE(316)] = 3178,
  [SMALL_STATE(317)] = 3185,
  [SMALL_STATE(318)] = 3192,
  [SMALL_STATE(319)] = 3199,
  [SMALL_STATE(320)] = 3206,
  [SMALL_STATE(321)] = 3213,
  [SMALL_STATE(322)] = 3220,
  [SMALL_STATE(323)] = 3227,
  [SMALL_STATE(324)] = 3234,
  [SMALL_STATE(325)] = 3241,
  [SMALL_STATE(326)] = 3248,
  [SMALL_STATE(327)] = 3255,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(239),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(217),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(224),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(224),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(225),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(225),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(61),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(144),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(227),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(227),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(34),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(11),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(316),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(230),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(312),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(310),
  [135] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(145),
  [138] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(308),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(305),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(104),
  [147] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(87),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(73),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [217] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(222),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 2),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 2),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [354] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [360] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [368] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variable, 1),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variable, 1),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_symbol_repeat1, 1),
  [392] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 3),
  [398] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_expression, 4, .production_id = 3),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index_expression, 4, .production_id = 3),
  [404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 4),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 9, .production_id = 9),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 8, .production_id = 9),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 7, .production_id = 8),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 6, .production_id = 5),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 6, .production_id = 8),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namedTupleLiteral, 6, .production_id = 6),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hash, 6, .production_id = 6),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hash, 6),
  [442] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 5, .production_id = 5),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 1),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 1),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 1),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namedTupleLiteral, 5, .production_id = 4),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 2),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hash, 5, .production_id = 4),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 3),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 3),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commandLiteral, 3),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 3, .production_id = 1),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3, .production_id = 2),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 4),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 4),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 4, .production_id = 1),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [496] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [498] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_variable, 1),
  [504] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [506] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [508] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [510] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [512] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [518] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_namedTupleLiteral_repeat1, 2, .production_id = 7), SHIFT_REPEAT(93),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_namedTupleLiteral_repeat1, 2, .production_id = 7),
  [523] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(32),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance_variable, 2),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_variable, 2),
  [536] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [538] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [540] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [542] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [544] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [546] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [548] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [550] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [552] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hash_repeat1, 2, .production_id = 7), SHIFT_REPEAT(40),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_hash_repeat1, 2, .production_id = 7),
  [557] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [559] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [561] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [563] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [565] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [567] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [569] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [571] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [573] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [575] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [577] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [579] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [581] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [583] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [585] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [587] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [593] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [595] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_symbol_repeat1, 2), SHIFT_REPEAT(174),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [614] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [618] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [620] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [622] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [624] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [626] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 3),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 4),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [642] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [650] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [652] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [654] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(54),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [659] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [661] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [663] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [669] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_definition, 3, .production_id = 1),
  [671] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namedTupleLiteral, 5, .production_id = 4),
  [673] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool, 1),
  [675] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [677] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_definition, 4, .production_id = 1),
  [679] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_definition, 8, .production_id = 9),
  [681] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 4),
  [683] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [689] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 1),
  [691] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_namedTupleLiteral_repeat1, 4, .production_id = 4),
  [695] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char, 1),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [699] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 4),
  [701] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 1),
  [703] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 3, .production_id = 2),
  [705] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hash, 5, .production_id = 4),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_variable, 3),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance_variable, 3),
  [711] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_definition, 9, .production_id = 9),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_hash_repeat1, 4, .production_id = 4),
  [719] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [723] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_definition, 7, .production_id = 8),
  [725] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commandLiteral, 3),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [731] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 2),
  [733] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_definition, 6, .production_id = 5),
  [735] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex, 3),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [739] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_definition, 6, .production_id = 8),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_variable, 2),
  [743] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namedTupleLiteral, 6, .production_id = 6),
  [745] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hash, 6, .production_id = 6),
  [747] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 3),
  [749] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 3),
  [751] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_definition, 5, .production_id = 5),
  [753] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hash, 6),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [759] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [761] = {.entry = {.count = 1, .reusable = false}}, SHIFT(319),
  [763] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [769] = {.entry = {.count = 1, .reusable = false}}, SHIFT(324),
  [771] = {.entry = {.count = 1, .reusable = false}}, SHIFT(323),
  [773] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [787] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [789] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [791] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [795] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [805] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [807] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [811] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [813] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [815] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [823] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
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

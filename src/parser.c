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
#define STATE_COUNT 342
#define LARGE_STATE_COUNT 43
#define SYMBOL_COUNT 119
#define ALIAS_COUNT 2
#define TOKEN_COUNT 86
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 10
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 18

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
  anon_sym_LBRACK2 = 37,
  anon_sym_RBRACK2 = 38,
  anon_sym_SLASH = 39,
  aux_sym_regex_token1 = 40,
  anon_sym_Tuple_DOTnew = 41,
  anon_sym_BQUOTE = 42,
  aux_sym_commandLiteral_token1 = 43,
  anon_sym_PERCENTx_LPAREN = 44,
  aux_sym_commandLiteral_token2 = 45,
  anon_sym_RPAREN = 46,
  sym_comment = 47,
  aux_sym_local_variable_token1 = 48,
  anon_sym_AT = 49,
  anon_sym_AT_AT = 50,
  anon_sym___LINE__ = 51,
  anon_sym___END_LINE__ = 52,
  anon_sym___FILE__ = 53,
  anon_sym___DIR__ = 54,
  aux_sym_constant_token1 = 55,
  anon_sym_EQ = 56,
  anon_sym_class = 57,
  anon_sym_LT = 58,
  anon_sym_end = 59,
  anon_sym_COLON_COLON = 60,
  anon_sym_LPAREN = 61,
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
  sym_type = 110,
  sym__operator = 111,
  aux_sym_program_repeat1 = 112,
  aux_sym_symbol_repeat1 = 113,
  aux_sym_array_repeat1 = 114,
  aux_sym_hash_repeat1 = 115,
  aux_sym_namedTupleLiteral_repeat1 = 116,
  aux_sym_type_repeat1 = 117,
  aux_sym_type_repeat2 = 118,
  alias_sym_namespace = 119,
  anon_alias_sym_type = 120,
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
  [anon_sym_LT] = "<",
  [anon_sym_end] = "end",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_LPAREN] = "(",
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
  [sym_type] = "type",
  [sym__operator] = "_operator",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_symbol_repeat1] = "symbol_repeat1",
  [aux_sym_array_repeat1] = "array_repeat1",
  [aux_sym_hash_repeat1] = "hash_repeat1",
  [aux_sym_namedTupleLiteral_repeat1] = "namedTupleLiteral_repeat1",
  [aux_sym_type_repeat1] = "type_repeat1",
  [aux_sym_type_repeat2] = "type_repeat2",
  [alias_sym_namespace] = "namespace",
  [anon_alias_sym_type] = "type",
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
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_end] = anon_sym_end,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
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
  [sym_type] = sym_type,
  [sym__operator] = sym__operator,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_symbol_repeat1] = aux_sym_symbol_repeat1,
  [aux_sym_array_repeat1] = aux_sym_array_repeat1,
  [aux_sym_hash_repeat1] = aux_sym_hash_repeat1,
  [aux_sym_namedTupleLiteral_repeat1] = aux_sym_namedTupleLiteral_repeat1,
  [aux_sym_type_repeat1] = aux_sym_type_repeat1,
  [aux_sym_type_repeat2] = aux_sym_type_repeat2,
  [alias_sym_namespace] = alias_sym_namespace,
  [anon_alias_sym_type] = anon_alias_sym_type,
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
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_end] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
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
  [sym_type] = {
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
  [aux_sym_type_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_repeat2] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_namespace] = {
    .visible = true,
    .named = true,
  },
  [anon_alias_sym_type] = {
    .visible = true,
    .named = false,
  },
};

enum {
  field_generic_param = 1,
  field_key = 2,
  field_key_type = 3,
  field_lhs = 4,
  field_name = 5,
  field_rhs = 6,
  field_superclass = 7,
  field_target = 8,
  field_value = 9,
  field_value_type = 10,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_generic_param] = "generic_param",
  [field_key] = "key",
  [field_key_type] = "key_type",
  [field_lhs] = "lhs",
  [field_name] = "name",
  [field_rhs] = "rhs",
  [field_superclass] = "superclass",
  [field_target] = "target",
  [field_value] = "value",
  [field_value_type] = "value_type",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [3] = {.index = 0, .length = 1},
  [5] = {.index = 1, .length = 2},
  [6] = {.index = 3, .length = 2},
  [7] = {.index = 5, .length = 2},
  [8] = {.index = 7, .length = 1},
  [9] = {.index = 8, .length = 2},
  [10] = {.index = 10, .length = 2},
  [11] = {.index = 12, .length = 4},
  [12] = {.index = 16, .length = 4},
  [13] = {.index = 20, .length = 1},
  [14] = {.index = 21, .length = 2},
  [15] = {.index = 23, .length = 2},
  [16] = {.index = 25, .length = 1},
  [17] = {.index = 26, .length = 2},
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
    {field_generic_param, 2},
  [8] =
    {field_name, 1},
    {field_superclass, 3},
  [10] =
    {field_key_type, 3},
    {field_value_type, 5},
  [12] =
    {field_key, 1},
    {field_key, 4, .inherited = true},
    {field_value, 3},
    {field_value, 4, .inherited = true},
  [16] =
    {field_key, 0, .inherited = true},
    {field_key, 1, .inherited = true},
    {field_value, 0, .inherited = true},
    {field_value, 1, .inherited = true},
  [20] =
    {field_generic_param, 1},
  [21] =
    {field_generic_param, 2},
    {field_generic_param, 3, .inherited = true},
  [23] =
    {field_generic_param, 0, .inherited = true},
    {field_generic_param, 1, .inherited = true},
  [25] =
    {field_generic_param, 3},
  [26] =
    {field_generic_param, 3},
    {field_generic_param, 4, .inherited = true},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = anon_alias_sym_type,
  },
  [2] = {
    [0] = alias_sym_namespace,
  },
  [4] = {
    [1] = anon_alias_sym_type,
  },
  [8] = {
    [0] = anon_alias_sym_type,
  },
  [14] = {
    [0] = anon_alias_sym_type,
  },
  [16] = {
    [1] = anon_alias_sym_type,
  },
  [17] = {
    [1] = anon_alias_sym_type,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_constant, 3,
    sym_constant,
    alias_sym_namespace,
    anon_alias_sym_type,
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(132);
      if (lookahead == '!') ADVANCE(312);
      if (lookahead == '"') ADVANCE(205);
      if (lookahead == '#') ADVANCE(129);
      if (lookahead == '%') ADVANCE(295);
      if (lookahead == '&') ADVANCE(296);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == '(') ADVANCE(288);
      if (lookahead == ')') ADVANCE(257);
      if (lookahead == '*') ADVANCE(293);
      if (lookahead == '+') ADVANCE(290);
      if (lookahead == ',') ADVANCE(233);
      if (lookahead == '-') ADVANCE(292);
      if (lookahead == '/') ADVANCE(242);
      if (lookahead == '0') ADVANCE(43);
      if (lookahead == ':') ADVANCE(204);
      if (lookahead == ';') ADVANCE(133);
      if (lookahead == '<') ADVANCE(284);
      if (lookahead == '=') ADVANCE(279);
      if (lookahead == '>') ADVANCE(305);
      if (lookahead == '@') ADVANCE(266);
      if (lookahead == 'T') ADVANCE(180);
      if (lookahead == '[') ADVANCE(240);
      if (lookahead == ']') ADVANCE(241);
      if (lookahead == '^') ADVANCE(298);
      if (lookahead == '_') ADVANCE(153);
      if (lookahead == '`') ADVANCE(249);
      if (lookahead == 'c') ADVANCE(171);
      if (lookahead == 'e') ADVANCE(174);
      if (lookahead == 'f') ADVANCE(164);
      if (lookahead == 'n') ADVANCE(169);
      if (lookahead == 't') ADVANCE(176);
      if (lookahead == '{') ADVANCE(235);
      if (lookahead == '|') ADVANCE(297);
      if (lookahead == '}') ADVANCE(237);
      if (lookahead == '~') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(130)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(202);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(182);
      if (lookahead != 0 &&
          lookahead > 159) ADVANCE(182);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(134);
      if (lookahead == '#') ADVANCE(129);
      if (lookahead == '(') ADVANCE(288);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == ';') ADVANCE(133);
      if (lookahead == '=') ADVANCE(278);
      if (lookahead == '[') ADVANCE(239);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (lookahead != 0 &&
          lookahead > '@' &&
          (lookahead < '\\' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(182);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(134);
      if (lookahead == '#') ADVANCE(129);
      if (lookahead == '(') ADVANCE(288);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == ';') ADVANCE(133);
      if (lookahead == '=') ADVANCE(278);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (lookahead != 0 &&
          lookahead > '@' &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(182);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(135);
      if (lookahead == '"') ADVANCE(205);
      if (lookahead == '#') ADVANCE(216);
      if (lookahead == ';') ADVANCE(133);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(207);
      if (lookahead != 0) ADVANCE(206);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(312);
      if (lookahead == '"') ADVANCE(205);
      if (lookahead == '#') ADVANCE(129);
      if (lookahead == '%') ADVANCE(294);
      if (lookahead == '&') ADVANCE(296);
      if (lookahead == '(') ADVANCE(288);
      if (lookahead == '*') ADVANCE(293);
      if (lookahead == '+') ADVANCE(289);
      if (lookahead == '-') ADVANCE(291);
      if (lookahead == '/') ADVANCE(242);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '<') ADVANCE(284);
      if (lookahead == '=') ADVANCE(73);
      if (lookahead == '>') ADVANCE(305);
      if (lookahead == '[') ADVANCE(90);
      if (lookahead == ']') ADVANCE(241);
      if (lookahead == '^') ADVANCE(298);
      if (lookahead == '|') ADVANCE(297);
      if (lookahead == '~') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (lookahead != 0 &&
          lookahead > '@' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(182);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(312);
      if (lookahead == '"') ADVANCE(205);
      if (lookahead == '#') ADVANCE(129);
      if (lookahead == '%') ADVANCE(294);
      if (lookahead == '&') ADVANCE(296);
      if (lookahead == '(') ADVANCE(288);
      if (lookahead == '*') ADVANCE(293);
      if (lookahead == '+') ADVANCE(289);
      if (lookahead == '-') ADVANCE(291);
      if (lookahead == '/') ADVANCE(242);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '<') ADVANCE(284);
      if (lookahead == '=') ADVANCE(73);
      if (lookahead == '>') ADVANCE(305);
      if (lookahead == '[') ADVANCE(90);
      if (lookahead == '^') ADVANCE(298);
      if (lookahead == '|') ADVANCE(297);
      if (lookahead == '~') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (lookahead != 0 &&
          lookahead > '@' &&
          lookahead != '\\' &&
          lookahead != ']' &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(182);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(205);
      if (lookahead == '#') ADVANCE(129);
      if (lookahead == '%') ADVANCE(118);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == '(') ADVANCE(288);
      if (lookahead == ')') ADVANCE(257);
      if (lookahead == ',') ADVANCE(233);
      if (lookahead == '/') ADVANCE(242);
      if (lookahead == '0') ADVANCE(43);
      if (lookahead == ':') ADVANCE(204);
      if (lookahead == '<') ADVANCE(283);
      if (lookahead == '=') ADVANCE(74);
      if (lookahead == '@') ADVANCE(266);
      if (lookahead == 'T') ADVANCE(277);
      if (lookahead == '[') ADVANCE(231);
      if (lookahead == ']') ADVANCE(234);
      if (lookahead == '_') ADVANCE(260);
      if (lookahead == '`') ADVANCE(249);
      if (lookahead == 'c') ADVANCE(263);
      if (lookahead == 'e') ADVANCE(264);
      if (lookahead == 'f') ADVANCE(261);
      if (lookahead == 'n') ADVANCE(262);
      if (lookahead == 't') ADVANCE(265);
      if (lookahead == '{') ADVANCE(235);
      if (lookahead == '}') ADVANCE(237);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(202);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(276);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(205);
      if (lookahead == '#') ADVANCE(129);
      if (lookahead == '%') ADVANCE(118);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == '(') ADVANCE(288);
      if (lookahead == '/') ADVANCE(242);
      if (lookahead == '0') ADVANCE(43);
      if (lookahead == ':') ADVANCE(204);
      if (lookahead == '<') ADVANCE(283);
      if (lookahead == '@') ADVANCE(266);
      if (lookahead == 'T') ADVANCE(180);
      if (lookahead == '[') ADVANCE(231);
      if (lookahead == '_') ADVANCE(153);
      if (lookahead == '`') ADVANCE(249);
      if (lookahead == 'c') ADVANCE(171);
      if (lookahead == 'e') ADVANCE(174);
      if (lookahead == 'f') ADVANCE(164);
      if (lookahead == 'n') ADVANCE(169);
      if (lookahead == 't') ADVANCE(176);
      if (lookahead == '{') ADVANCE(235);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(202);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(182);
      if (lookahead != 0 &&
          lookahead > 159) ADVANCE(182);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(205);
      if (lookahead == '#') ADVANCE(129);
      if (lookahead == '%') ADVANCE(118);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == '(') ADVANCE(288);
      if (lookahead == '/') ADVANCE(242);
      if (lookahead == '0') ADVANCE(43);
      if (lookahead == ':') ADVANCE(204);
      if (lookahead == '<') ADVANCE(283);
      if (lookahead == '@') ADVANCE(266);
      if (lookahead == 'T') ADVANCE(277);
      if (lookahead == '[') ADVANCE(231);
      if (lookahead == ']') ADVANCE(241);
      if (lookahead == '_') ADVANCE(260);
      if (lookahead == '`') ADVANCE(249);
      if (lookahead == 'c') ADVANCE(263);
      if (lookahead == 'e') ADVANCE(264);
      if (lookahead == 'f') ADVANCE(261);
      if (lookahead == 'n') ADVANCE(262);
      if (lookahead == 't') ADVANCE(265);
      if (lookahead == '{') ADVANCE(235);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(202);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(276);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(205);
      if (lookahead == '#') ADVANCE(129);
      if (lookahead == '%') ADVANCE(118);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == '(') ADVANCE(288);
      if (lookahead == '/') ADVANCE(242);
      if (lookahead == '0') ADVANCE(43);
      if (lookahead == ':') ADVANCE(204);
      if (lookahead == '<') ADVANCE(283);
      if (lookahead == '@') ADVANCE(266);
      if (lookahead == 'T') ADVANCE(277);
      if (lookahead == '[') ADVANCE(231);
      if (lookahead == '_') ADVANCE(260);
      if (lookahead == '`') ADVANCE(249);
      if (lookahead == 'c') ADVANCE(263);
      if (lookahead == 'e') ADVANCE(264);
      if (lookahead == 'f') ADVANCE(261);
      if (lookahead == 'n') ADVANCE(262);
      if (lookahead == 't') ADVANCE(265);
      if (lookahead == '{') ADVANCE(235);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(202);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(276);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(205);
      if (lookahead == '#') ADVANCE(129);
      if (lookahead == '%') ADVANCE(118);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == ')') ADVANCE(257);
      if (lookahead == ',') ADVANCE(233);
      if (lookahead == '/') ADVANCE(242);
      if (lookahead == '0') ADVANCE(43);
      if (lookahead == ':') ADVANCE(203);
      if (lookahead == '<') ADVANCE(283);
      if (lookahead == '=') ADVANCE(74);
      if (lookahead == '@') ADVANCE(266);
      if (lookahead == 'T') ADVANCE(277);
      if (lookahead == '[') ADVANCE(231);
      if (lookahead == ']') ADVANCE(234);
      if (lookahead == '_') ADVANCE(260);
      if (lookahead == '`') ADVANCE(249);
      if (lookahead == 'c') ADVANCE(263);
      if (lookahead == 'e') ADVANCE(264);
      if (lookahead == 'f') ADVANCE(261);
      if (lookahead == 'n') ADVANCE(262);
      if (lookahead == 't') ADVANCE(265);
      if (lookahead == '{') ADVANCE(235);
      if (lookahead == '}') ADVANCE(237);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(202);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(276);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(205);
      if (lookahead == '#') ADVANCE(129);
      if (lookahead == '%') ADVANCE(118);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == '/') ADVANCE(242);
      if (lookahead == '0') ADVANCE(43);
      if (lookahead == ':') ADVANCE(203);
      if (lookahead == '=') ADVANCE(278);
      if (lookahead == '@') ADVANCE(266);
      if (lookahead == 'T') ADVANCE(180);
      if (lookahead == '[') ADVANCE(231);
      if (lookahead == ']') ADVANCE(241);
      if (lookahead == '_') ADVANCE(153);
      if (lookahead == '`') ADVANCE(249);
      if (lookahead == 'c') ADVANCE(171);
      if (lookahead == 'f') ADVANCE(164);
      if (lookahead == 'n') ADVANCE(169);
      if (lookahead == 't') ADVANCE(176);
      if (lookahead == '{') ADVANCE(235);
      if (lookahead == '}') ADVANCE(237);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(202);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(182);
      if (lookahead != 0 &&
          lookahead > 159) ADVANCE(182);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(205);
      if (lookahead == '#') ADVANCE(129);
      if (lookahead == '%') ADVANCE(118);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == '/') ADVANCE(242);
      if (lookahead == '0') ADVANCE(43);
      if (lookahead == ':') ADVANCE(203);
      if (lookahead == '=') ADVANCE(278);
      if (lookahead == '@') ADVANCE(266);
      if (lookahead == 'T') ADVANCE(180);
      if (lookahead == '[') ADVANCE(231);
      if (lookahead == '_') ADVANCE(153);
      if (lookahead == '`') ADVANCE(249);
      if (lookahead == 'c') ADVANCE(171);
      if (lookahead == 'f') ADVANCE(164);
      if (lookahead == 'n') ADVANCE(169);
      if (lookahead == 't') ADVANCE(176);
      if (lookahead == '{') ADVANCE(235);
      if (lookahead == '}') ADVANCE(237);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(202);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(182);
      if (lookahead != 0 &&
          lookahead > 159) ADVANCE(182);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(205);
      if (lookahead == '#') ADVANCE(216);
      if (lookahead == ',') ADVANCE(233);
      if (lookahead == ':') ADVANCE(203);
      if (lookahead == '=') ADVANCE(215);
      if (lookahead == '}') ADVANCE(237);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(208);
      if (lookahead != 0) ADVANCE(206);
      END_STATE();
    case 14:
      if (lookahead == '"') ADVANCE(205);
      if (lookahead == '#') ADVANCE(216);
      if (lookahead == ',') ADVANCE(233);
      if (lookahead == '=') ADVANCE(215);
      if (lookahead == '}') ADVANCE(237);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(209);
      if (lookahead != 0) ADVANCE(206);
      END_STATE();
    case 15:
      if (lookahead == '"') ADVANCE(205);
      if (lookahead == '#') ADVANCE(216);
      if (lookahead == ',') ADVANCE(233);
      if (lookahead == ']') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(210);
      if (lookahead != 0) ADVANCE(206);
      END_STATE();
    case 16:
      if (lookahead == '"') ADVANCE(205);
      if (lookahead == '#') ADVANCE(216);
      if (lookahead == ',') ADVANCE(233);
      if (lookahead == '}') ADVANCE(237);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(211);
      if (lookahead != 0) ADVANCE(206);
      END_STATE();
    case 17:
      if (lookahead == '"') ADVANCE(205);
      if (lookahead == '#') ADVANCE(216);
      if (lookahead == ':') ADVANCE(203);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(212);
      if (lookahead != 0) ADVANCE(206);
      END_STATE();
    case 18:
      if (lookahead == '"') ADVANCE(205);
      if (lookahead == '#') ADVANCE(216);
      if (lookahead == '=') ADVANCE(215);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(213);
      if (lookahead != 0) ADVANCE(206);
      END_STATE();
    case 19:
      if (lookahead == '"') ADVANCE(205);
      if (lookahead == '#') ADVANCE(216);
      if (lookahead == ']') ADVANCE(241);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(214);
      if (lookahead != 0) ADVANCE(206);
      END_STATE();
    case 20:
      if (lookahead == '"') ADVANCE(205);
      if (lookahead == '#') ADVANCE(216);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(214);
      if (lookahead != 0) ADVANCE(206);
      END_STATE();
    case 21:
      if (lookahead == '#') ADVANCE(129);
      if (lookahead == '(') ADVANCE(288);
      if (lookahead == ')') ADVANCE(257);
      if (lookahead == ',') ADVANCE(233);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '=') ADVANCE(280);
      if (lookahead == '[') ADVANCE(239);
      if (lookahead == ']') ADVANCE(234);
      if (lookahead == '}') ADVANCE(237);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (lookahead != 0 &&
          lookahead > '@' &&
          (lookahead < '\\' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(182);
      END_STATE();
    case 22:
      if (lookahead == '#') ADVANCE(129);
      if (lookahead == '(') ADVANCE(288);
      if (lookahead == ')') ADVANCE(257);
      if (lookahead == ',') ADVANCE(233);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '=') ADVANCE(280);
      if (lookahead == ']') ADVANCE(234);
      if (lookahead == '}') ADVANCE(237);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (lookahead != 0 &&
          lookahead > '@' &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(182);
      END_STATE();
    case 23:
      if (lookahead == '#') ADVANCE(129);
      if (lookahead == '=') ADVANCE(278);
      if (lookahead == '[') ADVANCE(239);
      if (lookahead == ']') ADVANCE(241);
      if (lookahead == '_') ADVANCE(91);
      if (lookahead == 'o') ADVANCE(107);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(276);
      END_STATE();
    case 24:
      if (lookahead == '#') ADVANCE(129);
      if (lookahead == '=') ADVANCE(278);
      if (lookahead == '[') ADVANCE(239);
      if (lookahead == ']') ADVANCE(241);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (lookahead != 0 &&
          lookahead > '@' &&
          (lookahead < '\\' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(182);
      END_STATE();
    case 25:
      if (lookahead == '#') ADVANCE(129);
      if (lookahead == '=') ADVANCE(278);
      if (lookahead == '_') ADVANCE(91);
      if (lookahead == 'o') ADVANCE(107);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(276);
      END_STATE();
    case 26:
      if (lookahead == '#') ADVANCE(129);
      if (lookahead == '=') ADVANCE(278);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (lookahead != 0 &&
          lookahead > '@' &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(182);
      END_STATE();
    case 27:
      if (lookahead == '#') ADVANCE(129);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 28:
      if (lookahead == '\'') ADVANCE(217);
      if (lookahead == '\\') ADVANCE(29);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 29:
      if (lookahead == '\'') ADVANCE(230);
      if (lookahead == '\\') ADVANCE(31);
      if (lookahead == 'a') ADVANCE(32);
      if (lookahead == 'b') ADVANCE(33);
      if (lookahead == 'e') ADVANCE(34);
      if (lookahead == 'f') ADVANCE(35);
      if (lookahead == 'n') ADVANCE(36);
      if (lookahead == 'r') ADVANCE(37);
      if (lookahead == 't') ADVANCE(38);
      if (lookahead == 'u') ADVANCE(119);
      if (lookahead == 'v') ADVANCE(39);
      END_STATE();
    case 30:
      if (lookahead == '\'') ADVANCE(229);
      END_STATE();
    case 31:
      if (lookahead == '\'') ADVANCE(219);
      END_STATE();
    case 32:
      if (lookahead == '\'') ADVANCE(220);
      END_STATE();
    case 33:
      if (lookahead == '\'') ADVANCE(221);
      END_STATE();
    case 34:
      if (lookahead == '\'') ADVANCE(222);
      END_STATE();
    case 35:
      if (lookahead == '\'') ADVANCE(223);
      END_STATE();
    case 36:
      if (lookahead == '\'') ADVANCE(224);
      END_STATE();
    case 37:
      if (lookahead == '\'') ADVANCE(225);
      END_STATE();
    case 38:
      if (lookahead == '\'') ADVANCE(226);
      END_STATE();
    case 39:
      if (lookahead == '\'') ADVANCE(227);
      END_STATE();
    case 40:
      if (lookahead == '\'') ADVANCE(228);
      END_STATE();
    case 41:
      if (lookahead == '\'') ADVANCE(228);
      if (lookahead == '}') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(41);
      END_STATE();
    case 42:
      if (lookahead == '(') ADVANCE(253);
      END_STATE();
    case 43:
      if (lookahead == '.') ADVANCE(126);
      if (lookahead == 'b') ADVANCE(122);
      if (lookahead == 'e') ADVANCE(120);
      if (lookahead == 'f') ADVANCE(58);
      if (lookahead == 'o') ADVANCE(123);
      if (lookahead == 'x') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(44);
      END_STATE();
    case 44:
      if (lookahead == '.') ADVANCE(126);
      if (lookahead == 'e') ADVANCE(120);
      if (lookahead == 'f') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(44);
      END_STATE();
    case 45:
      if (lookahead == '.') ADVANCE(111);
      END_STATE();
    case 46:
      if (lookahead == '0') ADVANCE(43);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(202);
      END_STATE();
    case 47:
      if (lookahead == '1') ADVANCE(68);
      if (lookahead == '3') ADVANCE(51);
      if (lookahead == '6') ADVANCE(61);
      if (lookahead == '8') ADVANCE(201);
      END_STATE();
    case 48:
      if (lookahead == '1') ADVANCE(69);
      if (lookahead == '3') ADVANCE(53);
      if (lookahead == '6') ADVANCE(63);
      if (lookahead == '8') ADVANCE(195);
      END_STATE();
    case 49:
      if (lookahead == '1') ADVANCE(70);
      if (lookahead == '3') ADVANCE(54);
      if (lookahead == '6') ADVANCE(64);
      if (lookahead == '8') ADVANCE(197);
      END_STATE();
    case 50:
      if (lookahead == '1') ADVANCE(71);
      if (lookahead == '3') ADVANCE(55);
      if (lookahead == '6') ADVANCE(65);
      if (lookahead == '8') ADVANCE(199);
      END_STATE();
    case 51:
      if (lookahead == '2') ADVANCE(201);
      END_STATE();
    case 52:
      if (lookahead == '2') ADVANCE(194);
      END_STATE();
    case 53:
      if (lookahead == '2') ADVANCE(195);
      END_STATE();
    case 54:
      if (lookahead == '2') ADVANCE(197);
      END_STATE();
    case 55:
      if (lookahead == '2') ADVANCE(199);
      END_STATE();
    case 56:
      if (lookahead == '2') ADVANCE(189);
      END_STATE();
    case 57:
      if (lookahead == '2') ADVANCE(192);
      END_STATE();
    case 58:
      if (lookahead == '3') ADVANCE(52);
      if (lookahead == '6') ADVANCE(62);
      END_STATE();
    case 59:
      if (lookahead == '3') ADVANCE(56);
      if (lookahead == '6') ADVANCE(66);
      END_STATE();
    case 60:
      if (lookahead == '3') ADVANCE(57);
      if (lookahead == '6') ADVANCE(67);
      END_STATE();
    case 61:
      if (lookahead == '4') ADVANCE(201);
      END_STATE();
    case 62:
      if (lookahead == '4') ADVANCE(194);
      END_STATE();
    case 63:
      if (lookahead == '4') ADVANCE(195);
      END_STATE();
    case 64:
      if (lookahead == '4') ADVANCE(197);
      END_STATE();
    case 65:
      if (lookahead == '4') ADVANCE(199);
      END_STATE();
    case 66:
      if (lookahead == '4') ADVANCE(189);
      END_STATE();
    case 67:
      if (lookahead == '4') ADVANCE(192);
      END_STATE();
    case 68:
      if (lookahead == '6') ADVANCE(201);
      END_STATE();
    case 69:
      if (lookahead == '6') ADVANCE(195);
      END_STATE();
    case 70:
      if (lookahead == '6') ADVANCE(197);
      END_STATE();
    case 71:
      if (lookahead == '6') ADVANCE(199);
      END_STATE();
    case 72:
      if (lookahead == ':') ADVANCE(287);
      END_STATE();
    case 73:
      if (lookahead == '=') ADVANCE(302);
      if (lookahead == '~') ADVANCE(315);
      END_STATE();
    case 74:
      if (lookahead == '>') ADVANCE(236);
      END_STATE();
    case 75:
      if (lookahead == 'D') ADVANCE(80);
      if (lookahead == 'E') ADVANCE(86);
      if (lookahead == 'F') ADVANCE(81);
      if (lookahead == 'L') ADVANCE(82);
      END_STATE();
    case 76:
      if (lookahead == 'D') ADVANCE(96);
      END_STATE();
    case 77:
      if (lookahead == 'E') ADVANCE(98);
      END_STATE();
    case 78:
      if (lookahead == 'E') ADVANCE(99);
      END_STATE();
    case 79:
      if (lookahead == 'E') ADVANCE(100);
      END_STATE();
    case 80:
      if (lookahead == 'I') ADVANCE(89);
      END_STATE();
    case 81:
      if (lookahead == 'I') ADVANCE(84);
      END_STATE();
    case 82:
      if (lookahead == 'I') ADVANCE(87);
      END_STATE();
    case 83:
      if (lookahead == 'I') ADVANCE(88);
      END_STATE();
    case 84:
      if (lookahead == 'L') ADVANCE(77);
      END_STATE();
    case 85:
      if (lookahead == 'L') ADVANCE(83);
      END_STATE();
    case 86:
      if (lookahead == 'N') ADVANCE(76);
      END_STATE();
    case 87:
      if (lookahead == 'N') ADVANCE(78);
      END_STATE();
    case 88:
      if (lookahead == 'N') ADVANCE(79);
      END_STATE();
    case 89:
      if (lookahead == 'R') ADVANCE(97);
      END_STATE();
    case 90:
      if (lookahead == ']') ADVANCE(309);
      END_STATE();
    case 91:
      if (lookahead == '_') ADVANCE(75);
      END_STATE();
    case 92:
      if (lookahead == '_') ADVANCE(274);
      END_STATE();
    case 93:
      if (lookahead == '_') ADVANCE(272);
      END_STATE();
    case 94:
      if (lookahead == '_') ADVANCE(268);
      END_STATE();
    case 95:
      if (lookahead == '_') ADVANCE(270);
      END_STATE();
    case 96:
      if (lookahead == '_') ADVANCE(85);
      END_STATE();
    case 97:
      if (lookahead == '_') ADVANCE(92);
      END_STATE();
    case 98:
      if (lookahead == '_') ADVANCE(93);
      END_STATE();
    case 99:
      if (lookahead == '_') ADVANCE(94);
      END_STATE();
    case 100:
      if (lookahead == '_') ADVANCE(95);
      END_STATE();
    case 101:
      if (lookahead == 'a') ADVANCE(114);
      END_STATE();
    case 102:
      if (lookahead == 'd') ADVANCE(285);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(185);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(187);
      END_STATE();
    case 107:
      if (lookahead == 'f') ADVANCE(238);
      END_STATE();
    case 108:
      if (lookahead == 'l') ADVANCE(183);
      END_STATE();
    case 109:
      if (lookahead == 'l') ADVANCE(115);
      END_STATE();
    case 110:
      if (lookahead == 'l') ADVANCE(105);
      END_STATE();
    case 111:
      if (lookahead == 'n') ADVANCE(103);
      END_STATE();
    case 112:
      if (lookahead == 'p') ADVANCE(110);
      END_STATE();
    case 113:
      if (lookahead == 's') ADVANCE(281);
      END_STATE();
    case 114:
      if (lookahead == 's') ADVANCE(113);
      END_STATE();
    case 115:
      if (lookahead == 's') ADVANCE(106);
      END_STATE();
    case 116:
      if (lookahead == 'u') ADVANCE(104);
      END_STATE();
    case 117:
      if (lookahead == 'w') ADVANCE(248);
      END_STATE();
    case 118:
      if (lookahead == 'x') ADVANCE(42);
      END_STATE();
    case 119:
      if (lookahead == '{') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(41);
      END_STATE();
    case 120:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(193);
      END_STATE();
    case 121:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(191);
      END_STATE();
    case 122:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(196);
      END_STATE();
    case 123:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(198);
      END_STATE();
    case 124:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(193);
      END_STATE();
    case 125:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(191);
      END_STATE();
    case 126:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(190);
      END_STATE();
    case 127:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(200);
      END_STATE();
    case 128:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(41);
      END_STATE();
    case 129:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(258);
      END_STATE();
    case 130:
      if (eof) ADVANCE(132);
      if (lookahead == '!') ADVANCE(312);
      if (lookahead == '"') ADVANCE(205);
      if (lookahead == '#') ADVANCE(129);
      if (lookahead == '%') ADVANCE(295);
      if (lookahead == '&') ADVANCE(296);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == '(') ADVANCE(288);
      if (lookahead == ')') ADVANCE(257);
      if (lookahead == '*') ADVANCE(293);
      if (lookahead == '+') ADVANCE(290);
      if (lookahead == ',') ADVANCE(233);
      if (lookahead == '-') ADVANCE(292);
      if (lookahead == '/') ADVANCE(242);
      if (lookahead == '0') ADVANCE(43);
      if (lookahead == ':') ADVANCE(204);
      if (lookahead == ';') ADVANCE(133);
      if (lookahead == '<') ADVANCE(284);
      if (lookahead == '=') ADVANCE(279);
      if (lookahead == '>') ADVANCE(305);
      if (lookahead == '@') ADVANCE(266);
      if (lookahead == 'T') ADVANCE(180);
      if (lookahead == '[') ADVANCE(232);
      if (lookahead == ']') ADVANCE(234);
      if (lookahead == '^') ADVANCE(298);
      if (lookahead == '_') ADVANCE(153);
      if (lookahead == '`') ADVANCE(249);
      if (lookahead == 'c') ADVANCE(171);
      if (lookahead == 'e') ADVANCE(174);
      if (lookahead == 'f') ADVANCE(164);
      if (lookahead == 'n') ADVANCE(169);
      if (lookahead == 't') ADVANCE(176);
      if (lookahead == '{') ADVANCE(235);
      if (lookahead == '|') ADVANCE(297);
      if (lookahead == '}') ADVANCE(237);
      if (lookahead == '~') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(130)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(202);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(182);
      if (lookahead != 0 &&
          lookahead > 159) ADVANCE(182);
      END_STATE();
    case 131:
      if (eof) ADVANCE(132);
      if (lookahead == '"') ADVANCE(205);
      if (lookahead == '#') ADVANCE(129);
      if (lookahead == '%') ADVANCE(118);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == ',') ADVANCE(233);
      if (lookahead == '/') ADVANCE(242);
      if (lookahead == '0') ADVANCE(43);
      if (lookahead == ':') ADVANCE(203);
      if (lookahead == '=') ADVANCE(280);
      if (lookahead == '@') ADVANCE(266);
      if (lookahead == 'T') ADVANCE(277);
      if (lookahead == '[') ADVANCE(231);
      if (lookahead == ']') ADVANCE(234);
      if (lookahead == '_') ADVANCE(260);
      if (lookahead == '`') ADVANCE(249);
      if (lookahead == 'c') ADVANCE(263);
      if (lookahead == 'f') ADVANCE(261);
      if (lookahead == 'n') ADVANCE(262);
      if (lookahead == 't') ADVANCE(265);
      if (lookahead == '{') ADVANCE(235);
      if (lookahead == '}') ADVANCE(237);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(131)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(202);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(276);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym__statement_token1);
      if (lookahead == '\n') ADVANCE(134);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym__statement_token1);
      if (lookahead == '\n') ADVANCE(135);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(207);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(182);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'D') ADVANCE(143);
      if (lookahead == 'E') ADVANCE(149);
      if (lookahead == 'F') ADVANCE(144);
      if (lookahead == 'L') ADVANCE(145);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(182);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'D') ADVANCE(158);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(182);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'E') ADVANCE(160);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(182);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'E') ADVANCE(161);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(182);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'E') ADVANCE(162);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(182);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'I') ADVANCE(152);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(182);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'I') ADVANCE(147);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(182);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'I') ADVANCE(150);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(182);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'I') ADVANCE(151);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(182);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'L') ADVANCE(140);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(182);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'L') ADVANCE(146);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(182);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'N') ADVANCE(139);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(182);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'N') ADVANCE(141);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(182);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'N') ADVANCE(142);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(182);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'R') ADVANCE(159);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(182);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '_') ADVANCE(138);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(182);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '_') ADVANCE(275);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(182);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '_') ADVANCE(273);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(182);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '_') ADVANCE(269);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(182);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '_') ADVANCE(271);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(182);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '_') ADVANCE(148);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(182);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '_') ADVANCE(154);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(182);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '_') ADVANCE(155);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(182);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '_') ADVANCE(156);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(182);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '_') ADVANCE(157);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(182);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(178);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(182);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(172);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(182);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'd') ADVANCE(286);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(182);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(186);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(182);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(137);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(182);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(188);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(182);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(170);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(182);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(184);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(182);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(163);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(182);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(179);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(182);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(167);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(182);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(165);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(182);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'p') ADVANCE(173);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(182);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(181);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(182);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 's') ADVANCE(282);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(182);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 's') ADVANCE(177);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(182);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 's') ADVANCE(168);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(182);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'u') ADVANCE(175);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(182);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'u') ADVANCE(166);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(182);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(182);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_nil);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_nil);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(182);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(182);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(182);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_float_token1);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (lookahead == 'e') ADVANCE(121);
      if (lookahead == 'f') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(190);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (lookahead == 'f') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(191);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_float_token2);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (lookahead == 'f') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(193);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_float_token3);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == 'i') ADVANCE(48);
      if (lookahead == 'u') ADVANCE(48);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(196);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_integer_token2);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_integer_token2);
      if (lookahead == 'i') ADVANCE(49);
      if (lookahead == 'u') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(198);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_integer_token3);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_integer_token3);
      if (lookahead == 'i') ADVANCE(50);
      if (lookahead == 'u') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(200);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_integer_token4);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_integer_token4);
      if (lookahead == '.') ADVANCE(126);
      if (lookahead == 'e') ADVANCE(120);
      if (lookahead == 'f') ADVANCE(58);
      if (lookahead == 'i') ADVANCE(47);
      if (lookahead == 'u') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(202);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(287);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\n') ADVANCE(135);
      if (lookahead == '#') ADVANCE(216);
      if (lookahead == ';') ADVANCE(133);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(207);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(206);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(216);
      if (lookahead == ',') ADVANCE(233);
      if (lookahead == ':') ADVANCE(203);
      if (lookahead == '=') ADVANCE(215);
      if (lookahead == '}') ADVANCE(237);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(208);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(206);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(216);
      if (lookahead == ',') ADVANCE(233);
      if (lookahead == '=') ADVANCE(215);
      if (lookahead == '}') ADVANCE(237);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(206);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(216);
      if (lookahead == ',') ADVANCE(233);
      if (lookahead == ']') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(210);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(206);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(216);
      if (lookahead == ',') ADVANCE(233);
      if (lookahead == '}') ADVANCE(237);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(206);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(216);
      if (lookahead == ':') ADVANCE(203);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(206);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(216);
      if (lookahead == '=') ADVANCE(215);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(213);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(206);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(216);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(214);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(206);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '>') ADVANCE(236);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(258);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_SQUOTE_BSLASHa_SQUOTE);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_SQUOTE_BSLASHb_SQUOTE);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_SQUOTE_BSLASHe_SQUOTE);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_SQUOTE_BSLASHf_SQUOTE);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_SQUOTE_BSLASHn_SQUOTE);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_SQUOTE_BSLASHr_SQUOTE);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_SQUOTE_BSLASHt_SQUOTE);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_SQUOTE_BSLASHv_SQUOTE);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_char_token1);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_char_token2);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_char_token2);
      if (lookahead == '\'') ADVANCE(218);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == ']') ADVANCE(309);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_LBRACK2);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_LBRACK2);
      if (lookahead == ']') ADVANCE(309);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_RBRACK2);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_regex_token1);
      if (lookahead == '\n') ADVANCE(246);
      if (lookahead == '/') ADVANCE(258);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead != 0) ADVANCE(243);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_regex_token1);
      if (lookahead == '\n') ADVANCE(246);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(243);
      if (lookahead == '\\') ADVANCE(244);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_regex_token1);
      if (lookahead == '#') ADVANCE(243);
      if (lookahead == '\\') ADVANCE(247);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(245);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(246);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_regex_token1);
      if (lookahead == '\\') ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(246);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_regex_token1);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(246);
      if (lookahead == '\\') ADVANCE(247);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_Tuple_DOTnew);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_commandLiteral_token1);
      if (lookahead == '\n') ADVANCE(252);
      if (lookahead == '`') ADVANCE(258);
      if (lookahead != 0) ADVANCE(250);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_commandLiteral_token1);
      if (lookahead == '#') ADVANCE(250);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(251);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(252);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_commandLiteral_token1);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(252);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_PERCENTx_LPAREN);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_commandLiteral_token2);
      if (lookahead == '\n') ADVANCE(256);
      if (lookahead == ')') ADVANCE(258);
      if (lookahead != 0) ADVANCE(254);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_commandLiteral_token2);
      if (lookahead == '#') ADVANCE(254);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(256);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_commandLiteral_token2);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(256);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(258);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_local_variable_token1);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_local_variable_token1);
      if (lookahead == '_') ADVANCE(75);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_local_variable_token1);
      if (lookahead == 'a') ADVANCE(109);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_local_variable_token1);
      if (lookahead == 'i') ADVANCE(108);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_local_variable_token1);
      if (lookahead == 'l') ADVANCE(101);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_local_variable_token1);
      if (lookahead == 'n') ADVANCE(102);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_local_variable_token1);
      if (lookahead == 'r') ADVANCE(116);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '@') ADVANCE(267);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym___LINE__);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym___LINE__);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(182);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym___END_LINE__);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym___END_LINE__);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(182);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym___FILE__);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym___FILE__);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(182);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym___DIR__);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym___DIR__);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(182);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == 'u') ADVANCE(112);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(302);
      if (lookahead == '>') ADVANCE(236);
      if (lookahead == '~') ADVANCE(315);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>') ADVANCE(236);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_class);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(182);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(301);
      if (lookahead == '=') ADVANCE(304);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(182);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '0') ADVANCE(43);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(202);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '0') ADVANCE(43);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(202);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(299);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == 'x') ADVANCE(42);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      if (lookahead == '=') ADVANCE(308);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      if (lookahead == '>') ADVANCE(307);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(306);
      if (lookahead == '>') ADVANCE(300);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_LT_EQ_GT);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_EQ_EQ_EQ);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_LBRACK_RBRACK);
      if (lookahead == '=') ADVANCE(311);
      if (lookahead == '?') ADVANCE(310);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_LBRACK_RBRACK_QMARK);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_LBRACK_RBRACK_EQ);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(303);
      if (lookahead == '~') ADVANCE(314);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_BANG_TILDE);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_EQ_TILDE);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 131},
  [2] = {.lex_state = 10},
  [3] = {.lex_state = 10},
  [4] = {.lex_state = 10},
  [5] = {.lex_state = 11},
  [6] = {.lex_state = 10},
  [7] = {.lex_state = 10},
  [8] = {.lex_state = 10},
  [9] = {.lex_state = 10},
  [10] = {.lex_state = 10},
  [11] = {.lex_state = 10},
  [12] = {.lex_state = 11},
  [13] = {.lex_state = 10},
  [14] = {.lex_state = 10},
  [15] = {.lex_state = 10},
  [16] = {.lex_state = 10},
  [17] = {.lex_state = 131},
  [18] = {.lex_state = 11},
  [19] = {.lex_state = 131},
  [20] = {.lex_state = 131},
  [21] = {.lex_state = 131},
  [22] = {.lex_state = 131},
  [23] = {.lex_state = 131},
  [24] = {.lex_state = 131},
  [25] = {.lex_state = 131},
  [26] = {.lex_state = 131},
  [27] = {.lex_state = 131},
  [28] = {.lex_state = 131},
  [29] = {.lex_state = 131},
  [30] = {.lex_state = 131},
  [31] = {.lex_state = 131},
  [32] = {.lex_state = 131},
  [33] = {.lex_state = 131},
  [34] = {.lex_state = 131},
  [35] = {.lex_state = 131},
  [36] = {.lex_state = 131},
  [37] = {.lex_state = 131},
  [38] = {.lex_state = 131},
  [39] = {.lex_state = 131},
  [40] = {.lex_state = 131},
  [41] = {.lex_state = 131},
  [42] = {.lex_state = 131},
  [43] = {.lex_state = 6},
  [44] = {.lex_state = 6},
  [45] = {.lex_state = 10},
  [46] = {.lex_state = 10},
  [47] = {.lex_state = 10},
  [48] = {.lex_state = 10},
  [49] = {.lex_state = 8},
  [50] = {.lex_state = 7},
  [51] = {.lex_state = 8},
  [52] = {.lex_state = 131},
  [53] = {.lex_state = 10},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 4},
  [57] = {.lex_state = 4},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 4},
  [60] = {.lex_state = 21},
  [61] = {.lex_state = 21},
  [62] = {.lex_state = 21},
  [63] = {.lex_state = 23},
  [64] = {.lex_state = 23},
  [65] = {.lex_state = 23},
  [66] = {.lex_state = 23},
  [67] = {.lex_state = 23},
  [68] = {.lex_state = 23},
  [69] = {.lex_state = 23},
  [70] = {.lex_state = 23},
  [71] = {.lex_state = 23},
  [72] = {.lex_state = 23},
  [73] = {.lex_state = 23},
  [74] = {.lex_state = 23},
  [75] = {.lex_state = 23},
  [76] = {.lex_state = 23},
  [77] = {.lex_state = 23},
  [78] = {.lex_state = 23},
  [79] = {.lex_state = 23},
  [80] = {.lex_state = 23},
  [81] = {.lex_state = 23},
  [82] = {.lex_state = 23},
  [83] = {.lex_state = 23},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 23},
  [86] = {.lex_state = 23},
  [87] = {.lex_state = 23},
  [88] = {.lex_state = 13},
  [89] = {.lex_state = 1},
  [90] = {.lex_state = 21},
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 13},
  [93] = {.lex_state = 14},
  [94] = {.lex_state = 14},
  [95] = {.lex_state = 131},
  [96] = {.lex_state = 14},
  [97] = {.lex_state = 14},
  [98] = {.lex_state = 23},
  [99] = {.lex_state = 16},
  [100] = {.lex_state = 131},
  [101] = {.lex_state = 16},
  [102] = {.lex_state = 131},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 131},
  [105] = {.lex_state = 131},
  [106] = {.lex_state = 131},
  [107] = {.lex_state = 131},
  [108] = {.lex_state = 131},
  [109] = {.lex_state = 131},
  [110] = {.lex_state = 3},
  [111] = {.lex_state = 131},
  [112] = {.lex_state = 3},
  [113] = {.lex_state = 15},
  [114] = {.lex_state = 16},
  [115] = {.lex_state = 4},
  [116] = {.lex_state = 131},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 131},
  [119] = {.lex_state = 131},
  [120] = {.lex_state = 131},
  [121] = {.lex_state = 131},
  [122] = {.lex_state = 16},
  [123] = {.lex_state = 131},
  [124] = {.lex_state = 131},
  [125] = {.lex_state = 3},
  [126] = {.lex_state = 1},
  [127] = {.lex_state = 131},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 131},
  [130] = {.lex_state = 15},
  [131] = {.lex_state = 24},
  [132] = {.lex_state = 1},
  [133] = {.lex_state = 3},
  [134] = {.lex_state = 4},
  [135] = {.lex_state = 131},
  [136] = {.lex_state = 131},
  [137] = {.lex_state = 15},
  [138] = {.lex_state = 15},
  [139] = {.lex_state = 131},
  [140] = {.lex_state = 131},
  [141] = {.lex_state = 131},
  [142] = {.lex_state = 131},
  [143] = {.lex_state = 131},
  [144] = {.lex_state = 1},
  [145] = {.lex_state = 131},
  [146] = {.lex_state = 23},
  [147] = {.lex_state = 20},
  [148] = {.lex_state = 131},
  [149] = {.lex_state = 131},
  [150] = {.lex_state = 20},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 21},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 1},
  [155] = {.lex_state = 20},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 20},
  [158] = {.lex_state = 131},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 21},
  [162] = {.lex_state = 21},
  [163] = {.lex_state = 20},
  [164] = {.lex_state = 20},
  [165] = {.lex_state = 20},
  [166] = {.lex_state = 20},
  [167] = {.lex_state = 20},
  [168] = {.lex_state = 20},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 20},
  [171] = {.lex_state = 20},
  [172] = {.lex_state = 20},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 20},
  [175] = {.lex_state = 8},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 20},
  [179] = {.lex_state = 20},
  [180] = {.lex_state = 20},
  [181] = {.lex_state = 20},
  [182] = {.lex_state = 20},
  [183] = {.lex_state = 20},
  [184] = {.lex_state = 8},
  [185] = {.lex_state = 20},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 131},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 131},
  [198] = {.lex_state = 20},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 131},
  [201] = {.lex_state = 20},
  [202] = {.lex_state = 20},
  [203] = {.lex_state = 23},
  [204] = {.lex_state = 1},
  [205] = {.lex_state = 19},
  [206] = {.lex_state = 23},
  [207] = {.lex_state = 19},
  [208] = {.lex_state = 19},
  [209] = {.lex_state = 19},
  [210] = {.lex_state = 20},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 18},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 18},
  [219] = {.lex_state = 18},
  [220] = {.lex_state = 18},
  [221] = {.lex_state = 17},
  [222] = {.lex_state = 17},
  [223] = {.lex_state = 131},
  [224] = {.lex_state = 20},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 20},
  [228] = {.lex_state = 20},
  [229] = {.lex_state = 131},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 131},
  [234] = {.lex_state = 131},
  [235] = {.lex_state = 20},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 1},
  [238] = {.lex_state = 11},
  [239] = {.lex_state = 1},
  [240] = {.lex_state = 131},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 1},
  [243] = {.lex_state = 1},
  [244] = {.lex_state = 21},
  [245] = {.lex_state = 1},
  [246] = {.lex_state = 1},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 1},
  [249] = {.lex_state = 21},
  [250] = {.lex_state = 1},
  [251] = {.lex_state = 1},
  [252] = {.lex_state = 21},
  [253] = {.lex_state = 21},
  [254] = {.lex_state = 21},
  [255] = {.lex_state = 1},
  [256] = {.lex_state = 21},
  [257] = {.lex_state = 1},
  [258] = {.lex_state = 1},
  [259] = {.lex_state = 1},
  [260] = {.lex_state = 1},
  [261] = {.lex_state = 1},
  [262] = {.lex_state = 1},
  [263] = {.lex_state = 21},
  [264] = {.lex_state = 1},
  [265] = {.lex_state = 21},
  [266] = {.lex_state = 1},
  [267] = {.lex_state = 1},
  [268] = {.lex_state = 1},
  [269] = {.lex_state = 21},
  [270] = {.lex_state = 1},
  [271] = {.lex_state = 1},
  [272] = {.lex_state = 1},
  [273] = {.lex_state = 1},
  [274] = {.lex_state = 1},
  [275] = {.lex_state = 11},
  [276] = {.lex_state = 1},
  [277] = {.lex_state = 1},
  [278] = {.lex_state = 1},
  [279] = {.lex_state = 11},
  [280] = {.lex_state = 131},
  [281] = {.lex_state = 11},
  [282] = {.lex_state = 11},
  [283] = {.lex_state = 11},
  [284] = {.lex_state = 11},
  [285] = {.lex_state = 11},
  [286] = {.lex_state = 11},
  [287] = {.lex_state = 11},
  [288] = {.lex_state = 11},
  [289] = {.lex_state = 11},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 11},
  [293] = {.lex_state = 11},
  [294] = {.lex_state = 11},
  [295] = {.lex_state = 11},
  [296] = {.lex_state = 11},
  [297] = {.lex_state = 11},
  [298] = {.lex_state = 245},
  [299] = {.lex_state = 251},
  [300] = {.lex_state = 255},
  [301] = {.lex_state = 11},
  [302] = {.lex_state = 11},
  [303] = {.lex_state = 11},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 131},
  [308] = {.lex_state = 23},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 11},
  [311] = {.lex_state = 131},
  [312] = {.lex_state = 11},
  [313] = {.lex_state = 11},
  [314] = {.lex_state = 11},
  [315] = {.lex_state = 11},
  [316] = {.lex_state = 245},
  [317] = {.lex_state = 251},
  [318] = {.lex_state = 255},
  [319] = {.lex_state = 11},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 27},
  [324] = {.lex_state = 27},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 255},
  [327] = {.lex_state = 251},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 11},
  [330] = {.lex_state = 245},
  [331] = {.lex_state = 11},
  [332] = {.lex_state = 11},
  [333] = {.lex_state = 23},
  [334] = {.lex_state = 131},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 11},
  [337] = {.lex_state = 23},
  [338] = {.lex_state = 131},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 0},
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
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
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
    [sym_program] = STATE(322),
    [sym__statement] = STATE(19),
    [sym__expression] = STATE(260),
    [sym_bool] = STATE(260),
    [sym_float] = STATE(260),
    [sym_integer] = STATE(260),
    [sym_symbol] = STATE(260),
    [sym_char] = STATE(260),
    [sym_string] = STATE(260),
    [sym_array] = STATE(260),
    [sym_hash] = STATE(260),
    [sym_index_expression] = STATE(154),
    [sym_regex] = STATE(260),
    [sym_tuple] = STATE(260),
    [sym_namedTupleLiteral] = STATE(260),
    [sym_commandLiteral] = STATE(260),
    [sym_local_variable] = STATE(263),
    [sym_instance_variable] = STATE(263),
    [sym_class_variable] = STATE(263),
    [sym_constant] = STATE(126),
    [sym__variable] = STATE(263),
    [sym_assignment] = STATE(260),
    [sym_class_definition] = STATE(260),
    [aux_sym_program_repeat1] = STATE(19),
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
    [sym__statement] = STATE(9),
    [sym__expression] = STATE(246),
    [sym_bool] = STATE(246),
    [sym_float] = STATE(246),
    [sym_integer] = STATE(246),
    [sym_symbol] = STATE(246),
    [sym_char] = STATE(246),
    [sym_string] = STATE(246),
    [sym_array] = STATE(246),
    [sym_hash] = STATE(246),
    [sym_index_expression] = STATE(154),
    [sym_regex] = STATE(246),
    [sym_tuple] = STATE(246),
    [sym_namedTupleLiteral] = STATE(246),
    [sym_commandLiteral] = STATE(246),
    [sym_local_variable] = STATE(263),
    [sym_instance_variable] = STATE(263),
    [sym_class_variable] = STATE(263),
    [sym_constant] = STATE(126),
    [sym__variable] = STATE(263),
    [sym_assignment] = STATE(246),
    [sym_class_definition] = STATE(246),
    [aux_sym_program_repeat1] = STATE(9),
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
    [anon_sym_LT] = ACTIONS(53),
    [anon_sym_end] = ACTIONS(55),
  },
  [3] = {
    [sym__statement] = STATE(14),
    [sym__expression] = STATE(246),
    [sym_bool] = STATE(246),
    [sym_float] = STATE(246),
    [sym_integer] = STATE(246),
    [sym_symbol] = STATE(246),
    [sym_char] = STATE(246),
    [sym_string] = STATE(246),
    [sym_array] = STATE(246),
    [sym_hash] = STATE(246),
    [sym_index_expression] = STATE(154),
    [sym_regex] = STATE(246),
    [sym_tuple] = STATE(246),
    [sym_namedTupleLiteral] = STATE(246),
    [sym_commandLiteral] = STATE(246),
    [sym_local_variable] = STATE(263),
    [sym_instance_variable] = STATE(263),
    [sym_class_variable] = STATE(263),
    [sym_constant] = STATE(126),
    [sym__variable] = STATE(263),
    [sym_assignment] = STATE(246),
    [sym_class_definition] = STATE(246),
    [aux_sym_program_repeat1] = STATE(14),
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
    [anon_sym_LT] = ACTIONS(57),
    [anon_sym_end] = ACTIONS(59),
  },
  [4] = {
    [sym__statement] = STATE(8),
    [sym__expression] = STATE(246),
    [sym_bool] = STATE(246),
    [sym_float] = STATE(246),
    [sym_integer] = STATE(246),
    [sym_symbol] = STATE(246),
    [sym_char] = STATE(246),
    [sym_string] = STATE(246),
    [sym_array] = STATE(246),
    [sym_hash] = STATE(246),
    [sym_index_expression] = STATE(154),
    [sym_regex] = STATE(246),
    [sym_tuple] = STATE(246),
    [sym_namedTupleLiteral] = STATE(246),
    [sym_commandLiteral] = STATE(246),
    [sym_local_variable] = STATE(263),
    [sym_instance_variable] = STATE(263),
    [sym_class_variable] = STATE(263),
    [sym_constant] = STATE(126),
    [sym__variable] = STATE(263),
    [sym_assignment] = STATE(246),
    [sym_class_definition] = STATE(246),
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
    [anon_sym_LT] = ACTIONS(61),
    [anon_sym_end] = ACTIONS(63),
  },
  [5] = {
    [sym__expression] = STATE(103),
    [sym_identifier] = STATE(338),
    [sym_bool] = STATE(103),
    [sym_float] = STATE(103),
    [sym_integer] = STATE(103),
    [sym_symbol] = STATE(103),
    [sym_char] = STATE(103),
    [sym_string] = STATE(102),
    [sym_array] = STATE(103),
    [sym_hash] = STATE(103),
    [sym_index_expression] = STATE(136),
    [sym_regex] = STATE(103),
    [sym_tuple] = STATE(103),
    [sym_namedTupleLiteral] = STATE(103),
    [sym_commandLiteral] = STATE(103),
    [sym_local_variable] = STATE(265),
    [sym_instance_variable] = STATE(265),
    [sym_class_variable] = STATE(265),
    [sym_constant] = STATE(90),
    [sym__variable] = STATE(265),
    [sym_assignment] = STATE(103),
    [sym_class_definition] = STATE(103),
    [aux_sym_identifier_token1] = ACTIONS(65),
    [sym_nil] = ACTIONS(67),
    [anon_sym_true] = ACTIONS(69),
    [anon_sym_false] = ACTIONS(69),
    [aux_sym_float_token1] = ACTIONS(71),
    [aux_sym_float_token2] = ACTIONS(73),
    [aux_sym_float_token3] = ACTIONS(73),
    [aux_sym_integer_token1] = ACTIONS(75),
    [aux_sym_integer_token2] = ACTIONS(75),
    [aux_sym_integer_token3] = ACTIONS(75),
    [aux_sym_integer_token4] = ACTIONS(77),
    [anon_sym_COLON] = ACTIONS(79),
    [anon_sym_DQUOTE] = ACTIONS(81),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHa_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHb_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHe_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHf_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHn_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHr_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHt_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHv_SQUOTE] = ACTIONS(83),
    [aux_sym_char_token1] = ACTIONS(83),
    [aux_sym_char_token2] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_LBRACE] = ACTIONS(89),
    [anon_sym_RBRACE] = ACTIONS(91),
    [anon_sym_SLASH] = ACTIONS(93),
    [anon_sym_Tuple_DOTnew] = ACTIONS(95),
    [anon_sym_BQUOTE] = ACTIONS(97),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(99),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(39),
    [anon_sym_AT] = ACTIONS(41),
    [anon_sym_AT_AT] = ACTIONS(43),
    [anon_sym___LINE__] = ACTIONS(101),
    [anon_sym___END_LINE__] = ACTIONS(101),
    [anon_sym___FILE__] = ACTIONS(101),
    [anon_sym___DIR__] = ACTIONS(101),
    [aux_sym_constant_token1] = ACTIONS(103),
    [anon_sym_class] = ACTIONS(105),
  },
  [6] = {
    [sym__statement] = STATE(6),
    [sym__expression] = STATE(246),
    [sym_bool] = STATE(246),
    [sym_float] = STATE(246),
    [sym_integer] = STATE(246),
    [sym_symbol] = STATE(246),
    [sym_char] = STATE(246),
    [sym_string] = STATE(246),
    [sym_array] = STATE(246),
    [sym_hash] = STATE(246),
    [sym_index_expression] = STATE(154),
    [sym_regex] = STATE(246),
    [sym_tuple] = STATE(246),
    [sym_namedTupleLiteral] = STATE(246),
    [sym_commandLiteral] = STATE(246),
    [sym_local_variable] = STATE(263),
    [sym_instance_variable] = STATE(263),
    [sym_class_variable] = STATE(263),
    [sym_constant] = STATE(126),
    [sym__variable] = STATE(263),
    [sym_assignment] = STATE(246),
    [sym_class_definition] = STATE(246),
    [aux_sym_program_repeat1] = STATE(6),
    [sym_nil] = ACTIONS(107),
    [anon_sym_true] = ACTIONS(110),
    [anon_sym_false] = ACTIONS(110),
    [aux_sym_float_token1] = ACTIONS(113),
    [aux_sym_float_token2] = ACTIONS(116),
    [aux_sym_float_token3] = ACTIONS(116),
    [aux_sym_integer_token1] = ACTIONS(119),
    [aux_sym_integer_token2] = ACTIONS(119),
    [aux_sym_integer_token3] = ACTIONS(119),
    [aux_sym_integer_token4] = ACTIONS(122),
    [anon_sym_COLON] = ACTIONS(125),
    [anon_sym_DQUOTE] = ACTIONS(128),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(131),
    [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = ACTIONS(131),
    [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = ACTIONS(131),
    [anon_sym_SQUOTE_BSLASHa_SQUOTE] = ACTIONS(131),
    [anon_sym_SQUOTE_BSLASHb_SQUOTE] = ACTIONS(131),
    [anon_sym_SQUOTE_BSLASHe_SQUOTE] = ACTIONS(131),
    [anon_sym_SQUOTE_BSLASHf_SQUOTE] = ACTIONS(131),
    [anon_sym_SQUOTE_BSLASHn_SQUOTE] = ACTIONS(131),
    [anon_sym_SQUOTE_BSLASHr_SQUOTE] = ACTIONS(131),
    [anon_sym_SQUOTE_BSLASHt_SQUOTE] = ACTIONS(131),
    [anon_sym_SQUOTE_BSLASHv_SQUOTE] = ACTIONS(131),
    [aux_sym_char_token1] = ACTIONS(131),
    [aux_sym_char_token2] = ACTIONS(134),
    [anon_sym_LBRACK] = ACTIONS(137),
    [anon_sym_LBRACE] = ACTIONS(140),
    [anon_sym_SLASH] = ACTIONS(143),
    [anon_sym_Tuple_DOTnew] = ACTIONS(146),
    [anon_sym_BQUOTE] = ACTIONS(149),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(152),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(155),
    [anon_sym_AT] = ACTIONS(158),
    [anon_sym_AT_AT] = ACTIONS(161),
    [anon_sym___LINE__] = ACTIONS(164),
    [anon_sym___END_LINE__] = ACTIONS(164),
    [anon_sym___FILE__] = ACTIONS(164),
    [anon_sym___DIR__] = ACTIONS(164),
    [aux_sym_constant_token1] = ACTIONS(167),
    [anon_sym_class] = ACTIONS(170),
    [anon_sym_end] = ACTIONS(173),
  },
  [7] = {
    [sym__statement] = STATE(10),
    [sym__expression] = STATE(246),
    [sym_bool] = STATE(246),
    [sym_float] = STATE(246),
    [sym_integer] = STATE(246),
    [sym_symbol] = STATE(246),
    [sym_char] = STATE(246),
    [sym_string] = STATE(246),
    [sym_array] = STATE(246),
    [sym_hash] = STATE(246),
    [sym_index_expression] = STATE(154),
    [sym_regex] = STATE(246),
    [sym_tuple] = STATE(246),
    [sym_namedTupleLiteral] = STATE(246),
    [sym_commandLiteral] = STATE(246),
    [sym_local_variable] = STATE(263),
    [sym_instance_variable] = STATE(263),
    [sym_class_variable] = STATE(263),
    [sym_constant] = STATE(126),
    [sym__variable] = STATE(263),
    [sym_assignment] = STATE(246),
    [sym_class_definition] = STATE(246),
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
    [anon_sym_end] = ACTIONS(175),
  },
  [8] = {
    [sym__statement] = STATE(6),
    [sym__expression] = STATE(246),
    [sym_bool] = STATE(246),
    [sym_float] = STATE(246),
    [sym_integer] = STATE(246),
    [sym_symbol] = STATE(246),
    [sym_char] = STATE(246),
    [sym_string] = STATE(246),
    [sym_array] = STATE(246),
    [sym_hash] = STATE(246),
    [sym_index_expression] = STATE(154),
    [sym_regex] = STATE(246),
    [sym_tuple] = STATE(246),
    [sym_namedTupleLiteral] = STATE(246),
    [sym_commandLiteral] = STATE(246),
    [sym_local_variable] = STATE(263),
    [sym_instance_variable] = STATE(263),
    [sym_class_variable] = STATE(263),
    [sym_constant] = STATE(126),
    [sym__variable] = STATE(263),
    [sym_assignment] = STATE(246),
    [sym_class_definition] = STATE(246),
    [aux_sym_program_repeat1] = STATE(6),
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
    [anon_sym_end] = ACTIONS(177),
  },
  [9] = {
    [sym__statement] = STATE(6),
    [sym__expression] = STATE(246),
    [sym_bool] = STATE(246),
    [sym_float] = STATE(246),
    [sym_integer] = STATE(246),
    [sym_symbol] = STATE(246),
    [sym_char] = STATE(246),
    [sym_string] = STATE(246),
    [sym_array] = STATE(246),
    [sym_hash] = STATE(246),
    [sym_index_expression] = STATE(154),
    [sym_regex] = STATE(246),
    [sym_tuple] = STATE(246),
    [sym_namedTupleLiteral] = STATE(246),
    [sym_commandLiteral] = STATE(246),
    [sym_local_variable] = STATE(263),
    [sym_instance_variable] = STATE(263),
    [sym_class_variable] = STATE(263),
    [sym_constant] = STATE(126),
    [sym__variable] = STATE(263),
    [sym_assignment] = STATE(246),
    [sym_class_definition] = STATE(246),
    [aux_sym_program_repeat1] = STATE(6),
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
    [anon_sym_end] = ACTIONS(179),
  },
  [10] = {
    [sym__statement] = STATE(6),
    [sym__expression] = STATE(246),
    [sym_bool] = STATE(246),
    [sym_float] = STATE(246),
    [sym_integer] = STATE(246),
    [sym_symbol] = STATE(246),
    [sym_char] = STATE(246),
    [sym_string] = STATE(246),
    [sym_array] = STATE(246),
    [sym_hash] = STATE(246),
    [sym_index_expression] = STATE(154),
    [sym_regex] = STATE(246),
    [sym_tuple] = STATE(246),
    [sym_namedTupleLiteral] = STATE(246),
    [sym_commandLiteral] = STATE(246),
    [sym_local_variable] = STATE(263),
    [sym_instance_variable] = STATE(263),
    [sym_class_variable] = STATE(263),
    [sym_constant] = STATE(126),
    [sym__variable] = STATE(263),
    [sym_assignment] = STATE(246),
    [sym_class_definition] = STATE(246),
    [aux_sym_program_repeat1] = STATE(6),
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
    [anon_sym_end] = ACTIONS(181),
  },
  [11] = {
    [sym__statement] = STATE(13),
    [sym__expression] = STATE(246),
    [sym_bool] = STATE(246),
    [sym_float] = STATE(246),
    [sym_integer] = STATE(246),
    [sym_symbol] = STATE(246),
    [sym_char] = STATE(246),
    [sym_string] = STATE(246),
    [sym_array] = STATE(246),
    [sym_hash] = STATE(246),
    [sym_index_expression] = STATE(154),
    [sym_regex] = STATE(246),
    [sym_tuple] = STATE(246),
    [sym_namedTupleLiteral] = STATE(246),
    [sym_commandLiteral] = STATE(246),
    [sym_local_variable] = STATE(263),
    [sym_instance_variable] = STATE(263),
    [sym_class_variable] = STATE(263),
    [sym_constant] = STATE(126),
    [sym__variable] = STATE(263),
    [sym_assignment] = STATE(246),
    [sym_class_definition] = STATE(246),
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
    [anon_sym_end] = ACTIONS(183),
  },
  [12] = {
    [sym__expression] = STATE(117),
    [sym_identifier] = STATE(307),
    [sym_bool] = STATE(117),
    [sym_float] = STATE(117),
    [sym_integer] = STATE(117),
    [sym_symbol] = STATE(117),
    [sym_char] = STATE(117),
    [sym_string] = STATE(116),
    [sym_array] = STATE(117),
    [sym_hash] = STATE(117),
    [sym_index_expression] = STATE(136),
    [sym_regex] = STATE(117),
    [sym_tuple] = STATE(117),
    [sym_namedTupleLiteral] = STATE(117),
    [sym_commandLiteral] = STATE(117),
    [sym_local_variable] = STATE(265),
    [sym_instance_variable] = STATE(265),
    [sym_class_variable] = STATE(265),
    [sym_constant] = STATE(90),
    [sym__variable] = STATE(265),
    [sym_assignment] = STATE(117),
    [sym_class_definition] = STATE(117),
    [aux_sym_identifier_token1] = ACTIONS(65),
    [sym_nil] = ACTIONS(185),
    [anon_sym_true] = ACTIONS(69),
    [anon_sym_false] = ACTIONS(69),
    [aux_sym_float_token1] = ACTIONS(71),
    [aux_sym_float_token2] = ACTIONS(73),
    [aux_sym_float_token3] = ACTIONS(73),
    [aux_sym_integer_token1] = ACTIONS(75),
    [aux_sym_integer_token2] = ACTIONS(75),
    [aux_sym_integer_token3] = ACTIONS(75),
    [aux_sym_integer_token4] = ACTIONS(77),
    [anon_sym_COLON] = ACTIONS(79),
    [anon_sym_DQUOTE] = ACTIONS(81),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHa_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHb_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHe_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHf_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHn_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHr_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHt_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHv_SQUOTE] = ACTIONS(83),
    [aux_sym_char_token1] = ACTIONS(83),
    [aux_sym_char_token2] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_LBRACE] = ACTIONS(89),
    [anon_sym_RBRACE] = ACTIONS(187),
    [anon_sym_SLASH] = ACTIONS(93),
    [anon_sym_Tuple_DOTnew] = ACTIONS(95),
    [anon_sym_BQUOTE] = ACTIONS(97),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(99),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(39),
    [anon_sym_AT] = ACTIONS(41),
    [anon_sym_AT_AT] = ACTIONS(43),
    [anon_sym___LINE__] = ACTIONS(101),
    [anon_sym___END_LINE__] = ACTIONS(101),
    [anon_sym___FILE__] = ACTIONS(101),
    [anon_sym___DIR__] = ACTIONS(101),
    [aux_sym_constant_token1] = ACTIONS(103),
    [anon_sym_class] = ACTIONS(105),
  },
  [13] = {
    [sym__statement] = STATE(6),
    [sym__expression] = STATE(246),
    [sym_bool] = STATE(246),
    [sym_float] = STATE(246),
    [sym_integer] = STATE(246),
    [sym_symbol] = STATE(246),
    [sym_char] = STATE(246),
    [sym_string] = STATE(246),
    [sym_array] = STATE(246),
    [sym_hash] = STATE(246),
    [sym_index_expression] = STATE(154),
    [sym_regex] = STATE(246),
    [sym_tuple] = STATE(246),
    [sym_namedTupleLiteral] = STATE(246),
    [sym_commandLiteral] = STATE(246),
    [sym_local_variable] = STATE(263),
    [sym_instance_variable] = STATE(263),
    [sym_class_variable] = STATE(263),
    [sym_constant] = STATE(126),
    [sym__variable] = STATE(263),
    [sym_assignment] = STATE(246),
    [sym_class_definition] = STATE(246),
    [aux_sym_program_repeat1] = STATE(6),
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
    [anon_sym_end] = ACTIONS(189),
  },
  [14] = {
    [sym__statement] = STATE(6),
    [sym__expression] = STATE(246),
    [sym_bool] = STATE(246),
    [sym_float] = STATE(246),
    [sym_integer] = STATE(246),
    [sym_symbol] = STATE(246),
    [sym_char] = STATE(246),
    [sym_string] = STATE(246),
    [sym_array] = STATE(246),
    [sym_hash] = STATE(246),
    [sym_index_expression] = STATE(154),
    [sym_regex] = STATE(246),
    [sym_tuple] = STATE(246),
    [sym_namedTupleLiteral] = STATE(246),
    [sym_commandLiteral] = STATE(246),
    [sym_local_variable] = STATE(263),
    [sym_instance_variable] = STATE(263),
    [sym_class_variable] = STATE(263),
    [sym_constant] = STATE(126),
    [sym__variable] = STATE(263),
    [sym_assignment] = STATE(246),
    [sym_class_definition] = STATE(246),
    [aux_sym_program_repeat1] = STATE(6),
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
    [anon_sym_end] = ACTIONS(191),
  },
  [15] = {
    [sym__statement] = STATE(16),
    [sym__expression] = STATE(246),
    [sym_bool] = STATE(246),
    [sym_float] = STATE(246),
    [sym_integer] = STATE(246),
    [sym_symbol] = STATE(246),
    [sym_char] = STATE(246),
    [sym_string] = STATE(246),
    [sym_array] = STATE(246),
    [sym_hash] = STATE(246),
    [sym_index_expression] = STATE(154),
    [sym_regex] = STATE(246),
    [sym_tuple] = STATE(246),
    [sym_namedTupleLiteral] = STATE(246),
    [sym_commandLiteral] = STATE(246),
    [sym_local_variable] = STATE(263),
    [sym_instance_variable] = STATE(263),
    [sym_class_variable] = STATE(263),
    [sym_constant] = STATE(126),
    [sym__variable] = STATE(263),
    [sym_assignment] = STATE(246),
    [sym_class_definition] = STATE(246),
    [aux_sym_program_repeat1] = STATE(16),
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
    [anon_sym_end] = ACTIONS(193),
  },
  [16] = {
    [sym__statement] = STATE(6),
    [sym__expression] = STATE(246),
    [sym_bool] = STATE(246),
    [sym_float] = STATE(246),
    [sym_integer] = STATE(246),
    [sym_symbol] = STATE(246),
    [sym_char] = STATE(246),
    [sym_string] = STATE(246),
    [sym_array] = STATE(246),
    [sym_hash] = STATE(246),
    [sym_index_expression] = STATE(154),
    [sym_regex] = STATE(246),
    [sym_tuple] = STATE(246),
    [sym_namedTupleLiteral] = STATE(246),
    [sym_commandLiteral] = STATE(246),
    [sym_local_variable] = STATE(263),
    [sym_instance_variable] = STATE(263),
    [sym_class_variable] = STATE(263),
    [sym_constant] = STATE(126),
    [sym__variable] = STATE(263),
    [sym_assignment] = STATE(246),
    [sym_class_definition] = STATE(246),
    [aux_sym_program_repeat1] = STATE(6),
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
    [anon_sym_end] = ACTIONS(195),
  },
  [17] = {
    [sym__statement] = STATE(17),
    [sym__expression] = STATE(260),
    [sym_bool] = STATE(260),
    [sym_float] = STATE(260),
    [sym_integer] = STATE(260),
    [sym_symbol] = STATE(260),
    [sym_char] = STATE(260),
    [sym_string] = STATE(260),
    [sym_array] = STATE(260),
    [sym_hash] = STATE(260),
    [sym_index_expression] = STATE(154),
    [sym_regex] = STATE(260),
    [sym_tuple] = STATE(260),
    [sym_namedTupleLiteral] = STATE(260),
    [sym_commandLiteral] = STATE(260),
    [sym_local_variable] = STATE(263),
    [sym_instance_variable] = STATE(263),
    [sym_class_variable] = STATE(263),
    [sym_constant] = STATE(126),
    [sym__variable] = STATE(263),
    [sym_assignment] = STATE(260),
    [sym_class_definition] = STATE(260),
    [aux_sym_program_repeat1] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(173),
    [sym_nil] = ACTIONS(197),
    [anon_sym_true] = ACTIONS(110),
    [anon_sym_false] = ACTIONS(110),
    [aux_sym_float_token1] = ACTIONS(113),
    [aux_sym_float_token2] = ACTIONS(116),
    [aux_sym_float_token3] = ACTIONS(116),
    [aux_sym_integer_token1] = ACTIONS(119),
    [aux_sym_integer_token2] = ACTIONS(119),
    [aux_sym_integer_token3] = ACTIONS(119),
    [aux_sym_integer_token4] = ACTIONS(122),
    [anon_sym_COLON] = ACTIONS(125),
    [anon_sym_DQUOTE] = ACTIONS(128),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(131),
    [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = ACTIONS(131),
    [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = ACTIONS(131),
    [anon_sym_SQUOTE_BSLASHa_SQUOTE] = ACTIONS(131),
    [anon_sym_SQUOTE_BSLASHb_SQUOTE] = ACTIONS(131),
    [anon_sym_SQUOTE_BSLASHe_SQUOTE] = ACTIONS(131),
    [anon_sym_SQUOTE_BSLASHf_SQUOTE] = ACTIONS(131),
    [anon_sym_SQUOTE_BSLASHn_SQUOTE] = ACTIONS(131),
    [anon_sym_SQUOTE_BSLASHr_SQUOTE] = ACTIONS(131),
    [anon_sym_SQUOTE_BSLASHt_SQUOTE] = ACTIONS(131),
    [anon_sym_SQUOTE_BSLASHv_SQUOTE] = ACTIONS(131),
    [aux_sym_char_token1] = ACTIONS(131),
    [aux_sym_char_token2] = ACTIONS(134),
    [anon_sym_LBRACK] = ACTIONS(137),
    [anon_sym_LBRACE] = ACTIONS(140),
    [anon_sym_SLASH] = ACTIONS(143),
    [anon_sym_Tuple_DOTnew] = ACTIONS(146),
    [anon_sym_BQUOTE] = ACTIONS(149),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(152),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(155),
    [anon_sym_AT] = ACTIONS(158),
    [anon_sym_AT_AT] = ACTIONS(161),
    [anon_sym___LINE__] = ACTIONS(164),
    [anon_sym___END_LINE__] = ACTIONS(164),
    [anon_sym___FILE__] = ACTIONS(164),
    [anon_sym___DIR__] = ACTIONS(164),
    [aux_sym_constant_token1] = ACTIONS(167),
    [anon_sym_class] = ACTIONS(170),
  },
  [18] = {
    [sym__expression] = STATE(128),
    [sym_identifier] = STATE(334),
    [sym_bool] = STATE(128),
    [sym_float] = STATE(128),
    [sym_integer] = STATE(128),
    [sym_symbol] = STATE(128),
    [sym_char] = STATE(128),
    [sym_string] = STATE(135),
    [sym_array] = STATE(128),
    [sym_hash] = STATE(128),
    [sym_index_expression] = STATE(136),
    [sym_regex] = STATE(128),
    [sym_tuple] = STATE(128),
    [sym_namedTupleLiteral] = STATE(128),
    [sym_commandLiteral] = STATE(128),
    [sym_local_variable] = STATE(265),
    [sym_instance_variable] = STATE(265),
    [sym_class_variable] = STATE(265),
    [sym_constant] = STATE(90),
    [sym__variable] = STATE(265),
    [sym_assignment] = STATE(128),
    [sym_class_definition] = STATE(128),
    [aux_sym_identifier_token1] = ACTIONS(65),
    [sym_nil] = ACTIONS(200),
    [anon_sym_true] = ACTIONS(69),
    [anon_sym_false] = ACTIONS(69),
    [aux_sym_float_token1] = ACTIONS(71),
    [aux_sym_float_token2] = ACTIONS(73),
    [aux_sym_float_token3] = ACTIONS(73),
    [aux_sym_integer_token1] = ACTIONS(75),
    [aux_sym_integer_token2] = ACTIONS(75),
    [aux_sym_integer_token3] = ACTIONS(75),
    [aux_sym_integer_token4] = ACTIONS(77),
    [anon_sym_COLON] = ACTIONS(79),
    [anon_sym_DQUOTE] = ACTIONS(81),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHa_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHb_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHe_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHf_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHn_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHr_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHt_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHv_SQUOTE] = ACTIONS(83),
    [aux_sym_char_token1] = ACTIONS(83),
    [aux_sym_char_token2] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_LBRACE] = ACTIONS(89),
    [anon_sym_RBRACE] = ACTIONS(202),
    [anon_sym_SLASH] = ACTIONS(93),
    [anon_sym_Tuple_DOTnew] = ACTIONS(95),
    [anon_sym_BQUOTE] = ACTIONS(97),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(99),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(39),
    [anon_sym_AT] = ACTIONS(41),
    [anon_sym_AT_AT] = ACTIONS(43),
    [anon_sym___LINE__] = ACTIONS(101),
    [anon_sym___END_LINE__] = ACTIONS(101),
    [anon_sym___FILE__] = ACTIONS(101),
    [anon_sym___DIR__] = ACTIONS(101),
    [aux_sym_constant_token1] = ACTIONS(103),
    [anon_sym_class] = ACTIONS(105),
  },
  [19] = {
    [sym__statement] = STATE(17),
    [sym__expression] = STATE(260),
    [sym_bool] = STATE(260),
    [sym_float] = STATE(260),
    [sym_integer] = STATE(260),
    [sym_symbol] = STATE(260),
    [sym_char] = STATE(260),
    [sym_string] = STATE(260),
    [sym_array] = STATE(260),
    [sym_hash] = STATE(260),
    [sym_index_expression] = STATE(154),
    [sym_regex] = STATE(260),
    [sym_tuple] = STATE(260),
    [sym_namedTupleLiteral] = STATE(260),
    [sym_commandLiteral] = STATE(260),
    [sym_local_variable] = STATE(263),
    [sym_instance_variable] = STATE(263),
    [sym_class_variable] = STATE(263),
    [sym_constant] = STATE(126),
    [sym__variable] = STATE(263),
    [sym_assignment] = STATE(260),
    [sym_class_definition] = STATE(260),
    [aux_sym_program_repeat1] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(204),
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
  [20] = {
    [sym__expression] = STATE(213),
    [sym_bool] = STATE(213),
    [sym_float] = STATE(213),
    [sym_integer] = STATE(213),
    [sym_symbol] = STATE(213),
    [sym_char] = STATE(213),
    [sym_string] = STATE(213),
    [sym_array] = STATE(213),
    [sym_hash] = STATE(213),
    [sym_index_expression] = STATE(149),
    [sym_regex] = STATE(213),
    [sym_tuple] = STATE(213),
    [sym_namedTupleLiteral] = STATE(213),
    [sym_commandLiteral] = STATE(213),
    [sym_local_variable] = STATE(256),
    [sym_instance_variable] = STATE(256),
    [sym_class_variable] = STATE(256),
    [sym_constant] = STATE(90),
    [sym__variable] = STATE(256),
    [sym_assignment] = STATE(213),
    [sym_class_definition] = STATE(213),
    [sym_nil] = ACTIONS(206),
    [anon_sym_true] = ACTIONS(208),
    [anon_sym_false] = ACTIONS(208),
    [aux_sym_float_token1] = ACTIONS(71),
    [aux_sym_float_token2] = ACTIONS(73),
    [aux_sym_float_token3] = ACTIONS(73),
    [aux_sym_integer_token1] = ACTIONS(75),
    [aux_sym_integer_token2] = ACTIONS(75),
    [aux_sym_integer_token3] = ACTIONS(75),
    [aux_sym_integer_token4] = ACTIONS(77),
    [anon_sym_COLON] = ACTIONS(210),
    [anon_sym_DQUOTE] = ACTIONS(212),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHa_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHb_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHe_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHf_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHn_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHr_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHt_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHv_SQUOTE] = ACTIONS(83),
    [aux_sym_char_token1] = ACTIONS(83),
    [aux_sym_char_token2] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_LBRACE] = ACTIONS(89),
    [anon_sym_SLASH] = ACTIONS(93),
    [anon_sym_Tuple_DOTnew] = ACTIONS(95),
    [anon_sym_BQUOTE] = ACTIONS(97),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(99),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(39),
    [anon_sym_AT] = ACTIONS(41),
    [anon_sym_AT_AT] = ACTIONS(43),
    [anon_sym___LINE__] = ACTIONS(214),
    [anon_sym___END_LINE__] = ACTIONS(214),
    [anon_sym___FILE__] = ACTIONS(214),
    [anon_sym___DIR__] = ACTIONS(214),
    [aux_sym_constant_token1] = ACTIONS(103),
    [anon_sym_class] = ACTIONS(216),
  },
  [21] = {
    [sym__expression] = STATE(241),
    [sym_bool] = STATE(241),
    [sym_float] = STATE(241),
    [sym_integer] = STATE(241),
    [sym_symbol] = STATE(241),
    [sym_char] = STATE(241),
    [sym_string] = STATE(241),
    [sym_array] = STATE(241),
    [sym_hash] = STATE(241),
    [sym_index_expression] = STATE(149),
    [sym_regex] = STATE(241),
    [sym_tuple] = STATE(241),
    [sym_namedTupleLiteral] = STATE(241),
    [sym_commandLiteral] = STATE(241),
    [sym_local_variable] = STATE(256),
    [sym_instance_variable] = STATE(256),
    [sym_class_variable] = STATE(256),
    [sym_constant] = STATE(90),
    [sym__variable] = STATE(256),
    [sym_assignment] = STATE(241),
    [sym_class_definition] = STATE(241),
    [sym_nil] = ACTIONS(218),
    [anon_sym_true] = ACTIONS(208),
    [anon_sym_false] = ACTIONS(208),
    [aux_sym_float_token1] = ACTIONS(71),
    [aux_sym_float_token2] = ACTIONS(73),
    [aux_sym_float_token3] = ACTIONS(73),
    [aux_sym_integer_token1] = ACTIONS(75),
    [aux_sym_integer_token2] = ACTIONS(75),
    [aux_sym_integer_token3] = ACTIONS(75),
    [aux_sym_integer_token4] = ACTIONS(77),
    [anon_sym_COLON] = ACTIONS(210),
    [anon_sym_DQUOTE] = ACTIONS(212),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHa_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHb_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHe_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHf_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHn_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHr_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHt_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHv_SQUOTE] = ACTIONS(83),
    [aux_sym_char_token1] = ACTIONS(83),
    [aux_sym_char_token2] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_LBRACE] = ACTIONS(89),
    [anon_sym_SLASH] = ACTIONS(93),
    [anon_sym_Tuple_DOTnew] = ACTIONS(95),
    [anon_sym_BQUOTE] = ACTIONS(97),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(99),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(39),
    [anon_sym_AT] = ACTIONS(41),
    [anon_sym_AT_AT] = ACTIONS(43),
    [anon_sym___LINE__] = ACTIONS(214),
    [anon_sym___END_LINE__] = ACTIONS(214),
    [anon_sym___FILE__] = ACTIONS(214),
    [anon_sym___DIR__] = ACTIONS(214),
    [aux_sym_constant_token1] = ACTIONS(103),
    [anon_sym_class] = ACTIONS(216),
  },
  [22] = {
    [sym__expression] = STATE(284),
    [sym_bool] = STATE(284),
    [sym_float] = STATE(284),
    [sym_integer] = STATE(284),
    [sym_symbol] = STATE(284),
    [sym_char] = STATE(284),
    [sym_string] = STATE(284),
    [sym_array] = STATE(284),
    [sym_hash] = STATE(284),
    [sym_index_expression] = STATE(238),
    [sym_regex] = STATE(284),
    [sym_tuple] = STATE(284),
    [sym_namedTupleLiteral] = STATE(284),
    [sym_commandLiteral] = STATE(284),
    [sym_local_variable] = STATE(254),
    [sym_instance_variable] = STATE(254),
    [sym_class_variable] = STATE(254),
    [sym_constant] = STATE(146),
    [sym__variable] = STATE(254),
    [sym_assignment] = STATE(284),
    [sym_class_definition] = STATE(284),
    [sym_nil] = ACTIONS(220),
    [anon_sym_true] = ACTIONS(222),
    [anon_sym_false] = ACTIONS(222),
    [aux_sym_float_token1] = ACTIONS(224),
    [aux_sym_float_token2] = ACTIONS(226),
    [aux_sym_float_token3] = ACTIONS(226),
    [aux_sym_integer_token1] = ACTIONS(228),
    [aux_sym_integer_token2] = ACTIONS(228),
    [aux_sym_integer_token3] = ACTIONS(228),
    [aux_sym_integer_token4] = ACTIONS(230),
    [anon_sym_COLON] = ACTIONS(232),
    [anon_sym_DQUOTE] = ACTIONS(234),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(236),
    [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = ACTIONS(236),
    [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = ACTIONS(236),
    [anon_sym_SQUOTE_BSLASHa_SQUOTE] = ACTIONS(236),
    [anon_sym_SQUOTE_BSLASHb_SQUOTE] = ACTIONS(236),
    [anon_sym_SQUOTE_BSLASHe_SQUOTE] = ACTIONS(236),
    [anon_sym_SQUOTE_BSLASHf_SQUOTE] = ACTIONS(236),
    [anon_sym_SQUOTE_BSLASHn_SQUOTE] = ACTIONS(236),
    [anon_sym_SQUOTE_BSLASHr_SQUOTE] = ACTIONS(236),
    [anon_sym_SQUOTE_BSLASHt_SQUOTE] = ACTIONS(236),
    [anon_sym_SQUOTE_BSLASHv_SQUOTE] = ACTIONS(236),
    [aux_sym_char_token1] = ACTIONS(236),
    [aux_sym_char_token2] = ACTIONS(238),
    [anon_sym_LBRACK] = ACTIONS(240),
    [anon_sym_LBRACE] = ACTIONS(242),
    [anon_sym_SLASH] = ACTIONS(244),
    [anon_sym_Tuple_DOTnew] = ACTIONS(246),
    [anon_sym_BQUOTE] = ACTIONS(248),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(250),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(39),
    [anon_sym_AT] = ACTIONS(41),
    [anon_sym_AT_AT] = ACTIONS(43),
    [anon_sym___LINE__] = ACTIONS(252),
    [anon_sym___END_LINE__] = ACTIONS(252),
    [anon_sym___FILE__] = ACTIONS(252),
    [anon_sym___DIR__] = ACTIONS(252),
    [aux_sym_constant_token1] = ACTIONS(254),
    [anon_sym_class] = ACTIONS(256),
  },
  [23] = {
    [sym__expression] = STATE(312),
    [sym_bool] = STATE(312),
    [sym_float] = STATE(312),
    [sym_integer] = STATE(312),
    [sym_symbol] = STATE(312),
    [sym_char] = STATE(312),
    [sym_string] = STATE(312),
    [sym_array] = STATE(312),
    [sym_hash] = STATE(312),
    [sym_index_expression] = STATE(238),
    [sym_regex] = STATE(312),
    [sym_tuple] = STATE(312),
    [sym_namedTupleLiteral] = STATE(312),
    [sym_commandLiteral] = STATE(312),
    [sym_local_variable] = STATE(254),
    [sym_instance_variable] = STATE(254),
    [sym_class_variable] = STATE(254),
    [sym_constant] = STATE(146),
    [sym__variable] = STATE(254),
    [sym_assignment] = STATE(312),
    [sym_class_definition] = STATE(312),
    [sym_nil] = ACTIONS(258),
    [anon_sym_true] = ACTIONS(222),
    [anon_sym_false] = ACTIONS(222),
    [aux_sym_float_token1] = ACTIONS(224),
    [aux_sym_float_token2] = ACTIONS(226),
    [aux_sym_float_token3] = ACTIONS(226),
    [aux_sym_integer_token1] = ACTIONS(228),
    [aux_sym_integer_token2] = ACTIONS(228),
    [aux_sym_integer_token3] = ACTIONS(228),
    [aux_sym_integer_token4] = ACTIONS(230),
    [anon_sym_COLON] = ACTIONS(232),
    [anon_sym_DQUOTE] = ACTIONS(234),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(236),
    [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = ACTIONS(236),
    [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = ACTIONS(236),
    [anon_sym_SQUOTE_BSLASHa_SQUOTE] = ACTIONS(236),
    [anon_sym_SQUOTE_BSLASHb_SQUOTE] = ACTIONS(236),
    [anon_sym_SQUOTE_BSLASHe_SQUOTE] = ACTIONS(236),
    [anon_sym_SQUOTE_BSLASHf_SQUOTE] = ACTIONS(236),
    [anon_sym_SQUOTE_BSLASHn_SQUOTE] = ACTIONS(236),
    [anon_sym_SQUOTE_BSLASHr_SQUOTE] = ACTIONS(236),
    [anon_sym_SQUOTE_BSLASHt_SQUOTE] = ACTIONS(236),
    [anon_sym_SQUOTE_BSLASHv_SQUOTE] = ACTIONS(236),
    [aux_sym_char_token1] = ACTIONS(236),
    [aux_sym_char_token2] = ACTIONS(238),
    [anon_sym_LBRACK] = ACTIONS(240),
    [anon_sym_LBRACE] = ACTIONS(242),
    [anon_sym_SLASH] = ACTIONS(244),
    [anon_sym_Tuple_DOTnew] = ACTIONS(246),
    [anon_sym_BQUOTE] = ACTIONS(248),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(250),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(39),
    [anon_sym_AT] = ACTIONS(41),
    [anon_sym_AT_AT] = ACTIONS(43),
    [anon_sym___LINE__] = ACTIONS(252),
    [anon_sym___END_LINE__] = ACTIONS(252),
    [anon_sym___FILE__] = ACTIONS(252),
    [anon_sym___DIR__] = ACTIONS(252),
    [aux_sym_constant_token1] = ACTIONS(254),
    [anon_sym_class] = ACTIONS(256),
  },
  [24] = {
    [sym__expression] = STATE(291),
    [sym_bool] = STATE(291),
    [sym_float] = STATE(291),
    [sym_integer] = STATE(291),
    [sym_symbol] = STATE(291),
    [sym_char] = STATE(291),
    [sym_string] = STATE(291),
    [sym_array] = STATE(291),
    [sym_hash] = STATE(291),
    [sym_index_expression] = STATE(240),
    [sym_regex] = STATE(291),
    [sym_tuple] = STATE(291),
    [sym_namedTupleLiteral] = STATE(291),
    [sym_commandLiteral] = STATE(291),
    [sym_local_variable] = STATE(253),
    [sym_instance_variable] = STATE(253),
    [sym_class_variable] = STATE(253),
    [sym_constant] = STATE(90),
    [sym__variable] = STATE(253),
    [sym_assignment] = STATE(291),
    [sym_class_definition] = STATE(291),
    [sym_nil] = ACTIONS(260),
    [anon_sym_true] = ACTIONS(208),
    [anon_sym_false] = ACTIONS(208),
    [aux_sym_float_token1] = ACTIONS(71),
    [aux_sym_float_token2] = ACTIONS(73),
    [aux_sym_float_token3] = ACTIONS(73),
    [aux_sym_integer_token1] = ACTIONS(75),
    [aux_sym_integer_token2] = ACTIONS(75),
    [aux_sym_integer_token3] = ACTIONS(75),
    [aux_sym_integer_token4] = ACTIONS(77),
    [anon_sym_COLON] = ACTIONS(262),
    [anon_sym_DQUOTE] = ACTIONS(264),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHa_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHb_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHe_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHf_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHn_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHr_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHt_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHv_SQUOTE] = ACTIONS(83),
    [aux_sym_char_token1] = ACTIONS(83),
    [aux_sym_char_token2] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_LBRACE] = ACTIONS(89),
    [anon_sym_SLASH] = ACTIONS(93),
    [anon_sym_Tuple_DOTnew] = ACTIONS(95),
    [anon_sym_BQUOTE] = ACTIONS(97),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(99),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(39),
    [anon_sym_AT] = ACTIONS(41),
    [anon_sym_AT_AT] = ACTIONS(43),
    [anon_sym___LINE__] = ACTIONS(214),
    [anon_sym___END_LINE__] = ACTIONS(214),
    [anon_sym___FILE__] = ACTIONS(214),
    [anon_sym___DIR__] = ACTIONS(214),
    [aux_sym_constant_token1] = ACTIONS(103),
    [anon_sym_class] = ACTIONS(216),
  },
  [25] = {
    [sym__expression] = STATE(314),
    [sym_bool] = STATE(314),
    [sym_float] = STATE(314),
    [sym_integer] = STATE(314),
    [sym_symbol] = STATE(314),
    [sym_char] = STATE(314),
    [sym_string] = STATE(314),
    [sym_array] = STATE(314),
    [sym_hash] = STATE(314),
    [sym_index_expression] = STATE(238),
    [sym_regex] = STATE(314),
    [sym_tuple] = STATE(314),
    [sym_namedTupleLiteral] = STATE(314),
    [sym_commandLiteral] = STATE(314),
    [sym_local_variable] = STATE(254),
    [sym_instance_variable] = STATE(254),
    [sym_class_variable] = STATE(254),
    [sym_constant] = STATE(146),
    [sym__variable] = STATE(254),
    [sym_assignment] = STATE(314),
    [sym_class_definition] = STATE(314),
    [sym_nil] = ACTIONS(266),
    [anon_sym_true] = ACTIONS(222),
    [anon_sym_false] = ACTIONS(222),
    [aux_sym_float_token1] = ACTIONS(224),
    [aux_sym_float_token2] = ACTIONS(226),
    [aux_sym_float_token3] = ACTIONS(226),
    [aux_sym_integer_token1] = ACTIONS(228),
    [aux_sym_integer_token2] = ACTIONS(228),
    [aux_sym_integer_token3] = ACTIONS(228),
    [aux_sym_integer_token4] = ACTIONS(230),
    [anon_sym_COLON] = ACTIONS(232),
    [anon_sym_DQUOTE] = ACTIONS(234),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(236),
    [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = ACTIONS(236),
    [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = ACTIONS(236),
    [anon_sym_SQUOTE_BSLASHa_SQUOTE] = ACTIONS(236),
    [anon_sym_SQUOTE_BSLASHb_SQUOTE] = ACTIONS(236),
    [anon_sym_SQUOTE_BSLASHe_SQUOTE] = ACTIONS(236),
    [anon_sym_SQUOTE_BSLASHf_SQUOTE] = ACTIONS(236),
    [anon_sym_SQUOTE_BSLASHn_SQUOTE] = ACTIONS(236),
    [anon_sym_SQUOTE_BSLASHr_SQUOTE] = ACTIONS(236),
    [anon_sym_SQUOTE_BSLASHt_SQUOTE] = ACTIONS(236),
    [anon_sym_SQUOTE_BSLASHv_SQUOTE] = ACTIONS(236),
    [aux_sym_char_token1] = ACTIONS(236),
    [aux_sym_char_token2] = ACTIONS(238),
    [anon_sym_LBRACK] = ACTIONS(240),
    [anon_sym_LBRACE] = ACTIONS(242),
    [anon_sym_SLASH] = ACTIONS(244),
    [anon_sym_Tuple_DOTnew] = ACTIONS(246),
    [anon_sym_BQUOTE] = ACTIONS(248),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(250),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(39),
    [anon_sym_AT] = ACTIONS(41),
    [anon_sym_AT_AT] = ACTIONS(43),
    [anon_sym___LINE__] = ACTIONS(252),
    [anon_sym___END_LINE__] = ACTIONS(252),
    [anon_sym___FILE__] = ACTIONS(252),
    [anon_sym___DIR__] = ACTIONS(252),
    [aux_sym_constant_token1] = ACTIONS(254),
    [anon_sym_class] = ACTIONS(256),
  },
  [26] = {
    [sym__expression] = STATE(200),
    [sym_bool] = STATE(200),
    [sym_float] = STATE(200),
    [sym_integer] = STATE(200),
    [sym_symbol] = STATE(200),
    [sym_char] = STATE(200),
    [sym_string] = STATE(200),
    [sym_array] = STATE(200),
    [sym_hash] = STATE(200),
    [sym_index_expression] = STATE(148),
    [sym_regex] = STATE(200),
    [sym_tuple] = STATE(200),
    [sym_namedTupleLiteral] = STATE(200),
    [sym_commandLiteral] = STATE(200),
    [sym_local_variable] = STATE(244),
    [sym_instance_variable] = STATE(244),
    [sym_class_variable] = STATE(244),
    [sym_constant] = STATE(90),
    [sym__variable] = STATE(244),
    [sym_assignment] = STATE(200),
    [sym_class_definition] = STATE(200),
    [sym_nil] = ACTIONS(268),
    [anon_sym_true] = ACTIONS(208),
    [anon_sym_false] = ACTIONS(208),
    [aux_sym_float_token1] = ACTIONS(71),
    [aux_sym_float_token2] = ACTIONS(73),
    [aux_sym_float_token3] = ACTIONS(73),
    [aux_sym_integer_token1] = ACTIONS(75),
    [aux_sym_integer_token2] = ACTIONS(75),
    [aux_sym_integer_token3] = ACTIONS(75),
    [aux_sym_integer_token4] = ACTIONS(77),
    [anon_sym_COLON] = ACTIONS(270),
    [anon_sym_DQUOTE] = ACTIONS(272),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHa_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHb_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHe_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHf_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHn_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHr_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHt_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHv_SQUOTE] = ACTIONS(83),
    [aux_sym_char_token1] = ACTIONS(83),
    [aux_sym_char_token2] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_LBRACE] = ACTIONS(89),
    [anon_sym_SLASH] = ACTIONS(93),
    [anon_sym_Tuple_DOTnew] = ACTIONS(95),
    [anon_sym_BQUOTE] = ACTIONS(97),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(99),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(39),
    [anon_sym_AT] = ACTIONS(41),
    [anon_sym_AT_AT] = ACTIONS(43),
    [anon_sym___LINE__] = ACTIONS(214),
    [anon_sym___END_LINE__] = ACTIONS(214),
    [anon_sym___FILE__] = ACTIONS(214),
    [anon_sym___DIR__] = ACTIONS(214),
    [aux_sym_constant_token1] = ACTIONS(103),
    [anon_sym_class] = ACTIONS(216),
  },
  [27] = {
    [sym__expression] = STATE(145),
    [sym_bool] = STATE(145),
    [sym_float] = STATE(145),
    [sym_integer] = STATE(145),
    [sym_symbol] = STATE(145),
    [sym_char] = STATE(145),
    [sym_string] = STATE(145),
    [sym_array] = STATE(145),
    [sym_hash] = STATE(145),
    [sym_index_expression] = STATE(240),
    [sym_regex] = STATE(145),
    [sym_tuple] = STATE(145),
    [sym_namedTupleLiteral] = STATE(145),
    [sym_commandLiteral] = STATE(145),
    [sym_local_variable] = STATE(253),
    [sym_instance_variable] = STATE(253),
    [sym_class_variable] = STATE(253),
    [sym_constant] = STATE(90),
    [sym__variable] = STATE(253),
    [sym_assignment] = STATE(145),
    [sym_class_definition] = STATE(145),
    [sym_nil] = ACTIONS(274),
    [anon_sym_true] = ACTIONS(208),
    [anon_sym_false] = ACTIONS(208),
    [aux_sym_float_token1] = ACTIONS(71),
    [aux_sym_float_token2] = ACTIONS(73),
    [aux_sym_float_token3] = ACTIONS(73),
    [aux_sym_integer_token1] = ACTIONS(75),
    [aux_sym_integer_token2] = ACTIONS(75),
    [aux_sym_integer_token3] = ACTIONS(75),
    [aux_sym_integer_token4] = ACTIONS(77),
    [anon_sym_COLON] = ACTIONS(262),
    [anon_sym_DQUOTE] = ACTIONS(264),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHa_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHb_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHe_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHf_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHn_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHr_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHt_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHv_SQUOTE] = ACTIONS(83),
    [aux_sym_char_token1] = ACTIONS(83),
    [aux_sym_char_token2] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_LBRACE] = ACTIONS(89),
    [anon_sym_SLASH] = ACTIONS(93),
    [anon_sym_Tuple_DOTnew] = ACTIONS(95),
    [anon_sym_BQUOTE] = ACTIONS(97),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(99),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(39),
    [anon_sym_AT] = ACTIONS(41),
    [anon_sym_AT_AT] = ACTIONS(43),
    [anon_sym___LINE__] = ACTIONS(214),
    [anon_sym___END_LINE__] = ACTIONS(214),
    [anon_sym___FILE__] = ACTIONS(214),
    [anon_sym___DIR__] = ACTIONS(214),
    [aux_sym_constant_token1] = ACTIONS(103),
    [anon_sym_class] = ACTIONS(216),
  },
  [28] = {
    [sym__expression] = STATE(158),
    [sym_bool] = STATE(158),
    [sym_float] = STATE(158),
    [sym_integer] = STATE(158),
    [sym_symbol] = STATE(158),
    [sym_char] = STATE(158),
    [sym_string] = STATE(158),
    [sym_array] = STATE(158),
    [sym_hash] = STATE(158),
    [sym_index_expression] = STATE(148),
    [sym_regex] = STATE(158),
    [sym_tuple] = STATE(158),
    [sym_namedTupleLiteral] = STATE(158),
    [sym_commandLiteral] = STATE(158),
    [sym_local_variable] = STATE(244),
    [sym_instance_variable] = STATE(244),
    [sym_class_variable] = STATE(244),
    [sym_constant] = STATE(90),
    [sym__variable] = STATE(244),
    [sym_assignment] = STATE(158),
    [sym_class_definition] = STATE(158),
    [sym_nil] = ACTIONS(276),
    [anon_sym_true] = ACTIONS(208),
    [anon_sym_false] = ACTIONS(208),
    [aux_sym_float_token1] = ACTIONS(71),
    [aux_sym_float_token2] = ACTIONS(73),
    [aux_sym_float_token3] = ACTIONS(73),
    [aux_sym_integer_token1] = ACTIONS(75),
    [aux_sym_integer_token2] = ACTIONS(75),
    [aux_sym_integer_token3] = ACTIONS(75),
    [aux_sym_integer_token4] = ACTIONS(77),
    [anon_sym_COLON] = ACTIONS(270),
    [anon_sym_DQUOTE] = ACTIONS(272),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHa_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHb_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHe_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHf_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHn_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHr_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHt_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHv_SQUOTE] = ACTIONS(83),
    [aux_sym_char_token1] = ACTIONS(83),
    [aux_sym_char_token2] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_LBRACE] = ACTIONS(89),
    [anon_sym_SLASH] = ACTIONS(93),
    [anon_sym_Tuple_DOTnew] = ACTIONS(95),
    [anon_sym_BQUOTE] = ACTIONS(97),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(99),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(39),
    [anon_sym_AT] = ACTIONS(41),
    [anon_sym_AT_AT] = ACTIONS(43),
    [anon_sym___LINE__] = ACTIONS(214),
    [anon_sym___END_LINE__] = ACTIONS(214),
    [anon_sym___FILE__] = ACTIONS(214),
    [anon_sym___DIR__] = ACTIONS(214),
    [aux_sym_constant_token1] = ACTIONS(103),
    [anon_sym_class] = ACTIONS(216),
  },
  [29] = {
    [sym__expression] = STATE(145),
    [sym_bool] = STATE(145),
    [sym_float] = STATE(145),
    [sym_integer] = STATE(145),
    [sym_symbol] = STATE(145),
    [sym_char] = STATE(145),
    [sym_string] = STATE(145),
    [sym_array] = STATE(145),
    [sym_hash] = STATE(145),
    [sym_index_expression] = STATE(136),
    [sym_regex] = STATE(145),
    [sym_tuple] = STATE(145),
    [sym_namedTupleLiteral] = STATE(145),
    [sym_commandLiteral] = STATE(145),
    [sym_local_variable] = STATE(265),
    [sym_instance_variable] = STATE(265),
    [sym_class_variable] = STATE(265),
    [sym_constant] = STATE(90),
    [sym__variable] = STATE(265),
    [sym_assignment] = STATE(145),
    [sym_class_definition] = STATE(145),
    [sym_nil] = ACTIONS(274),
    [anon_sym_true] = ACTIONS(208),
    [anon_sym_false] = ACTIONS(208),
    [aux_sym_float_token1] = ACTIONS(71),
    [aux_sym_float_token2] = ACTIONS(73),
    [aux_sym_float_token3] = ACTIONS(73),
    [aux_sym_integer_token1] = ACTIONS(75),
    [aux_sym_integer_token2] = ACTIONS(75),
    [aux_sym_integer_token3] = ACTIONS(75),
    [aux_sym_integer_token4] = ACTIONS(77),
    [anon_sym_COLON] = ACTIONS(79),
    [anon_sym_DQUOTE] = ACTIONS(278),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHa_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHb_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHe_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHf_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHn_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHr_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHt_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHv_SQUOTE] = ACTIONS(83),
    [aux_sym_char_token1] = ACTIONS(83),
    [aux_sym_char_token2] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_LBRACE] = ACTIONS(89),
    [anon_sym_SLASH] = ACTIONS(93),
    [anon_sym_Tuple_DOTnew] = ACTIONS(95),
    [anon_sym_BQUOTE] = ACTIONS(97),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(99),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(39),
    [anon_sym_AT] = ACTIONS(41),
    [anon_sym_AT_AT] = ACTIONS(43),
    [anon_sym___LINE__] = ACTIONS(214),
    [anon_sym___END_LINE__] = ACTIONS(214),
    [anon_sym___FILE__] = ACTIONS(214),
    [anon_sym___DIR__] = ACTIONS(214),
    [aux_sym_constant_token1] = ACTIONS(103),
    [anon_sym_class] = ACTIONS(216),
  },
  [30] = {
    [sym__expression] = STATE(145),
    [sym_bool] = STATE(145),
    [sym_float] = STATE(145),
    [sym_integer] = STATE(145),
    [sym_symbol] = STATE(145),
    [sym_char] = STATE(145),
    [sym_string] = STATE(145),
    [sym_array] = STATE(145),
    [sym_hash] = STATE(145),
    [sym_index_expression] = STATE(149),
    [sym_regex] = STATE(145),
    [sym_tuple] = STATE(145),
    [sym_namedTupleLiteral] = STATE(145),
    [sym_commandLiteral] = STATE(145),
    [sym_local_variable] = STATE(256),
    [sym_instance_variable] = STATE(256),
    [sym_class_variable] = STATE(256),
    [sym_constant] = STATE(90),
    [sym__variable] = STATE(256),
    [sym_assignment] = STATE(145),
    [sym_class_definition] = STATE(145),
    [sym_nil] = ACTIONS(274),
    [anon_sym_true] = ACTIONS(208),
    [anon_sym_false] = ACTIONS(208),
    [aux_sym_float_token1] = ACTIONS(71),
    [aux_sym_float_token2] = ACTIONS(73),
    [aux_sym_float_token3] = ACTIONS(73),
    [aux_sym_integer_token1] = ACTIONS(75),
    [aux_sym_integer_token2] = ACTIONS(75),
    [aux_sym_integer_token3] = ACTIONS(75),
    [aux_sym_integer_token4] = ACTIONS(77),
    [anon_sym_COLON] = ACTIONS(210),
    [anon_sym_DQUOTE] = ACTIONS(212),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHa_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHb_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHe_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHf_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHn_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHr_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHt_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHv_SQUOTE] = ACTIONS(83),
    [aux_sym_char_token1] = ACTIONS(83),
    [aux_sym_char_token2] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_LBRACE] = ACTIONS(89),
    [anon_sym_SLASH] = ACTIONS(93),
    [anon_sym_Tuple_DOTnew] = ACTIONS(95),
    [anon_sym_BQUOTE] = ACTIONS(97),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(99),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(39),
    [anon_sym_AT] = ACTIONS(41),
    [anon_sym_AT_AT] = ACTIONS(43),
    [anon_sym___LINE__] = ACTIONS(214),
    [anon_sym___END_LINE__] = ACTIONS(214),
    [anon_sym___FILE__] = ACTIONS(214),
    [anon_sym___DIR__] = ACTIONS(214),
    [aux_sym_constant_token1] = ACTIONS(103),
    [anon_sym_class] = ACTIONS(216),
  },
  [31] = {
    [sym__expression] = STATE(215),
    [sym_bool] = STATE(215),
    [sym_float] = STATE(215),
    [sym_integer] = STATE(215),
    [sym_symbol] = STATE(215),
    [sym_char] = STATE(215),
    [sym_string] = STATE(215),
    [sym_array] = STATE(215),
    [sym_hash] = STATE(215),
    [sym_index_expression] = STATE(149),
    [sym_regex] = STATE(215),
    [sym_tuple] = STATE(215),
    [sym_namedTupleLiteral] = STATE(215),
    [sym_commandLiteral] = STATE(215),
    [sym_local_variable] = STATE(256),
    [sym_instance_variable] = STATE(256),
    [sym_class_variable] = STATE(256),
    [sym_constant] = STATE(90),
    [sym__variable] = STATE(256),
    [sym_assignment] = STATE(215),
    [sym_class_definition] = STATE(215),
    [sym_nil] = ACTIONS(280),
    [anon_sym_true] = ACTIONS(208),
    [anon_sym_false] = ACTIONS(208),
    [aux_sym_float_token1] = ACTIONS(71),
    [aux_sym_float_token2] = ACTIONS(73),
    [aux_sym_float_token3] = ACTIONS(73),
    [aux_sym_integer_token1] = ACTIONS(75),
    [aux_sym_integer_token2] = ACTIONS(75),
    [aux_sym_integer_token3] = ACTIONS(75),
    [aux_sym_integer_token4] = ACTIONS(77),
    [anon_sym_COLON] = ACTIONS(210),
    [anon_sym_DQUOTE] = ACTIONS(212),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHa_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHb_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHe_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHf_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHn_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHr_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHt_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHv_SQUOTE] = ACTIONS(83),
    [aux_sym_char_token1] = ACTIONS(83),
    [aux_sym_char_token2] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_LBRACE] = ACTIONS(89),
    [anon_sym_SLASH] = ACTIONS(93),
    [anon_sym_Tuple_DOTnew] = ACTIONS(95),
    [anon_sym_BQUOTE] = ACTIONS(97),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(99),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(39),
    [anon_sym_AT] = ACTIONS(41),
    [anon_sym_AT_AT] = ACTIONS(43),
    [anon_sym___LINE__] = ACTIONS(214),
    [anon_sym___END_LINE__] = ACTIONS(214),
    [anon_sym___FILE__] = ACTIONS(214),
    [anon_sym___DIR__] = ACTIONS(214),
    [aux_sym_constant_token1] = ACTIONS(103),
    [anon_sym_class] = ACTIONS(216),
  },
  [32] = {
    [sym__expression] = STATE(194),
    [sym_bool] = STATE(194),
    [sym_float] = STATE(194),
    [sym_integer] = STATE(194),
    [sym_symbol] = STATE(194),
    [sym_char] = STATE(194),
    [sym_string] = STATE(194),
    [sym_array] = STATE(194),
    [sym_hash] = STATE(194),
    [sym_index_expression] = STATE(149),
    [sym_regex] = STATE(194),
    [sym_tuple] = STATE(194),
    [sym_namedTupleLiteral] = STATE(194),
    [sym_commandLiteral] = STATE(194),
    [sym_local_variable] = STATE(256),
    [sym_instance_variable] = STATE(256),
    [sym_class_variable] = STATE(256),
    [sym_constant] = STATE(90),
    [sym__variable] = STATE(256),
    [sym_assignment] = STATE(194),
    [sym_class_definition] = STATE(194),
    [sym_nil] = ACTIONS(282),
    [anon_sym_true] = ACTIONS(208),
    [anon_sym_false] = ACTIONS(208),
    [aux_sym_float_token1] = ACTIONS(71),
    [aux_sym_float_token2] = ACTIONS(73),
    [aux_sym_float_token3] = ACTIONS(73),
    [aux_sym_integer_token1] = ACTIONS(75),
    [aux_sym_integer_token2] = ACTIONS(75),
    [aux_sym_integer_token3] = ACTIONS(75),
    [aux_sym_integer_token4] = ACTIONS(77),
    [anon_sym_COLON] = ACTIONS(210),
    [anon_sym_DQUOTE] = ACTIONS(212),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHa_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHb_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHe_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHf_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHn_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHr_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHt_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHv_SQUOTE] = ACTIONS(83),
    [aux_sym_char_token1] = ACTIONS(83),
    [aux_sym_char_token2] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_LBRACE] = ACTIONS(89),
    [anon_sym_SLASH] = ACTIONS(93),
    [anon_sym_Tuple_DOTnew] = ACTIONS(95),
    [anon_sym_BQUOTE] = ACTIONS(97),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(99),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(39),
    [anon_sym_AT] = ACTIONS(41),
    [anon_sym_AT_AT] = ACTIONS(43),
    [anon_sym___LINE__] = ACTIONS(214),
    [anon_sym___END_LINE__] = ACTIONS(214),
    [anon_sym___FILE__] = ACTIONS(214),
    [anon_sym___DIR__] = ACTIONS(214),
    [aux_sym_constant_token1] = ACTIONS(103),
    [anon_sym_class] = ACTIONS(216),
  },
  [33] = {
    [sym__expression] = STATE(239),
    [sym_bool] = STATE(239),
    [sym_float] = STATE(239),
    [sym_integer] = STATE(239),
    [sym_symbol] = STATE(239),
    [sym_char] = STATE(239),
    [sym_string] = STATE(239),
    [sym_array] = STATE(239),
    [sym_hash] = STATE(239),
    [sym_index_expression] = STATE(154),
    [sym_regex] = STATE(239),
    [sym_tuple] = STATE(239),
    [sym_namedTupleLiteral] = STATE(239),
    [sym_commandLiteral] = STATE(239),
    [sym_local_variable] = STATE(263),
    [sym_instance_variable] = STATE(263),
    [sym_class_variable] = STATE(263),
    [sym_constant] = STATE(126),
    [sym__variable] = STATE(263),
    [sym_assignment] = STATE(239),
    [sym_class_definition] = STATE(239),
    [sym_nil] = ACTIONS(284),
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
  [34] = {
    [sym__expression] = STATE(230),
    [sym_bool] = STATE(230),
    [sym_float] = STATE(230),
    [sym_integer] = STATE(230),
    [sym_symbol] = STATE(230),
    [sym_char] = STATE(230),
    [sym_string] = STATE(230),
    [sym_array] = STATE(230),
    [sym_hash] = STATE(230),
    [sym_index_expression] = STATE(149),
    [sym_regex] = STATE(230),
    [sym_tuple] = STATE(230),
    [sym_namedTupleLiteral] = STATE(230),
    [sym_commandLiteral] = STATE(230),
    [sym_local_variable] = STATE(256),
    [sym_instance_variable] = STATE(256),
    [sym_class_variable] = STATE(256),
    [sym_constant] = STATE(90),
    [sym__variable] = STATE(256),
    [sym_assignment] = STATE(230),
    [sym_class_definition] = STATE(230),
    [sym_nil] = ACTIONS(286),
    [anon_sym_true] = ACTIONS(208),
    [anon_sym_false] = ACTIONS(208),
    [aux_sym_float_token1] = ACTIONS(71),
    [aux_sym_float_token2] = ACTIONS(73),
    [aux_sym_float_token3] = ACTIONS(73),
    [aux_sym_integer_token1] = ACTIONS(75),
    [aux_sym_integer_token2] = ACTIONS(75),
    [aux_sym_integer_token3] = ACTIONS(75),
    [aux_sym_integer_token4] = ACTIONS(77),
    [anon_sym_COLON] = ACTIONS(210),
    [anon_sym_DQUOTE] = ACTIONS(212),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHa_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHb_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHe_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHf_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHn_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHr_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHt_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHv_SQUOTE] = ACTIONS(83),
    [aux_sym_char_token1] = ACTIONS(83),
    [aux_sym_char_token2] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_LBRACE] = ACTIONS(89),
    [anon_sym_SLASH] = ACTIONS(93),
    [anon_sym_Tuple_DOTnew] = ACTIONS(95),
    [anon_sym_BQUOTE] = ACTIONS(97),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(99),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(39),
    [anon_sym_AT] = ACTIONS(41),
    [anon_sym_AT_AT] = ACTIONS(43),
    [anon_sym___LINE__] = ACTIONS(214),
    [anon_sym___END_LINE__] = ACTIONS(214),
    [anon_sym___FILE__] = ACTIONS(214),
    [anon_sym___DIR__] = ACTIONS(214),
    [aux_sym_constant_token1] = ACTIONS(103),
    [anon_sym_class] = ACTIONS(216),
  },
  [35] = {
    [sym__expression] = STATE(247),
    [sym_bool] = STATE(247),
    [sym_float] = STATE(247),
    [sym_integer] = STATE(247),
    [sym_symbol] = STATE(247),
    [sym_char] = STATE(247),
    [sym_string] = STATE(247),
    [sym_array] = STATE(247),
    [sym_hash] = STATE(247),
    [sym_index_expression] = STATE(149),
    [sym_regex] = STATE(247),
    [sym_tuple] = STATE(247),
    [sym_namedTupleLiteral] = STATE(247),
    [sym_commandLiteral] = STATE(247),
    [sym_local_variable] = STATE(256),
    [sym_instance_variable] = STATE(256),
    [sym_class_variable] = STATE(256),
    [sym_constant] = STATE(90),
    [sym__variable] = STATE(256),
    [sym_assignment] = STATE(247),
    [sym_class_definition] = STATE(247),
    [sym_nil] = ACTIONS(288),
    [anon_sym_true] = ACTIONS(208),
    [anon_sym_false] = ACTIONS(208),
    [aux_sym_float_token1] = ACTIONS(71),
    [aux_sym_float_token2] = ACTIONS(73),
    [aux_sym_float_token3] = ACTIONS(73),
    [aux_sym_integer_token1] = ACTIONS(75),
    [aux_sym_integer_token2] = ACTIONS(75),
    [aux_sym_integer_token3] = ACTIONS(75),
    [aux_sym_integer_token4] = ACTIONS(77),
    [anon_sym_COLON] = ACTIONS(210),
    [anon_sym_DQUOTE] = ACTIONS(212),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHa_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHb_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHe_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHf_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHn_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHr_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHt_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHv_SQUOTE] = ACTIONS(83),
    [aux_sym_char_token1] = ACTIONS(83),
    [aux_sym_char_token2] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_LBRACE] = ACTIONS(89),
    [anon_sym_SLASH] = ACTIONS(93),
    [anon_sym_Tuple_DOTnew] = ACTIONS(95),
    [anon_sym_BQUOTE] = ACTIONS(97),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(99),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(39),
    [anon_sym_AT] = ACTIONS(41),
    [anon_sym_AT_AT] = ACTIONS(43),
    [anon_sym___LINE__] = ACTIONS(214),
    [anon_sym___END_LINE__] = ACTIONS(214),
    [anon_sym___FILE__] = ACTIONS(214),
    [anon_sym___DIR__] = ACTIONS(214),
    [aux_sym_constant_token1] = ACTIONS(103),
    [anon_sym_class] = ACTIONS(216),
  },
  [36] = {
    [sym__expression] = STATE(231),
    [sym_bool] = STATE(231),
    [sym_float] = STATE(231),
    [sym_integer] = STATE(231),
    [sym_symbol] = STATE(231),
    [sym_char] = STATE(231),
    [sym_string] = STATE(231),
    [sym_array] = STATE(231),
    [sym_hash] = STATE(231),
    [sym_index_expression] = STATE(149),
    [sym_regex] = STATE(231),
    [sym_tuple] = STATE(231),
    [sym_namedTupleLiteral] = STATE(231),
    [sym_commandLiteral] = STATE(231),
    [sym_local_variable] = STATE(256),
    [sym_instance_variable] = STATE(256),
    [sym_class_variable] = STATE(256),
    [sym_constant] = STATE(90),
    [sym__variable] = STATE(256),
    [sym_assignment] = STATE(231),
    [sym_class_definition] = STATE(231),
    [sym_nil] = ACTIONS(290),
    [anon_sym_true] = ACTIONS(208),
    [anon_sym_false] = ACTIONS(208),
    [aux_sym_float_token1] = ACTIONS(71),
    [aux_sym_float_token2] = ACTIONS(73),
    [aux_sym_float_token3] = ACTIONS(73),
    [aux_sym_integer_token1] = ACTIONS(75),
    [aux_sym_integer_token2] = ACTIONS(75),
    [aux_sym_integer_token3] = ACTIONS(75),
    [aux_sym_integer_token4] = ACTIONS(77),
    [anon_sym_COLON] = ACTIONS(210),
    [anon_sym_DQUOTE] = ACTIONS(212),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHa_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHb_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHe_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHf_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHn_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHr_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHt_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHv_SQUOTE] = ACTIONS(83),
    [aux_sym_char_token1] = ACTIONS(83),
    [aux_sym_char_token2] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_LBRACE] = ACTIONS(89),
    [anon_sym_SLASH] = ACTIONS(93),
    [anon_sym_Tuple_DOTnew] = ACTIONS(95),
    [anon_sym_BQUOTE] = ACTIONS(97),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(99),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(39),
    [anon_sym_AT] = ACTIONS(41),
    [anon_sym_AT_AT] = ACTIONS(43),
    [anon_sym___LINE__] = ACTIONS(214),
    [anon_sym___END_LINE__] = ACTIONS(214),
    [anon_sym___FILE__] = ACTIONS(214),
    [anon_sym___DIR__] = ACTIONS(214),
    [aux_sym_constant_token1] = ACTIONS(103),
    [anon_sym_class] = ACTIONS(216),
  },
  [37] = {
    [sym__expression] = STATE(234),
    [sym_bool] = STATE(234),
    [sym_float] = STATE(234),
    [sym_integer] = STATE(234),
    [sym_symbol] = STATE(234),
    [sym_char] = STATE(234),
    [sym_string] = STATE(234),
    [sym_array] = STATE(234),
    [sym_hash] = STATE(234),
    [sym_index_expression] = STATE(148),
    [sym_regex] = STATE(234),
    [sym_tuple] = STATE(234),
    [sym_namedTupleLiteral] = STATE(234),
    [sym_commandLiteral] = STATE(234),
    [sym_local_variable] = STATE(244),
    [sym_instance_variable] = STATE(244),
    [sym_class_variable] = STATE(244),
    [sym_constant] = STATE(90),
    [sym__variable] = STATE(244),
    [sym_assignment] = STATE(234),
    [sym_class_definition] = STATE(234),
    [sym_nil] = ACTIONS(292),
    [anon_sym_true] = ACTIONS(208),
    [anon_sym_false] = ACTIONS(208),
    [aux_sym_float_token1] = ACTIONS(71),
    [aux_sym_float_token2] = ACTIONS(73),
    [aux_sym_float_token3] = ACTIONS(73),
    [aux_sym_integer_token1] = ACTIONS(75),
    [aux_sym_integer_token2] = ACTIONS(75),
    [aux_sym_integer_token3] = ACTIONS(75),
    [aux_sym_integer_token4] = ACTIONS(77),
    [anon_sym_COLON] = ACTIONS(270),
    [anon_sym_DQUOTE] = ACTIONS(272),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHa_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHb_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHe_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHf_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHn_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHr_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHt_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHv_SQUOTE] = ACTIONS(83),
    [aux_sym_char_token1] = ACTIONS(83),
    [aux_sym_char_token2] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_LBRACE] = ACTIONS(89),
    [anon_sym_SLASH] = ACTIONS(93),
    [anon_sym_Tuple_DOTnew] = ACTIONS(95),
    [anon_sym_BQUOTE] = ACTIONS(97),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(99),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(39),
    [anon_sym_AT] = ACTIONS(41),
    [anon_sym_AT_AT] = ACTIONS(43),
    [anon_sym___LINE__] = ACTIONS(214),
    [anon_sym___END_LINE__] = ACTIONS(214),
    [anon_sym___FILE__] = ACTIONS(214),
    [anon_sym___DIR__] = ACTIONS(214),
    [aux_sym_constant_token1] = ACTIONS(103),
    [anon_sym_class] = ACTIONS(216),
  },
  [38] = {
    [sym__expression] = STATE(234),
    [sym_bool] = STATE(234),
    [sym_float] = STATE(234),
    [sym_integer] = STATE(234),
    [sym_symbol] = STATE(234),
    [sym_char] = STATE(234),
    [sym_string] = STATE(234),
    [sym_array] = STATE(234),
    [sym_hash] = STATE(234),
    [sym_index_expression] = STATE(149),
    [sym_regex] = STATE(234),
    [sym_tuple] = STATE(234),
    [sym_namedTupleLiteral] = STATE(234),
    [sym_commandLiteral] = STATE(234),
    [sym_local_variable] = STATE(256),
    [sym_instance_variable] = STATE(256),
    [sym_class_variable] = STATE(256),
    [sym_constant] = STATE(90),
    [sym__variable] = STATE(256),
    [sym_assignment] = STATE(234),
    [sym_class_definition] = STATE(234),
    [sym_nil] = ACTIONS(292),
    [anon_sym_true] = ACTIONS(208),
    [anon_sym_false] = ACTIONS(208),
    [aux_sym_float_token1] = ACTIONS(71),
    [aux_sym_float_token2] = ACTIONS(73),
    [aux_sym_float_token3] = ACTIONS(73),
    [aux_sym_integer_token1] = ACTIONS(75),
    [aux_sym_integer_token2] = ACTIONS(75),
    [aux_sym_integer_token3] = ACTIONS(75),
    [aux_sym_integer_token4] = ACTIONS(77),
    [anon_sym_COLON] = ACTIONS(210),
    [anon_sym_DQUOTE] = ACTIONS(212),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHa_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHb_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHe_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHf_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHn_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHr_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHt_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHv_SQUOTE] = ACTIONS(83),
    [aux_sym_char_token1] = ACTIONS(83),
    [aux_sym_char_token2] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_LBRACE] = ACTIONS(89),
    [anon_sym_SLASH] = ACTIONS(93),
    [anon_sym_Tuple_DOTnew] = ACTIONS(95),
    [anon_sym_BQUOTE] = ACTIONS(97),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(99),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(39),
    [anon_sym_AT] = ACTIONS(41),
    [anon_sym_AT_AT] = ACTIONS(43),
    [anon_sym___LINE__] = ACTIONS(214),
    [anon_sym___END_LINE__] = ACTIONS(214),
    [anon_sym___FILE__] = ACTIONS(214),
    [anon_sym___DIR__] = ACTIONS(214),
    [aux_sym_constant_token1] = ACTIONS(103),
    [anon_sym_class] = ACTIONS(216),
  },
  [39] = {
    [sym__expression] = STATE(292),
    [sym_bool] = STATE(292),
    [sym_float] = STATE(292),
    [sym_integer] = STATE(292),
    [sym_symbol] = STATE(292),
    [sym_char] = STATE(292),
    [sym_string] = STATE(292),
    [sym_array] = STATE(292),
    [sym_hash] = STATE(292),
    [sym_index_expression] = STATE(238),
    [sym_regex] = STATE(292),
    [sym_tuple] = STATE(292),
    [sym_namedTupleLiteral] = STATE(292),
    [sym_commandLiteral] = STATE(292),
    [sym_local_variable] = STATE(254),
    [sym_instance_variable] = STATE(254),
    [sym_class_variable] = STATE(254),
    [sym_constant] = STATE(146),
    [sym__variable] = STATE(254),
    [sym_assignment] = STATE(292),
    [sym_class_definition] = STATE(292),
    [sym_nil] = ACTIONS(294),
    [anon_sym_true] = ACTIONS(222),
    [anon_sym_false] = ACTIONS(222),
    [aux_sym_float_token1] = ACTIONS(224),
    [aux_sym_float_token2] = ACTIONS(226),
    [aux_sym_float_token3] = ACTIONS(226),
    [aux_sym_integer_token1] = ACTIONS(228),
    [aux_sym_integer_token2] = ACTIONS(228),
    [aux_sym_integer_token3] = ACTIONS(228),
    [aux_sym_integer_token4] = ACTIONS(230),
    [anon_sym_COLON] = ACTIONS(232),
    [anon_sym_DQUOTE] = ACTIONS(234),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(236),
    [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = ACTIONS(236),
    [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = ACTIONS(236),
    [anon_sym_SQUOTE_BSLASHa_SQUOTE] = ACTIONS(236),
    [anon_sym_SQUOTE_BSLASHb_SQUOTE] = ACTIONS(236),
    [anon_sym_SQUOTE_BSLASHe_SQUOTE] = ACTIONS(236),
    [anon_sym_SQUOTE_BSLASHf_SQUOTE] = ACTIONS(236),
    [anon_sym_SQUOTE_BSLASHn_SQUOTE] = ACTIONS(236),
    [anon_sym_SQUOTE_BSLASHr_SQUOTE] = ACTIONS(236),
    [anon_sym_SQUOTE_BSLASHt_SQUOTE] = ACTIONS(236),
    [anon_sym_SQUOTE_BSLASHv_SQUOTE] = ACTIONS(236),
    [aux_sym_char_token1] = ACTIONS(236),
    [aux_sym_char_token2] = ACTIONS(238),
    [anon_sym_LBRACK] = ACTIONS(240),
    [anon_sym_LBRACE] = ACTIONS(242),
    [anon_sym_SLASH] = ACTIONS(244),
    [anon_sym_Tuple_DOTnew] = ACTIONS(246),
    [anon_sym_BQUOTE] = ACTIONS(248),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(250),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(39),
    [anon_sym_AT] = ACTIONS(41),
    [anon_sym_AT_AT] = ACTIONS(43),
    [anon_sym___LINE__] = ACTIONS(252),
    [anon_sym___END_LINE__] = ACTIONS(252),
    [anon_sym___FILE__] = ACTIONS(252),
    [anon_sym___DIR__] = ACTIONS(252),
    [aux_sym_constant_token1] = ACTIONS(254),
    [anon_sym_class] = ACTIONS(256),
  },
  [40] = {
    [sym__expression] = STATE(195),
    [sym_bool] = STATE(195),
    [sym_float] = STATE(195),
    [sym_integer] = STATE(195),
    [sym_symbol] = STATE(195),
    [sym_char] = STATE(195),
    [sym_string] = STATE(195),
    [sym_array] = STATE(195),
    [sym_hash] = STATE(195),
    [sym_index_expression] = STATE(149),
    [sym_regex] = STATE(195),
    [sym_tuple] = STATE(195),
    [sym_namedTupleLiteral] = STATE(195),
    [sym_commandLiteral] = STATE(195),
    [sym_local_variable] = STATE(256),
    [sym_instance_variable] = STATE(256),
    [sym_class_variable] = STATE(256),
    [sym_constant] = STATE(90),
    [sym__variable] = STATE(256),
    [sym_assignment] = STATE(195),
    [sym_class_definition] = STATE(195),
    [sym_nil] = ACTIONS(296),
    [anon_sym_true] = ACTIONS(208),
    [anon_sym_false] = ACTIONS(208),
    [aux_sym_float_token1] = ACTIONS(71),
    [aux_sym_float_token2] = ACTIONS(73),
    [aux_sym_float_token3] = ACTIONS(73),
    [aux_sym_integer_token1] = ACTIONS(75),
    [aux_sym_integer_token2] = ACTIONS(75),
    [aux_sym_integer_token3] = ACTIONS(75),
    [aux_sym_integer_token4] = ACTIONS(77),
    [anon_sym_COLON] = ACTIONS(210),
    [anon_sym_DQUOTE] = ACTIONS(212),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHa_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHb_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHe_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHf_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHn_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHr_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHt_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHv_SQUOTE] = ACTIONS(83),
    [aux_sym_char_token1] = ACTIONS(83),
    [aux_sym_char_token2] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_LBRACE] = ACTIONS(89),
    [anon_sym_SLASH] = ACTIONS(93),
    [anon_sym_Tuple_DOTnew] = ACTIONS(95),
    [anon_sym_BQUOTE] = ACTIONS(97),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(99),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(39),
    [anon_sym_AT] = ACTIONS(41),
    [anon_sym_AT_AT] = ACTIONS(43),
    [anon_sym___LINE__] = ACTIONS(214),
    [anon_sym___END_LINE__] = ACTIONS(214),
    [anon_sym___FILE__] = ACTIONS(214),
    [anon_sym___DIR__] = ACTIONS(214),
    [aux_sym_constant_token1] = ACTIONS(103),
    [anon_sym_class] = ACTIONS(216),
  },
  [41] = {
    [sym__expression] = STATE(145),
    [sym_bool] = STATE(145),
    [sym_float] = STATE(145),
    [sym_integer] = STATE(145),
    [sym_symbol] = STATE(145),
    [sym_char] = STATE(145),
    [sym_string] = STATE(145),
    [sym_array] = STATE(145),
    [sym_hash] = STATE(145),
    [sym_index_expression] = STATE(148),
    [sym_regex] = STATE(145),
    [sym_tuple] = STATE(145),
    [sym_namedTupleLiteral] = STATE(145),
    [sym_commandLiteral] = STATE(145),
    [sym_local_variable] = STATE(244),
    [sym_instance_variable] = STATE(244),
    [sym_class_variable] = STATE(244),
    [sym_constant] = STATE(90),
    [sym__variable] = STATE(244),
    [sym_assignment] = STATE(145),
    [sym_class_definition] = STATE(145),
    [sym_nil] = ACTIONS(274),
    [anon_sym_true] = ACTIONS(208),
    [anon_sym_false] = ACTIONS(208),
    [aux_sym_float_token1] = ACTIONS(71),
    [aux_sym_float_token2] = ACTIONS(73),
    [aux_sym_float_token3] = ACTIONS(73),
    [aux_sym_integer_token1] = ACTIONS(75),
    [aux_sym_integer_token2] = ACTIONS(75),
    [aux_sym_integer_token3] = ACTIONS(75),
    [aux_sym_integer_token4] = ACTIONS(77),
    [anon_sym_COLON] = ACTIONS(270),
    [anon_sym_DQUOTE] = ACTIONS(272),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHa_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHb_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHe_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHf_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHn_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHr_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHt_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHv_SQUOTE] = ACTIONS(83),
    [aux_sym_char_token1] = ACTIONS(83),
    [aux_sym_char_token2] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_LBRACE] = ACTIONS(89),
    [anon_sym_SLASH] = ACTIONS(93),
    [anon_sym_Tuple_DOTnew] = ACTIONS(95),
    [anon_sym_BQUOTE] = ACTIONS(97),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(99),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(39),
    [anon_sym_AT] = ACTIONS(41),
    [anon_sym_AT_AT] = ACTIONS(43),
    [anon_sym___LINE__] = ACTIONS(214),
    [anon_sym___END_LINE__] = ACTIONS(214),
    [anon_sym___FILE__] = ACTIONS(214),
    [anon_sym___DIR__] = ACTIONS(214),
    [aux_sym_constant_token1] = ACTIONS(103),
    [anon_sym_class] = ACTIONS(216),
  },
  [42] = {
    [sym__expression] = STATE(229),
    [sym_bool] = STATE(229),
    [sym_float] = STATE(229),
    [sym_integer] = STATE(229),
    [sym_symbol] = STATE(229),
    [sym_char] = STATE(229),
    [sym_string] = STATE(229),
    [sym_array] = STATE(229),
    [sym_hash] = STATE(229),
    [sym_index_expression] = STATE(148),
    [sym_regex] = STATE(229),
    [sym_tuple] = STATE(229),
    [sym_namedTupleLiteral] = STATE(229),
    [sym_commandLiteral] = STATE(229),
    [sym_local_variable] = STATE(244),
    [sym_instance_variable] = STATE(244),
    [sym_class_variable] = STATE(244),
    [sym_constant] = STATE(90),
    [sym__variable] = STATE(244),
    [sym_assignment] = STATE(229),
    [sym_class_definition] = STATE(229),
    [sym_nil] = ACTIONS(298),
    [anon_sym_true] = ACTIONS(208),
    [anon_sym_false] = ACTIONS(208),
    [aux_sym_float_token1] = ACTIONS(71),
    [aux_sym_float_token2] = ACTIONS(73),
    [aux_sym_float_token3] = ACTIONS(73),
    [aux_sym_integer_token1] = ACTIONS(75),
    [aux_sym_integer_token2] = ACTIONS(75),
    [aux_sym_integer_token3] = ACTIONS(75),
    [aux_sym_integer_token4] = ACTIONS(77),
    [anon_sym_COLON] = ACTIONS(270),
    [anon_sym_DQUOTE] = ACTIONS(272),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHa_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHb_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHe_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHf_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHn_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHr_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHt_SQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_BSLASHv_SQUOTE] = ACTIONS(83),
    [aux_sym_char_token1] = ACTIONS(83),
    [aux_sym_char_token2] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_LBRACE] = ACTIONS(89),
    [anon_sym_SLASH] = ACTIONS(93),
    [anon_sym_Tuple_DOTnew] = ACTIONS(95),
    [anon_sym_BQUOTE] = ACTIONS(97),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(99),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(39),
    [anon_sym_AT] = ACTIONS(41),
    [anon_sym_AT_AT] = ACTIONS(43),
    [anon_sym___LINE__] = ACTIONS(214),
    [anon_sym___END_LINE__] = ACTIONS(214),
    [anon_sym___FILE__] = ACTIONS(214),
    [anon_sym___DIR__] = ACTIONS(214),
    [aux_sym_constant_token1] = ACTIONS(103),
    [anon_sym_class] = ACTIONS(216),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      anon_sym_COLON_COLON,
    ACTIONS(306), 1,
      anon_sym_LPAREN,
    ACTIONS(302), 8,
      aux_sym_float_token2,
      aux_sym_float_token3,
      aux_sym_integer_token4,
      anon_sym_COLON,
      aux_sym_char_token2,
      aux_sym_local_variable_token1,
      anon_sym_AT,
      aux_sym_constant_token1,
    ACTIONS(300), 39,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      aux_sym_float_token1,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
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
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
      anon_sym_SLASH,
      anon_sym_Tuple_DOTnew,
      anon_sym_BQUOTE,
      anon_sym_PERCENTx_LPAREN,
      anon_sym_RPAREN,
      anon_sym_AT_AT,
      anon_sym___LINE__,
      anon_sym___END_LINE__,
      anon_sym___FILE__,
      anon_sym___DIR__,
      anon_sym_class,
      anon_sym_LT,
      anon_sym_end,
  [61] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      anon_sym_COLON_COLON,
    ACTIONS(312), 1,
      anon_sym_LPAREN,
    ACTIONS(310), 8,
      aux_sym_float_token2,
      aux_sym_float_token3,
      aux_sym_integer_token4,
      anon_sym_COLON,
      aux_sym_char_token2,
      aux_sym_local_variable_token1,
      anon_sym_AT,
      aux_sym_constant_token1,
    ACTIONS(308), 39,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      aux_sym_float_token1,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
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
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
      anon_sym_SLASH,
      anon_sym_Tuple_DOTnew,
      anon_sym_BQUOTE,
      anon_sym_PERCENTx_LPAREN,
      anon_sym_RPAREN,
      anon_sym_AT_AT,
      anon_sym___LINE__,
      anon_sym___END_LINE__,
      anon_sym___FILE__,
      anon_sym___DIR__,
      anon_sym_class,
      anon_sym_LT,
      anon_sym_end,
  [122] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 7,
      aux_sym_float_token2,
      aux_sym_float_token3,
      aux_sym_integer_token4,
      aux_sym_char_token2,
      aux_sym_local_variable_token1,
      anon_sym_AT,
      aux_sym_constant_token1,
    ACTIONS(314), 40,
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
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
      anon_sym_SLASH,
      anon_sym_Tuple_DOTnew,
      anon_sym_BQUOTE,
      anon_sym_PERCENTx_LPAREN,
      anon_sym_RPAREN,
      anon_sym_AT_AT,
      anon_sym___LINE__,
      anon_sym___END_LINE__,
      anon_sym___FILE__,
      anon_sym___DIR__,
      anon_sym_class,
      anon_sym_LT,
      anon_sym_end,
  [177] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 7,
      aux_sym_float_token2,
      aux_sym_float_token3,
      aux_sym_integer_token4,
      aux_sym_char_token2,
      aux_sym_local_variable_token1,
      anon_sym_AT,
      aux_sym_constant_token1,
    ACTIONS(318), 40,
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
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
      anon_sym_SLASH,
      anon_sym_Tuple_DOTnew,
      anon_sym_BQUOTE,
      anon_sym_PERCENTx_LPAREN,
      anon_sym_RPAREN,
      anon_sym_AT_AT,
      anon_sym___LINE__,
      anon_sym___END_LINE__,
      anon_sym___FILE__,
      anon_sym___DIR__,
      anon_sym_class,
      anon_sym_LT,
      anon_sym_end,
  [232] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 7,
      aux_sym_float_token2,
      aux_sym_float_token3,
      aux_sym_integer_token4,
      aux_sym_char_token2,
      aux_sym_local_variable_token1,
      anon_sym_AT,
      aux_sym_constant_token1,
    ACTIONS(322), 40,
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
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
      anon_sym_SLASH,
      anon_sym_Tuple_DOTnew,
      anon_sym_BQUOTE,
      anon_sym_PERCENTx_LPAREN,
      anon_sym_RPAREN,
      anon_sym_AT_AT,
      anon_sym___LINE__,
      anon_sym___END_LINE__,
      anon_sym___FILE__,
      anon_sym___DIR__,
      anon_sym_class,
      anon_sym_LT,
      anon_sym_end,
  [287] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 7,
      aux_sym_float_token2,
      aux_sym_float_token3,
      aux_sym_integer_token4,
      aux_sym_char_token2,
      aux_sym_local_variable_token1,
      anon_sym_AT,
      aux_sym_constant_token1,
    ACTIONS(326), 40,
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
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
      anon_sym_SLASH,
      anon_sym_Tuple_DOTnew,
      anon_sym_BQUOTE,
      anon_sym_PERCENTx_LPAREN,
      anon_sym_RPAREN,
      anon_sym_AT_AT,
      anon_sym___LINE__,
      anon_sym___END_LINE__,
      anon_sym___FILE__,
      anon_sym___DIR__,
      anon_sym_class,
      anon_sym_LT,
      anon_sym_end,
  [342] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 8,
      aux_sym_float_token2,
      aux_sym_float_token3,
      aux_sym_integer_token4,
      anon_sym_COLON,
      aux_sym_char_token2,
      aux_sym_local_variable_token1,
      anon_sym_AT,
      aux_sym_constant_token1,
    ACTIONS(330), 37,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      aux_sym_float_token1,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
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
      anon_sym_RBRACK2,
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
      anon_sym_LT,
      anon_sym_end,
      anon_sym_COLON_COLON,
      anon_sym_LPAREN,
  [395] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      aux_sym_identifier_token1,
    ACTIONS(332), 17,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      aux_sym_float_token2,
      aux_sym_float_token3,
      aux_sym_integer_token4,
      anon_sym_COLON,
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
    ACTIONS(330), 27,
      aux_sym_float_token1,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
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
      anon_sym_LT,
      anon_sym_COLON_COLON,
      anon_sym_LPAREN,
  [450] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 8,
      aux_sym_float_token2,
      aux_sym_float_token3,
      aux_sym_integer_token4,
      anon_sym_COLON,
      aux_sym_char_token2,
      aux_sym_local_variable_token1,
      anon_sym_AT,
      aux_sym_constant_token1,
    ACTIONS(336), 37,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      aux_sym_float_token1,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
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
      anon_sym_RBRACK2,
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
      anon_sym_LT,
      anon_sym_end,
      anon_sym_COLON_COLON,
      anon_sym_LPAREN,
  [503] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 7,
      aux_sym_float_token2,
      aux_sym_float_token3,
      aux_sym_integer_token4,
      aux_sym_char_token2,
      aux_sym_local_variable_token1,
      anon_sym_AT,
      aux_sym_constant_token1,
    ACTIONS(340), 34,
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
  [552] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 7,
      aux_sym_float_token2,
      aux_sym_float_token3,
      aux_sym_integer_token4,
      aux_sym_char_token2,
      aux_sym_local_variable_token1,
      anon_sym_AT,
      aux_sym_constant_token1,
    ACTIONS(340), 34,
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
  [601] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 1,
      anon_sym_DQUOTE,
    STATE(336), 1,
      sym__operator,
    ACTIONS(348), 7,
      anon_sym_LT,
      anon_sym_STAR,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_LBRACK_RBRACK,
      anon_sym_BANG,
    ACTIONS(344), 20,
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
  [642] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 1,
      anon_sym_DQUOTE,
    STATE(129), 1,
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
  [683] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 1,
      anon_sym_DQUOTE,
    STATE(264), 1,
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
  [724] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 1,
      anon_sym_DQUOTE,
    STATE(129), 1,
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
  [765] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_DQUOTE,
    STATE(129), 1,
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
  [806] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 1,
      anon_sym_DQUOTE,
    STATE(129), 1,
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
  [847] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 1,
      anon_sym_EQ,
    ACTIONS(368), 1,
      aux_sym_identifier_token1,
    ACTIONS(330), 8,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
      anon_sym_LBRACK2,
      anon_sym_RPAREN,
      anon_sym_COLON_COLON,
      anon_sym_LPAREN,
  [867] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 1,
      anon_sym_EQ,
    ACTIONS(336), 8,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
      anon_sym_LBRACK2,
      anon_sym_RPAREN,
      anon_sym_COLON_COLON,
      anon_sym_LPAREN,
  [884] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 1,
      anon_sym_EQ,
    ACTIONS(330), 8,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
      anon_sym_LBRACK2,
      anon_sym_RPAREN,
      anon_sym_COLON_COLON,
      anon_sym_LPAREN,
  [901] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      aux_sym_constant_token1,
    STATE(43), 1,
      sym_constant,
    STATE(85), 1,
      aux_sym_type_repeat1,
    STATE(341), 1,
      sym_type,
    ACTIONS(214), 4,
      anon_sym___LINE__,
      anon_sym___END_LINE__,
      anon_sym___FILE__,
      anon_sym___DIR__,
  [923] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 1,
      aux_sym_constant_token1,
    STATE(11), 1,
      sym_type,
    STATE(43), 1,
      sym_constant,
    STATE(86), 1,
      aux_sym_type_repeat1,
    ACTIONS(372), 4,
      anon_sym___LINE__,
      anon_sym___END_LINE__,
      anon_sym___FILE__,
      anon_sym___DIR__,
  [945] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      aux_sym_constant_token1,
    STATE(43), 1,
      sym_constant,
    STATE(85), 1,
      aux_sym_type_repeat1,
    STATE(107), 1,
      sym_type,
    ACTIONS(214), 4,
      anon_sym___LINE__,
      anon_sym___END_LINE__,
      anon_sym___FILE__,
      anon_sym___DIR__,
  [967] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      aux_sym_constant_token1,
    STATE(43), 1,
      sym_constant,
    STATE(85), 1,
      aux_sym_type_repeat1,
    STATE(212), 1,
      sym_type,
    ACTIONS(214), 4,
      anon_sym___LINE__,
      anon_sym___END_LINE__,
      anon_sym___FILE__,
      anon_sym___DIR__,
  [989] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      aux_sym_constant_token1,
    STATE(43), 1,
      sym_constant,
    STATE(85), 1,
      aux_sym_type_repeat1,
    STATE(169), 1,
      sym_type,
    ACTIONS(214), 4,
      anon_sym___LINE__,
      anon_sym___END_LINE__,
      anon_sym___FILE__,
      anon_sym___DIR__,
  [1011] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 1,
      aux_sym_constant_token1,
    STATE(7), 1,
      sym_type,
    STATE(43), 1,
      sym_constant,
    STATE(86), 1,
      aux_sym_type_repeat1,
    ACTIONS(372), 4,
      anon_sym___LINE__,
      anon_sym___END_LINE__,
      anon_sym___FILE__,
      anon_sym___DIR__,
  [1033] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      aux_sym_constant_token1,
    STATE(43), 1,
      sym_constant,
    STATE(85), 1,
      aux_sym_type_repeat1,
    STATE(188), 1,
      sym_type,
    ACTIONS(214), 4,
      anon_sym___LINE__,
      anon_sym___END_LINE__,
      anon_sym___FILE__,
      anon_sym___DIR__,
  [1055] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 1,
      aux_sym_constant_token1,
    STATE(15), 1,
      sym_type,
    STATE(43), 1,
      sym_constant,
    STATE(86), 1,
      aux_sym_type_repeat1,
    ACTIONS(372), 4,
      anon_sym___LINE__,
      anon_sym___END_LINE__,
      anon_sym___FILE__,
      anon_sym___DIR__,
  [1077] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      aux_sym_constant_token1,
    STATE(43), 1,
      sym_constant,
    STATE(85), 1,
      aux_sym_type_repeat1,
    STATE(226), 1,
      sym_type,
    ACTIONS(214), 4,
      anon_sym___LINE__,
      anon_sym___END_LINE__,
      anon_sym___FILE__,
      anon_sym___DIR__,
  [1099] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      aux_sym_constant_token1,
    STATE(43), 1,
      sym_constant,
    STATE(85), 1,
      aux_sym_type_repeat1,
    STATE(339), 1,
      sym_type,
    ACTIONS(214), 4,
      anon_sym___LINE__,
      anon_sym___END_LINE__,
      anon_sym___FILE__,
      anon_sym___DIR__,
  [1121] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      aux_sym_constant_token1,
    STATE(43), 1,
      sym_constant,
    STATE(85), 1,
      aux_sym_type_repeat1,
    STATE(193), 1,
      sym_type,
    ACTIONS(214), 4,
      anon_sym___LINE__,
      anon_sym___END_LINE__,
      anon_sym___FILE__,
      anon_sym___DIR__,
  [1143] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 1,
      aux_sym_constant_token1,
    STATE(2), 1,
      sym_type,
    STATE(43), 1,
      sym_constant,
    STATE(86), 1,
      aux_sym_type_repeat1,
    ACTIONS(372), 4,
      anon_sym___LINE__,
      anon_sym___END_LINE__,
      anon_sym___FILE__,
      anon_sym___DIR__,
  [1165] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      aux_sym_constant_token1,
    STATE(43), 1,
      sym_constant,
    STATE(85), 1,
      aux_sym_type_repeat1,
    STATE(173), 1,
      sym_type,
    ACTIONS(214), 4,
      anon_sym___LINE__,
      anon_sym___END_LINE__,
      anon_sym___FILE__,
      anon_sym___DIR__,
  [1187] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 1,
      aux_sym_constant_token1,
    STATE(87), 1,
      aux_sym_type_repeat1,
    STATE(175), 1,
      sym_constant,
    STATE(313), 1,
      sym_type,
    ACTIONS(372), 4,
      anon_sym___LINE__,
      anon_sym___END_LINE__,
      anon_sym___FILE__,
      anon_sym___DIR__,
  [1209] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 1,
      aux_sym_constant_token1,
    STATE(83), 1,
      aux_sym_type_repeat1,
    STATE(132), 1,
      sym_constant,
    STATE(271), 1,
      sym_type,
    ACTIONS(45), 4,
      anon_sym___LINE__,
      anon_sym___END_LINE__,
      anon_sym___FILE__,
      anon_sym___DIR__,
  [1231] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      aux_sym_constant_token1,
    STATE(43), 1,
      sym_constant,
    STATE(85), 1,
      aux_sym_type_repeat1,
    STATE(309), 1,
      sym_type,
    ACTIONS(214), 4,
      anon_sym___LINE__,
      anon_sym___END_LINE__,
      anon_sym___FILE__,
      anon_sym___DIR__,
  [1253] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 1,
      aux_sym_constant_token1,
    STATE(3), 1,
      sym_type,
    STATE(43), 1,
      sym_constant,
    STATE(86), 1,
      aux_sym_type_repeat1,
    ACTIONS(372), 4,
      anon_sym___LINE__,
      anon_sym___END_LINE__,
      anon_sym___FILE__,
      anon_sym___DIR__,
  [1275] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      aux_sym_constant_token1,
    STATE(43), 1,
      sym_constant,
    STATE(85), 1,
      aux_sym_type_repeat1,
    STATE(236), 1,
      sym_type,
    ACTIONS(214), 4,
      anon_sym___LINE__,
      anon_sym___END_LINE__,
      anon_sym___FILE__,
      anon_sym___DIR__,
  [1297] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 1,
      aux_sym_constant_token1,
    STATE(4), 1,
      sym_type,
    STATE(43), 1,
      sym_constant,
    STATE(86), 1,
      aux_sym_type_repeat1,
    ACTIONS(372), 4,
      anon_sym___LINE__,
      anon_sym___END_LINE__,
      anon_sym___FILE__,
      anon_sym___DIR__,
  [1319] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      aux_sym_constant_token1,
    STATE(82), 1,
      aux_sym_type_repeat1,
    STATE(335), 1,
      sym_constant,
    ACTIONS(380), 4,
      anon_sym___LINE__,
      anon_sym___END_LINE__,
      anon_sym___FILE__,
      anon_sym___DIR__,
  [1338] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 1,
      aux_sym_constant_token1,
    STATE(82), 1,
      aux_sym_type_repeat1,
    STATE(144), 1,
      sym_constant,
    ACTIONS(45), 4,
      anon_sym___LINE__,
      anon_sym___END_LINE__,
      anon_sym___FILE__,
      anon_sym___DIR__,
  [1357] = 4,
    ACTIONS(386), 1,
      aux_sym_identifier_token1,
    ACTIONS(388), 1,
      sym_comment,
    ACTIONS(330), 2,
      aux_sym__statement_token1,
      anon_sym_LBRACK2,
    ACTIONS(332), 4,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_COLON_COLON,
      anon_sym_LPAREN,
  [1374] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      aux_sym_constant_token1,
    STATE(44), 1,
      sym_constant,
    STATE(82), 1,
      aux_sym_type_repeat1,
    ACTIONS(214), 4,
      anon_sym___LINE__,
      anon_sym___END_LINE__,
      anon_sym___FILE__,
      anon_sym___DIR__,
  [1393] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 1,
      aux_sym_constant_token1,
    STATE(44), 1,
      sym_constant,
    STATE(82), 1,
      aux_sym_type_repeat1,
    ACTIONS(372), 4,
      anon_sym___LINE__,
      anon_sym___END_LINE__,
      anon_sym___FILE__,
      anon_sym___DIR__,
  [1412] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 1,
      aux_sym_constant_token1,
    STATE(82), 1,
      aux_sym_type_repeat1,
    STATE(184), 1,
      sym_constant,
    ACTIONS(372), 4,
      anon_sym___LINE__,
      anon_sym___END_LINE__,
      anon_sym___FILE__,
      anon_sym___DIR__,
  [1431] = 3,
    ACTIONS(388), 1,
      sym_comment,
    ACTIONS(392), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
    ACTIONS(390), 4,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [1445] = 3,
    ACTIONS(388), 1,
      sym_comment,
    ACTIONS(330), 2,
      aux_sym__statement_token1,
      anon_sym_LBRACK2,
    ACTIONS(332), 4,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_COLON_COLON,
      anon_sym_LPAREN,
  [1459] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 1,
      anon_sym_LBRACK2,
    ACTIONS(398), 1,
      anon_sym_EQ,
    ACTIONS(394), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [1475] = 3,
    ACTIONS(388), 1,
      sym_comment,
    ACTIONS(336), 2,
      aux_sym__statement_token1,
      anon_sym_LBRACK2,
    ACTIONS(338), 4,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_COLON_COLON,
      anon_sym_LPAREN,
  [1489] = 3,
    ACTIONS(388), 1,
      sym_comment,
    ACTIONS(392), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
    ACTIONS(400), 4,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [1503] = 3,
    ACTIONS(388), 1,
      sym_comment,
    ACTIONS(392), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
    ACTIONS(400), 3,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [1516] = 3,
    ACTIONS(388), 1,
      sym_comment,
    ACTIONS(392), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
    ACTIONS(402), 3,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [1529] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(406), 1,
      anon_sym_EQ,
    ACTIONS(404), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [1542] = 3,
    ACTIONS(388), 1,
      sym_comment,
    ACTIONS(392), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
    ACTIONS(408), 3,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [1555] = 3,
    ACTIONS(388), 1,
      sym_comment,
    ACTIONS(392), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
    ACTIONS(390), 3,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [1568] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 5,
      anon_sym___LINE__,
      anon_sym___END_LINE__,
      anon_sym___FILE__,
      anon_sym___DIR__,
      aux_sym_constant_token1,
  [1579] = 3,
    ACTIONS(388), 1,
      sym_comment,
    ACTIONS(392), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
    ACTIONS(400), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1591] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [1601] = 3,
    ACTIONS(388), 1,
      sym_comment,
    ACTIONS(392), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
    ACTIONS(408), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1613] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_COLON,
    ACTIONS(394), 3,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [1625] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 1,
      anon_sym_COMMA,
    ACTIONS(418), 1,
      anon_sym_EQ_GT,
    ACTIONS(420), 1,
      anon_sym_RBRACE,
    STATE(196), 1,
      aux_sym_array_repeat1,
  [1641] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [1651] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(424), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [1661] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(426), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [1671] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [1681] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [1691] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [1701] = 3,
    ACTIONS(388), 1,
      sym_comment,
    ACTIONS(392), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
    ACTIONS(400), 2,
      anon_sym_SEMI,
      aux_sym__statement_token1,
  [1713] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(434), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [1723] = 3,
    ACTIONS(388), 1,
      sym_comment,
    ACTIONS(392), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
    ACTIONS(408), 2,
      anon_sym_SEMI,
      aux_sym__statement_token1,
  [1735] = 3,
    ACTIONS(388), 1,
      sym_comment,
    ACTIONS(392), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
    ACTIONS(402), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1747] = 3,
    ACTIONS(388), 1,
      sym_comment,
    ACTIONS(392), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
    ACTIONS(402), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1759] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(436), 1,
      aux_sym_identifier_token1,
    ACTIONS(438), 1,
      anon_sym_DQUOTE,
    STATE(311), 2,
      sym_identifier,
      sym_string,
  [1773] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 1,
      anon_sym_COLON,
    ACTIONS(394), 3,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [1785] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 1,
      anon_sym_COMMA,
    ACTIONS(442), 1,
      anon_sym_EQ_GT,
    ACTIONS(444), 1,
      anon_sym_RBRACE,
    STATE(199), 1,
      aux_sym_array_repeat1,
  [1801] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [1811] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [1821] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [1831] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [1841] = 3,
    ACTIONS(388), 1,
      sym_comment,
    ACTIONS(390), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(392), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
  [1853] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [1863] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [1873] = 3,
    ACTIONS(388), 1,
      sym_comment,
    ACTIONS(390), 2,
      anon_sym_SEMI,
      aux_sym__statement_token1,
    ACTIONS(392), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
  [1885] = 5,
    ACTIONS(388), 1,
      sym_comment,
    ACTIONS(394), 1,
      aux_sym__statement_token1,
    ACTIONS(396), 1,
      anon_sym_LBRACK2,
    ACTIONS(398), 1,
      anon_sym_EQ,
    ACTIONS(458), 1,
      anon_sym_SEMI,
  [1901] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(460), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [1911] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 1,
      anon_sym_COMMA,
    ACTIONS(462), 1,
      anon_sym_EQ_GT,
    ACTIONS(464), 1,
      anon_sym_RBRACE,
    STATE(232), 1,
      aux_sym_array_repeat1,
  [1927] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [1937] = 3,
    ACTIONS(388), 1,
      sym_comment,
    ACTIONS(390), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(392), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
  [1949] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(468), 1,
      aux_sym_identifier_token1,
    ACTIONS(330), 3,
      anon_sym_LBRACK2,
      anon_sym_RBRACK2,
      anon_sym_EQ,
  [1961] = 5,
    ACTIONS(300), 1,
      aux_sym__statement_token1,
    ACTIONS(302), 1,
      anon_sym_SEMI,
    ACTIONS(388), 1,
      sym_comment,
    ACTIONS(470), 1,
      anon_sym_COLON_COLON,
    ACTIONS(472), 1,
      anon_sym_LPAREN,
  [1977] = 3,
    ACTIONS(388), 1,
      sym_comment,
    ACTIONS(392), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
    ACTIONS(402), 2,
      anon_sym_SEMI,
      aux_sym__statement_token1,
  [1989] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 1,
      aux_sym_identifier_token1,
    ACTIONS(330), 3,
      anon_sym_RBRACK2,
      anon_sym_COLON_COLON,
      anon_sym_LPAREN,
  [2001] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 1,
      anon_sym_COLON,
    ACTIONS(394), 3,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [2013] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(478), 1,
      anon_sym_EQ,
    ACTIONS(394), 3,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [2025] = 3,
    ACTIONS(388), 1,
      sym_comment,
    ACTIONS(392), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
    ACTIONS(408), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2037] = 3,
    ACTIONS(388), 1,
      sym_comment,
    ACTIONS(392), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
    ACTIONS(400), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2049] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [2059] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [2069] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(484), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [2079] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [2089] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [2099] = 5,
    ACTIONS(308), 1,
      aux_sym__statement_token1,
    ACTIONS(310), 1,
      anon_sym_SEMI,
    ACTIONS(388), 1,
      sym_comment,
    ACTIONS(470), 1,
      anon_sym_COLON_COLON,
    ACTIONS(490), 1,
      anon_sym_LPAREN,
  [2115] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(492), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [2125] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      anon_sym_RBRACK2,
    ACTIONS(396), 2,
      anon_sym_LBRACK2,
      anon_sym_EQ,
  [2136] = 4,
    ACTIONS(388), 1,
      sym_comment,
    ACTIONS(494), 1,
      anon_sym_DQUOTE,
    ACTIONS(496), 1,
      aux_sym_symbol_token1,
    STATE(164), 1,
      aux_sym_symbol_repeat1,
  [2149] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 1,
      anon_sym_EQ,
    ACTIONS(394), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2160] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      anon_sym_EQ,
    ACTIONS(394), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2171] = 4,
    ACTIONS(388), 1,
      sym_comment,
    ACTIONS(502), 1,
      anon_sym_DQUOTE,
    ACTIONS(504), 1,
      aux_sym_symbol_token1,
    STATE(157), 1,
      aux_sym_symbol_repeat1,
  [2184] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      anon_sym_COMMA,
    ACTIONS(508), 1,
      anon_sym_RPAREN,
    STATE(153), 1,
      aux_sym_type_repeat2,
  [2197] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(510), 1,
      aux_sym_identifier_token1,
    ACTIONS(512), 2,
      anon_sym_LBRACK2,
      anon_sym_EQ,
  [2208] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(514), 1,
      anon_sym_COMMA,
    ACTIONS(517), 1,
      anon_sym_RPAREN,
    STATE(153), 1,
      aux_sym_type_repeat2,
  [2221] = 4,
    ACTIONS(388), 1,
      sym_comment,
    ACTIONS(394), 1,
      aux_sym__statement_token1,
    ACTIONS(458), 1,
      anon_sym_SEMI,
    ACTIONS(519), 1,
      anon_sym_EQ,
  [2234] = 4,
    ACTIONS(388), 1,
      sym_comment,
    ACTIONS(521), 1,
      anon_sym_DQUOTE,
    ACTIONS(523), 1,
      aux_sym_symbol_token1,
    STATE(163), 1,
      aux_sym_symbol_repeat1,
  [2247] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(525), 1,
      anon_sym_COMMA,
    ACTIONS(528), 1,
      anon_sym_RBRACE,
    STATE(156), 1,
      aux_sym_namedTupleLiteral_repeat1,
  [2260] = 4,
    ACTIONS(388), 1,
      sym_comment,
    ACTIONS(496), 1,
      aux_sym_symbol_token1,
    ACTIONS(530), 1,
      anon_sym_DQUOTE,
    STATE(164), 1,
      aux_sym_symbol_repeat1,
  [2273] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      anon_sym_COMMA,
    ACTIONS(534), 1,
      anon_sym_RBRACK,
    STATE(192), 1,
      aux_sym_array_repeat1,
  [2286] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      anon_sym_COMMA,
    ACTIONS(539), 1,
      anon_sym_RBRACE,
    STATE(159), 1,
      aux_sym_array_repeat1,
  [2299] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(541), 1,
      anon_sym_COMMA,
    ACTIONS(544), 1,
      anon_sym_RBRACE,
    STATE(160), 1,
      aux_sym_hash_repeat1,
  [2312] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(546), 1,
      aux_sym_identifier_token1,
    ACTIONS(548), 2,
      anon_sym_LBRACK2,
      anon_sym_EQ,
  [2323] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(550), 1,
      aux_sym_identifier_token1,
    ACTIONS(552), 2,
      anon_sym_LBRACK2,
      anon_sym_EQ,
  [2334] = 4,
    ACTIONS(388), 1,
      sym_comment,
    ACTIONS(496), 1,
      aux_sym_symbol_token1,
    ACTIONS(554), 1,
      anon_sym_DQUOTE,
    STATE(164), 1,
      aux_sym_symbol_repeat1,
  [2347] = 3,
    ACTIONS(388), 1,
      sym_comment,
    STATE(164), 1,
      aux_sym_symbol_repeat1,
    ACTIONS(556), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
  [2358] = 4,
    ACTIONS(388), 1,
      sym_comment,
    ACTIONS(496), 1,
      aux_sym_symbol_token1,
    ACTIONS(559), 1,
      anon_sym_DQUOTE,
    STATE(164), 1,
      aux_sym_symbol_repeat1,
  [2371] = 4,
    ACTIONS(388), 1,
      sym_comment,
    ACTIONS(561), 1,
      anon_sym_DQUOTE,
    ACTIONS(563), 1,
      aux_sym_symbol_token1,
    STATE(165), 1,
      aux_sym_symbol_repeat1,
  [2384] = 4,
    ACTIONS(388), 1,
      sym_comment,
    ACTIONS(496), 1,
      aux_sym_symbol_token1,
    ACTIONS(565), 1,
      anon_sym_DQUOTE,
    STATE(164), 1,
      aux_sym_symbol_repeat1,
  [2397] = 4,
    ACTIONS(388), 1,
      sym_comment,
    ACTIONS(567), 1,
      anon_sym_DQUOTE,
    ACTIONS(569), 1,
      aux_sym_symbol_token1,
    STATE(167), 1,
      aux_sym_symbol_repeat1,
  [2410] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      anon_sym_COMMA,
    ACTIONS(571), 1,
      anon_sym_RPAREN,
    STATE(176), 1,
      aux_sym_type_repeat2,
  [2423] = 4,
    ACTIONS(388), 1,
      sym_comment,
    ACTIONS(496), 1,
      aux_sym_symbol_token1,
    ACTIONS(573), 1,
      anon_sym_DQUOTE,
    STATE(164), 1,
      aux_sym_symbol_repeat1,
  [2436] = 4,
    ACTIONS(388), 1,
      sym_comment,
    ACTIONS(575), 1,
      anon_sym_DQUOTE,
    ACTIONS(577), 1,
      aux_sym_symbol_token1,
    STATE(147), 1,
      aux_sym_symbol_repeat1,
  [2449] = 4,
    ACTIONS(388), 1,
      sym_comment,
    ACTIONS(579), 1,
      anon_sym_DQUOTE,
    ACTIONS(581), 1,
      aux_sym_symbol_token1,
    STATE(170), 1,
      aux_sym_symbol_repeat1,
  [2462] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      anon_sym_COMMA,
    ACTIONS(583), 1,
      anon_sym_RPAREN,
    STATE(151), 1,
      aux_sym_type_repeat2,
  [2475] = 4,
    ACTIONS(388), 1,
      sym_comment,
    ACTIONS(496), 1,
      aux_sym_symbol_token1,
    ACTIONS(585), 1,
      anon_sym_DQUOTE,
    STATE(164), 1,
      aux_sym_symbol_repeat1,
  [2488] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      anon_sym_RBRACK2,
    ACTIONS(304), 1,
      anon_sym_COLON_COLON,
    ACTIONS(587), 1,
      anon_sym_LPAREN,
  [2501] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      anon_sym_COMMA,
    ACTIONS(589), 1,
      anon_sym_RPAREN,
    STATE(153), 1,
      aux_sym_type_repeat2,
  [2514] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 1,
      anon_sym_COMMA,
    ACTIONS(593), 1,
      anon_sym_RBRACE,
    STATE(156), 1,
      aux_sym_namedTupleLiteral_repeat1,
  [2527] = 4,
    ACTIONS(388), 1,
      sym_comment,
    ACTIONS(496), 1,
      aux_sym_symbol_token1,
    ACTIONS(595), 1,
      anon_sym_DQUOTE,
    STATE(164), 1,
      aux_sym_symbol_repeat1,
  [2540] = 4,
    ACTIONS(388), 1,
      sym_comment,
    ACTIONS(597), 1,
      anon_sym_DQUOTE,
    ACTIONS(599), 1,
      aux_sym_symbol_token1,
    STATE(174), 1,
      aux_sym_symbol_repeat1,
  [2553] = 4,
    ACTIONS(388), 1,
      sym_comment,
    ACTIONS(601), 1,
      anon_sym_DQUOTE,
    ACTIONS(603), 1,
      aux_sym_symbol_token1,
    STATE(178), 1,
      aux_sym_symbol_repeat1,
  [2566] = 4,
    ACTIONS(388), 1,
      sym_comment,
    ACTIONS(496), 1,
      aux_sym_symbol_token1,
    ACTIONS(605), 1,
      anon_sym_DQUOTE,
    STATE(164), 1,
      aux_sym_symbol_repeat1,
  [2579] = 4,
    ACTIONS(388), 1,
      sym_comment,
    ACTIONS(496), 1,
      aux_sym_symbol_token1,
    ACTIONS(607), 1,
      anon_sym_DQUOTE,
    STATE(164), 1,
      aux_sym_symbol_repeat1,
  [2592] = 4,
    ACTIONS(388), 1,
      sym_comment,
    ACTIONS(609), 1,
      anon_sym_DQUOTE,
    ACTIONS(611), 1,
      aux_sym_symbol_token1,
    STATE(181), 1,
      aux_sym_symbol_repeat1,
  [2605] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      anon_sym_COLON_COLON,
    ACTIONS(308), 1,
      anon_sym_RBRACK2,
    ACTIONS(613), 1,
      anon_sym_LPAREN,
  [2618] = 4,
    ACTIONS(388), 1,
      sym_comment,
    ACTIONS(615), 1,
      anon_sym_DQUOTE,
    ACTIONS(617), 1,
      aux_sym_symbol_token1,
    STATE(182), 1,
      aux_sym_symbol_repeat1,
  [2631] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(619), 1,
      anon_sym_COMMA,
    ACTIONS(621), 1,
      anon_sym_RBRACE,
    STATE(160), 1,
      aux_sym_hash_repeat1,
  [2644] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      anon_sym_COMMA,
    ACTIONS(623), 1,
      anon_sym_RPAREN,
    STATE(153), 1,
      aux_sym_type_repeat2,
  [2657] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      anon_sym_COMMA,
    ACTIONS(625), 1,
      anon_sym_RPAREN,
    STATE(187), 1,
      aux_sym_type_repeat2,
  [2670] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      anon_sym_COMMA,
    ACTIONS(627), 1,
      anon_sym_RPAREN,
    STATE(153), 1,
      aux_sym_type_repeat2,
  [2683] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 1,
      anon_sym_COMMA,
    ACTIONS(629), 1,
      anon_sym_RBRACE,
    STATE(156), 1,
      aux_sym_namedTupleLiteral_repeat1,
  [2696] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(619), 1,
      anon_sym_COMMA,
    ACTIONS(631), 1,
      anon_sym_RBRACE,
    STATE(160), 1,
      aux_sym_hash_repeat1,
  [2709] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      anon_sym_COMMA,
    ACTIONS(633), 1,
      anon_sym_RBRACK,
    STATE(223), 1,
      aux_sym_array_repeat1,
  [2722] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      anon_sym_COMMA,
    ACTIONS(635), 1,
      anon_sym_RPAREN,
    STATE(189), 1,
      aux_sym_type_repeat2,
  [2735] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 1,
      anon_sym_COMMA,
    ACTIONS(637), 1,
      anon_sym_RBRACE,
    STATE(190), 1,
      aux_sym_namedTupleLiteral_repeat1,
  [2748] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(619), 1,
      anon_sym_COMMA,
    ACTIONS(639), 1,
      anon_sym_RBRACE,
    STATE(191), 1,
      aux_sym_hash_repeat1,
  [2761] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 1,
      anon_sym_COMMA,
    ACTIONS(641), 1,
      anon_sym_RBRACE,
    STATE(159), 1,
      aux_sym_array_repeat1,
  [2774] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      anon_sym_COMMA,
    ACTIONS(643), 1,
      anon_sym_RBRACK,
    STATE(223), 1,
      aux_sym_array_repeat1,
  [2787] = 4,
    ACTIONS(388), 1,
      sym_comment,
    ACTIONS(496), 1,
      aux_sym_symbol_token1,
    ACTIONS(645), 1,
      anon_sym_DQUOTE,
    STATE(164), 1,
      aux_sym_symbol_repeat1,
  [2800] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 1,
      anon_sym_COMMA,
    ACTIONS(647), 1,
      anon_sym_RBRACE,
    STATE(159), 1,
      aux_sym_array_repeat1,
  [2813] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      anon_sym_COMMA,
    ACTIONS(649), 1,
      anon_sym_RBRACK,
    STATE(197), 1,
      aux_sym_array_repeat1,
  [2826] = 4,
    ACTIONS(388), 1,
      sym_comment,
    ACTIONS(496), 1,
      aux_sym_symbol_token1,
    ACTIONS(651), 1,
      anon_sym_DQUOTE,
    STATE(164), 1,
      aux_sym_symbol_repeat1,
  [2839] = 4,
    ACTIONS(388), 1,
      sym_comment,
    ACTIONS(653), 1,
      anon_sym_DQUOTE,
    ACTIONS(655), 1,
      aux_sym_symbol_token1,
    STATE(198), 1,
      aux_sym_symbol_repeat1,
  [2852] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 3,
      anon_sym_LBRACK2,
      anon_sym_RBRACK2,
      anon_sym_EQ,
  [2861] = 3,
    ACTIONS(388), 1,
      sym_comment,
    ACTIONS(404), 1,
      aux_sym__statement_token1,
    ACTIONS(406), 2,
      anon_sym_SEMI,
      anon_sym_EQ,
  [2872] = 3,
    ACTIONS(388), 1,
      sym_comment,
    ACTIONS(657), 1,
      anon_sym_RBRACK2,
    ACTIONS(392), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
  [2883] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 3,
      anon_sym_LBRACK2,
      anon_sym_RBRACK2,
      anon_sym_EQ,
  [2892] = 3,
    ACTIONS(388), 1,
      sym_comment,
    ACTIONS(659), 1,
      anon_sym_RBRACK2,
    ACTIONS(392), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
  [2903] = 3,
    ACTIONS(388), 1,
      sym_comment,
    ACTIONS(661), 1,
      anon_sym_RBRACK2,
    ACTIONS(392), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
  [2914] = 3,
    ACTIONS(388), 1,
      sym_comment,
    ACTIONS(663), 1,
      anon_sym_RBRACK2,
    ACTIONS(392), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
  [2925] = 4,
    ACTIONS(388), 1,
      sym_comment,
    ACTIONS(665), 1,
      anon_sym_DQUOTE,
    ACTIONS(667), 1,
      aux_sym_symbol_token1,
    STATE(201), 1,
      aux_sym_symbol_repeat1,
  [2938] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      anon_sym_COMMA,
    ACTIONS(669), 1,
      anon_sym_RPAREN,
    STATE(153), 1,
      aux_sym_type_repeat2,
  [2951] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      anon_sym_COMMA,
    ACTIONS(671), 1,
      anon_sym_RPAREN,
    STATE(211), 1,
      aux_sym_type_repeat2,
  [2964] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 1,
      anon_sym_COMMA,
    ACTIONS(673), 1,
      anon_sym_RBRACE,
    STATE(177), 1,
      aux_sym_namedTupleLiteral_repeat1,
  [2977] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      anon_sym_COMMA,
    ACTIONS(675), 1,
      anon_sym_RPAREN,
    STATE(153), 1,
      aux_sym_type_repeat2,
  [2990] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(619), 1,
      anon_sym_COMMA,
    ACTIONS(677), 1,
      anon_sym_RBRACE,
    STATE(186), 1,
      aux_sym_hash_repeat1,
  [3003] = 3,
    ACTIONS(388), 1,
      sym_comment,
    ACTIONS(408), 1,
      anon_sym_EQ_GT,
    ACTIONS(392), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
  [3014] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 1,
      anon_sym_COMMA,
    ACTIONS(679), 1,
      anon_sym_RBRACE,
    STATE(156), 1,
      aux_sym_namedTupleLiteral_repeat1,
  [3027] = 3,
    ACTIONS(388), 1,
      sym_comment,
    ACTIONS(402), 1,
      anon_sym_EQ_GT,
    ACTIONS(392), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
  [3038] = 3,
    ACTIONS(388), 1,
      sym_comment,
    ACTIONS(390), 1,
      anon_sym_EQ_GT,
    ACTIONS(392), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
  [3049] = 3,
    ACTIONS(388), 1,
      sym_comment,
    ACTIONS(400), 1,
      anon_sym_EQ_GT,
    ACTIONS(392), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
  [3060] = 3,
    ACTIONS(388), 1,
      sym_comment,
    ACTIONS(390), 1,
      anon_sym_COLON,
    ACTIONS(392), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
  [3071] = 3,
    ACTIONS(388), 1,
      sym_comment,
    ACTIONS(400), 1,
      anon_sym_COLON,
    ACTIONS(392), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
  [3082] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(539), 1,
      anon_sym_RBRACK,
    ACTIONS(681), 1,
      anon_sym_COMMA,
    STATE(223), 1,
      aux_sym_array_repeat1,
  [3095] = 4,
    ACTIONS(388), 1,
      sym_comment,
    ACTIONS(684), 1,
      anon_sym_DQUOTE,
    ACTIONS(686), 1,
      aux_sym_symbol_token1,
    STATE(228), 1,
      aux_sym_symbol_repeat1,
  [3108] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(619), 1,
      anon_sym_COMMA,
    ACTIONS(688), 1,
      anon_sym_RBRACE,
    STATE(160), 1,
      aux_sym_hash_repeat1,
  [3121] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      anon_sym_COMMA,
    ACTIONS(690), 1,
      anon_sym_RPAREN,
    STATE(214), 1,
      aux_sym_type_repeat2,
  [3134] = 4,
    ACTIONS(388), 1,
      sym_comment,
    ACTIONS(692), 1,
      anon_sym_DQUOTE,
    ACTIONS(694), 1,
      aux_sym_symbol_token1,
    STATE(235), 1,
      aux_sym_symbol_repeat1,
  [3147] = 4,
    ACTIONS(388), 1,
      sym_comment,
    ACTIONS(496), 1,
      aux_sym_symbol_token1,
    ACTIONS(696), 1,
      anon_sym_DQUOTE,
    STATE(164), 1,
      aux_sym_symbol_repeat1,
  [3160] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      anon_sym_COMMA,
    ACTIONS(698), 1,
      anon_sym_RBRACK,
    STATE(233), 1,
      aux_sym_array_repeat1,
  [3173] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 1,
      anon_sym_COMMA,
    ACTIONS(700), 1,
      anon_sym_RBRACE,
    STATE(217), 1,
      aux_sym_namedTupleLiteral_repeat1,
  [3186] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(619), 1,
      anon_sym_COMMA,
    ACTIONS(702), 1,
      anon_sym_RBRACE,
    STATE(225), 1,
      aux_sym_hash_repeat1,
  [3199] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 1,
      anon_sym_COMMA,
    ACTIONS(704), 1,
      anon_sym_RBRACE,
    STATE(159), 1,
      aux_sym_array_repeat1,
  [3212] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      anon_sym_COMMA,
    ACTIONS(706), 1,
      anon_sym_RBRACK,
    STATE(223), 1,
      aux_sym_array_repeat1,
  [3225] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(539), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [3234] = 4,
    ACTIONS(388), 1,
      sym_comment,
    ACTIONS(496), 1,
      aux_sym_symbol_token1,
    ACTIONS(708), 1,
      anon_sym_DQUOTE,
    STATE(164), 1,
      aux_sym_symbol_repeat1,
  [3247] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(710), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3255] = 3,
    ACTIONS(388), 1,
      sym_comment,
    ACTIONS(430), 1,
      aux_sym__statement_token1,
    ACTIONS(712), 1,
      anon_sym_SEMI,
  [3265] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      anon_sym_RBRACK2,
    ACTIONS(714), 1,
      anon_sym_EQ,
  [3275] = 3,
    ACTIONS(388), 1,
      sym_comment,
    ACTIONS(492), 1,
      aux_sym__statement_token1,
    ACTIONS(716), 1,
      anon_sym_SEMI,
  [3285] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      anon_sym_EQ_GT,
    ACTIONS(718), 1,
      anon_sym_EQ,
  [3295] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(720), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3303] = 3,
    ACTIONS(388), 1,
      sym_comment,
    ACTIONS(452), 1,
      aux_sym__statement_token1,
    ACTIONS(722), 1,
      anon_sym_SEMI,
  [3313] = 3,
    ACTIONS(388), 1,
      sym_comment,
    ACTIONS(460), 1,
      aux_sym__statement_token1,
    ACTIONS(724), 1,
      anon_sym_SEMI,
  [3323] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 1,
      anon_sym_EQ,
    ACTIONS(726), 1,
      anon_sym_LBRACK2,
  [3333] = 3,
    ACTIONS(388), 1,
      sym_comment,
    ACTIONS(488), 1,
      aux_sym__statement_token1,
    ACTIONS(728), 1,
      anon_sym_SEMI,
  [3343] = 3,
    ACTIONS(388), 1,
      sym_comment,
    ACTIONS(730), 1,
      anon_sym_SEMI,
    ACTIONS(732), 1,
      aux_sym__statement_token1,
  [3353] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(734), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3361] = 3,
    ACTIONS(388), 1,
      sym_comment,
    ACTIONS(448), 1,
      aux_sym__statement_token1,
    ACTIONS(736), 1,
      anon_sym_SEMI,
  [3371] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(738), 2,
      anon_sym_LBRACK2,
      anon_sym_EQ,
  [3379] = 3,
    ACTIONS(388), 1,
      sym_comment,
    ACTIONS(450), 1,
      aux_sym__statement_token1,
    ACTIONS(740), 1,
      anon_sym_SEMI,
  [3389] = 3,
    ACTIONS(388), 1,
      sym_comment,
    ACTIONS(446), 1,
      aux_sym__statement_token1,
    ACTIONS(742), 1,
      anon_sym_SEMI,
  [3399] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(744), 2,
      anon_sym_LBRACK2,
      anon_sym_EQ,
  [3407] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(726), 1,
      anon_sym_LBRACK2,
    ACTIONS(746), 1,
      anon_sym_EQ,
  [3417] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(714), 1,
      anon_sym_EQ,
    ACTIONS(748), 1,
      anon_sym_LBRACK2,
  [3427] = 3,
    ACTIONS(388), 1,
      sym_comment,
    ACTIONS(454), 1,
      aux_sym__statement_token1,
    ACTIONS(750), 1,
      anon_sym_SEMI,
  [3437] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      anon_sym_EQ,
    ACTIONS(726), 1,
      anon_sym_LBRACK2,
  [3447] = 3,
    ACTIONS(388), 1,
      sym_comment,
    ACTIONS(456), 1,
      aux_sym__statement_token1,
    ACTIONS(752), 1,
      anon_sym_SEMI,
  [3457] = 3,
    ACTIONS(388), 1,
      sym_comment,
    ACTIONS(486), 1,
      aux_sym__statement_token1,
    ACTIONS(754), 1,
      anon_sym_SEMI,
  [3467] = 3,
    ACTIONS(388), 1,
      sym_comment,
    ACTIONS(422), 1,
      aux_sym__statement_token1,
    ACTIONS(756), 1,
      anon_sym_SEMI,
  [3477] = 3,
    ACTIONS(388), 1,
      sym_comment,
    ACTIONS(758), 1,
      anon_sym_SEMI,
    ACTIONS(760), 1,
      aux_sym__statement_token1,
  [3487] = 3,
    ACTIONS(318), 1,
      aux_sym__statement_token1,
    ACTIONS(320), 1,
      anon_sym_SEMI,
    ACTIONS(388), 1,
      sym_comment,
  [3497] = 3,
    ACTIONS(388), 1,
      sym_comment,
    ACTIONS(484), 1,
      aux_sym__statement_token1,
    ACTIONS(762), 1,
      anon_sym_SEMI,
  [3507] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(764), 1,
      anon_sym_LBRACK2,
    ACTIONS(766), 1,
      anon_sym_EQ,
  [3517] = 3,
    ACTIONS(388), 1,
      sym_comment,
    ACTIONS(466), 1,
      aux_sym__statement_token1,
    ACTIONS(768), 1,
      anon_sym_SEMI,
  [3527] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(726), 1,
      anon_sym_LBRACK2,
    ACTIONS(770), 1,
      anon_sym_EQ,
  [3537] = 3,
    ACTIONS(388), 1,
      sym_comment,
    ACTIONS(424), 1,
      aux_sym__statement_token1,
    ACTIONS(772), 1,
      anon_sym_SEMI,
  [3547] = 3,
    ACTIONS(388), 1,
      sym_comment,
    ACTIONS(482), 1,
      aux_sym__statement_token1,
    ACTIONS(774), 1,
      anon_sym_SEMI,
  [3557] = 3,
    ACTIONS(314), 1,
      aux_sym__statement_token1,
    ACTIONS(316), 1,
      anon_sym_SEMI,
    ACTIONS(388), 1,
      sym_comment,
  [3567] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(776), 2,
      anon_sym_LBRACK2,
      anon_sym_EQ,
  [3575] = 3,
    ACTIONS(322), 1,
      aux_sym__statement_token1,
    ACTIONS(324), 1,
      anon_sym_SEMI,
    ACTIONS(388), 1,
      sym_comment,
  [3585] = 3,
    ACTIONS(388), 1,
      sym_comment,
    ACTIONS(428), 1,
      aux_sym__statement_token1,
    ACTIONS(778), 1,
      anon_sym_SEMI,
  [3595] = 3,
    ACTIONS(388), 1,
      sym_comment,
    ACTIONS(426), 1,
      aux_sym__statement_token1,
    ACTIONS(780), 1,
      anon_sym_SEMI,
  [3605] = 3,
    ACTIONS(388), 1,
      sym_comment,
    ACTIONS(412), 1,
      aux_sym__statement_token1,
    ACTIONS(782), 1,
      anon_sym_SEMI,
  [3615] = 3,
    ACTIONS(388), 1,
      sym_comment,
    ACTIONS(434), 1,
      aux_sym__statement_token1,
    ACTIONS(784), 1,
      anon_sym_SEMI,
  [3625] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 2,
      anon_sym_RBRACK2,
      anon_sym_EQ,
  [3633] = 3,
    ACTIONS(326), 1,
      aux_sym__statement_token1,
    ACTIONS(328), 1,
      anon_sym_SEMI,
    ACTIONS(388), 1,
      sym_comment,
  [3643] = 3,
    ACTIONS(388), 1,
      sym_comment,
    ACTIONS(480), 1,
      aux_sym__statement_token1,
    ACTIONS(786), 1,
      anon_sym_SEMI,
  [3653] = 3,
    ACTIONS(388), 1,
      sym_comment,
    ACTIONS(432), 1,
      aux_sym__statement_token1,
    ACTIONS(788), 1,
      anon_sym_SEMI,
  [3663] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      anon_sym_RBRACK2,
  [3670] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(790), 1,
      anon_sym_COLON,
  [3677] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 1,
      anon_sym_RBRACK2,
  [3684] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 1,
      anon_sym_RBRACK2,
  [3691] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(460), 1,
      anon_sym_RBRACK2,
  [3698] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(492), 1,
      anon_sym_RBRACK2,
  [3705] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 1,
      anon_sym_RBRACK2,
  [3712] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      anon_sym_RBRACK2,
  [3719] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(484), 1,
      anon_sym_RBRACK2,
  [3726] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 1,
      anon_sym_RBRACK2,
  [3733] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 1,
      anon_sym_RBRACK2,
  [3740] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(792), 1,
      anon_sym_BQUOTE,
  [3747] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(794), 1,
      anon_sym_EQ_GT,
  [3754] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(796), 1,
      anon_sym_RBRACK2,
  [3761] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 1,
      anon_sym_RBRACK2,
  [3768] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 1,
      anon_sym_RBRACK2,
  [3775] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 1,
      anon_sym_RBRACK2,
  [3782] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_RBRACK2,
  [3789] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      anon_sym_RBRACK2,
  [3796] = 2,
    ACTIONS(388), 1,
      sym_comment,
    ACTIONS(798), 1,
      aux_sym_regex_token1,
  [3803] = 2,
    ACTIONS(388), 1,
      sym_comment,
    ACTIONS(800), 1,
      aux_sym_commandLiteral_token1,
  [3810] = 2,
    ACTIONS(388), 1,
      sym_comment,
    ACTIONS(802), 1,
      aux_sym_commandLiteral_token2,
  [3817] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 1,
      anon_sym_RBRACK2,
  [3824] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      anon_sym_RBRACK2,
  [3831] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 1,
      anon_sym_RBRACK2,
  [3838] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(804), 1,
      anon_sym_RPAREN,
  [3845] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(804), 1,
      anon_sym_BQUOTE,
  [3852] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(806), 1,
      anon_sym_SLASH,
  [3859] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 1,
      anon_sym_COLON,
  [3866] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(808), 1,
      anon_sym_of,
  [3873] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(810), 1,
      anon_sym_EQ_GT,
  [3880] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(434), 1,
      anon_sym_RBRACK2,
  [3887] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(812), 1,
      anon_sym_COLON,
  [3894] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(814), 1,
      anon_sym_RBRACK2,
  [3901] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 1,
      anon_sym_RBRACK2,
  [3908] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(816), 1,
      anon_sym_RBRACK2,
  [3915] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(426), 1,
      anon_sym_RBRACK2,
  [3922] = 2,
    ACTIONS(388), 1,
      sym_comment,
    ACTIONS(818), 1,
      aux_sym_regex_token1,
  [3929] = 2,
    ACTIONS(388), 1,
      sym_comment,
    ACTIONS(820), 1,
      aux_sym_commandLiteral_token1,
  [3936] = 2,
    ACTIONS(388), 1,
      sym_comment,
    ACTIONS(822), 1,
      aux_sym_commandLiteral_token2,
  [3943] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(424), 1,
      anon_sym_RBRACK2,
  [3950] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(792), 1,
      anon_sym_RPAREN,
  [3957] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(824), 1,
      anon_sym_RPAREN,
  [3964] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(826), 1,
      ts_builtin_sym_end,
  [3971] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(828), 1,
      aux_sym_local_variable_token1,
  [3978] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(830), 1,
      aux_sym_local_variable_token1,
  [3985] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(824), 1,
      anon_sym_BQUOTE,
  [3992] = 2,
    ACTIONS(388), 1,
      sym_comment,
    ACTIONS(832), 1,
      aux_sym_commandLiteral_token2,
  [3999] = 2,
    ACTIONS(388), 1,
      sym_comment,
    ACTIONS(834), 1,
      aux_sym_commandLiteral_token1,
  [4006] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(836), 1,
      anon_sym_SLASH,
  [4013] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 1,
      anon_sym_RBRACK2,
  [4020] = 2,
    ACTIONS(388), 1,
      sym_comment,
    ACTIONS(838), 1,
      aux_sym_regex_token1,
  [4027] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_RBRACK2,
  [4034] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      anon_sym_RBRACK2,
  [4041] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(840), 1,
      anon_sym_of,
  [4048] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 1,
      anon_sym_COLON,
  [4055] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      anon_sym_COLON_COLON,
  [4062] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      anon_sym_RBRACK2,
  [4069] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(842), 1,
      anon_sym_of,
  [4076] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_COLON,
  [4083] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(844), 1,
      anon_sym_EQ_GT,
  [4090] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(846), 1,
      anon_sym_SLASH,
  [4097] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(848), 1,
      anon_sym_EQ_GT,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(43)] = 0,
  [SMALL_STATE(44)] = 61,
  [SMALL_STATE(45)] = 122,
  [SMALL_STATE(46)] = 177,
  [SMALL_STATE(47)] = 232,
  [SMALL_STATE(48)] = 287,
  [SMALL_STATE(49)] = 342,
  [SMALL_STATE(50)] = 395,
  [SMALL_STATE(51)] = 450,
  [SMALL_STATE(52)] = 503,
  [SMALL_STATE(53)] = 552,
  [SMALL_STATE(54)] = 601,
  [SMALL_STATE(55)] = 642,
  [SMALL_STATE(56)] = 683,
  [SMALL_STATE(57)] = 724,
  [SMALL_STATE(58)] = 765,
  [SMALL_STATE(59)] = 806,
  [SMALL_STATE(60)] = 847,
  [SMALL_STATE(61)] = 867,
  [SMALL_STATE(62)] = 884,
  [SMALL_STATE(63)] = 901,
  [SMALL_STATE(64)] = 923,
  [SMALL_STATE(65)] = 945,
  [SMALL_STATE(66)] = 967,
  [SMALL_STATE(67)] = 989,
  [SMALL_STATE(68)] = 1011,
  [SMALL_STATE(69)] = 1033,
  [SMALL_STATE(70)] = 1055,
  [SMALL_STATE(71)] = 1077,
  [SMALL_STATE(72)] = 1099,
  [SMALL_STATE(73)] = 1121,
  [SMALL_STATE(74)] = 1143,
  [SMALL_STATE(75)] = 1165,
  [SMALL_STATE(76)] = 1187,
  [SMALL_STATE(77)] = 1209,
  [SMALL_STATE(78)] = 1231,
  [SMALL_STATE(79)] = 1253,
  [SMALL_STATE(80)] = 1275,
  [SMALL_STATE(81)] = 1297,
  [SMALL_STATE(82)] = 1319,
  [SMALL_STATE(83)] = 1338,
  [SMALL_STATE(84)] = 1357,
  [SMALL_STATE(85)] = 1374,
  [SMALL_STATE(86)] = 1393,
  [SMALL_STATE(87)] = 1412,
  [SMALL_STATE(88)] = 1431,
  [SMALL_STATE(89)] = 1445,
  [SMALL_STATE(90)] = 1459,
  [SMALL_STATE(91)] = 1475,
  [SMALL_STATE(92)] = 1489,
  [SMALL_STATE(93)] = 1503,
  [SMALL_STATE(94)] = 1516,
  [SMALL_STATE(95)] = 1529,
  [SMALL_STATE(96)] = 1542,
  [SMALL_STATE(97)] = 1555,
  [SMALL_STATE(98)] = 1568,
  [SMALL_STATE(99)] = 1579,
  [SMALL_STATE(100)] = 1591,
  [SMALL_STATE(101)] = 1601,
  [SMALL_STATE(102)] = 1613,
  [SMALL_STATE(103)] = 1625,
  [SMALL_STATE(104)] = 1641,
  [SMALL_STATE(105)] = 1651,
  [SMALL_STATE(106)] = 1661,
  [SMALL_STATE(107)] = 1671,
  [SMALL_STATE(108)] = 1681,
  [SMALL_STATE(109)] = 1691,
  [SMALL_STATE(110)] = 1701,
  [SMALL_STATE(111)] = 1713,
  [SMALL_STATE(112)] = 1723,
  [SMALL_STATE(113)] = 1735,
  [SMALL_STATE(114)] = 1747,
  [SMALL_STATE(115)] = 1759,
  [SMALL_STATE(116)] = 1773,
  [SMALL_STATE(117)] = 1785,
  [SMALL_STATE(118)] = 1801,
  [SMALL_STATE(119)] = 1811,
  [SMALL_STATE(120)] = 1821,
  [SMALL_STATE(121)] = 1831,
  [SMALL_STATE(122)] = 1841,
  [SMALL_STATE(123)] = 1853,
  [SMALL_STATE(124)] = 1863,
  [SMALL_STATE(125)] = 1873,
  [SMALL_STATE(126)] = 1885,
  [SMALL_STATE(127)] = 1901,
  [SMALL_STATE(128)] = 1911,
  [SMALL_STATE(129)] = 1927,
  [SMALL_STATE(130)] = 1937,
  [SMALL_STATE(131)] = 1949,
  [SMALL_STATE(132)] = 1961,
  [SMALL_STATE(133)] = 1977,
  [SMALL_STATE(134)] = 1989,
  [SMALL_STATE(135)] = 2001,
  [SMALL_STATE(136)] = 2013,
  [SMALL_STATE(137)] = 2025,
  [SMALL_STATE(138)] = 2037,
  [SMALL_STATE(139)] = 2049,
  [SMALL_STATE(140)] = 2059,
  [SMALL_STATE(141)] = 2069,
  [SMALL_STATE(142)] = 2079,
  [SMALL_STATE(143)] = 2089,
  [SMALL_STATE(144)] = 2099,
  [SMALL_STATE(145)] = 2115,
  [SMALL_STATE(146)] = 2125,
  [SMALL_STATE(147)] = 2136,
  [SMALL_STATE(148)] = 2149,
  [SMALL_STATE(149)] = 2160,
  [SMALL_STATE(150)] = 2171,
  [SMALL_STATE(151)] = 2184,
  [SMALL_STATE(152)] = 2197,
  [SMALL_STATE(153)] = 2208,
  [SMALL_STATE(154)] = 2221,
  [SMALL_STATE(155)] = 2234,
  [SMALL_STATE(156)] = 2247,
  [SMALL_STATE(157)] = 2260,
  [SMALL_STATE(158)] = 2273,
  [SMALL_STATE(159)] = 2286,
  [SMALL_STATE(160)] = 2299,
  [SMALL_STATE(161)] = 2312,
  [SMALL_STATE(162)] = 2323,
  [SMALL_STATE(163)] = 2334,
  [SMALL_STATE(164)] = 2347,
  [SMALL_STATE(165)] = 2358,
  [SMALL_STATE(166)] = 2371,
  [SMALL_STATE(167)] = 2384,
  [SMALL_STATE(168)] = 2397,
  [SMALL_STATE(169)] = 2410,
  [SMALL_STATE(170)] = 2423,
  [SMALL_STATE(171)] = 2436,
  [SMALL_STATE(172)] = 2449,
  [SMALL_STATE(173)] = 2462,
  [SMALL_STATE(174)] = 2475,
  [SMALL_STATE(175)] = 2488,
  [SMALL_STATE(176)] = 2501,
  [SMALL_STATE(177)] = 2514,
  [SMALL_STATE(178)] = 2527,
  [SMALL_STATE(179)] = 2540,
  [SMALL_STATE(180)] = 2553,
  [SMALL_STATE(181)] = 2566,
  [SMALL_STATE(182)] = 2579,
  [SMALL_STATE(183)] = 2592,
  [SMALL_STATE(184)] = 2605,
  [SMALL_STATE(185)] = 2618,
  [SMALL_STATE(186)] = 2631,
  [SMALL_STATE(187)] = 2644,
  [SMALL_STATE(188)] = 2657,
  [SMALL_STATE(189)] = 2670,
  [SMALL_STATE(190)] = 2683,
  [SMALL_STATE(191)] = 2696,
  [SMALL_STATE(192)] = 2709,
  [SMALL_STATE(193)] = 2722,
  [SMALL_STATE(194)] = 2735,
  [SMALL_STATE(195)] = 2748,
  [SMALL_STATE(196)] = 2761,
  [SMALL_STATE(197)] = 2774,
  [SMALL_STATE(198)] = 2787,
  [SMALL_STATE(199)] = 2800,
  [SMALL_STATE(200)] = 2813,
  [SMALL_STATE(201)] = 2826,
  [SMALL_STATE(202)] = 2839,
  [SMALL_STATE(203)] = 2852,
  [SMALL_STATE(204)] = 2861,
  [SMALL_STATE(205)] = 2872,
  [SMALL_STATE(206)] = 2883,
  [SMALL_STATE(207)] = 2892,
  [SMALL_STATE(208)] = 2903,
  [SMALL_STATE(209)] = 2914,
  [SMALL_STATE(210)] = 2925,
  [SMALL_STATE(211)] = 2938,
  [SMALL_STATE(212)] = 2951,
  [SMALL_STATE(213)] = 2964,
  [SMALL_STATE(214)] = 2977,
  [SMALL_STATE(215)] = 2990,
  [SMALL_STATE(216)] = 3003,
  [SMALL_STATE(217)] = 3014,
  [SMALL_STATE(218)] = 3027,
  [SMALL_STATE(219)] = 3038,
  [SMALL_STATE(220)] = 3049,
  [SMALL_STATE(221)] = 3060,
  [SMALL_STATE(222)] = 3071,
  [SMALL_STATE(223)] = 3082,
  [SMALL_STATE(224)] = 3095,
  [SMALL_STATE(225)] = 3108,
  [SMALL_STATE(226)] = 3121,
  [SMALL_STATE(227)] = 3134,
  [SMALL_STATE(228)] = 3147,
  [SMALL_STATE(229)] = 3160,
  [SMALL_STATE(230)] = 3173,
  [SMALL_STATE(231)] = 3186,
  [SMALL_STATE(232)] = 3199,
  [SMALL_STATE(233)] = 3212,
  [SMALL_STATE(234)] = 3225,
  [SMALL_STATE(235)] = 3234,
  [SMALL_STATE(236)] = 3247,
  [SMALL_STATE(237)] = 3255,
  [SMALL_STATE(238)] = 3265,
  [SMALL_STATE(239)] = 3275,
  [SMALL_STATE(240)] = 3285,
  [SMALL_STATE(241)] = 3295,
  [SMALL_STATE(242)] = 3303,
  [SMALL_STATE(243)] = 3313,
  [SMALL_STATE(244)] = 3323,
  [SMALL_STATE(245)] = 3333,
  [SMALL_STATE(246)] = 3343,
  [SMALL_STATE(247)] = 3353,
  [SMALL_STATE(248)] = 3361,
  [SMALL_STATE(249)] = 3371,
  [SMALL_STATE(250)] = 3379,
  [SMALL_STATE(251)] = 3389,
  [SMALL_STATE(252)] = 3399,
  [SMALL_STATE(253)] = 3407,
  [SMALL_STATE(254)] = 3417,
  [SMALL_STATE(255)] = 3427,
  [SMALL_STATE(256)] = 3437,
  [SMALL_STATE(257)] = 3447,
  [SMALL_STATE(258)] = 3457,
  [SMALL_STATE(259)] = 3467,
  [SMALL_STATE(260)] = 3477,
  [SMALL_STATE(261)] = 3487,
  [SMALL_STATE(262)] = 3497,
  [SMALL_STATE(263)] = 3507,
  [SMALL_STATE(264)] = 3517,
  [SMALL_STATE(265)] = 3527,
  [SMALL_STATE(266)] = 3537,
  [SMALL_STATE(267)] = 3547,
  [SMALL_STATE(268)] = 3557,
  [SMALL_STATE(269)] = 3567,
  [SMALL_STATE(270)] = 3575,
  [SMALL_STATE(271)] = 3585,
  [SMALL_STATE(272)] = 3595,
  [SMALL_STATE(273)] = 3605,
  [SMALL_STATE(274)] = 3615,
  [SMALL_STATE(275)] = 3625,
  [SMALL_STATE(276)] = 3633,
  [SMALL_STATE(277)] = 3643,
  [SMALL_STATE(278)] = 3653,
  [SMALL_STATE(279)] = 3663,
  [SMALL_STATE(280)] = 3670,
  [SMALL_STATE(281)] = 3677,
  [SMALL_STATE(282)] = 3684,
  [SMALL_STATE(283)] = 3691,
  [SMALL_STATE(284)] = 3698,
  [SMALL_STATE(285)] = 3705,
  [SMALL_STATE(286)] = 3712,
  [SMALL_STATE(287)] = 3719,
  [SMALL_STATE(288)] = 3726,
  [SMALL_STATE(289)] = 3733,
  [SMALL_STATE(290)] = 3740,
  [SMALL_STATE(291)] = 3747,
  [SMALL_STATE(292)] = 3754,
  [SMALL_STATE(293)] = 3761,
  [SMALL_STATE(294)] = 3768,
  [SMALL_STATE(295)] = 3775,
  [SMALL_STATE(296)] = 3782,
  [SMALL_STATE(297)] = 3789,
  [SMALL_STATE(298)] = 3796,
  [SMALL_STATE(299)] = 3803,
  [SMALL_STATE(300)] = 3810,
  [SMALL_STATE(301)] = 3817,
  [SMALL_STATE(302)] = 3824,
  [SMALL_STATE(303)] = 3831,
  [SMALL_STATE(304)] = 3838,
  [SMALL_STATE(305)] = 3845,
  [SMALL_STATE(306)] = 3852,
  [SMALL_STATE(307)] = 3859,
  [SMALL_STATE(308)] = 3866,
  [SMALL_STATE(309)] = 3873,
  [SMALL_STATE(310)] = 3880,
  [SMALL_STATE(311)] = 3887,
  [SMALL_STATE(312)] = 3894,
  [SMALL_STATE(313)] = 3901,
  [SMALL_STATE(314)] = 3908,
  [SMALL_STATE(315)] = 3915,
  [SMALL_STATE(316)] = 3922,
  [SMALL_STATE(317)] = 3929,
  [SMALL_STATE(318)] = 3936,
  [SMALL_STATE(319)] = 3943,
  [SMALL_STATE(320)] = 3950,
  [SMALL_STATE(321)] = 3957,
  [SMALL_STATE(322)] = 3964,
  [SMALL_STATE(323)] = 3971,
  [SMALL_STATE(324)] = 3978,
  [SMALL_STATE(325)] = 3985,
  [SMALL_STATE(326)] = 3992,
  [SMALL_STATE(327)] = 3999,
  [SMALL_STATE(328)] = 4006,
  [SMALL_STATE(329)] = 4013,
  [SMALL_STATE(330)] = 4020,
  [SMALL_STATE(331)] = 4027,
  [SMALL_STATE(332)] = 4034,
  [SMALL_STATE(333)] = 4041,
  [SMALL_STATE(334)] = 4048,
  [SMALL_STATE(335)] = 4055,
  [SMALL_STATE(336)] = 4062,
  [SMALL_STATE(337)] = 4069,
  [SMALL_STATE(338)] = 4076,
  [SMALL_STATE(339)] = 4083,
  [SMALL_STATE(340)] = 4090,
  [SMALL_STATE(341)] = 4097,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(324),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(246),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(250),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(242),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(242),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(273),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(273),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(56),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(150),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(255),
  [134] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(255),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(28),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(12),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(330),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(257),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(327),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(326),
  [155] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(152),
  [158] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(324),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(323),
  [164] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(89),
  [167] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(84),
  [170] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(81),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [197] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(260),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, .production_id = 1),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1, .production_id = 1),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2, .production_id = 4),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 2, .production_id = 4),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 5, .production_id = 14),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 5, .production_id = 14),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 4, .production_id = 8),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 4, .production_id = 8),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 5, .production_id = 16),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 5, .production_id = 16),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 6, .production_id = 17),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 6, .production_id = 17),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1),
  [334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 2),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 2),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(336),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [354] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [360] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [380] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2), SHIFT_REPEAT(62),
  [383] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2), SHIFT_REPEAT(60),
  [386] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [388] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_symbol_repeat1, 1),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variable, 1),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variable, 1),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 4),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_expression, 4, .production_id = 6),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index_expression, 4, .production_id = 6),
  [408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 3),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2, .production_id = 2),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 6, .production_id = 9),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namedTupleLiteral, 6, .production_id = 11),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hash, 6, .production_id = 11),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hash, 6, .production_id = 10),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 5, .production_id = 9),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namedTupleLiteral, 5, .production_id = 7),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hash, 5, .production_id = 7),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 4, .production_id = 3),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 4),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 1),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 1),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 1),
  [458] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 4),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 2),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [470] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [472] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [478] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 3),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 3),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commandLiteral, 3),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 3, .production_id = 3),
  [490] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3, .production_id = 5),
  [494] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [496] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [502] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [504] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_variable, 1),
  [514] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_repeat2, 2, .production_id = 15), SHIFT_REPEAT(80),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat2, 2, .production_id = 15),
  [519] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [521] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [523] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [525] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_namedTupleLiteral_repeat1, 2, .production_id = 12), SHIFT_REPEAT(115),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_namedTupleLiteral_repeat1, 2, .production_id = 12),
  [530] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [536] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(38),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2),
  [541] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hash_repeat1, 2, .production_id = 12), SHIFT_REPEAT(24),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_hash_repeat1, 2, .production_id = 12),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance_variable, 2),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_variable, 2),
  [554] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [556] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_symbol_repeat1, 2), SHIFT_REPEAT(164),
  [559] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [561] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [563] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [565] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [567] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [569] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [573] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [575] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [577] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [579] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [581] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [585] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [595] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [597] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [599] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [601] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [603] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [605] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [607] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [609] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [611] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [615] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [617] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [645] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [651] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [653] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [655] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 3),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 4),
  [665] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [667] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [681] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(37),
  [684] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [686] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [692] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [694] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [696] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [708] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat2, 2, .production_id = 13),
  [712] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_definition, 5, .production_id = 9),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [716] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 3, .production_id = 5),
  [718] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_namedTupleLiteral_repeat1, 4, .production_id = 7),
  [722] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 1),
  [724] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 4),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [728] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_definition, 3, .production_id = 3),
  [730] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_hash_repeat1, 4, .production_id = 7),
  [736] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 4),
  [738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_variable, 3),
  [740] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool, 1),
  [742] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_definition, 4, .production_id = 3),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance_variable, 3),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [750] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char, 1),
  [752] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 1),
  [754] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commandLiteral, 3),
  [756] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_definition, 6, .production_id = 9),
  [758] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [762] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex, 3),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [768] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 2),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [772] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namedTupleLiteral, 6, .production_id = 11),
  [774] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 3),
  [776] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_variable, 2),
  [778] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hash, 6, .production_id = 10),
  [780] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hash, 6, .production_id = 11),
  [782] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1),
  [784] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hash, 5, .production_id = 7),
  [786] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 3),
  [788] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namedTupleLiteral, 5, .production_id = 7),
  [790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [798] = {.entry = {.count = 1, .reusable = false}}, SHIFT(340),
  [800] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [802] = {.entry = {.count = 1, .reusable = false}}, SHIFT(320),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [818] = {.entry = {.count = 1, .reusable = false}}, SHIFT(328),
  [820] = {.entry = {.count = 1, .reusable = false}}, SHIFT(325),
  [822] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [826] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [832] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [834] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [838] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
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

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
#define STATE_COUNT 371
#define LARGE_STATE_COUNT 43
#define SYMBOL_COUNT 121
#define ALIAS_COUNT 2
#define TOKEN_COUNT 87
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 11
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 22

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
  anon_sym_NamedTuple = 42,
  anon_sym_LPAREN = 43,
  anon_sym_RPAREN = 44,
  anon_sym_BQUOTE = 45,
  aux_sym_commandLiteral_token1 = 46,
  anon_sym_PERCENTx_LPAREN = 47,
  aux_sym_commandLiteral_token2 = 48,
  sym_comment = 49,
  aux_sym_local_variable_token1 = 50,
  anon_sym_AT = 51,
  anon_sym_AT_AT = 52,
  anon_sym___LINE__ = 53,
  anon_sym___END_LINE__ = 54,
  anon_sym___FILE__ = 55,
  anon_sym___DIR__ = 56,
  aux_sym_constant_token1 = 57,
  anon_sym_EQ = 58,
  anon_sym_class = 59,
  anon_sym_LT = 60,
  anon_sym_end = 61,
  anon_sym_COLON_COLON = 62,
  anon_sym_PLUS = 63,
  anon_sym_DASH = 64,
  anon_sym_STAR = 65,
  anon_sym_PERCENT = 66,
  anon_sym_AMP = 67,
  anon_sym_PIPE = 68,
  anon_sym_CARET = 69,
  anon_sym_STAR_STAR = 70,
  anon_sym_GT_GT = 71,
  anon_sym_LT_LT = 72,
  anon_sym_EQ_EQ = 73,
  anon_sym_BANG_EQ = 74,
  anon_sym_LT_EQ = 75,
  anon_sym_GT = 76,
  anon_sym_GT_EQ = 77,
  anon_sym_LT_EQ_GT = 78,
  anon_sym_EQ_EQ_EQ = 79,
  anon_sym_LBRACK_RBRACK = 80,
  anon_sym_LBRACK_RBRACK_QMARK = 81,
  anon_sym_LBRACK_RBRACK_EQ = 82,
  anon_sym_BANG = 83,
  anon_sym_TILDE = 84,
  anon_sym_BANG_TILDE = 85,
  anon_sym_EQ_TILDE = 86,
  sym_program = 87,
  sym__statement = 88,
  sym__expression = 89,
  sym_identifier = 90,
  sym_bool = 91,
  sym_float = 92,
  sym_integer = 93,
  sym_symbol = 94,
  sym_char = 95,
  sym_string = 96,
  sym_array = 97,
  sym_hash = 98,
  sym_index_expression = 99,
  sym_regex = 100,
  sym_tuple = 101,
  sym_namedTupleLiteral = 102,
  sym_commandLiteral = 103,
  sym_local_variable = 104,
  sym_instance_variable = 105,
  sym_class_variable = 106,
  sym_constant = 107,
  sym__variable = 108,
  sym_assignment = 109,
  sym_class_definition = 110,
  sym_type = 111,
  sym__operator = 112,
  aux_sym_program_repeat1 = 113,
  aux_sym_symbol_repeat1 = 114,
  aux_sym_array_repeat1 = 115,
  aux_sym_hash_repeat1 = 116,
  aux_sym_namedTupleLiteral_repeat1 = 117,
  aux_sym_namedTupleLiteral_repeat2 = 118,
  aux_sym_type_repeat1 = 119,
  aux_sym_type_repeat2 = 120,
  alias_sym_namespace = 121,
  anon_alias_sym_type = 122,
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
  [anon_sym_NamedTuple] = "NamedTuple",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_BQUOTE] = "`",
  [aux_sym_commandLiteral_token1] = "commandLiteral_token1",
  [anon_sym_PERCENTx_LPAREN] = "%x(",
  [aux_sym_commandLiteral_token2] = "commandLiteral_token2",
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
  [aux_sym_namedTupleLiteral_repeat2] = "namedTupleLiteral_repeat2",
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
  [anon_sym_NamedTuple] = anon_sym_NamedTuple,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [aux_sym_commandLiteral_token1] = aux_sym_commandLiteral_token1,
  [anon_sym_PERCENTx_LPAREN] = anon_sym_PERCENTx_LPAREN,
  [aux_sym_commandLiteral_token2] = aux_sym_commandLiteral_token2,
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
  [aux_sym_namedTupleLiteral_repeat2] = aux_sym_namedTupleLiteral_repeat2,
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
  [anon_sym_NamedTuple] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
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
  [aux_sym_namedTupleLiteral_repeat2] = {
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
  field_key_name = 3,
  field_key_type = 4,
  field_lhs = 5,
  field_name = 6,
  field_rhs = 7,
  field_superclass = 8,
  field_target = 9,
  field_value = 10,
  field_value_type = 11,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_generic_param] = "generic_param",
  [field_key] = "key",
  [field_key_name] = "key_name",
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
  [13] = {.index = 20, .length = 2},
  [14] = {.index = 22, .length = 1},
  [15] = {.index = 23, .length = 2},
  [16] = {.index = 25, .length = 2},
  [17] = {.index = 27, .length = 1},
  [18] = {.index = 28, .length = 4},
  [19] = {.index = 32, .length = 4},
  [20] = {.index = 36, .length = 2},
  [21] = {.index = 38, .length = 2},
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
    {field_key_name, 2},
    {field_value_type, 4},
  [22] =
    {field_generic_param, 1},
  [23] =
    {field_generic_param, 2},
    {field_generic_param, 3, .inherited = true},
  [25] =
    {field_generic_param, 0, .inherited = true},
    {field_generic_param, 1, .inherited = true},
  [27] =
    {field_generic_param, 3},
  [28] =
    {field_key_name, 2},
    {field_key_name, 5, .inherited = true},
    {field_value_type, 4},
    {field_value_type, 5, .inherited = true},
  [32] =
    {field_key_name, 0, .inherited = true},
    {field_key_name, 1, .inherited = true},
    {field_value_type, 0, .inherited = true},
    {field_value_type, 1, .inherited = true},
  [36] =
    {field_generic_param, 3},
    {field_generic_param, 4, .inherited = true},
  [38] =
    {field_key_name, 1},
    {field_value_type, 3},
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
  [15] = {
    [0] = anon_alias_sym_type,
  },
  [17] = {
    [1] = anon_alias_sym_type,
  },
  [20] = {
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
      if (eof) ADVANCE(140);
      if (lookahead == '!') ADVANCE(332);
      if (lookahead == '"') ADVANCE(222);
      if (lookahead == '#') ADVANCE(137);
      if (lookahead == '%') ADVANCE(315);
      if (lookahead == '&') ADVANCE(316);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == '(') ADVANCE(268);
      if (lookahead == ')') ADVANCE(269);
      if (lookahead == '*') ADVANCE(313);
      if (lookahead == '+') ADVANCE(310);
      if (lookahead == ',') ADVANCE(250);
      if (lookahead == '-') ADVANCE(312);
      if (lookahead == '/') ADVANCE(259);
      if (lookahead == '0') ADVANCE(43);
      if (lookahead == ':') ADVANCE(221);
      if (lookahead == ';') ADVANCE(141);
      if (lookahead == '<') ADVANCE(305);
      if (lookahead == '=') ADVANCE(300);
      if (lookahead == '>') ADVANCE(325);
      if (lookahead == '@') ADVANCE(286);
      if (lookahead == 'N') ADVANCE(172);
      if (lookahead == 'T') ADVANCE(196);
      if (lookahead == '[') ADVANCE(257);
      if (lookahead == ']') ADVANCE(258);
      if (lookahead == '^') ADVANCE(318);
      if (lookahead == '_') ADVANCE(162);
      if (lookahead == '`') ADVANCE(270);
      if (lookahead == 'c') ADVANCE(185);
      if (lookahead == 'e') ADVANCE(189);
      if (lookahead == 'f') ADVANCE(174);
      if (lookahead == 'n') ADVANCE(182);
      if (lookahead == 't') ADVANCE(192);
      if (lookahead == '{') ADVANCE(252);
      if (lookahead == '|') ADVANCE(317);
      if (lookahead == '}') ADVANCE(254);
      if (lookahead == '~') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(138)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(219);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(199);
      if (lookahead != 0 &&
          lookahead > 159) ADVANCE(199);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(142);
      if (lookahead == '#') ADVANCE(137);
      if (lookahead == '(') ADVANCE(268);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == ';') ADVANCE(141);
      if (lookahead == '=') ADVANCE(299);
      if (lookahead == '[') ADVANCE(256);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (lookahead != 0 &&
          lookahead > '@' &&
          (lookahead < '\\' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(199);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(142);
      if (lookahead == '#') ADVANCE(137);
      if (lookahead == '(') ADVANCE(268);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == ';') ADVANCE(141);
      if (lookahead == '=') ADVANCE(299);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (lookahead != 0 &&
          lookahead > '@' &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(199);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(143);
      if (lookahead == '"') ADVANCE(222);
      if (lookahead == '#') ADVANCE(233);
      if (lookahead == ';') ADVANCE(141);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(224);
      if (lookahead != 0) ADVANCE(223);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(332);
      if (lookahead == '"') ADVANCE(222);
      if (lookahead == '#') ADVANCE(137);
      if (lookahead == '%') ADVANCE(314);
      if (lookahead == '&') ADVANCE(316);
      if (lookahead == '(') ADVANCE(268);
      if (lookahead == '*') ADVANCE(313);
      if (lookahead == '+') ADVANCE(309);
      if (lookahead == '-') ADVANCE(311);
      if (lookahead == '/') ADVANCE(259);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '<') ADVANCE(305);
      if (lookahead == '=') ADVANCE(73);
      if (lookahead == '>') ADVANCE(325);
      if (lookahead == '[') ADVANCE(91);
      if (lookahead == ']') ADVANCE(258);
      if (lookahead == '^') ADVANCE(318);
      if (lookahead == '|') ADVANCE(317);
      if (lookahead == '~') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (lookahead != 0 &&
          lookahead > '@' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(199);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(332);
      if (lookahead == '"') ADVANCE(222);
      if (lookahead == '#') ADVANCE(137);
      if (lookahead == '%') ADVANCE(314);
      if (lookahead == '&') ADVANCE(316);
      if (lookahead == '(') ADVANCE(268);
      if (lookahead == '*') ADVANCE(313);
      if (lookahead == '+') ADVANCE(309);
      if (lookahead == '-') ADVANCE(311);
      if (lookahead == '/') ADVANCE(259);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '<') ADVANCE(305);
      if (lookahead == '=') ADVANCE(73);
      if (lookahead == '>') ADVANCE(325);
      if (lookahead == '[') ADVANCE(91);
      if (lookahead == '^') ADVANCE(318);
      if (lookahead == '|') ADVANCE(317);
      if (lookahead == '~') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (lookahead != 0 &&
          lookahead > '@' &&
          lookahead != '\\' &&
          lookahead != ']' &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(199);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(222);
      if (lookahead == '#') ADVANCE(137);
      if (lookahead == '%') ADVANCE(126);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == '(') ADVANCE(268);
      if (lookahead == ')') ADVANCE(269);
      if (lookahead == ',') ADVANCE(250);
      if (lookahead == '/') ADVANCE(259);
      if (lookahead == '0') ADVANCE(43);
      if (lookahead == ':') ADVANCE(221);
      if (lookahead == '<') ADVANCE(304);
      if (lookahead == '=') ADVANCE(74);
      if (lookahead == '@') ADVANCE(286);
      if (lookahead == 'N') ADVANCE(297);
      if (lookahead == 'T') ADVANCE(298);
      if (lookahead == '[') ADVANCE(248);
      if (lookahead == ']') ADVANCE(251);
      if (lookahead == '_') ADVANCE(280);
      if (lookahead == '`') ADVANCE(270);
      if (lookahead == 'c') ADVANCE(283);
      if (lookahead == 'e') ADVANCE(284);
      if (lookahead == 'f') ADVANCE(281);
      if (lookahead == 'n') ADVANCE(282);
      if (lookahead == 't') ADVANCE(285);
      if (lookahead == '{') ADVANCE(252);
      if (lookahead == '}') ADVANCE(254);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(219);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(296);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(222);
      if (lookahead == '#') ADVANCE(137);
      if (lookahead == '%') ADVANCE(126);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == '(') ADVANCE(268);
      if (lookahead == '/') ADVANCE(259);
      if (lookahead == '0') ADVANCE(43);
      if (lookahead == ':') ADVANCE(221);
      if (lookahead == '<') ADVANCE(304);
      if (lookahead == '@') ADVANCE(286);
      if (lookahead == 'N') ADVANCE(172);
      if (lookahead == 'T') ADVANCE(196);
      if (lookahead == '[') ADVANCE(248);
      if (lookahead == '_') ADVANCE(162);
      if (lookahead == '`') ADVANCE(270);
      if (lookahead == 'c') ADVANCE(185);
      if (lookahead == 'e') ADVANCE(189);
      if (lookahead == 'f') ADVANCE(174);
      if (lookahead == 'n') ADVANCE(182);
      if (lookahead == 't') ADVANCE(192);
      if (lookahead == '{') ADVANCE(252);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(219);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(199);
      if (lookahead != 0 &&
          lookahead > 159) ADVANCE(199);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(222);
      if (lookahead == '#') ADVANCE(137);
      if (lookahead == '%') ADVANCE(126);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == '(') ADVANCE(268);
      if (lookahead == '/') ADVANCE(259);
      if (lookahead == '0') ADVANCE(43);
      if (lookahead == ':') ADVANCE(221);
      if (lookahead == '<') ADVANCE(304);
      if (lookahead == '@') ADVANCE(286);
      if (lookahead == 'N') ADVANCE(297);
      if (lookahead == 'T') ADVANCE(298);
      if (lookahead == '[') ADVANCE(248);
      if (lookahead == ']') ADVANCE(258);
      if (lookahead == '_') ADVANCE(280);
      if (lookahead == '`') ADVANCE(270);
      if (lookahead == 'c') ADVANCE(283);
      if (lookahead == 'e') ADVANCE(284);
      if (lookahead == 'f') ADVANCE(281);
      if (lookahead == 'n') ADVANCE(282);
      if (lookahead == 't') ADVANCE(285);
      if (lookahead == '{') ADVANCE(252);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(219);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(296);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(222);
      if (lookahead == '#') ADVANCE(137);
      if (lookahead == '%') ADVANCE(126);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == '(') ADVANCE(268);
      if (lookahead == '/') ADVANCE(259);
      if (lookahead == '0') ADVANCE(43);
      if (lookahead == ':') ADVANCE(221);
      if (lookahead == '<') ADVANCE(304);
      if (lookahead == '@') ADVANCE(286);
      if (lookahead == 'N') ADVANCE(297);
      if (lookahead == 'T') ADVANCE(298);
      if (lookahead == '[') ADVANCE(248);
      if (lookahead == '_') ADVANCE(280);
      if (lookahead == '`') ADVANCE(270);
      if (lookahead == 'c') ADVANCE(283);
      if (lookahead == 'e') ADVANCE(284);
      if (lookahead == 'f') ADVANCE(281);
      if (lookahead == 'n') ADVANCE(282);
      if (lookahead == 't') ADVANCE(285);
      if (lookahead == '{') ADVANCE(252);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(219);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(296);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(222);
      if (lookahead == '#') ADVANCE(137);
      if (lookahead == '%') ADVANCE(126);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == ')') ADVANCE(269);
      if (lookahead == ',') ADVANCE(250);
      if (lookahead == '/') ADVANCE(259);
      if (lookahead == '0') ADVANCE(43);
      if (lookahead == ':') ADVANCE(220);
      if (lookahead == '<') ADVANCE(304);
      if (lookahead == '=') ADVANCE(74);
      if (lookahead == '@') ADVANCE(286);
      if (lookahead == 'N') ADVANCE(297);
      if (lookahead == 'T') ADVANCE(298);
      if (lookahead == '[') ADVANCE(248);
      if (lookahead == ']') ADVANCE(251);
      if (lookahead == '_') ADVANCE(280);
      if (lookahead == '`') ADVANCE(270);
      if (lookahead == 'c') ADVANCE(283);
      if (lookahead == 'e') ADVANCE(284);
      if (lookahead == 'f') ADVANCE(281);
      if (lookahead == 'n') ADVANCE(282);
      if (lookahead == 't') ADVANCE(285);
      if (lookahead == '{') ADVANCE(252);
      if (lookahead == '}') ADVANCE(254);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(219);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(296);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(222);
      if (lookahead == '#') ADVANCE(137);
      if (lookahead == '%') ADVANCE(126);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == '/') ADVANCE(259);
      if (lookahead == '0') ADVANCE(43);
      if (lookahead == ':') ADVANCE(220);
      if (lookahead == '=') ADVANCE(299);
      if (lookahead == '@') ADVANCE(286);
      if (lookahead == 'N') ADVANCE(172);
      if (lookahead == 'T') ADVANCE(196);
      if (lookahead == '[') ADVANCE(248);
      if (lookahead == ']') ADVANCE(258);
      if (lookahead == '_') ADVANCE(162);
      if (lookahead == '`') ADVANCE(270);
      if (lookahead == 'c') ADVANCE(185);
      if (lookahead == 'f') ADVANCE(174);
      if (lookahead == 'n') ADVANCE(182);
      if (lookahead == 't') ADVANCE(192);
      if (lookahead == '{') ADVANCE(252);
      if (lookahead == '}') ADVANCE(254);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(219);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(199);
      if (lookahead != 0 &&
          lookahead > 159) ADVANCE(199);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(222);
      if (lookahead == '#') ADVANCE(137);
      if (lookahead == '%') ADVANCE(126);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == '/') ADVANCE(259);
      if (lookahead == '0') ADVANCE(43);
      if (lookahead == ':') ADVANCE(220);
      if (lookahead == '=') ADVANCE(299);
      if (lookahead == '@') ADVANCE(286);
      if (lookahead == 'N') ADVANCE(172);
      if (lookahead == 'T') ADVANCE(196);
      if (lookahead == '[') ADVANCE(248);
      if (lookahead == '_') ADVANCE(162);
      if (lookahead == '`') ADVANCE(270);
      if (lookahead == 'c') ADVANCE(185);
      if (lookahead == 'f') ADVANCE(174);
      if (lookahead == 'n') ADVANCE(182);
      if (lookahead == 't') ADVANCE(192);
      if (lookahead == '{') ADVANCE(252);
      if (lookahead == '}') ADVANCE(254);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(219);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(199);
      if (lookahead != 0 &&
          lookahead > 159) ADVANCE(199);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(222);
      if (lookahead == '#') ADVANCE(233);
      if (lookahead == ',') ADVANCE(250);
      if (lookahead == ':') ADVANCE(220);
      if (lookahead == '=') ADVANCE(232);
      if (lookahead == '}') ADVANCE(254);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(225);
      if (lookahead != 0) ADVANCE(223);
      END_STATE();
    case 14:
      if (lookahead == '"') ADVANCE(222);
      if (lookahead == '#') ADVANCE(233);
      if (lookahead == ',') ADVANCE(250);
      if (lookahead == '=') ADVANCE(232);
      if (lookahead == '}') ADVANCE(254);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(226);
      if (lookahead != 0) ADVANCE(223);
      END_STATE();
    case 15:
      if (lookahead == '"') ADVANCE(222);
      if (lookahead == '#') ADVANCE(233);
      if (lookahead == ',') ADVANCE(250);
      if (lookahead == ']') ADVANCE(251);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(227);
      if (lookahead != 0) ADVANCE(223);
      END_STATE();
    case 16:
      if (lookahead == '"') ADVANCE(222);
      if (lookahead == '#') ADVANCE(233);
      if (lookahead == ',') ADVANCE(250);
      if (lookahead == '}') ADVANCE(254);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(228);
      if (lookahead != 0) ADVANCE(223);
      END_STATE();
    case 17:
      if (lookahead == '"') ADVANCE(222);
      if (lookahead == '#') ADVANCE(233);
      if (lookahead == ':') ADVANCE(220);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(229);
      if (lookahead != 0) ADVANCE(223);
      END_STATE();
    case 18:
      if (lookahead == '"') ADVANCE(222);
      if (lookahead == '#') ADVANCE(233);
      if (lookahead == '=') ADVANCE(232);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(230);
      if (lookahead != 0) ADVANCE(223);
      END_STATE();
    case 19:
      if (lookahead == '"') ADVANCE(222);
      if (lookahead == '#') ADVANCE(233);
      if (lookahead == ']') ADVANCE(258);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(231);
      if (lookahead != 0) ADVANCE(223);
      END_STATE();
    case 20:
      if (lookahead == '"') ADVANCE(222);
      if (lookahead == '#') ADVANCE(233);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(231);
      if (lookahead != 0) ADVANCE(223);
      END_STATE();
    case 21:
      if (lookahead == '#') ADVANCE(137);
      if (lookahead == '(') ADVANCE(268);
      if (lookahead == ')') ADVANCE(269);
      if (lookahead == ',') ADVANCE(250);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '=') ADVANCE(301);
      if (lookahead == '[') ADVANCE(256);
      if (lookahead == ']') ADVANCE(251);
      if (lookahead == '}') ADVANCE(254);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (lookahead != 0 &&
          lookahead > '@' &&
          (lookahead < '\\' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(199);
      END_STATE();
    case 22:
      if (lookahead == '#') ADVANCE(137);
      if (lookahead == '(') ADVANCE(268);
      if (lookahead == ')') ADVANCE(269);
      if (lookahead == ',') ADVANCE(250);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '=') ADVANCE(301);
      if (lookahead == ']') ADVANCE(251);
      if (lookahead == '}') ADVANCE(254);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (lookahead != 0 &&
          lookahead > '@' &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(199);
      END_STATE();
    case 23:
      if (lookahead == '#') ADVANCE(137);
      if (lookahead == '=') ADVANCE(299);
      if (lookahead == '[') ADVANCE(256);
      if (lookahead == ']') ADVANCE(258);
      if (lookahead == '_') ADVANCE(92);
      if (lookahead == 'o') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(296);
      END_STATE();
    case 24:
      if (lookahead == '#') ADVANCE(137);
      if (lookahead == '=') ADVANCE(299);
      if (lookahead == '[') ADVANCE(256);
      if (lookahead == ']') ADVANCE(258);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (lookahead != 0 &&
          lookahead > '@' &&
          (lookahead < '\\' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(199);
      END_STATE();
    case 25:
      if (lookahead == '#') ADVANCE(137);
      if (lookahead == '=') ADVANCE(299);
      if (lookahead == '_') ADVANCE(92);
      if (lookahead == 'o') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(296);
      END_STATE();
    case 26:
      if (lookahead == '#') ADVANCE(137);
      if (lookahead == '=') ADVANCE(299);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (lookahead != 0 &&
          lookahead > '@' &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(199);
      END_STATE();
    case 27:
      if (lookahead == '#') ADVANCE(137);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 28:
      if (lookahead == '\'') ADVANCE(234);
      if (lookahead == '\\') ADVANCE(29);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 29:
      if (lookahead == '\'') ADVANCE(247);
      if (lookahead == '\\') ADVANCE(31);
      if (lookahead == 'a') ADVANCE(32);
      if (lookahead == 'b') ADVANCE(33);
      if (lookahead == 'e') ADVANCE(34);
      if (lookahead == 'f') ADVANCE(35);
      if (lookahead == 'n') ADVANCE(36);
      if (lookahead == 'r') ADVANCE(37);
      if (lookahead == 't') ADVANCE(38);
      if (lookahead == 'u') ADVANCE(127);
      if (lookahead == 'v') ADVANCE(39);
      END_STATE();
    case 30:
      if (lookahead == '\'') ADVANCE(246);
      END_STATE();
    case 31:
      if (lookahead == '\'') ADVANCE(236);
      END_STATE();
    case 32:
      if (lookahead == '\'') ADVANCE(237);
      END_STATE();
    case 33:
      if (lookahead == '\'') ADVANCE(238);
      END_STATE();
    case 34:
      if (lookahead == '\'') ADVANCE(239);
      END_STATE();
    case 35:
      if (lookahead == '\'') ADVANCE(240);
      END_STATE();
    case 36:
      if (lookahead == '\'') ADVANCE(241);
      END_STATE();
    case 37:
      if (lookahead == '\'') ADVANCE(242);
      END_STATE();
    case 38:
      if (lookahead == '\'') ADVANCE(243);
      END_STATE();
    case 39:
      if (lookahead == '\'') ADVANCE(244);
      END_STATE();
    case 40:
      if (lookahead == '\'') ADVANCE(245);
      END_STATE();
    case 41:
      if (lookahead == '\'') ADVANCE(245);
      if (lookahead == '}') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(41);
      END_STATE();
    case 42:
      if (lookahead == '(') ADVANCE(274);
      END_STATE();
    case 43:
      if (lookahead == '.') ADVANCE(134);
      if (lookahead == 'b') ADVANCE(130);
      if (lookahead == 'e') ADVANCE(128);
      if (lookahead == 'f') ADVANCE(58);
      if (lookahead == 'o') ADVANCE(131);
      if (lookahead == 'x') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(44);
      END_STATE();
    case 44:
      if (lookahead == '.') ADVANCE(134);
      if (lookahead == 'e') ADVANCE(128);
      if (lookahead == 'f') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(44);
      END_STATE();
    case 45:
      if (lookahead == '.') ADVANCE(117);
      END_STATE();
    case 46:
      if (lookahead == '0') ADVANCE(43);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(219);
      END_STATE();
    case 47:
      if (lookahead == '1') ADVANCE(68);
      if (lookahead == '3') ADVANCE(51);
      if (lookahead == '6') ADVANCE(61);
      if (lookahead == '8') ADVANCE(218);
      END_STATE();
    case 48:
      if (lookahead == '1') ADVANCE(69);
      if (lookahead == '3') ADVANCE(53);
      if (lookahead == '6') ADVANCE(63);
      if (lookahead == '8') ADVANCE(212);
      END_STATE();
    case 49:
      if (lookahead == '1') ADVANCE(70);
      if (lookahead == '3') ADVANCE(54);
      if (lookahead == '6') ADVANCE(64);
      if (lookahead == '8') ADVANCE(214);
      END_STATE();
    case 50:
      if (lookahead == '1') ADVANCE(71);
      if (lookahead == '3') ADVANCE(55);
      if (lookahead == '6') ADVANCE(65);
      if (lookahead == '8') ADVANCE(216);
      END_STATE();
    case 51:
      if (lookahead == '2') ADVANCE(218);
      END_STATE();
    case 52:
      if (lookahead == '2') ADVANCE(211);
      END_STATE();
    case 53:
      if (lookahead == '2') ADVANCE(212);
      END_STATE();
    case 54:
      if (lookahead == '2') ADVANCE(214);
      END_STATE();
    case 55:
      if (lookahead == '2') ADVANCE(216);
      END_STATE();
    case 56:
      if (lookahead == '2') ADVANCE(206);
      END_STATE();
    case 57:
      if (lookahead == '2') ADVANCE(209);
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
      if (lookahead == '4') ADVANCE(218);
      END_STATE();
    case 62:
      if (lookahead == '4') ADVANCE(211);
      END_STATE();
    case 63:
      if (lookahead == '4') ADVANCE(212);
      END_STATE();
    case 64:
      if (lookahead == '4') ADVANCE(214);
      END_STATE();
    case 65:
      if (lookahead == '4') ADVANCE(216);
      END_STATE();
    case 66:
      if (lookahead == '4') ADVANCE(206);
      END_STATE();
    case 67:
      if (lookahead == '4') ADVANCE(209);
      END_STATE();
    case 68:
      if (lookahead == '6') ADVANCE(218);
      END_STATE();
    case 69:
      if (lookahead == '6') ADVANCE(212);
      END_STATE();
    case 70:
      if (lookahead == '6') ADVANCE(214);
      END_STATE();
    case 71:
      if (lookahead == '6') ADVANCE(216);
      END_STATE();
    case 72:
      if (lookahead == ':') ADVANCE(308);
      END_STATE();
    case 73:
      if (lookahead == '=') ADVANCE(322);
      if (lookahead == '~') ADVANCE(335);
      END_STATE();
    case 74:
      if (lookahead == '>') ADVANCE(253);
      END_STATE();
    case 75:
      if (lookahead == 'D') ADVANCE(80);
      if (lookahead == 'E') ADVANCE(86);
      if (lookahead == 'F') ADVANCE(81);
      if (lookahead == 'L') ADVANCE(82);
      END_STATE();
    case 76:
      if (lookahead == 'D') ADVANCE(97);
      END_STATE();
    case 77:
      if (lookahead == 'E') ADVANCE(99);
      END_STATE();
    case 78:
      if (lookahead == 'E') ADVANCE(100);
      END_STATE();
    case 79:
      if (lookahead == 'E') ADVANCE(101);
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
      if (lookahead == 'R') ADVANCE(98);
      END_STATE();
    case 90:
      if (lookahead == 'T') ADVANCE(124);
      END_STATE();
    case 91:
      if (lookahead == ']') ADVANCE(329);
      END_STATE();
    case 92:
      if (lookahead == '_') ADVANCE(75);
      END_STATE();
    case 93:
      if (lookahead == '_') ADVANCE(294);
      END_STATE();
    case 94:
      if (lookahead == '_') ADVANCE(292);
      END_STATE();
    case 95:
      if (lookahead == '_') ADVANCE(288);
      END_STATE();
    case 96:
      if (lookahead == '_') ADVANCE(290);
      END_STATE();
    case 97:
      if (lookahead == '_') ADVANCE(85);
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
      if (lookahead == '_') ADVANCE(96);
      END_STATE();
    case 102:
      if (lookahead == 'a') ADVANCE(121);
      END_STATE();
    case 103:
      if (lookahead == 'd') ADVANCE(90);
      END_STATE();
    case 104:
      if (lookahead == 'd') ADVANCE(306);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(202);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(204);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(266);
      END_STATE();
    case 111:
      if (lookahead == 'f') ADVANCE(255);
      END_STATE();
    case 112:
      if (lookahead == 'l') ADVANCE(200);
      END_STATE();
    case 113:
      if (lookahead == 'l') ADVANCE(122);
      END_STATE();
    case 114:
      if (lookahead == 'l') ADVANCE(108);
      END_STATE();
    case 115:
      if (lookahead == 'l') ADVANCE(110);
      END_STATE();
    case 116:
      if (lookahead == 'm') ADVANCE(106);
      END_STATE();
    case 117:
      if (lookahead == 'n') ADVANCE(105);
      END_STATE();
    case 118:
      if (lookahead == 'p') ADVANCE(114);
      END_STATE();
    case 119:
      if (lookahead == 'p') ADVANCE(115);
      END_STATE();
    case 120:
      if (lookahead == 's') ADVANCE(302);
      END_STATE();
    case 121:
      if (lookahead == 's') ADVANCE(120);
      END_STATE();
    case 122:
      if (lookahead == 's') ADVANCE(109);
      END_STATE();
    case 123:
      if (lookahead == 'u') ADVANCE(107);
      END_STATE();
    case 124:
      if (lookahead == 'u') ADVANCE(119);
      END_STATE();
    case 125:
      if (lookahead == 'w') ADVANCE(265);
      END_STATE();
    case 126:
      if (lookahead == 'x') ADVANCE(42);
      END_STATE();
    case 127:
      if (lookahead == '{') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(41);
      END_STATE();
    case 128:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(210);
      END_STATE();
    case 129:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(208);
      END_STATE();
    case 130:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(213);
      END_STATE();
    case 131:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(215);
      END_STATE();
    case 132:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(210);
      END_STATE();
    case 133:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(208);
      END_STATE();
    case 134:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(207);
      END_STATE();
    case 135:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(217);
      END_STATE();
    case 136:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(41);
      END_STATE();
    case 137:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(278);
      END_STATE();
    case 138:
      if (eof) ADVANCE(140);
      if (lookahead == '!') ADVANCE(332);
      if (lookahead == '"') ADVANCE(222);
      if (lookahead == '#') ADVANCE(137);
      if (lookahead == '%') ADVANCE(315);
      if (lookahead == '&') ADVANCE(316);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == '(') ADVANCE(268);
      if (lookahead == ')') ADVANCE(269);
      if (lookahead == '*') ADVANCE(313);
      if (lookahead == '+') ADVANCE(310);
      if (lookahead == ',') ADVANCE(250);
      if (lookahead == '-') ADVANCE(312);
      if (lookahead == '/') ADVANCE(259);
      if (lookahead == '0') ADVANCE(43);
      if (lookahead == ':') ADVANCE(221);
      if (lookahead == ';') ADVANCE(141);
      if (lookahead == '<') ADVANCE(305);
      if (lookahead == '=') ADVANCE(300);
      if (lookahead == '>') ADVANCE(325);
      if (lookahead == '@') ADVANCE(286);
      if (lookahead == 'N') ADVANCE(172);
      if (lookahead == 'T') ADVANCE(196);
      if (lookahead == '[') ADVANCE(249);
      if (lookahead == ']') ADVANCE(251);
      if (lookahead == '^') ADVANCE(318);
      if (lookahead == '_') ADVANCE(162);
      if (lookahead == '`') ADVANCE(270);
      if (lookahead == 'c') ADVANCE(185);
      if (lookahead == 'e') ADVANCE(189);
      if (lookahead == 'f') ADVANCE(174);
      if (lookahead == 'n') ADVANCE(182);
      if (lookahead == 't') ADVANCE(192);
      if (lookahead == '{') ADVANCE(252);
      if (lookahead == '|') ADVANCE(317);
      if (lookahead == '}') ADVANCE(254);
      if (lookahead == '~') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(138)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(219);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(199);
      if (lookahead != 0 &&
          lookahead > 159) ADVANCE(199);
      END_STATE();
    case 139:
      if (eof) ADVANCE(140);
      if (lookahead == '"') ADVANCE(222);
      if (lookahead == '#') ADVANCE(137);
      if (lookahead == '%') ADVANCE(126);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == ',') ADVANCE(250);
      if (lookahead == '/') ADVANCE(259);
      if (lookahead == '0') ADVANCE(43);
      if (lookahead == ':') ADVANCE(220);
      if (lookahead == '=') ADVANCE(301);
      if (lookahead == '@') ADVANCE(286);
      if (lookahead == 'N') ADVANCE(297);
      if (lookahead == 'T') ADVANCE(298);
      if (lookahead == '[') ADVANCE(248);
      if (lookahead == ']') ADVANCE(251);
      if (lookahead == '_') ADVANCE(280);
      if (lookahead == '`') ADVANCE(270);
      if (lookahead == 'c') ADVANCE(283);
      if (lookahead == 'f') ADVANCE(281);
      if (lookahead == 'n') ADVANCE(282);
      if (lookahead == 't') ADVANCE(285);
      if (lookahead == '{') ADVANCE(252);
      if (lookahead == '}') ADVANCE(254);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(139)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(219);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(296);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym__statement_token1);
      if (lookahead == '\n') ADVANCE(142);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym__statement_token1);
      if (lookahead == '\n') ADVANCE(143);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(224);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(117);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(199);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'D') ADVANCE(151);
      if (lookahead == 'E') ADVANCE(157);
      if (lookahead == 'F') ADVANCE(152);
      if (lookahead == 'L') ADVANCE(153);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(199);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'D') ADVANCE(167);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(199);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'E') ADVANCE(169);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(199);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'E') ADVANCE(170);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(199);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'E') ADVANCE(171);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(199);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'I') ADVANCE(160);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(199);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'I') ADVANCE(155);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(199);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'I') ADVANCE(158);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(199);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'I') ADVANCE(159);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(199);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'L') ADVANCE(148);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(199);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'L') ADVANCE(154);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(199);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'N') ADVANCE(147);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(199);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'N') ADVANCE(149);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(199);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'N') ADVANCE(150);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(199);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'R') ADVANCE(168);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(199);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'T') ADVANCE(198);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(199);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '_') ADVANCE(146);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(199);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '_') ADVANCE(295);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(199);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '_') ADVANCE(293);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(199);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '_') ADVANCE(289);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(199);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '_') ADVANCE(291);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(199);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '_') ADVANCE(156);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(199);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '_') ADVANCE(163);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(199);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '_') ADVANCE(164);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(199);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '_') ADVANCE(165);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(199);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '_') ADVANCE(166);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(199);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(188);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(199);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(194);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(199);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(184);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(199);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'd') ADVANCE(307);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(199);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'd') ADVANCE(161);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(199);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(203);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(199);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(145);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(199);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(205);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(199);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(267);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(199);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(176);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(199);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(183);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(199);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(201);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(199);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(195);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(199);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(173);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(199);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(178);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(199);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(180);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(199);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'm') ADVANCE(181);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(199);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(175);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(199);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'p') ADVANCE(186);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(199);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'p') ADVANCE(187);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(199);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(197);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(199);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 's') ADVANCE(303);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(199);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 's') ADVANCE(193);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(199);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 's') ADVANCE(179);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(199);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'u') ADVANCE(190);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(199);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'u') ADVANCE(177);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(199);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'u') ADVANCE(191);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(199);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(199);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_nil);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_nil);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(199);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(199);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(199);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_float_token1);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (lookahead == 'e') ADVANCE(129);
      if (lookahead == 'f') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(207);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (lookahead == 'f') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(208);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_float_token2);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (lookahead == 'f') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(210);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_float_token3);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == 'i') ADVANCE(48);
      if (lookahead == 'u') ADVANCE(48);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(213);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_integer_token2);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_integer_token2);
      if (lookahead == 'i') ADVANCE(49);
      if (lookahead == 'u') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(215);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_integer_token3);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_integer_token3);
      if (lookahead == 'i') ADVANCE(50);
      if (lookahead == 'u') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(217);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_integer_token4);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_integer_token4);
      if (lookahead == '.') ADVANCE(134);
      if (lookahead == 'e') ADVANCE(128);
      if (lookahead == 'f') ADVANCE(58);
      if (lookahead == 'i') ADVANCE(47);
      if (lookahead == 'u') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(219);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(308);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\n') ADVANCE(143);
      if (lookahead == '#') ADVANCE(233);
      if (lookahead == ';') ADVANCE(141);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(224);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(223);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(233);
      if (lookahead == ',') ADVANCE(250);
      if (lookahead == ':') ADVANCE(220);
      if (lookahead == '=') ADVANCE(232);
      if (lookahead == '}') ADVANCE(254);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(225);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(223);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(233);
      if (lookahead == ',') ADVANCE(250);
      if (lookahead == '=') ADVANCE(232);
      if (lookahead == '}') ADVANCE(254);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(226);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(223);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(233);
      if (lookahead == ',') ADVANCE(250);
      if (lookahead == ']') ADVANCE(251);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(227);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(223);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(233);
      if (lookahead == ',') ADVANCE(250);
      if (lookahead == '}') ADVANCE(254);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(228);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(223);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(233);
      if (lookahead == ':') ADVANCE(220);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(223);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(233);
      if (lookahead == '=') ADVANCE(232);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(230);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(223);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(233);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(223);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '>') ADVANCE(253);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(278);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_SQUOTE_BSLASHa_SQUOTE);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_SQUOTE_BSLASHb_SQUOTE);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_SQUOTE_BSLASHe_SQUOTE);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_SQUOTE_BSLASHf_SQUOTE);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_SQUOTE_BSLASHn_SQUOTE);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_SQUOTE_BSLASHr_SQUOTE);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_SQUOTE_BSLASHt_SQUOTE);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_SQUOTE_BSLASHv_SQUOTE);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_char_token1);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_char_token2);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_char_token2);
      if (lookahead == '\'') ADVANCE(235);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == ']') ADVANCE(329);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_LBRACK2);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_LBRACK2);
      if (lookahead == ']') ADVANCE(329);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_RBRACK2);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_regex_token1);
      if (lookahead == '\n') ADVANCE(263);
      if (lookahead == '/') ADVANCE(278);
      if (lookahead == '\\') ADVANCE(261);
      if (lookahead != 0) ADVANCE(260);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_regex_token1);
      if (lookahead == '\n') ADVANCE(263);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(260);
      if (lookahead == '\\') ADVANCE(261);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_regex_token1);
      if (lookahead == '#') ADVANCE(260);
      if (lookahead == '\\') ADVANCE(264);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(262);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(263);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_regex_token1);
      if (lookahead == '\\') ADVANCE(264);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(263);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_regex_token1);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(263);
      if (lookahead == '\\') ADVANCE(264);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_Tuple_DOTnew);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_NamedTuple);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_NamedTuple);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(199);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_commandLiteral_token1);
      if (lookahead == '\n') ADVANCE(273);
      if (lookahead == '`') ADVANCE(278);
      if (lookahead != 0) ADVANCE(271);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_commandLiteral_token1);
      if (lookahead == '#') ADVANCE(271);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(273);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_commandLiteral_token1);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(273);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_PERCENTx_LPAREN);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_commandLiteral_token2);
      if (lookahead == '\n') ADVANCE(277);
      if (lookahead == ')') ADVANCE(278);
      if (lookahead != 0) ADVANCE(275);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_commandLiteral_token2);
      if (lookahead == '#') ADVANCE(275);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(277);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_commandLiteral_token2);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(277);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(278);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_local_variable_token1);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_local_variable_token1);
      if (lookahead == '_') ADVANCE(75);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_local_variable_token1);
      if (lookahead == 'a') ADVANCE(113);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_local_variable_token1);
      if (lookahead == 'i') ADVANCE(112);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_local_variable_token1);
      if (lookahead == 'l') ADVANCE(102);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_local_variable_token1);
      if (lookahead == 'n') ADVANCE(104);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_local_variable_token1);
      if (lookahead == 'r') ADVANCE(123);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '@') ADVANCE(287);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym___LINE__);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym___LINE__);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(199);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym___END_LINE__);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym___END_LINE__);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(199);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym___FILE__);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym___FILE__);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(199);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym___DIR__);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym___DIR__);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(199);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == 'a') ADVANCE(116);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == 'u') ADVANCE(118);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(322);
      if (lookahead == '>') ADVANCE(253);
      if (lookahead == '~') ADVANCE(335);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>') ADVANCE(253);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_class);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(199);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(321);
      if (lookahead == '=') ADVANCE(324);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(199);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '0') ADVANCE(43);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(219);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '0') ADVANCE(43);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(219);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(319);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == 'x') ADVANCE(42);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      if (lookahead == '=') ADVANCE(328);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      if (lookahead == '>') ADVANCE(327);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(326);
      if (lookahead == '>') ADVANCE(320);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_LT_EQ_GT);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_EQ_EQ_EQ);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_LBRACK_RBRACK);
      if (lookahead == '=') ADVANCE(331);
      if (lookahead == '?') ADVANCE(330);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_LBRACK_RBRACK_QMARK);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_LBRACK_RBRACK_EQ);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(323);
      if (lookahead == '~') ADVANCE(334);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_BANG_TILDE);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_EQ_TILDE);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 139},
  [2] = {.lex_state = 10},
  [3] = {.lex_state = 10},
  [4] = {.lex_state = 10},
  [5] = {.lex_state = 139},
  [6] = {.lex_state = 10},
  [7] = {.lex_state = 10},
  [8] = {.lex_state = 10},
  [9] = {.lex_state = 10},
  [10] = {.lex_state = 10},
  [11] = {.lex_state = 11},
  [12] = {.lex_state = 10},
  [13] = {.lex_state = 10},
  [14] = {.lex_state = 10},
  [15] = {.lex_state = 10},
  [16] = {.lex_state = 10},
  [17] = {.lex_state = 139},
  [18] = {.lex_state = 11},
  [19] = {.lex_state = 11},
  [20] = {.lex_state = 139},
  [21] = {.lex_state = 139},
  [22] = {.lex_state = 139},
  [23] = {.lex_state = 139},
  [24] = {.lex_state = 139},
  [25] = {.lex_state = 139},
  [26] = {.lex_state = 139},
  [27] = {.lex_state = 139},
  [28] = {.lex_state = 139},
  [29] = {.lex_state = 139},
  [30] = {.lex_state = 139},
  [31] = {.lex_state = 139},
  [32] = {.lex_state = 139},
  [33] = {.lex_state = 139},
  [34] = {.lex_state = 139},
  [35] = {.lex_state = 139},
  [36] = {.lex_state = 139},
  [37] = {.lex_state = 139},
  [38] = {.lex_state = 139},
  [39] = {.lex_state = 139},
  [40] = {.lex_state = 139},
  [41] = {.lex_state = 139},
  [42] = {.lex_state = 139},
  [43] = {.lex_state = 6},
  [44] = {.lex_state = 6},
  [45] = {.lex_state = 10},
  [46] = {.lex_state = 10},
  [47] = {.lex_state = 10},
  [48] = {.lex_state = 10},
  [49] = {.lex_state = 8},
  [50] = {.lex_state = 7},
  [51] = {.lex_state = 8},
  [52] = {.lex_state = 10},
  [53] = {.lex_state = 139},
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
  [84] = {.lex_state = 23},
  [85] = {.lex_state = 23},
  [86] = {.lex_state = 23},
  [87] = {.lex_state = 23},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 23},
  [90] = {.lex_state = 23},
  [91] = {.lex_state = 23},
  [92] = {.lex_state = 13},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 21},
  [95] = {.lex_state = 1},
  [96] = {.lex_state = 13},
  [97] = {.lex_state = 14},
  [98] = {.lex_state = 14},
  [99] = {.lex_state = 14},
  [100] = {.lex_state = 14},
  [101] = {.lex_state = 139},
  [102] = {.lex_state = 23},
  [103] = {.lex_state = 139},
  [104] = {.lex_state = 139},
  [105] = {.lex_state = 139},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 139},
  [108] = {.lex_state = 139},
  [109] = {.lex_state = 139},
  [110] = {.lex_state = 139},
  [111] = {.lex_state = 139},
  [112] = {.lex_state = 139},
  [113] = {.lex_state = 139},
  [114] = {.lex_state = 139},
  [115] = {.lex_state = 139},
  [116] = {.lex_state = 3},
  [117] = {.lex_state = 16},
  [118] = {.lex_state = 3},
  [119] = {.lex_state = 4},
  [120] = {.lex_state = 139},
  [121] = {.lex_state = 3},
  [122] = {.lex_state = 139},
  [123] = {.lex_state = 16},
  [124] = {.lex_state = 4},
  [125] = {.lex_state = 15},
  [126] = {.lex_state = 139},
  [127] = {.lex_state = 1},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 139},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 139},
  [132] = {.lex_state = 139},
  [133] = {.lex_state = 139},
  [134] = {.lex_state = 139},
  [135] = {.lex_state = 139},
  [136] = {.lex_state = 3},
  [137] = {.lex_state = 1},
  [138] = {.lex_state = 16},
  [139] = {.lex_state = 139},
  [140] = {.lex_state = 15},
  [141] = {.lex_state = 16},
  [142] = {.lex_state = 1},
  [143] = {.lex_state = 139},
  [144] = {.lex_state = 24},
  [145] = {.lex_state = 139},
  [146] = {.lex_state = 139},
  [147] = {.lex_state = 15},
  [148] = {.lex_state = 15},
  [149] = {.lex_state = 139},
  [150] = {.lex_state = 139},
  [151] = {.lex_state = 139},
  [152] = {.lex_state = 1},
  [153] = {.lex_state = 20},
  [154] = {.lex_state = 139},
  [155] = {.lex_state = 139},
  [156] = {.lex_state = 20},
  [157] = {.lex_state = 21},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 1},
  [160] = {.lex_state = 20},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 20},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 139},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 21},
  [168] = {.lex_state = 21},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 20},
  [171] = {.lex_state = 20},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 20},
  [174] = {.lex_state = 20},
  [175] = {.lex_state = 20},
  [176] = {.lex_state = 20},
  [177] = {.lex_state = 20},
  [178] = {.lex_state = 20},
  [179] = {.lex_state = 20},
  [180] = {.lex_state = 20},
  [181] = {.lex_state = 20},
  [182] = {.lex_state = 20},
  [183] = {.lex_state = 20},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 20},
  [186] = {.lex_state = 23},
  [187] = {.lex_state = 20},
  [188] = {.lex_state = 20},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 8},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 20},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 8},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 139},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 139},
  [209] = {.lex_state = 20},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 139},
  [212] = {.lex_state = 20},
  [213] = {.lex_state = 20},
  [214] = {.lex_state = 20},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 23},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 19},
  [223] = {.lex_state = 23},
  [224] = {.lex_state = 19},
  [225] = {.lex_state = 19},
  [226] = {.lex_state = 19},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 18},
  [234] = {.lex_state = 139},
  [235] = {.lex_state = 18},
  [236] = {.lex_state = 18},
  [237] = {.lex_state = 18},
  [238] = {.lex_state = 17},
  [239] = {.lex_state = 17},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 20},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 139},
  [244] = {.lex_state = 20},
  [245] = {.lex_state = 20},
  [246] = {.lex_state = 139},
  [247] = {.lex_state = 139},
  [248] = {.lex_state = 20},
  [249] = {.lex_state = 1},
  [250] = {.lex_state = 4},
  [251] = {.lex_state = 4},
  [252] = {.lex_state = 1},
  [253] = {.lex_state = 139},
  [254] = {.lex_state = 21},
  [255] = {.lex_state = 1},
  [256] = {.lex_state = 1},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 1},
  [259] = {.lex_state = 1},
  [260] = {.lex_state = 1},
  [261] = {.lex_state = 1},
  [262] = {.lex_state = 21},
  [263] = {.lex_state = 1},
  [264] = {.lex_state = 1},
  [265] = {.lex_state = 21},
  [266] = {.lex_state = 1},
  [267] = {.lex_state = 21},
  [268] = {.lex_state = 21},
  [269] = {.lex_state = 1},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 1},
  [272] = {.lex_state = 1},
  [273] = {.lex_state = 21},
  [274] = {.lex_state = 1},
  [275] = {.lex_state = 21},
  [276] = {.lex_state = 1},
  [277] = {.lex_state = 21},
  [278] = {.lex_state = 1},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 1},
  [281] = {.lex_state = 1},
  [282] = {.lex_state = 4},
  [283] = {.lex_state = 21},
  [284] = {.lex_state = 1},
  [285] = {.lex_state = 4},
  [286] = {.lex_state = 1},
  [287] = {.lex_state = 1},
  [288] = {.lex_state = 1},
  [289] = {.lex_state = 1},
  [290] = {.lex_state = 11},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 1},
  [293] = {.lex_state = 1},
  [294] = {.lex_state = 1},
  [295] = {.lex_state = 11},
  [296] = {.lex_state = 1},
  [297] = {.lex_state = 1},
  [298] = {.lex_state = 1},
  [299] = {.lex_state = 11},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 11},
  [302] = {.lex_state = 11},
  [303] = {.lex_state = 11},
  [304] = {.lex_state = 11},
  [305] = {.lex_state = 11},
  [306] = {.lex_state = 11},
  [307] = {.lex_state = 11},
  [308] = {.lex_state = 11},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 11},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 11},
  [314] = {.lex_state = 11},
  [315] = {.lex_state = 11},
  [316] = {.lex_state = 11},
  [317] = {.lex_state = 139},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 262},
  [320] = {.lex_state = 272},
  [321] = {.lex_state = 276},
  [322] = {.lex_state = 11},
  [323] = {.lex_state = 11},
  [324] = {.lex_state = 11},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 11},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 139},
  [330] = {.lex_state = 11},
  [331] = {.lex_state = 23},
  [332] = {.lex_state = 139},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 11},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 139},
  [337] = {.lex_state = 139},
  [338] = {.lex_state = 262},
  [339] = {.lex_state = 272},
  [340] = {.lex_state = 276},
  [341] = {.lex_state = 11},
  [342] = {.lex_state = 11},
  [343] = {.lex_state = 11},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 27},
  [346] = {.lex_state = 27},
  [347] = {.lex_state = 11},
  [348] = {.lex_state = 276},
  [349] = {.lex_state = 272},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 11},
  [352] = {.lex_state = 11},
  [353] = {.lex_state = 262},
  [354] = {.lex_state = 11},
  [355] = {.lex_state = 11},
  [356] = {.lex_state = 23},
  [357] = {.lex_state = 139},
  [358] = {.lex_state = 11},
  [359] = {.lex_state = 139},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 23},
  [362] = {.lex_state = 139},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 139},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 11},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 11},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 0},
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
    [anon_sym_NamedTuple] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(1),
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
    [sym_program] = STATE(344),
    [sym__statement] = STATE(5),
    [sym__expression] = STATE(272),
    [sym_bool] = STATE(272),
    [sym_float] = STATE(272),
    [sym_integer] = STATE(272),
    [sym_symbol] = STATE(272),
    [sym_char] = STATE(272),
    [sym_string] = STATE(272),
    [sym_array] = STATE(272),
    [sym_hash] = STATE(272),
    [sym_index_expression] = STATE(159),
    [sym_regex] = STATE(272),
    [sym_tuple] = STATE(272),
    [sym_namedTupleLiteral] = STATE(272),
    [sym_commandLiteral] = STATE(272),
    [sym_local_variable] = STATE(275),
    [sym_instance_variable] = STATE(275),
    [sym_class_variable] = STATE(275),
    [sym_constant] = STATE(137),
    [sym__variable] = STATE(275),
    [sym_assignment] = STATE(272),
    [sym_class_definition] = STATE(272),
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
    [anon_sym_NamedTuple] = ACTIONS(35),
    [anon_sym_BQUOTE] = ACTIONS(37),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(39),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(41),
    [anon_sym_AT] = ACTIONS(43),
    [anon_sym_AT_AT] = ACTIONS(45),
    [anon_sym___LINE__] = ACTIONS(47),
    [anon_sym___END_LINE__] = ACTIONS(47),
    [anon_sym___FILE__] = ACTIONS(47),
    [anon_sym___DIR__] = ACTIONS(47),
    [aux_sym_constant_token1] = ACTIONS(49),
    [anon_sym_class] = ACTIONS(51),
  },
  [2] = {
    [sym__statement] = STATE(9),
    [sym__expression] = STATE(255),
    [sym_bool] = STATE(255),
    [sym_float] = STATE(255),
    [sym_integer] = STATE(255),
    [sym_symbol] = STATE(255),
    [sym_char] = STATE(255),
    [sym_string] = STATE(255),
    [sym_array] = STATE(255),
    [sym_hash] = STATE(255),
    [sym_index_expression] = STATE(159),
    [sym_regex] = STATE(255),
    [sym_tuple] = STATE(255),
    [sym_namedTupleLiteral] = STATE(255),
    [sym_commandLiteral] = STATE(255),
    [sym_local_variable] = STATE(275),
    [sym_instance_variable] = STATE(275),
    [sym_class_variable] = STATE(275),
    [sym_constant] = STATE(137),
    [sym__variable] = STATE(275),
    [sym_assignment] = STATE(255),
    [sym_class_definition] = STATE(255),
    [aux_sym_program_repeat1] = STATE(9),
    [sym_nil] = ACTIONS(53),
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
    [anon_sym_NamedTuple] = ACTIONS(35),
    [anon_sym_BQUOTE] = ACTIONS(37),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(39),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(41),
    [anon_sym_AT] = ACTIONS(43),
    [anon_sym_AT_AT] = ACTIONS(45),
    [anon_sym___LINE__] = ACTIONS(47),
    [anon_sym___END_LINE__] = ACTIONS(47),
    [anon_sym___FILE__] = ACTIONS(47),
    [anon_sym___DIR__] = ACTIONS(47),
    [aux_sym_constant_token1] = ACTIONS(49),
    [anon_sym_class] = ACTIONS(51),
    [anon_sym_LT] = ACTIONS(55),
    [anon_sym_end] = ACTIONS(57),
  },
  [3] = {
    [sym__statement] = STATE(14),
    [sym__expression] = STATE(255),
    [sym_bool] = STATE(255),
    [sym_float] = STATE(255),
    [sym_integer] = STATE(255),
    [sym_symbol] = STATE(255),
    [sym_char] = STATE(255),
    [sym_string] = STATE(255),
    [sym_array] = STATE(255),
    [sym_hash] = STATE(255),
    [sym_index_expression] = STATE(159),
    [sym_regex] = STATE(255),
    [sym_tuple] = STATE(255),
    [sym_namedTupleLiteral] = STATE(255),
    [sym_commandLiteral] = STATE(255),
    [sym_local_variable] = STATE(275),
    [sym_instance_variable] = STATE(275),
    [sym_class_variable] = STATE(275),
    [sym_constant] = STATE(137),
    [sym__variable] = STATE(275),
    [sym_assignment] = STATE(255),
    [sym_class_definition] = STATE(255),
    [aux_sym_program_repeat1] = STATE(14),
    [sym_nil] = ACTIONS(53),
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
    [anon_sym_NamedTuple] = ACTIONS(35),
    [anon_sym_BQUOTE] = ACTIONS(37),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(39),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(41),
    [anon_sym_AT] = ACTIONS(43),
    [anon_sym_AT_AT] = ACTIONS(45),
    [anon_sym___LINE__] = ACTIONS(47),
    [anon_sym___END_LINE__] = ACTIONS(47),
    [anon_sym___FILE__] = ACTIONS(47),
    [anon_sym___DIR__] = ACTIONS(47),
    [aux_sym_constant_token1] = ACTIONS(49),
    [anon_sym_class] = ACTIONS(51),
    [anon_sym_LT] = ACTIONS(59),
    [anon_sym_end] = ACTIONS(61),
  },
  [4] = {
    [sym__statement] = STATE(8),
    [sym__expression] = STATE(255),
    [sym_bool] = STATE(255),
    [sym_float] = STATE(255),
    [sym_integer] = STATE(255),
    [sym_symbol] = STATE(255),
    [sym_char] = STATE(255),
    [sym_string] = STATE(255),
    [sym_array] = STATE(255),
    [sym_hash] = STATE(255),
    [sym_index_expression] = STATE(159),
    [sym_regex] = STATE(255),
    [sym_tuple] = STATE(255),
    [sym_namedTupleLiteral] = STATE(255),
    [sym_commandLiteral] = STATE(255),
    [sym_local_variable] = STATE(275),
    [sym_instance_variable] = STATE(275),
    [sym_class_variable] = STATE(275),
    [sym_constant] = STATE(137),
    [sym__variable] = STATE(275),
    [sym_assignment] = STATE(255),
    [sym_class_definition] = STATE(255),
    [aux_sym_program_repeat1] = STATE(8),
    [sym_nil] = ACTIONS(53),
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
    [anon_sym_NamedTuple] = ACTIONS(35),
    [anon_sym_BQUOTE] = ACTIONS(37),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(39),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(41),
    [anon_sym_AT] = ACTIONS(43),
    [anon_sym_AT_AT] = ACTIONS(45),
    [anon_sym___LINE__] = ACTIONS(47),
    [anon_sym___END_LINE__] = ACTIONS(47),
    [anon_sym___FILE__] = ACTIONS(47),
    [anon_sym___DIR__] = ACTIONS(47),
    [aux_sym_constant_token1] = ACTIONS(49),
    [anon_sym_class] = ACTIONS(51),
    [anon_sym_LT] = ACTIONS(63),
    [anon_sym_end] = ACTIONS(65),
  },
  [5] = {
    [sym__statement] = STATE(17),
    [sym__expression] = STATE(272),
    [sym_bool] = STATE(272),
    [sym_float] = STATE(272),
    [sym_integer] = STATE(272),
    [sym_symbol] = STATE(272),
    [sym_char] = STATE(272),
    [sym_string] = STATE(272),
    [sym_array] = STATE(272),
    [sym_hash] = STATE(272),
    [sym_index_expression] = STATE(159),
    [sym_regex] = STATE(272),
    [sym_tuple] = STATE(272),
    [sym_namedTupleLiteral] = STATE(272),
    [sym_commandLiteral] = STATE(272),
    [sym_local_variable] = STATE(275),
    [sym_instance_variable] = STATE(275),
    [sym_class_variable] = STATE(275),
    [sym_constant] = STATE(137),
    [sym__variable] = STATE(275),
    [sym_assignment] = STATE(272),
    [sym_class_definition] = STATE(272),
    [aux_sym_program_repeat1] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(67),
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
    [anon_sym_NamedTuple] = ACTIONS(35),
    [anon_sym_BQUOTE] = ACTIONS(37),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(39),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(41),
    [anon_sym_AT] = ACTIONS(43),
    [anon_sym_AT_AT] = ACTIONS(45),
    [anon_sym___LINE__] = ACTIONS(47),
    [anon_sym___END_LINE__] = ACTIONS(47),
    [anon_sym___FILE__] = ACTIONS(47),
    [anon_sym___DIR__] = ACTIONS(47),
    [aux_sym_constant_token1] = ACTIONS(49),
    [anon_sym_class] = ACTIONS(51),
  },
  [6] = {
    [sym__statement] = STATE(6),
    [sym__expression] = STATE(255),
    [sym_bool] = STATE(255),
    [sym_float] = STATE(255),
    [sym_integer] = STATE(255),
    [sym_symbol] = STATE(255),
    [sym_char] = STATE(255),
    [sym_string] = STATE(255),
    [sym_array] = STATE(255),
    [sym_hash] = STATE(255),
    [sym_index_expression] = STATE(159),
    [sym_regex] = STATE(255),
    [sym_tuple] = STATE(255),
    [sym_namedTupleLiteral] = STATE(255),
    [sym_commandLiteral] = STATE(255),
    [sym_local_variable] = STATE(275),
    [sym_instance_variable] = STATE(275),
    [sym_class_variable] = STATE(275),
    [sym_constant] = STATE(137),
    [sym__variable] = STATE(275),
    [sym_assignment] = STATE(255),
    [sym_class_definition] = STATE(255),
    [aux_sym_program_repeat1] = STATE(6),
    [sym_nil] = ACTIONS(69),
    [anon_sym_true] = ACTIONS(72),
    [anon_sym_false] = ACTIONS(72),
    [aux_sym_float_token1] = ACTIONS(75),
    [aux_sym_float_token2] = ACTIONS(78),
    [aux_sym_float_token3] = ACTIONS(78),
    [aux_sym_integer_token1] = ACTIONS(81),
    [aux_sym_integer_token2] = ACTIONS(81),
    [aux_sym_integer_token3] = ACTIONS(81),
    [aux_sym_integer_token4] = ACTIONS(84),
    [anon_sym_COLON] = ACTIONS(87),
    [anon_sym_DQUOTE] = ACTIONS(90),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(93),
    [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = ACTIONS(93),
    [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = ACTIONS(93),
    [anon_sym_SQUOTE_BSLASHa_SQUOTE] = ACTIONS(93),
    [anon_sym_SQUOTE_BSLASHb_SQUOTE] = ACTIONS(93),
    [anon_sym_SQUOTE_BSLASHe_SQUOTE] = ACTIONS(93),
    [anon_sym_SQUOTE_BSLASHf_SQUOTE] = ACTIONS(93),
    [anon_sym_SQUOTE_BSLASHn_SQUOTE] = ACTIONS(93),
    [anon_sym_SQUOTE_BSLASHr_SQUOTE] = ACTIONS(93),
    [anon_sym_SQUOTE_BSLASHt_SQUOTE] = ACTIONS(93),
    [anon_sym_SQUOTE_BSLASHv_SQUOTE] = ACTIONS(93),
    [aux_sym_char_token1] = ACTIONS(93),
    [aux_sym_char_token2] = ACTIONS(96),
    [anon_sym_LBRACK] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(102),
    [anon_sym_SLASH] = ACTIONS(105),
    [anon_sym_Tuple_DOTnew] = ACTIONS(108),
    [anon_sym_NamedTuple] = ACTIONS(111),
    [anon_sym_BQUOTE] = ACTIONS(114),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(117),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(120),
    [anon_sym_AT] = ACTIONS(123),
    [anon_sym_AT_AT] = ACTIONS(126),
    [anon_sym___LINE__] = ACTIONS(129),
    [anon_sym___END_LINE__] = ACTIONS(129),
    [anon_sym___FILE__] = ACTIONS(129),
    [anon_sym___DIR__] = ACTIONS(129),
    [aux_sym_constant_token1] = ACTIONS(132),
    [anon_sym_class] = ACTIONS(135),
    [anon_sym_end] = ACTIONS(138),
  },
  [7] = {
    [sym__statement] = STATE(13),
    [sym__expression] = STATE(255),
    [sym_bool] = STATE(255),
    [sym_float] = STATE(255),
    [sym_integer] = STATE(255),
    [sym_symbol] = STATE(255),
    [sym_char] = STATE(255),
    [sym_string] = STATE(255),
    [sym_array] = STATE(255),
    [sym_hash] = STATE(255),
    [sym_index_expression] = STATE(159),
    [sym_regex] = STATE(255),
    [sym_tuple] = STATE(255),
    [sym_namedTupleLiteral] = STATE(255),
    [sym_commandLiteral] = STATE(255),
    [sym_local_variable] = STATE(275),
    [sym_instance_variable] = STATE(275),
    [sym_class_variable] = STATE(275),
    [sym_constant] = STATE(137),
    [sym__variable] = STATE(275),
    [sym_assignment] = STATE(255),
    [sym_class_definition] = STATE(255),
    [aux_sym_program_repeat1] = STATE(13),
    [sym_nil] = ACTIONS(53),
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
    [anon_sym_NamedTuple] = ACTIONS(35),
    [anon_sym_BQUOTE] = ACTIONS(37),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(39),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(41),
    [anon_sym_AT] = ACTIONS(43),
    [anon_sym_AT_AT] = ACTIONS(45),
    [anon_sym___LINE__] = ACTIONS(47),
    [anon_sym___END_LINE__] = ACTIONS(47),
    [anon_sym___FILE__] = ACTIONS(47),
    [anon_sym___DIR__] = ACTIONS(47),
    [aux_sym_constant_token1] = ACTIONS(49),
    [anon_sym_class] = ACTIONS(51),
    [anon_sym_end] = ACTIONS(140),
  },
  [8] = {
    [sym__statement] = STATE(6),
    [sym__expression] = STATE(255),
    [sym_bool] = STATE(255),
    [sym_float] = STATE(255),
    [sym_integer] = STATE(255),
    [sym_symbol] = STATE(255),
    [sym_char] = STATE(255),
    [sym_string] = STATE(255),
    [sym_array] = STATE(255),
    [sym_hash] = STATE(255),
    [sym_index_expression] = STATE(159),
    [sym_regex] = STATE(255),
    [sym_tuple] = STATE(255),
    [sym_namedTupleLiteral] = STATE(255),
    [sym_commandLiteral] = STATE(255),
    [sym_local_variable] = STATE(275),
    [sym_instance_variable] = STATE(275),
    [sym_class_variable] = STATE(275),
    [sym_constant] = STATE(137),
    [sym__variable] = STATE(275),
    [sym_assignment] = STATE(255),
    [sym_class_definition] = STATE(255),
    [aux_sym_program_repeat1] = STATE(6),
    [sym_nil] = ACTIONS(53),
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
    [anon_sym_NamedTuple] = ACTIONS(35),
    [anon_sym_BQUOTE] = ACTIONS(37),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(39),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(41),
    [anon_sym_AT] = ACTIONS(43),
    [anon_sym_AT_AT] = ACTIONS(45),
    [anon_sym___LINE__] = ACTIONS(47),
    [anon_sym___END_LINE__] = ACTIONS(47),
    [anon_sym___FILE__] = ACTIONS(47),
    [anon_sym___DIR__] = ACTIONS(47),
    [aux_sym_constant_token1] = ACTIONS(49),
    [anon_sym_class] = ACTIONS(51),
    [anon_sym_end] = ACTIONS(142),
  },
  [9] = {
    [sym__statement] = STATE(6),
    [sym__expression] = STATE(255),
    [sym_bool] = STATE(255),
    [sym_float] = STATE(255),
    [sym_integer] = STATE(255),
    [sym_symbol] = STATE(255),
    [sym_char] = STATE(255),
    [sym_string] = STATE(255),
    [sym_array] = STATE(255),
    [sym_hash] = STATE(255),
    [sym_index_expression] = STATE(159),
    [sym_regex] = STATE(255),
    [sym_tuple] = STATE(255),
    [sym_namedTupleLiteral] = STATE(255),
    [sym_commandLiteral] = STATE(255),
    [sym_local_variable] = STATE(275),
    [sym_instance_variable] = STATE(275),
    [sym_class_variable] = STATE(275),
    [sym_constant] = STATE(137),
    [sym__variable] = STATE(275),
    [sym_assignment] = STATE(255),
    [sym_class_definition] = STATE(255),
    [aux_sym_program_repeat1] = STATE(6),
    [sym_nil] = ACTIONS(53),
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
    [anon_sym_NamedTuple] = ACTIONS(35),
    [anon_sym_BQUOTE] = ACTIONS(37),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(39),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(41),
    [anon_sym_AT] = ACTIONS(43),
    [anon_sym_AT_AT] = ACTIONS(45),
    [anon_sym___LINE__] = ACTIONS(47),
    [anon_sym___END_LINE__] = ACTIONS(47),
    [anon_sym___FILE__] = ACTIONS(47),
    [anon_sym___DIR__] = ACTIONS(47),
    [aux_sym_constant_token1] = ACTIONS(49),
    [anon_sym_class] = ACTIONS(51),
    [anon_sym_end] = ACTIONS(144),
  },
  [10] = {
    [sym__statement] = STATE(12),
    [sym__expression] = STATE(255),
    [sym_bool] = STATE(255),
    [sym_float] = STATE(255),
    [sym_integer] = STATE(255),
    [sym_symbol] = STATE(255),
    [sym_char] = STATE(255),
    [sym_string] = STATE(255),
    [sym_array] = STATE(255),
    [sym_hash] = STATE(255),
    [sym_index_expression] = STATE(159),
    [sym_regex] = STATE(255),
    [sym_tuple] = STATE(255),
    [sym_namedTupleLiteral] = STATE(255),
    [sym_commandLiteral] = STATE(255),
    [sym_local_variable] = STATE(275),
    [sym_instance_variable] = STATE(275),
    [sym_class_variable] = STATE(275),
    [sym_constant] = STATE(137),
    [sym__variable] = STATE(275),
    [sym_assignment] = STATE(255),
    [sym_class_definition] = STATE(255),
    [aux_sym_program_repeat1] = STATE(12),
    [sym_nil] = ACTIONS(53),
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
    [anon_sym_NamedTuple] = ACTIONS(35),
    [anon_sym_BQUOTE] = ACTIONS(37),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(39),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(41),
    [anon_sym_AT] = ACTIONS(43),
    [anon_sym_AT_AT] = ACTIONS(45),
    [anon_sym___LINE__] = ACTIONS(47),
    [anon_sym___END_LINE__] = ACTIONS(47),
    [anon_sym___FILE__] = ACTIONS(47),
    [anon_sym___DIR__] = ACTIONS(47),
    [aux_sym_constant_token1] = ACTIONS(49),
    [anon_sym_class] = ACTIONS(51),
    [anon_sym_end] = ACTIONS(146),
  },
  [11] = {
    [sym__expression] = STATE(130),
    [sym_identifier] = STATE(329),
    [sym_bool] = STATE(130),
    [sym_float] = STATE(130),
    [sym_integer] = STATE(130),
    [sym_symbol] = STATE(130),
    [sym_char] = STATE(130),
    [sym_string] = STATE(104),
    [sym_array] = STATE(130),
    [sym_hash] = STATE(130),
    [sym_index_expression] = STATE(146),
    [sym_regex] = STATE(130),
    [sym_tuple] = STATE(130),
    [sym_namedTupleLiteral] = STATE(130),
    [sym_commandLiteral] = STATE(130),
    [sym_local_variable] = STATE(277),
    [sym_instance_variable] = STATE(277),
    [sym_class_variable] = STATE(277),
    [sym_constant] = STATE(94),
    [sym__variable] = STATE(277),
    [sym_assignment] = STATE(130),
    [sym_class_definition] = STATE(130),
    [aux_sym_identifier_token1] = ACTIONS(148),
    [sym_nil] = ACTIONS(150),
    [anon_sym_true] = ACTIONS(152),
    [anon_sym_false] = ACTIONS(152),
    [aux_sym_float_token1] = ACTIONS(154),
    [aux_sym_float_token2] = ACTIONS(156),
    [aux_sym_float_token3] = ACTIONS(156),
    [aux_sym_integer_token1] = ACTIONS(158),
    [aux_sym_integer_token2] = ACTIONS(158),
    [aux_sym_integer_token3] = ACTIONS(158),
    [aux_sym_integer_token4] = ACTIONS(160),
    [anon_sym_COLON] = ACTIONS(162),
    [anon_sym_DQUOTE] = ACTIONS(164),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHa_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHb_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHe_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHf_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHn_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHr_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHt_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHv_SQUOTE] = ACTIONS(166),
    [aux_sym_char_token1] = ACTIONS(166),
    [aux_sym_char_token2] = ACTIONS(168),
    [anon_sym_LBRACK] = ACTIONS(170),
    [anon_sym_LBRACE] = ACTIONS(172),
    [anon_sym_RBRACE] = ACTIONS(174),
    [anon_sym_SLASH] = ACTIONS(176),
    [anon_sym_Tuple_DOTnew] = ACTIONS(178),
    [anon_sym_NamedTuple] = ACTIONS(180),
    [anon_sym_BQUOTE] = ACTIONS(182),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(184),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(41),
    [anon_sym_AT] = ACTIONS(43),
    [anon_sym_AT_AT] = ACTIONS(45),
    [anon_sym___LINE__] = ACTIONS(186),
    [anon_sym___END_LINE__] = ACTIONS(186),
    [anon_sym___FILE__] = ACTIONS(186),
    [anon_sym___DIR__] = ACTIONS(186),
    [aux_sym_constant_token1] = ACTIONS(188),
    [anon_sym_class] = ACTIONS(190),
  },
  [12] = {
    [sym__statement] = STATE(6),
    [sym__expression] = STATE(255),
    [sym_bool] = STATE(255),
    [sym_float] = STATE(255),
    [sym_integer] = STATE(255),
    [sym_symbol] = STATE(255),
    [sym_char] = STATE(255),
    [sym_string] = STATE(255),
    [sym_array] = STATE(255),
    [sym_hash] = STATE(255),
    [sym_index_expression] = STATE(159),
    [sym_regex] = STATE(255),
    [sym_tuple] = STATE(255),
    [sym_namedTupleLiteral] = STATE(255),
    [sym_commandLiteral] = STATE(255),
    [sym_local_variable] = STATE(275),
    [sym_instance_variable] = STATE(275),
    [sym_class_variable] = STATE(275),
    [sym_constant] = STATE(137),
    [sym__variable] = STATE(275),
    [sym_assignment] = STATE(255),
    [sym_class_definition] = STATE(255),
    [aux_sym_program_repeat1] = STATE(6),
    [sym_nil] = ACTIONS(53),
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
    [anon_sym_NamedTuple] = ACTIONS(35),
    [anon_sym_BQUOTE] = ACTIONS(37),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(39),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(41),
    [anon_sym_AT] = ACTIONS(43),
    [anon_sym_AT_AT] = ACTIONS(45),
    [anon_sym___LINE__] = ACTIONS(47),
    [anon_sym___END_LINE__] = ACTIONS(47),
    [anon_sym___FILE__] = ACTIONS(47),
    [anon_sym___DIR__] = ACTIONS(47),
    [aux_sym_constant_token1] = ACTIONS(49),
    [anon_sym_class] = ACTIONS(51),
    [anon_sym_end] = ACTIONS(192),
  },
  [13] = {
    [sym__statement] = STATE(6),
    [sym__expression] = STATE(255),
    [sym_bool] = STATE(255),
    [sym_float] = STATE(255),
    [sym_integer] = STATE(255),
    [sym_symbol] = STATE(255),
    [sym_char] = STATE(255),
    [sym_string] = STATE(255),
    [sym_array] = STATE(255),
    [sym_hash] = STATE(255),
    [sym_index_expression] = STATE(159),
    [sym_regex] = STATE(255),
    [sym_tuple] = STATE(255),
    [sym_namedTupleLiteral] = STATE(255),
    [sym_commandLiteral] = STATE(255),
    [sym_local_variable] = STATE(275),
    [sym_instance_variable] = STATE(275),
    [sym_class_variable] = STATE(275),
    [sym_constant] = STATE(137),
    [sym__variable] = STATE(275),
    [sym_assignment] = STATE(255),
    [sym_class_definition] = STATE(255),
    [aux_sym_program_repeat1] = STATE(6),
    [sym_nil] = ACTIONS(53),
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
    [anon_sym_NamedTuple] = ACTIONS(35),
    [anon_sym_BQUOTE] = ACTIONS(37),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(39),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(41),
    [anon_sym_AT] = ACTIONS(43),
    [anon_sym_AT_AT] = ACTIONS(45),
    [anon_sym___LINE__] = ACTIONS(47),
    [anon_sym___END_LINE__] = ACTIONS(47),
    [anon_sym___FILE__] = ACTIONS(47),
    [anon_sym___DIR__] = ACTIONS(47),
    [aux_sym_constant_token1] = ACTIONS(49),
    [anon_sym_class] = ACTIONS(51),
    [anon_sym_end] = ACTIONS(194),
  },
  [14] = {
    [sym__statement] = STATE(6),
    [sym__expression] = STATE(255),
    [sym_bool] = STATE(255),
    [sym_float] = STATE(255),
    [sym_integer] = STATE(255),
    [sym_symbol] = STATE(255),
    [sym_char] = STATE(255),
    [sym_string] = STATE(255),
    [sym_array] = STATE(255),
    [sym_hash] = STATE(255),
    [sym_index_expression] = STATE(159),
    [sym_regex] = STATE(255),
    [sym_tuple] = STATE(255),
    [sym_namedTupleLiteral] = STATE(255),
    [sym_commandLiteral] = STATE(255),
    [sym_local_variable] = STATE(275),
    [sym_instance_variable] = STATE(275),
    [sym_class_variable] = STATE(275),
    [sym_constant] = STATE(137),
    [sym__variable] = STATE(275),
    [sym_assignment] = STATE(255),
    [sym_class_definition] = STATE(255),
    [aux_sym_program_repeat1] = STATE(6),
    [sym_nil] = ACTIONS(53),
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
    [anon_sym_NamedTuple] = ACTIONS(35),
    [anon_sym_BQUOTE] = ACTIONS(37),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(39),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(41),
    [anon_sym_AT] = ACTIONS(43),
    [anon_sym_AT_AT] = ACTIONS(45),
    [anon_sym___LINE__] = ACTIONS(47),
    [anon_sym___END_LINE__] = ACTIONS(47),
    [anon_sym___FILE__] = ACTIONS(47),
    [anon_sym___DIR__] = ACTIONS(47),
    [aux_sym_constant_token1] = ACTIONS(49),
    [anon_sym_class] = ACTIONS(51),
    [anon_sym_end] = ACTIONS(196),
  },
  [15] = {
    [sym__statement] = STATE(16),
    [sym__expression] = STATE(255),
    [sym_bool] = STATE(255),
    [sym_float] = STATE(255),
    [sym_integer] = STATE(255),
    [sym_symbol] = STATE(255),
    [sym_char] = STATE(255),
    [sym_string] = STATE(255),
    [sym_array] = STATE(255),
    [sym_hash] = STATE(255),
    [sym_index_expression] = STATE(159),
    [sym_regex] = STATE(255),
    [sym_tuple] = STATE(255),
    [sym_namedTupleLiteral] = STATE(255),
    [sym_commandLiteral] = STATE(255),
    [sym_local_variable] = STATE(275),
    [sym_instance_variable] = STATE(275),
    [sym_class_variable] = STATE(275),
    [sym_constant] = STATE(137),
    [sym__variable] = STATE(275),
    [sym_assignment] = STATE(255),
    [sym_class_definition] = STATE(255),
    [aux_sym_program_repeat1] = STATE(16),
    [sym_nil] = ACTIONS(53),
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
    [anon_sym_NamedTuple] = ACTIONS(35),
    [anon_sym_BQUOTE] = ACTIONS(37),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(39),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(41),
    [anon_sym_AT] = ACTIONS(43),
    [anon_sym_AT_AT] = ACTIONS(45),
    [anon_sym___LINE__] = ACTIONS(47),
    [anon_sym___END_LINE__] = ACTIONS(47),
    [anon_sym___FILE__] = ACTIONS(47),
    [anon_sym___DIR__] = ACTIONS(47),
    [aux_sym_constant_token1] = ACTIONS(49),
    [anon_sym_class] = ACTIONS(51),
    [anon_sym_end] = ACTIONS(198),
  },
  [16] = {
    [sym__statement] = STATE(6),
    [sym__expression] = STATE(255),
    [sym_bool] = STATE(255),
    [sym_float] = STATE(255),
    [sym_integer] = STATE(255),
    [sym_symbol] = STATE(255),
    [sym_char] = STATE(255),
    [sym_string] = STATE(255),
    [sym_array] = STATE(255),
    [sym_hash] = STATE(255),
    [sym_index_expression] = STATE(159),
    [sym_regex] = STATE(255),
    [sym_tuple] = STATE(255),
    [sym_namedTupleLiteral] = STATE(255),
    [sym_commandLiteral] = STATE(255),
    [sym_local_variable] = STATE(275),
    [sym_instance_variable] = STATE(275),
    [sym_class_variable] = STATE(275),
    [sym_constant] = STATE(137),
    [sym__variable] = STATE(275),
    [sym_assignment] = STATE(255),
    [sym_class_definition] = STATE(255),
    [aux_sym_program_repeat1] = STATE(6),
    [sym_nil] = ACTIONS(53),
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
    [anon_sym_NamedTuple] = ACTIONS(35),
    [anon_sym_BQUOTE] = ACTIONS(37),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(39),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(41),
    [anon_sym_AT] = ACTIONS(43),
    [anon_sym_AT_AT] = ACTIONS(45),
    [anon_sym___LINE__] = ACTIONS(47),
    [anon_sym___END_LINE__] = ACTIONS(47),
    [anon_sym___FILE__] = ACTIONS(47),
    [anon_sym___DIR__] = ACTIONS(47),
    [aux_sym_constant_token1] = ACTIONS(49),
    [anon_sym_class] = ACTIONS(51),
    [anon_sym_end] = ACTIONS(200),
  },
  [17] = {
    [sym__statement] = STATE(17),
    [sym__expression] = STATE(272),
    [sym_bool] = STATE(272),
    [sym_float] = STATE(272),
    [sym_integer] = STATE(272),
    [sym_symbol] = STATE(272),
    [sym_char] = STATE(272),
    [sym_string] = STATE(272),
    [sym_array] = STATE(272),
    [sym_hash] = STATE(272),
    [sym_index_expression] = STATE(159),
    [sym_regex] = STATE(272),
    [sym_tuple] = STATE(272),
    [sym_namedTupleLiteral] = STATE(272),
    [sym_commandLiteral] = STATE(272),
    [sym_local_variable] = STATE(275),
    [sym_instance_variable] = STATE(275),
    [sym_class_variable] = STATE(275),
    [sym_constant] = STATE(137),
    [sym__variable] = STATE(275),
    [sym_assignment] = STATE(272),
    [sym_class_definition] = STATE(272),
    [aux_sym_program_repeat1] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(138),
    [sym_nil] = ACTIONS(202),
    [anon_sym_true] = ACTIONS(72),
    [anon_sym_false] = ACTIONS(72),
    [aux_sym_float_token1] = ACTIONS(75),
    [aux_sym_float_token2] = ACTIONS(78),
    [aux_sym_float_token3] = ACTIONS(78),
    [aux_sym_integer_token1] = ACTIONS(81),
    [aux_sym_integer_token2] = ACTIONS(81),
    [aux_sym_integer_token3] = ACTIONS(81),
    [aux_sym_integer_token4] = ACTIONS(84),
    [anon_sym_COLON] = ACTIONS(87),
    [anon_sym_DQUOTE] = ACTIONS(90),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(93),
    [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = ACTIONS(93),
    [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = ACTIONS(93),
    [anon_sym_SQUOTE_BSLASHa_SQUOTE] = ACTIONS(93),
    [anon_sym_SQUOTE_BSLASHb_SQUOTE] = ACTIONS(93),
    [anon_sym_SQUOTE_BSLASHe_SQUOTE] = ACTIONS(93),
    [anon_sym_SQUOTE_BSLASHf_SQUOTE] = ACTIONS(93),
    [anon_sym_SQUOTE_BSLASHn_SQUOTE] = ACTIONS(93),
    [anon_sym_SQUOTE_BSLASHr_SQUOTE] = ACTIONS(93),
    [anon_sym_SQUOTE_BSLASHt_SQUOTE] = ACTIONS(93),
    [anon_sym_SQUOTE_BSLASHv_SQUOTE] = ACTIONS(93),
    [aux_sym_char_token1] = ACTIONS(93),
    [aux_sym_char_token2] = ACTIONS(96),
    [anon_sym_LBRACK] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(102),
    [anon_sym_SLASH] = ACTIONS(105),
    [anon_sym_Tuple_DOTnew] = ACTIONS(108),
    [anon_sym_NamedTuple] = ACTIONS(111),
    [anon_sym_BQUOTE] = ACTIONS(114),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(117),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(120),
    [anon_sym_AT] = ACTIONS(123),
    [anon_sym_AT_AT] = ACTIONS(126),
    [anon_sym___LINE__] = ACTIONS(129),
    [anon_sym___END_LINE__] = ACTIONS(129),
    [anon_sym___FILE__] = ACTIONS(129),
    [anon_sym___DIR__] = ACTIONS(129),
    [aux_sym_constant_token1] = ACTIONS(132),
    [anon_sym_class] = ACTIONS(135),
  },
  [18] = {
    [sym__expression] = STATE(128),
    [sym_identifier] = STATE(357),
    [sym_bool] = STATE(128),
    [sym_float] = STATE(128),
    [sym_integer] = STATE(128),
    [sym_symbol] = STATE(128),
    [sym_char] = STATE(128),
    [sym_string] = STATE(145),
    [sym_array] = STATE(128),
    [sym_hash] = STATE(128),
    [sym_index_expression] = STATE(146),
    [sym_regex] = STATE(128),
    [sym_tuple] = STATE(128),
    [sym_namedTupleLiteral] = STATE(128),
    [sym_commandLiteral] = STATE(128),
    [sym_local_variable] = STATE(277),
    [sym_instance_variable] = STATE(277),
    [sym_class_variable] = STATE(277),
    [sym_constant] = STATE(94),
    [sym__variable] = STATE(277),
    [sym_assignment] = STATE(128),
    [sym_class_definition] = STATE(128),
    [aux_sym_identifier_token1] = ACTIONS(148),
    [sym_nil] = ACTIONS(205),
    [anon_sym_true] = ACTIONS(152),
    [anon_sym_false] = ACTIONS(152),
    [aux_sym_float_token1] = ACTIONS(154),
    [aux_sym_float_token2] = ACTIONS(156),
    [aux_sym_float_token3] = ACTIONS(156),
    [aux_sym_integer_token1] = ACTIONS(158),
    [aux_sym_integer_token2] = ACTIONS(158),
    [aux_sym_integer_token3] = ACTIONS(158),
    [aux_sym_integer_token4] = ACTIONS(160),
    [anon_sym_COLON] = ACTIONS(162),
    [anon_sym_DQUOTE] = ACTIONS(164),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHa_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHb_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHe_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHf_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHn_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHr_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHt_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHv_SQUOTE] = ACTIONS(166),
    [aux_sym_char_token1] = ACTIONS(166),
    [aux_sym_char_token2] = ACTIONS(168),
    [anon_sym_LBRACK] = ACTIONS(170),
    [anon_sym_LBRACE] = ACTIONS(172),
    [anon_sym_RBRACE] = ACTIONS(207),
    [anon_sym_SLASH] = ACTIONS(176),
    [anon_sym_Tuple_DOTnew] = ACTIONS(178),
    [anon_sym_NamedTuple] = ACTIONS(180),
    [anon_sym_BQUOTE] = ACTIONS(182),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(184),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(41),
    [anon_sym_AT] = ACTIONS(43),
    [anon_sym_AT_AT] = ACTIONS(45),
    [anon_sym___LINE__] = ACTIONS(186),
    [anon_sym___END_LINE__] = ACTIONS(186),
    [anon_sym___FILE__] = ACTIONS(186),
    [anon_sym___DIR__] = ACTIONS(186),
    [aux_sym_constant_token1] = ACTIONS(188),
    [anon_sym_class] = ACTIONS(190),
  },
  [19] = {
    [sym__expression] = STATE(106),
    [sym_identifier] = STATE(362),
    [sym_bool] = STATE(106),
    [sym_float] = STATE(106),
    [sym_integer] = STATE(106),
    [sym_symbol] = STATE(106),
    [sym_char] = STATE(106),
    [sym_string] = STATE(105),
    [sym_array] = STATE(106),
    [sym_hash] = STATE(106),
    [sym_index_expression] = STATE(146),
    [sym_regex] = STATE(106),
    [sym_tuple] = STATE(106),
    [sym_namedTupleLiteral] = STATE(106),
    [sym_commandLiteral] = STATE(106),
    [sym_local_variable] = STATE(277),
    [sym_instance_variable] = STATE(277),
    [sym_class_variable] = STATE(277),
    [sym_constant] = STATE(94),
    [sym__variable] = STATE(277),
    [sym_assignment] = STATE(106),
    [sym_class_definition] = STATE(106),
    [aux_sym_identifier_token1] = ACTIONS(148),
    [sym_nil] = ACTIONS(209),
    [anon_sym_true] = ACTIONS(152),
    [anon_sym_false] = ACTIONS(152),
    [aux_sym_float_token1] = ACTIONS(154),
    [aux_sym_float_token2] = ACTIONS(156),
    [aux_sym_float_token3] = ACTIONS(156),
    [aux_sym_integer_token1] = ACTIONS(158),
    [aux_sym_integer_token2] = ACTIONS(158),
    [aux_sym_integer_token3] = ACTIONS(158),
    [aux_sym_integer_token4] = ACTIONS(160),
    [anon_sym_COLON] = ACTIONS(162),
    [anon_sym_DQUOTE] = ACTIONS(164),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHa_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHb_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHe_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHf_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHn_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHr_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHt_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHv_SQUOTE] = ACTIONS(166),
    [aux_sym_char_token1] = ACTIONS(166),
    [aux_sym_char_token2] = ACTIONS(168),
    [anon_sym_LBRACK] = ACTIONS(170),
    [anon_sym_LBRACE] = ACTIONS(172),
    [anon_sym_RBRACE] = ACTIONS(211),
    [anon_sym_SLASH] = ACTIONS(176),
    [anon_sym_Tuple_DOTnew] = ACTIONS(178),
    [anon_sym_NamedTuple] = ACTIONS(180),
    [anon_sym_BQUOTE] = ACTIONS(182),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(184),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(41),
    [anon_sym_AT] = ACTIONS(43),
    [anon_sym_AT_AT] = ACTIONS(45),
    [anon_sym___LINE__] = ACTIONS(186),
    [anon_sym___END_LINE__] = ACTIONS(186),
    [anon_sym___FILE__] = ACTIONS(186),
    [anon_sym___DIR__] = ACTIONS(186),
    [aux_sym_constant_token1] = ACTIONS(188),
    [anon_sym_class] = ACTIONS(190),
  },
  [20] = {
    [sym__expression] = STATE(366),
    [sym_bool] = STATE(366),
    [sym_float] = STATE(366),
    [sym_integer] = STATE(366),
    [sym_symbol] = STATE(366),
    [sym_char] = STATE(366),
    [sym_string] = STATE(366),
    [sym_array] = STATE(366),
    [sym_hash] = STATE(366),
    [sym_index_expression] = STATE(295),
    [sym_regex] = STATE(366),
    [sym_tuple] = STATE(366),
    [sym_namedTupleLiteral] = STATE(366),
    [sym_commandLiteral] = STATE(366),
    [sym_local_variable] = STATE(273),
    [sym_instance_variable] = STATE(273),
    [sym_class_variable] = STATE(273),
    [sym_constant] = STATE(186),
    [sym__variable] = STATE(273),
    [sym_assignment] = STATE(366),
    [sym_class_definition] = STATE(366),
    [sym_nil] = ACTIONS(213),
    [anon_sym_true] = ACTIONS(215),
    [anon_sym_false] = ACTIONS(215),
    [aux_sym_float_token1] = ACTIONS(217),
    [aux_sym_float_token2] = ACTIONS(219),
    [aux_sym_float_token3] = ACTIONS(219),
    [aux_sym_integer_token1] = ACTIONS(221),
    [aux_sym_integer_token2] = ACTIONS(221),
    [aux_sym_integer_token3] = ACTIONS(221),
    [aux_sym_integer_token4] = ACTIONS(223),
    [anon_sym_COLON] = ACTIONS(225),
    [anon_sym_DQUOTE] = ACTIONS(227),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(229),
    [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = ACTIONS(229),
    [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = ACTIONS(229),
    [anon_sym_SQUOTE_BSLASHa_SQUOTE] = ACTIONS(229),
    [anon_sym_SQUOTE_BSLASHb_SQUOTE] = ACTIONS(229),
    [anon_sym_SQUOTE_BSLASHe_SQUOTE] = ACTIONS(229),
    [anon_sym_SQUOTE_BSLASHf_SQUOTE] = ACTIONS(229),
    [anon_sym_SQUOTE_BSLASHn_SQUOTE] = ACTIONS(229),
    [anon_sym_SQUOTE_BSLASHr_SQUOTE] = ACTIONS(229),
    [anon_sym_SQUOTE_BSLASHt_SQUOTE] = ACTIONS(229),
    [anon_sym_SQUOTE_BSLASHv_SQUOTE] = ACTIONS(229),
    [aux_sym_char_token1] = ACTIONS(229),
    [aux_sym_char_token2] = ACTIONS(231),
    [anon_sym_LBRACK] = ACTIONS(233),
    [anon_sym_LBRACE] = ACTIONS(235),
    [anon_sym_SLASH] = ACTIONS(237),
    [anon_sym_Tuple_DOTnew] = ACTIONS(239),
    [anon_sym_NamedTuple] = ACTIONS(241),
    [anon_sym_BQUOTE] = ACTIONS(243),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(245),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(41),
    [anon_sym_AT] = ACTIONS(43),
    [anon_sym_AT_AT] = ACTIONS(45),
    [anon_sym___LINE__] = ACTIONS(247),
    [anon_sym___END_LINE__] = ACTIONS(247),
    [anon_sym___FILE__] = ACTIONS(247),
    [anon_sym___DIR__] = ACTIONS(247),
    [aux_sym_constant_token1] = ACTIONS(249),
    [anon_sym_class] = ACTIONS(251),
  },
  [21] = {
    [sym__expression] = STATE(247),
    [sym_bool] = STATE(247),
    [sym_float] = STATE(247),
    [sym_integer] = STATE(247),
    [sym_symbol] = STATE(247),
    [sym_char] = STATE(247),
    [sym_string] = STATE(247),
    [sym_array] = STATE(247),
    [sym_hash] = STATE(247),
    [sym_index_expression] = STATE(155),
    [sym_regex] = STATE(247),
    [sym_tuple] = STATE(247),
    [sym_namedTupleLiteral] = STATE(247),
    [sym_commandLiteral] = STATE(247),
    [sym_local_variable] = STATE(254),
    [sym_instance_variable] = STATE(254),
    [sym_class_variable] = STATE(254),
    [sym_constant] = STATE(94),
    [sym__variable] = STATE(254),
    [sym_assignment] = STATE(247),
    [sym_class_definition] = STATE(247),
    [sym_nil] = ACTIONS(253),
    [anon_sym_true] = ACTIONS(255),
    [anon_sym_false] = ACTIONS(255),
    [aux_sym_float_token1] = ACTIONS(154),
    [aux_sym_float_token2] = ACTIONS(156),
    [aux_sym_float_token3] = ACTIONS(156),
    [aux_sym_integer_token1] = ACTIONS(158),
    [aux_sym_integer_token2] = ACTIONS(158),
    [aux_sym_integer_token3] = ACTIONS(158),
    [aux_sym_integer_token4] = ACTIONS(160),
    [anon_sym_COLON] = ACTIONS(257),
    [anon_sym_DQUOTE] = ACTIONS(259),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHa_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHb_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHe_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHf_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHn_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHr_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHt_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHv_SQUOTE] = ACTIONS(166),
    [aux_sym_char_token1] = ACTIONS(166),
    [aux_sym_char_token2] = ACTIONS(168),
    [anon_sym_LBRACK] = ACTIONS(170),
    [anon_sym_LBRACE] = ACTIONS(172),
    [anon_sym_SLASH] = ACTIONS(176),
    [anon_sym_Tuple_DOTnew] = ACTIONS(178),
    [anon_sym_NamedTuple] = ACTIONS(261),
    [anon_sym_BQUOTE] = ACTIONS(182),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(184),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(41),
    [anon_sym_AT] = ACTIONS(43),
    [anon_sym_AT_AT] = ACTIONS(45),
    [anon_sym___LINE__] = ACTIONS(263),
    [anon_sym___END_LINE__] = ACTIONS(263),
    [anon_sym___FILE__] = ACTIONS(263),
    [anon_sym___DIR__] = ACTIONS(263),
    [aux_sym_constant_token1] = ACTIONS(188),
    [anon_sym_class] = ACTIONS(265),
  },
  [22] = {
    [sym__expression] = STATE(313),
    [sym_bool] = STATE(313),
    [sym_float] = STATE(313),
    [sym_integer] = STATE(313),
    [sym_symbol] = STATE(313),
    [sym_char] = STATE(313),
    [sym_string] = STATE(313),
    [sym_array] = STATE(313),
    [sym_hash] = STATE(313),
    [sym_index_expression] = STATE(295),
    [sym_regex] = STATE(313),
    [sym_tuple] = STATE(313),
    [sym_namedTupleLiteral] = STATE(313),
    [sym_commandLiteral] = STATE(313),
    [sym_local_variable] = STATE(273),
    [sym_instance_variable] = STATE(273),
    [sym_class_variable] = STATE(273),
    [sym_constant] = STATE(186),
    [sym__variable] = STATE(273),
    [sym_assignment] = STATE(313),
    [sym_class_definition] = STATE(313),
    [sym_nil] = ACTIONS(267),
    [anon_sym_true] = ACTIONS(215),
    [anon_sym_false] = ACTIONS(215),
    [aux_sym_float_token1] = ACTIONS(217),
    [aux_sym_float_token2] = ACTIONS(219),
    [aux_sym_float_token3] = ACTIONS(219),
    [aux_sym_integer_token1] = ACTIONS(221),
    [aux_sym_integer_token2] = ACTIONS(221),
    [aux_sym_integer_token3] = ACTIONS(221),
    [aux_sym_integer_token4] = ACTIONS(223),
    [anon_sym_COLON] = ACTIONS(225),
    [anon_sym_DQUOTE] = ACTIONS(227),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(229),
    [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = ACTIONS(229),
    [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = ACTIONS(229),
    [anon_sym_SQUOTE_BSLASHa_SQUOTE] = ACTIONS(229),
    [anon_sym_SQUOTE_BSLASHb_SQUOTE] = ACTIONS(229),
    [anon_sym_SQUOTE_BSLASHe_SQUOTE] = ACTIONS(229),
    [anon_sym_SQUOTE_BSLASHf_SQUOTE] = ACTIONS(229),
    [anon_sym_SQUOTE_BSLASHn_SQUOTE] = ACTIONS(229),
    [anon_sym_SQUOTE_BSLASHr_SQUOTE] = ACTIONS(229),
    [anon_sym_SQUOTE_BSLASHt_SQUOTE] = ACTIONS(229),
    [anon_sym_SQUOTE_BSLASHv_SQUOTE] = ACTIONS(229),
    [aux_sym_char_token1] = ACTIONS(229),
    [aux_sym_char_token2] = ACTIONS(231),
    [anon_sym_LBRACK] = ACTIONS(233),
    [anon_sym_LBRACE] = ACTIONS(235),
    [anon_sym_SLASH] = ACTIONS(237),
    [anon_sym_Tuple_DOTnew] = ACTIONS(239),
    [anon_sym_NamedTuple] = ACTIONS(241),
    [anon_sym_BQUOTE] = ACTIONS(243),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(245),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(41),
    [anon_sym_AT] = ACTIONS(43),
    [anon_sym_AT_AT] = ACTIONS(45),
    [anon_sym___LINE__] = ACTIONS(247),
    [anon_sym___END_LINE__] = ACTIONS(247),
    [anon_sym___FILE__] = ACTIONS(247),
    [anon_sym___DIR__] = ACTIONS(247),
    [aux_sym_constant_token1] = ACTIONS(249),
    [anon_sym_class] = ACTIONS(251),
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
    [sym_index_expression] = STATE(253),
    [sym_regex] = STATE(312),
    [sym_tuple] = STATE(312),
    [sym_namedTupleLiteral] = STATE(312),
    [sym_commandLiteral] = STATE(312),
    [sym_local_variable] = STATE(265),
    [sym_instance_variable] = STATE(265),
    [sym_class_variable] = STATE(265),
    [sym_constant] = STATE(94),
    [sym__variable] = STATE(265),
    [sym_assignment] = STATE(312),
    [sym_class_definition] = STATE(312),
    [sym_nil] = ACTIONS(269),
    [anon_sym_true] = ACTIONS(255),
    [anon_sym_false] = ACTIONS(255),
    [aux_sym_float_token1] = ACTIONS(154),
    [aux_sym_float_token2] = ACTIONS(156),
    [aux_sym_float_token3] = ACTIONS(156),
    [aux_sym_integer_token1] = ACTIONS(158),
    [aux_sym_integer_token2] = ACTIONS(158),
    [aux_sym_integer_token3] = ACTIONS(158),
    [aux_sym_integer_token4] = ACTIONS(160),
    [anon_sym_COLON] = ACTIONS(271),
    [anon_sym_DQUOTE] = ACTIONS(273),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHa_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHb_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHe_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHf_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHn_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHr_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHt_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHv_SQUOTE] = ACTIONS(166),
    [aux_sym_char_token1] = ACTIONS(166),
    [aux_sym_char_token2] = ACTIONS(168),
    [anon_sym_LBRACK] = ACTIONS(170),
    [anon_sym_LBRACE] = ACTIONS(172),
    [anon_sym_SLASH] = ACTIONS(176),
    [anon_sym_Tuple_DOTnew] = ACTIONS(178),
    [anon_sym_NamedTuple] = ACTIONS(261),
    [anon_sym_BQUOTE] = ACTIONS(182),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(184),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(41),
    [anon_sym_AT] = ACTIONS(43),
    [anon_sym_AT_AT] = ACTIONS(45),
    [anon_sym___LINE__] = ACTIONS(263),
    [anon_sym___END_LINE__] = ACTIONS(263),
    [anon_sym___FILE__] = ACTIONS(263),
    [anon_sym___DIR__] = ACTIONS(263),
    [aux_sym_constant_token1] = ACTIONS(188),
    [anon_sym_class] = ACTIONS(265),
  },
  [24] = {
    [sym__expression] = STATE(322),
    [sym_bool] = STATE(322),
    [sym_float] = STATE(322),
    [sym_integer] = STATE(322),
    [sym_symbol] = STATE(322),
    [sym_char] = STATE(322),
    [sym_string] = STATE(322),
    [sym_array] = STATE(322),
    [sym_hash] = STATE(322),
    [sym_index_expression] = STATE(295),
    [sym_regex] = STATE(322),
    [sym_tuple] = STATE(322),
    [sym_namedTupleLiteral] = STATE(322),
    [sym_commandLiteral] = STATE(322),
    [sym_local_variable] = STATE(273),
    [sym_instance_variable] = STATE(273),
    [sym_class_variable] = STATE(273),
    [sym_constant] = STATE(186),
    [sym__variable] = STATE(273),
    [sym_assignment] = STATE(322),
    [sym_class_definition] = STATE(322),
    [sym_nil] = ACTIONS(275),
    [anon_sym_true] = ACTIONS(215),
    [anon_sym_false] = ACTIONS(215),
    [aux_sym_float_token1] = ACTIONS(217),
    [aux_sym_float_token2] = ACTIONS(219),
    [aux_sym_float_token3] = ACTIONS(219),
    [aux_sym_integer_token1] = ACTIONS(221),
    [aux_sym_integer_token2] = ACTIONS(221),
    [aux_sym_integer_token3] = ACTIONS(221),
    [aux_sym_integer_token4] = ACTIONS(223),
    [anon_sym_COLON] = ACTIONS(225),
    [anon_sym_DQUOTE] = ACTIONS(227),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(229),
    [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = ACTIONS(229),
    [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = ACTIONS(229),
    [anon_sym_SQUOTE_BSLASHa_SQUOTE] = ACTIONS(229),
    [anon_sym_SQUOTE_BSLASHb_SQUOTE] = ACTIONS(229),
    [anon_sym_SQUOTE_BSLASHe_SQUOTE] = ACTIONS(229),
    [anon_sym_SQUOTE_BSLASHf_SQUOTE] = ACTIONS(229),
    [anon_sym_SQUOTE_BSLASHn_SQUOTE] = ACTIONS(229),
    [anon_sym_SQUOTE_BSLASHr_SQUOTE] = ACTIONS(229),
    [anon_sym_SQUOTE_BSLASHt_SQUOTE] = ACTIONS(229),
    [anon_sym_SQUOTE_BSLASHv_SQUOTE] = ACTIONS(229),
    [aux_sym_char_token1] = ACTIONS(229),
    [aux_sym_char_token2] = ACTIONS(231),
    [anon_sym_LBRACK] = ACTIONS(233),
    [anon_sym_LBRACE] = ACTIONS(235),
    [anon_sym_SLASH] = ACTIONS(237),
    [anon_sym_Tuple_DOTnew] = ACTIONS(239),
    [anon_sym_NamedTuple] = ACTIONS(241),
    [anon_sym_BQUOTE] = ACTIONS(243),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(245),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(41),
    [anon_sym_AT] = ACTIONS(43),
    [anon_sym_AT_AT] = ACTIONS(45),
    [anon_sym___LINE__] = ACTIONS(247),
    [anon_sym___END_LINE__] = ACTIONS(247),
    [anon_sym___FILE__] = ACTIONS(247),
    [anon_sym___DIR__] = ACTIONS(247),
    [aux_sym_constant_token1] = ACTIONS(249),
    [anon_sym_class] = ACTIONS(251),
  },
  [25] = {
    [sym__expression] = STATE(270),
    [sym_bool] = STATE(270),
    [sym_float] = STATE(270),
    [sym_integer] = STATE(270),
    [sym_symbol] = STATE(270),
    [sym_char] = STATE(270),
    [sym_string] = STATE(270),
    [sym_array] = STATE(270),
    [sym_hash] = STATE(270),
    [sym_index_expression] = STATE(154),
    [sym_regex] = STATE(270),
    [sym_tuple] = STATE(270),
    [sym_namedTupleLiteral] = STATE(270),
    [sym_commandLiteral] = STATE(270),
    [sym_local_variable] = STATE(268),
    [sym_instance_variable] = STATE(268),
    [sym_class_variable] = STATE(268),
    [sym_constant] = STATE(94),
    [sym__variable] = STATE(268),
    [sym_assignment] = STATE(270),
    [sym_class_definition] = STATE(270),
    [sym_nil] = ACTIONS(277),
    [anon_sym_true] = ACTIONS(255),
    [anon_sym_false] = ACTIONS(255),
    [aux_sym_float_token1] = ACTIONS(154),
    [aux_sym_float_token2] = ACTIONS(156),
    [aux_sym_float_token3] = ACTIONS(156),
    [aux_sym_integer_token1] = ACTIONS(158),
    [aux_sym_integer_token2] = ACTIONS(158),
    [aux_sym_integer_token3] = ACTIONS(158),
    [aux_sym_integer_token4] = ACTIONS(160),
    [anon_sym_COLON] = ACTIONS(279),
    [anon_sym_DQUOTE] = ACTIONS(281),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHa_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHb_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHe_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHf_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHn_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHr_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHt_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHv_SQUOTE] = ACTIONS(166),
    [aux_sym_char_token1] = ACTIONS(166),
    [aux_sym_char_token2] = ACTIONS(168),
    [anon_sym_LBRACK] = ACTIONS(170),
    [anon_sym_LBRACE] = ACTIONS(172),
    [anon_sym_SLASH] = ACTIONS(176),
    [anon_sym_Tuple_DOTnew] = ACTIONS(178),
    [anon_sym_NamedTuple] = ACTIONS(261),
    [anon_sym_BQUOTE] = ACTIONS(182),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(184),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(41),
    [anon_sym_AT] = ACTIONS(43),
    [anon_sym_AT_AT] = ACTIONS(45),
    [anon_sym___LINE__] = ACTIONS(263),
    [anon_sym___END_LINE__] = ACTIONS(263),
    [anon_sym___FILE__] = ACTIONS(263),
    [anon_sym___DIR__] = ACTIONS(263),
    [aux_sym_constant_token1] = ACTIONS(188),
    [anon_sym_class] = ACTIONS(265),
  },
  [26] = {
    [sym__expression] = STATE(126),
    [sym_bool] = STATE(126),
    [sym_float] = STATE(126),
    [sym_integer] = STATE(126),
    [sym_symbol] = STATE(126),
    [sym_char] = STATE(126),
    [sym_string] = STATE(126),
    [sym_array] = STATE(126),
    [sym_hash] = STATE(126),
    [sym_index_expression] = STATE(253),
    [sym_regex] = STATE(126),
    [sym_tuple] = STATE(126),
    [sym_namedTupleLiteral] = STATE(126),
    [sym_commandLiteral] = STATE(126),
    [sym_local_variable] = STATE(265),
    [sym_instance_variable] = STATE(265),
    [sym_class_variable] = STATE(265),
    [sym_constant] = STATE(94),
    [sym__variable] = STATE(265),
    [sym_assignment] = STATE(126),
    [sym_class_definition] = STATE(126),
    [sym_nil] = ACTIONS(283),
    [anon_sym_true] = ACTIONS(255),
    [anon_sym_false] = ACTIONS(255),
    [aux_sym_float_token1] = ACTIONS(154),
    [aux_sym_float_token2] = ACTIONS(156),
    [aux_sym_float_token3] = ACTIONS(156),
    [aux_sym_integer_token1] = ACTIONS(158),
    [aux_sym_integer_token2] = ACTIONS(158),
    [aux_sym_integer_token3] = ACTIONS(158),
    [aux_sym_integer_token4] = ACTIONS(160),
    [anon_sym_COLON] = ACTIONS(271),
    [anon_sym_DQUOTE] = ACTIONS(273),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHa_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHb_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHe_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHf_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHn_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHr_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHt_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHv_SQUOTE] = ACTIONS(166),
    [aux_sym_char_token1] = ACTIONS(166),
    [aux_sym_char_token2] = ACTIONS(168),
    [anon_sym_LBRACK] = ACTIONS(170),
    [anon_sym_LBRACE] = ACTIONS(172),
    [anon_sym_SLASH] = ACTIONS(176),
    [anon_sym_Tuple_DOTnew] = ACTIONS(178),
    [anon_sym_NamedTuple] = ACTIONS(261),
    [anon_sym_BQUOTE] = ACTIONS(182),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(184),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(41),
    [anon_sym_AT] = ACTIONS(43),
    [anon_sym_AT_AT] = ACTIONS(45),
    [anon_sym___LINE__] = ACTIONS(263),
    [anon_sym___END_LINE__] = ACTIONS(263),
    [anon_sym___FILE__] = ACTIONS(263),
    [anon_sym___DIR__] = ACTIONS(263),
    [aux_sym_constant_token1] = ACTIONS(188),
    [anon_sym_class] = ACTIONS(265),
  },
  [27] = {
    [sym__expression] = STATE(211),
    [sym_bool] = STATE(211),
    [sym_float] = STATE(211),
    [sym_integer] = STATE(211),
    [sym_symbol] = STATE(211),
    [sym_char] = STATE(211),
    [sym_string] = STATE(211),
    [sym_array] = STATE(211),
    [sym_hash] = STATE(211),
    [sym_index_expression] = STATE(155),
    [sym_regex] = STATE(211),
    [sym_tuple] = STATE(211),
    [sym_namedTupleLiteral] = STATE(211),
    [sym_commandLiteral] = STATE(211),
    [sym_local_variable] = STATE(254),
    [sym_instance_variable] = STATE(254),
    [sym_class_variable] = STATE(254),
    [sym_constant] = STATE(94),
    [sym__variable] = STATE(254),
    [sym_assignment] = STATE(211),
    [sym_class_definition] = STATE(211),
    [sym_nil] = ACTIONS(285),
    [anon_sym_true] = ACTIONS(255),
    [anon_sym_false] = ACTIONS(255),
    [aux_sym_float_token1] = ACTIONS(154),
    [aux_sym_float_token2] = ACTIONS(156),
    [aux_sym_float_token3] = ACTIONS(156),
    [aux_sym_integer_token1] = ACTIONS(158),
    [aux_sym_integer_token2] = ACTIONS(158),
    [aux_sym_integer_token3] = ACTIONS(158),
    [aux_sym_integer_token4] = ACTIONS(160),
    [anon_sym_COLON] = ACTIONS(257),
    [anon_sym_DQUOTE] = ACTIONS(259),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHa_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHb_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHe_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHf_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHn_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHr_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHt_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHv_SQUOTE] = ACTIONS(166),
    [aux_sym_char_token1] = ACTIONS(166),
    [aux_sym_char_token2] = ACTIONS(168),
    [anon_sym_LBRACK] = ACTIONS(170),
    [anon_sym_LBRACE] = ACTIONS(172),
    [anon_sym_SLASH] = ACTIONS(176),
    [anon_sym_Tuple_DOTnew] = ACTIONS(178),
    [anon_sym_NamedTuple] = ACTIONS(261),
    [anon_sym_BQUOTE] = ACTIONS(182),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(184),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(41),
    [anon_sym_AT] = ACTIONS(43),
    [anon_sym_AT_AT] = ACTIONS(45),
    [anon_sym___LINE__] = ACTIONS(263),
    [anon_sym___END_LINE__] = ACTIONS(263),
    [anon_sym___FILE__] = ACTIONS(263),
    [anon_sym___DIR__] = ACTIONS(263),
    [aux_sym_constant_token1] = ACTIONS(188),
    [anon_sym_class] = ACTIONS(265),
  },
  [28] = {
    [sym__expression] = STATE(164),
    [sym_bool] = STATE(164),
    [sym_float] = STATE(164),
    [sym_integer] = STATE(164),
    [sym_symbol] = STATE(164),
    [sym_char] = STATE(164),
    [sym_string] = STATE(164),
    [sym_array] = STATE(164),
    [sym_hash] = STATE(164),
    [sym_index_expression] = STATE(155),
    [sym_regex] = STATE(164),
    [sym_tuple] = STATE(164),
    [sym_namedTupleLiteral] = STATE(164),
    [sym_commandLiteral] = STATE(164),
    [sym_local_variable] = STATE(254),
    [sym_instance_variable] = STATE(254),
    [sym_class_variable] = STATE(254),
    [sym_constant] = STATE(94),
    [sym__variable] = STATE(254),
    [sym_assignment] = STATE(164),
    [sym_class_definition] = STATE(164),
    [sym_nil] = ACTIONS(287),
    [anon_sym_true] = ACTIONS(255),
    [anon_sym_false] = ACTIONS(255),
    [aux_sym_float_token1] = ACTIONS(154),
    [aux_sym_float_token2] = ACTIONS(156),
    [aux_sym_float_token3] = ACTIONS(156),
    [aux_sym_integer_token1] = ACTIONS(158),
    [aux_sym_integer_token2] = ACTIONS(158),
    [aux_sym_integer_token3] = ACTIONS(158),
    [aux_sym_integer_token4] = ACTIONS(160),
    [anon_sym_COLON] = ACTIONS(257),
    [anon_sym_DQUOTE] = ACTIONS(259),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHa_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHb_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHe_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHf_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHn_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHr_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHt_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHv_SQUOTE] = ACTIONS(166),
    [aux_sym_char_token1] = ACTIONS(166),
    [aux_sym_char_token2] = ACTIONS(168),
    [anon_sym_LBRACK] = ACTIONS(170),
    [anon_sym_LBRACE] = ACTIONS(172),
    [anon_sym_SLASH] = ACTIONS(176),
    [anon_sym_Tuple_DOTnew] = ACTIONS(178),
    [anon_sym_NamedTuple] = ACTIONS(261),
    [anon_sym_BQUOTE] = ACTIONS(182),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(184),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(41),
    [anon_sym_AT] = ACTIONS(43),
    [anon_sym_AT_AT] = ACTIONS(45),
    [anon_sym___LINE__] = ACTIONS(263),
    [anon_sym___END_LINE__] = ACTIONS(263),
    [anon_sym___FILE__] = ACTIONS(263),
    [anon_sym___DIR__] = ACTIONS(263),
    [aux_sym_constant_token1] = ACTIONS(188),
    [anon_sym_class] = ACTIONS(265),
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
    [sym_index_expression] = STATE(154),
    [sym_regex] = STATE(126),
    [sym_tuple] = STATE(126),
    [sym_namedTupleLiteral] = STATE(126),
    [sym_commandLiteral] = STATE(126),
    [sym_local_variable] = STATE(268),
    [sym_instance_variable] = STATE(268),
    [sym_class_variable] = STATE(268),
    [sym_constant] = STATE(94),
    [sym__variable] = STATE(268),
    [sym_assignment] = STATE(126),
    [sym_class_definition] = STATE(126),
    [sym_nil] = ACTIONS(283),
    [anon_sym_true] = ACTIONS(255),
    [anon_sym_false] = ACTIONS(255),
    [aux_sym_float_token1] = ACTIONS(154),
    [aux_sym_float_token2] = ACTIONS(156),
    [aux_sym_float_token3] = ACTIONS(156),
    [aux_sym_integer_token1] = ACTIONS(158),
    [aux_sym_integer_token2] = ACTIONS(158),
    [aux_sym_integer_token3] = ACTIONS(158),
    [aux_sym_integer_token4] = ACTIONS(160),
    [anon_sym_COLON] = ACTIONS(279),
    [anon_sym_DQUOTE] = ACTIONS(281),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHa_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHb_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHe_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHf_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHn_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHr_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHt_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHv_SQUOTE] = ACTIONS(166),
    [aux_sym_char_token1] = ACTIONS(166),
    [aux_sym_char_token2] = ACTIONS(168),
    [anon_sym_LBRACK] = ACTIONS(170),
    [anon_sym_LBRACE] = ACTIONS(172),
    [anon_sym_SLASH] = ACTIONS(176),
    [anon_sym_Tuple_DOTnew] = ACTIONS(178),
    [anon_sym_NamedTuple] = ACTIONS(261),
    [anon_sym_BQUOTE] = ACTIONS(182),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(184),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(41),
    [anon_sym_AT] = ACTIONS(43),
    [anon_sym_AT_AT] = ACTIONS(45),
    [anon_sym___LINE__] = ACTIONS(263),
    [anon_sym___END_LINE__] = ACTIONS(263),
    [anon_sym___FILE__] = ACTIONS(263),
    [anon_sym___DIR__] = ACTIONS(263),
    [aux_sym_constant_token1] = ACTIONS(188),
    [anon_sym_class] = ACTIONS(265),
  },
  [30] = {
    [sym__expression] = STATE(126),
    [sym_bool] = STATE(126),
    [sym_float] = STATE(126),
    [sym_integer] = STATE(126),
    [sym_symbol] = STATE(126),
    [sym_char] = STATE(126),
    [sym_string] = STATE(126),
    [sym_array] = STATE(126),
    [sym_hash] = STATE(126),
    [sym_index_expression] = STATE(146),
    [sym_regex] = STATE(126),
    [sym_tuple] = STATE(126),
    [sym_namedTupleLiteral] = STATE(126),
    [sym_commandLiteral] = STATE(126),
    [sym_local_variable] = STATE(277),
    [sym_instance_variable] = STATE(277),
    [sym_class_variable] = STATE(277),
    [sym_constant] = STATE(94),
    [sym__variable] = STATE(277),
    [sym_assignment] = STATE(126),
    [sym_class_definition] = STATE(126),
    [sym_nil] = ACTIONS(283),
    [anon_sym_true] = ACTIONS(255),
    [anon_sym_false] = ACTIONS(255),
    [aux_sym_float_token1] = ACTIONS(154),
    [aux_sym_float_token2] = ACTIONS(156),
    [aux_sym_float_token3] = ACTIONS(156),
    [aux_sym_integer_token1] = ACTIONS(158),
    [aux_sym_integer_token2] = ACTIONS(158),
    [aux_sym_integer_token3] = ACTIONS(158),
    [aux_sym_integer_token4] = ACTIONS(160),
    [anon_sym_COLON] = ACTIONS(162),
    [anon_sym_DQUOTE] = ACTIONS(289),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHa_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHb_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHe_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHf_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHn_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHr_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHt_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHv_SQUOTE] = ACTIONS(166),
    [aux_sym_char_token1] = ACTIONS(166),
    [aux_sym_char_token2] = ACTIONS(168),
    [anon_sym_LBRACK] = ACTIONS(170),
    [anon_sym_LBRACE] = ACTIONS(172),
    [anon_sym_SLASH] = ACTIONS(176),
    [anon_sym_Tuple_DOTnew] = ACTIONS(178),
    [anon_sym_NamedTuple] = ACTIONS(261),
    [anon_sym_BQUOTE] = ACTIONS(182),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(184),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(41),
    [anon_sym_AT] = ACTIONS(43),
    [anon_sym_AT_AT] = ACTIONS(45),
    [anon_sym___LINE__] = ACTIONS(263),
    [anon_sym___END_LINE__] = ACTIONS(263),
    [anon_sym___FILE__] = ACTIONS(263),
    [anon_sym___DIR__] = ACTIONS(263),
    [aux_sym_constant_token1] = ACTIONS(188),
    [anon_sym_class] = ACTIONS(265),
  },
  [31] = {
    [sym__expression] = STATE(229),
    [sym_bool] = STATE(229),
    [sym_float] = STATE(229),
    [sym_integer] = STATE(229),
    [sym_symbol] = STATE(229),
    [sym_char] = STATE(229),
    [sym_string] = STATE(229),
    [sym_array] = STATE(229),
    [sym_hash] = STATE(229),
    [sym_index_expression] = STATE(154),
    [sym_regex] = STATE(229),
    [sym_tuple] = STATE(229),
    [sym_namedTupleLiteral] = STATE(229),
    [sym_commandLiteral] = STATE(229),
    [sym_local_variable] = STATE(268),
    [sym_instance_variable] = STATE(268),
    [sym_class_variable] = STATE(268),
    [sym_constant] = STATE(94),
    [sym__variable] = STATE(268),
    [sym_assignment] = STATE(229),
    [sym_class_definition] = STATE(229),
    [sym_nil] = ACTIONS(291),
    [anon_sym_true] = ACTIONS(255),
    [anon_sym_false] = ACTIONS(255),
    [aux_sym_float_token1] = ACTIONS(154),
    [aux_sym_float_token2] = ACTIONS(156),
    [aux_sym_float_token3] = ACTIONS(156),
    [aux_sym_integer_token1] = ACTIONS(158),
    [aux_sym_integer_token2] = ACTIONS(158),
    [aux_sym_integer_token3] = ACTIONS(158),
    [aux_sym_integer_token4] = ACTIONS(160),
    [anon_sym_COLON] = ACTIONS(279),
    [anon_sym_DQUOTE] = ACTIONS(281),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHa_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHb_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHe_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHf_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHn_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHr_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHt_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHv_SQUOTE] = ACTIONS(166),
    [aux_sym_char_token1] = ACTIONS(166),
    [aux_sym_char_token2] = ACTIONS(168),
    [anon_sym_LBRACK] = ACTIONS(170),
    [anon_sym_LBRACE] = ACTIONS(172),
    [anon_sym_SLASH] = ACTIONS(176),
    [anon_sym_Tuple_DOTnew] = ACTIONS(178),
    [anon_sym_NamedTuple] = ACTIONS(261),
    [anon_sym_BQUOTE] = ACTIONS(182),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(184),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(41),
    [anon_sym_AT] = ACTIONS(43),
    [anon_sym_AT_AT] = ACTIONS(45),
    [anon_sym___LINE__] = ACTIONS(263),
    [anon_sym___END_LINE__] = ACTIONS(263),
    [anon_sym___FILE__] = ACTIONS(263),
    [anon_sym___DIR__] = ACTIONS(263),
    [aux_sym_constant_token1] = ACTIONS(188),
    [anon_sym_class] = ACTIONS(265),
  },
  [32] = {
    [sym__expression] = STATE(231),
    [sym_bool] = STATE(231),
    [sym_float] = STATE(231),
    [sym_integer] = STATE(231),
    [sym_symbol] = STATE(231),
    [sym_char] = STATE(231),
    [sym_string] = STATE(231),
    [sym_array] = STATE(231),
    [sym_hash] = STATE(231),
    [sym_index_expression] = STATE(154),
    [sym_regex] = STATE(231),
    [sym_tuple] = STATE(231),
    [sym_namedTupleLiteral] = STATE(231),
    [sym_commandLiteral] = STATE(231),
    [sym_local_variable] = STATE(268),
    [sym_instance_variable] = STATE(268),
    [sym_class_variable] = STATE(268),
    [sym_constant] = STATE(94),
    [sym__variable] = STATE(268),
    [sym_assignment] = STATE(231),
    [sym_class_definition] = STATE(231),
    [sym_nil] = ACTIONS(293),
    [anon_sym_true] = ACTIONS(255),
    [anon_sym_false] = ACTIONS(255),
    [aux_sym_float_token1] = ACTIONS(154),
    [aux_sym_float_token2] = ACTIONS(156),
    [aux_sym_float_token3] = ACTIONS(156),
    [aux_sym_integer_token1] = ACTIONS(158),
    [aux_sym_integer_token2] = ACTIONS(158),
    [aux_sym_integer_token3] = ACTIONS(158),
    [aux_sym_integer_token4] = ACTIONS(160),
    [anon_sym_COLON] = ACTIONS(279),
    [anon_sym_DQUOTE] = ACTIONS(281),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHa_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHb_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHe_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHf_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHn_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHr_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHt_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHv_SQUOTE] = ACTIONS(166),
    [aux_sym_char_token1] = ACTIONS(166),
    [aux_sym_char_token2] = ACTIONS(168),
    [anon_sym_LBRACK] = ACTIONS(170),
    [anon_sym_LBRACE] = ACTIONS(172),
    [anon_sym_SLASH] = ACTIONS(176),
    [anon_sym_Tuple_DOTnew] = ACTIONS(178),
    [anon_sym_NamedTuple] = ACTIONS(261),
    [anon_sym_BQUOTE] = ACTIONS(182),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(184),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(41),
    [anon_sym_AT] = ACTIONS(43),
    [anon_sym_AT_AT] = ACTIONS(45),
    [anon_sym___LINE__] = ACTIONS(263),
    [anon_sym___END_LINE__] = ACTIONS(263),
    [anon_sym___FILE__] = ACTIONS(263),
    [anon_sym___DIR__] = ACTIONS(263),
    [aux_sym_constant_token1] = ACTIONS(188),
    [anon_sym_class] = ACTIONS(265),
  },
  [33] = {
    [sym__expression] = STATE(126),
    [sym_bool] = STATE(126),
    [sym_float] = STATE(126),
    [sym_integer] = STATE(126),
    [sym_symbol] = STATE(126),
    [sym_char] = STATE(126),
    [sym_string] = STATE(126),
    [sym_array] = STATE(126),
    [sym_hash] = STATE(126),
    [sym_index_expression] = STATE(155),
    [sym_regex] = STATE(126),
    [sym_tuple] = STATE(126),
    [sym_namedTupleLiteral] = STATE(126),
    [sym_commandLiteral] = STATE(126),
    [sym_local_variable] = STATE(254),
    [sym_instance_variable] = STATE(254),
    [sym_class_variable] = STATE(254),
    [sym_constant] = STATE(94),
    [sym__variable] = STATE(254),
    [sym_assignment] = STATE(126),
    [sym_class_definition] = STATE(126),
    [sym_nil] = ACTIONS(283),
    [anon_sym_true] = ACTIONS(255),
    [anon_sym_false] = ACTIONS(255),
    [aux_sym_float_token1] = ACTIONS(154),
    [aux_sym_float_token2] = ACTIONS(156),
    [aux_sym_float_token3] = ACTIONS(156),
    [aux_sym_integer_token1] = ACTIONS(158),
    [aux_sym_integer_token2] = ACTIONS(158),
    [aux_sym_integer_token3] = ACTIONS(158),
    [aux_sym_integer_token4] = ACTIONS(160),
    [anon_sym_COLON] = ACTIONS(257),
    [anon_sym_DQUOTE] = ACTIONS(259),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHa_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHb_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHe_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHf_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHn_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHr_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHt_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHv_SQUOTE] = ACTIONS(166),
    [aux_sym_char_token1] = ACTIONS(166),
    [aux_sym_char_token2] = ACTIONS(168),
    [anon_sym_LBRACK] = ACTIONS(170),
    [anon_sym_LBRACE] = ACTIONS(172),
    [anon_sym_SLASH] = ACTIONS(176),
    [anon_sym_Tuple_DOTnew] = ACTIONS(178),
    [anon_sym_NamedTuple] = ACTIONS(261),
    [anon_sym_BQUOTE] = ACTIONS(182),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(184),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(41),
    [anon_sym_AT] = ACTIONS(43),
    [anon_sym_AT_AT] = ACTIONS(45),
    [anon_sym___LINE__] = ACTIONS(263),
    [anon_sym___END_LINE__] = ACTIONS(263),
    [anon_sym___FILE__] = ACTIONS(263),
    [anon_sym___DIR__] = ACTIONS(263),
    [aux_sym_constant_token1] = ACTIONS(188),
    [anon_sym_class] = ACTIONS(265),
  },
  [34] = {
    [sym__expression] = STATE(205),
    [sym_bool] = STATE(205),
    [sym_float] = STATE(205),
    [sym_integer] = STATE(205),
    [sym_symbol] = STATE(205),
    [sym_char] = STATE(205),
    [sym_string] = STATE(205),
    [sym_array] = STATE(205),
    [sym_hash] = STATE(205),
    [sym_index_expression] = STATE(154),
    [sym_regex] = STATE(205),
    [sym_tuple] = STATE(205),
    [sym_namedTupleLiteral] = STATE(205),
    [sym_commandLiteral] = STATE(205),
    [sym_local_variable] = STATE(268),
    [sym_instance_variable] = STATE(268),
    [sym_class_variable] = STATE(268),
    [sym_constant] = STATE(94),
    [sym__variable] = STATE(268),
    [sym_assignment] = STATE(205),
    [sym_class_definition] = STATE(205),
    [sym_nil] = ACTIONS(295),
    [anon_sym_true] = ACTIONS(255),
    [anon_sym_false] = ACTIONS(255),
    [aux_sym_float_token1] = ACTIONS(154),
    [aux_sym_float_token2] = ACTIONS(156),
    [aux_sym_float_token3] = ACTIONS(156),
    [aux_sym_integer_token1] = ACTIONS(158),
    [aux_sym_integer_token2] = ACTIONS(158),
    [aux_sym_integer_token3] = ACTIONS(158),
    [aux_sym_integer_token4] = ACTIONS(160),
    [anon_sym_COLON] = ACTIONS(279),
    [anon_sym_DQUOTE] = ACTIONS(281),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHa_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHb_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHe_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHf_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHn_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHr_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHt_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHv_SQUOTE] = ACTIONS(166),
    [aux_sym_char_token1] = ACTIONS(166),
    [aux_sym_char_token2] = ACTIONS(168),
    [anon_sym_LBRACK] = ACTIONS(170),
    [anon_sym_LBRACE] = ACTIONS(172),
    [anon_sym_SLASH] = ACTIONS(176),
    [anon_sym_Tuple_DOTnew] = ACTIONS(178),
    [anon_sym_NamedTuple] = ACTIONS(261),
    [anon_sym_BQUOTE] = ACTIONS(182),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(184),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(41),
    [anon_sym_AT] = ACTIONS(43),
    [anon_sym_AT_AT] = ACTIONS(45),
    [anon_sym___LINE__] = ACTIONS(263),
    [anon_sym___END_LINE__] = ACTIONS(263),
    [anon_sym___FILE__] = ACTIONS(263),
    [anon_sym___DIR__] = ACTIONS(263),
    [aux_sym_constant_token1] = ACTIONS(188),
    [anon_sym_class] = ACTIONS(265),
  },
  [35] = {
    [sym__expression] = STATE(246),
    [sym_bool] = STATE(246),
    [sym_float] = STATE(246),
    [sym_integer] = STATE(246),
    [sym_symbol] = STATE(246),
    [sym_char] = STATE(246),
    [sym_string] = STATE(246),
    [sym_array] = STATE(246),
    [sym_hash] = STATE(246),
    [sym_index_expression] = STATE(155),
    [sym_regex] = STATE(246),
    [sym_tuple] = STATE(246),
    [sym_namedTupleLiteral] = STATE(246),
    [sym_commandLiteral] = STATE(246),
    [sym_local_variable] = STATE(254),
    [sym_instance_variable] = STATE(254),
    [sym_class_variable] = STATE(254),
    [sym_constant] = STATE(94),
    [sym__variable] = STATE(254),
    [sym_assignment] = STATE(246),
    [sym_class_definition] = STATE(246),
    [sym_nil] = ACTIONS(297),
    [anon_sym_true] = ACTIONS(255),
    [anon_sym_false] = ACTIONS(255),
    [aux_sym_float_token1] = ACTIONS(154),
    [aux_sym_float_token2] = ACTIONS(156),
    [aux_sym_float_token3] = ACTIONS(156),
    [aux_sym_integer_token1] = ACTIONS(158),
    [aux_sym_integer_token2] = ACTIONS(158),
    [aux_sym_integer_token3] = ACTIONS(158),
    [aux_sym_integer_token4] = ACTIONS(160),
    [anon_sym_COLON] = ACTIONS(257),
    [anon_sym_DQUOTE] = ACTIONS(259),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHa_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHb_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHe_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHf_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHn_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHr_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHt_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHv_SQUOTE] = ACTIONS(166),
    [aux_sym_char_token1] = ACTIONS(166),
    [aux_sym_char_token2] = ACTIONS(168),
    [anon_sym_LBRACK] = ACTIONS(170),
    [anon_sym_LBRACE] = ACTIONS(172),
    [anon_sym_SLASH] = ACTIONS(176),
    [anon_sym_Tuple_DOTnew] = ACTIONS(178),
    [anon_sym_NamedTuple] = ACTIONS(261),
    [anon_sym_BQUOTE] = ACTIONS(182),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(184),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(41),
    [anon_sym_AT] = ACTIONS(43),
    [anon_sym_AT_AT] = ACTIONS(45),
    [anon_sym___LINE__] = ACTIONS(263),
    [anon_sym___END_LINE__] = ACTIONS(263),
    [anon_sym___FILE__] = ACTIONS(263),
    [anon_sym___DIR__] = ACTIONS(263),
    [aux_sym_constant_token1] = ACTIONS(188),
    [anon_sym_class] = ACTIONS(265),
  },
  [36] = {
    [sym__expression] = STATE(257),
    [sym_bool] = STATE(257),
    [sym_float] = STATE(257),
    [sym_integer] = STATE(257),
    [sym_symbol] = STATE(257),
    [sym_char] = STATE(257),
    [sym_string] = STATE(257),
    [sym_array] = STATE(257),
    [sym_hash] = STATE(257),
    [sym_index_expression] = STATE(154),
    [sym_regex] = STATE(257),
    [sym_tuple] = STATE(257),
    [sym_namedTupleLiteral] = STATE(257),
    [sym_commandLiteral] = STATE(257),
    [sym_local_variable] = STATE(268),
    [sym_instance_variable] = STATE(268),
    [sym_class_variable] = STATE(268),
    [sym_constant] = STATE(94),
    [sym__variable] = STATE(268),
    [sym_assignment] = STATE(257),
    [sym_class_definition] = STATE(257),
    [sym_nil] = ACTIONS(299),
    [anon_sym_true] = ACTIONS(255),
    [anon_sym_false] = ACTIONS(255),
    [aux_sym_float_token1] = ACTIONS(154),
    [aux_sym_float_token2] = ACTIONS(156),
    [aux_sym_float_token3] = ACTIONS(156),
    [aux_sym_integer_token1] = ACTIONS(158),
    [aux_sym_integer_token2] = ACTIONS(158),
    [aux_sym_integer_token3] = ACTIONS(158),
    [aux_sym_integer_token4] = ACTIONS(160),
    [anon_sym_COLON] = ACTIONS(279),
    [anon_sym_DQUOTE] = ACTIONS(281),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHa_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHb_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHe_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHf_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHn_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHr_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHt_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHv_SQUOTE] = ACTIONS(166),
    [aux_sym_char_token1] = ACTIONS(166),
    [aux_sym_char_token2] = ACTIONS(168),
    [anon_sym_LBRACK] = ACTIONS(170),
    [anon_sym_LBRACE] = ACTIONS(172),
    [anon_sym_SLASH] = ACTIONS(176),
    [anon_sym_Tuple_DOTnew] = ACTIONS(178),
    [anon_sym_NamedTuple] = ACTIONS(261),
    [anon_sym_BQUOTE] = ACTIONS(182),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(184),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(41),
    [anon_sym_AT] = ACTIONS(43),
    [anon_sym_AT_AT] = ACTIONS(45),
    [anon_sym___LINE__] = ACTIONS(263),
    [anon_sym___END_LINE__] = ACTIONS(263),
    [anon_sym___FILE__] = ACTIONS(263),
    [anon_sym___DIR__] = ACTIONS(263),
    [aux_sym_constant_token1] = ACTIONS(188),
    [anon_sym_class] = ACTIONS(265),
  },
  [37] = {
    [sym__expression] = STATE(232),
    [sym_bool] = STATE(232),
    [sym_float] = STATE(232),
    [sym_integer] = STATE(232),
    [sym_symbol] = STATE(232),
    [sym_char] = STATE(232),
    [sym_string] = STATE(232),
    [sym_array] = STATE(232),
    [sym_hash] = STATE(232),
    [sym_index_expression] = STATE(154),
    [sym_regex] = STATE(232),
    [sym_tuple] = STATE(232),
    [sym_namedTupleLiteral] = STATE(232),
    [sym_commandLiteral] = STATE(232),
    [sym_local_variable] = STATE(268),
    [sym_instance_variable] = STATE(268),
    [sym_class_variable] = STATE(268),
    [sym_constant] = STATE(94),
    [sym__variable] = STATE(268),
    [sym_assignment] = STATE(232),
    [sym_class_definition] = STATE(232),
    [sym_nil] = ACTIONS(301),
    [anon_sym_true] = ACTIONS(255),
    [anon_sym_false] = ACTIONS(255),
    [aux_sym_float_token1] = ACTIONS(154),
    [aux_sym_float_token2] = ACTIONS(156),
    [aux_sym_float_token3] = ACTIONS(156),
    [aux_sym_integer_token1] = ACTIONS(158),
    [aux_sym_integer_token2] = ACTIONS(158),
    [aux_sym_integer_token3] = ACTIONS(158),
    [aux_sym_integer_token4] = ACTIONS(160),
    [anon_sym_COLON] = ACTIONS(279),
    [anon_sym_DQUOTE] = ACTIONS(281),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHa_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHb_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHe_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHf_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHn_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHr_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHt_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHv_SQUOTE] = ACTIONS(166),
    [aux_sym_char_token1] = ACTIONS(166),
    [aux_sym_char_token2] = ACTIONS(168),
    [anon_sym_LBRACK] = ACTIONS(170),
    [anon_sym_LBRACE] = ACTIONS(172),
    [anon_sym_SLASH] = ACTIONS(176),
    [anon_sym_Tuple_DOTnew] = ACTIONS(178),
    [anon_sym_NamedTuple] = ACTIONS(261),
    [anon_sym_BQUOTE] = ACTIONS(182),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(184),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(41),
    [anon_sym_AT] = ACTIONS(43),
    [anon_sym_AT_AT] = ACTIONS(45),
    [anon_sym___LINE__] = ACTIONS(263),
    [anon_sym___END_LINE__] = ACTIONS(263),
    [anon_sym___FILE__] = ACTIONS(263),
    [anon_sym___DIR__] = ACTIONS(263),
    [aux_sym_constant_token1] = ACTIONS(188),
    [anon_sym_class] = ACTIONS(265),
  },
  [38] = {
    [sym__expression] = STATE(240),
    [sym_bool] = STATE(240),
    [sym_float] = STATE(240),
    [sym_integer] = STATE(240),
    [sym_symbol] = STATE(240),
    [sym_char] = STATE(240),
    [sym_string] = STATE(240),
    [sym_array] = STATE(240),
    [sym_hash] = STATE(240),
    [sym_index_expression] = STATE(154),
    [sym_regex] = STATE(240),
    [sym_tuple] = STATE(240),
    [sym_namedTupleLiteral] = STATE(240),
    [sym_commandLiteral] = STATE(240),
    [sym_local_variable] = STATE(268),
    [sym_instance_variable] = STATE(268),
    [sym_class_variable] = STATE(268),
    [sym_constant] = STATE(94),
    [sym__variable] = STATE(268),
    [sym_assignment] = STATE(240),
    [sym_class_definition] = STATE(240),
    [sym_nil] = ACTIONS(303),
    [anon_sym_true] = ACTIONS(255),
    [anon_sym_false] = ACTIONS(255),
    [aux_sym_float_token1] = ACTIONS(154),
    [aux_sym_float_token2] = ACTIONS(156),
    [aux_sym_float_token3] = ACTIONS(156),
    [aux_sym_integer_token1] = ACTIONS(158),
    [aux_sym_integer_token2] = ACTIONS(158),
    [aux_sym_integer_token3] = ACTIONS(158),
    [aux_sym_integer_token4] = ACTIONS(160),
    [anon_sym_COLON] = ACTIONS(279),
    [anon_sym_DQUOTE] = ACTIONS(281),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHa_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHb_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHe_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHf_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHn_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHr_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHt_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHv_SQUOTE] = ACTIONS(166),
    [aux_sym_char_token1] = ACTIONS(166),
    [aux_sym_char_token2] = ACTIONS(168),
    [anon_sym_LBRACK] = ACTIONS(170),
    [anon_sym_LBRACE] = ACTIONS(172),
    [anon_sym_SLASH] = ACTIONS(176),
    [anon_sym_Tuple_DOTnew] = ACTIONS(178),
    [anon_sym_NamedTuple] = ACTIONS(261),
    [anon_sym_BQUOTE] = ACTIONS(182),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(184),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(41),
    [anon_sym_AT] = ACTIONS(43),
    [anon_sym_AT_AT] = ACTIONS(45),
    [anon_sym___LINE__] = ACTIONS(263),
    [anon_sym___END_LINE__] = ACTIONS(263),
    [anon_sym___FILE__] = ACTIONS(263),
    [anon_sym___DIR__] = ACTIONS(263),
    [aux_sym_constant_token1] = ACTIONS(188),
    [anon_sym_class] = ACTIONS(265),
  },
  [39] = {
    [sym__expression] = STATE(252),
    [sym_bool] = STATE(252),
    [sym_float] = STATE(252),
    [sym_integer] = STATE(252),
    [sym_symbol] = STATE(252),
    [sym_char] = STATE(252),
    [sym_string] = STATE(252),
    [sym_array] = STATE(252),
    [sym_hash] = STATE(252),
    [sym_index_expression] = STATE(159),
    [sym_regex] = STATE(252),
    [sym_tuple] = STATE(252),
    [sym_namedTupleLiteral] = STATE(252),
    [sym_commandLiteral] = STATE(252),
    [sym_local_variable] = STATE(275),
    [sym_instance_variable] = STATE(275),
    [sym_class_variable] = STATE(275),
    [sym_constant] = STATE(137),
    [sym__variable] = STATE(275),
    [sym_assignment] = STATE(252),
    [sym_class_definition] = STATE(252),
    [sym_nil] = ACTIONS(305),
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
    [anon_sym_NamedTuple] = ACTIONS(35),
    [anon_sym_BQUOTE] = ACTIONS(37),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(39),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(41),
    [anon_sym_AT] = ACTIONS(43),
    [anon_sym_AT_AT] = ACTIONS(45),
    [anon_sym___LINE__] = ACTIONS(47),
    [anon_sym___END_LINE__] = ACTIONS(47),
    [anon_sym___FILE__] = ACTIONS(47),
    [anon_sym___DIR__] = ACTIONS(47),
    [aux_sym_constant_token1] = ACTIONS(49),
    [anon_sym_class] = ACTIONS(51),
  },
  [40] = {
    [sym__expression] = STATE(247),
    [sym_bool] = STATE(247),
    [sym_float] = STATE(247),
    [sym_integer] = STATE(247),
    [sym_symbol] = STATE(247),
    [sym_char] = STATE(247),
    [sym_string] = STATE(247),
    [sym_array] = STATE(247),
    [sym_hash] = STATE(247),
    [sym_index_expression] = STATE(154),
    [sym_regex] = STATE(247),
    [sym_tuple] = STATE(247),
    [sym_namedTupleLiteral] = STATE(247),
    [sym_commandLiteral] = STATE(247),
    [sym_local_variable] = STATE(268),
    [sym_instance_variable] = STATE(268),
    [sym_class_variable] = STATE(268),
    [sym_constant] = STATE(94),
    [sym__variable] = STATE(268),
    [sym_assignment] = STATE(247),
    [sym_class_definition] = STATE(247),
    [sym_nil] = ACTIONS(253),
    [anon_sym_true] = ACTIONS(255),
    [anon_sym_false] = ACTIONS(255),
    [aux_sym_float_token1] = ACTIONS(154),
    [aux_sym_float_token2] = ACTIONS(156),
    [aux_sym_float_token3] = ACTIONS(156),
    [aux_sym_integer_token1] = ACTIONS(158),
    [aux_sym_integer_token2] = ACTIONS(158),
    [aux_sym_integer_token3] = ACTIONS(158),
    [aux_sym_integer_token4] = ACTIONS(160),
    [anon_sym_COLON] = ACTIONS(279),
    [anon_sym_DQUOTE] = ACTIONS(281),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHa_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHb_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHe_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHf_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHn_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHr_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHt_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHv_SQUOTE] = ACTIONS(166),
    [aux_sym_char_token1] = ACTIONS(166),
    [aux_sym_char_token2] = ACTIONS(168),
    [anon_sym_LBRACK] = ACTIONS(170),
    [anon_sym_LBRACE] = ACTIONS(172),
    [anon_sym_SLASH] = ACTIONS(176),
    [anon_sym_Tuple_DOTnew] = ACTIONS(178),
    [anon_sym_NamedTuple] = ACTIONS(261),
    [anon_sym_BQUOTE] = ACTIONS(182),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(184),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(41),
    [anon_sym_AT] = ACTIONS(43),
    [anon_sym_AT_AT] = ACTIONS(45),
    [anon_sym___LINE__] = ACTIONS(263),
    [anon_sym___END_LINE__] = ACTIONS(263),
    [anon_sym___FILE__] = ACTIONS(263),
    [anon_sym___DIR__] = ACTIONS(263),
    [aux_sym_constant_token1] = ACTIONS(188),
    [anon_sym_class] = ACTIONS(265),
  },
  [41] = {
    [sym__expression] = STATE(368),
    [sym_bool] = STATE(368),
    [sym_float] = STATE(368),
    [sym_integer] = STATE(368),
    [sym_symbol] = STATE(368),
    [sym_char] = STATE(368),
    [sym_string] = STATE(368),
    [sym_array] = STATE(368),
    [sym_hash] = STATE(368),
    [sym_index_expression] = STATE(295),
    [sym_regex] = STATE(368),
    [sym_tuple] = STATE(368),
    [sym_namedTupleLiteral] = STATE(368),
    [sym_commandLiteral] = STATE(368),
    [sym_local_variable] = STATE(273),
    [sym_instance_variable] = STATE(273),
    [sym_class_variable] = STATE(273),
    [sym_constant] = STATE(186),
    [sym__variable] = STATE(273),
    [sym_assignment] = STATE(368),
    [sym_class_definition] = STATE(368),
    [sym_nil] = ACTIONS(307),
    [anon_sym_true] = ACTIONS(215),
    [anon_sym_false] = ACTIONS(215),
    [aux_sym_float_token1] = ACTIONS(217),
    [aux_sym_float_token2] = ACTIONS(219),
    [aux_sym_float_token3] = ACTIONS(219),
    [aux_sym_integer_token1] = ACTIONS(221),
    [aux_sym_integer_token2] = ACTIONS(221),
    [aux_sym_integer_token3] = ACTIONS(221),
    [aux_sym_integer_token4] = ACTIONS(223),
    [anon_sym_COLON] = ACTIONS(225),
    [anon_sym_DQUOTE] = ACTIONS(227),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(229),
    [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = ACTIONS(229),
    [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = ACTIONS(229),
    [anon_sym_SQUOTE_BSLASHa_SQUOTE] = ACTIONS(229),
    [anon_sym_SQUOTE_BSLASHb_SQUOTE] = ACTIONS(229),
    [anon_sym_SQUOTE_BSLASHe_SQUOTE] = ACTIONS(229),
    [anon_sym_SQUOTE_BSLASHf_SQUOTE] = ACTIONS(229),
    [anon_sym_SQUOTE_BSLASHn_SQUOTE] = ACTIONS(229),
    [anon_sym_SQUOTE_BSLASHr_SQUOTE] = ACTIONS(229),
    [anon_sym_SQUOTE_BSLASHt_SQUOTE] = ACTIONS(229),
    [anon_sym_SQUOTE_BSLASHv_SQUOTE] = ACTIONS(229),
    [aux_sym_char_token1] = ACTIONS(229),
    [aux_sym_char_token2] = ACTIONS(231),
    [anon_sym_LBRACK] = ACTIONS(233),
    [anon_sym_LBRACE] = ACTIONS(235),
    [anon_sym_SLASH] = ACTIONS(237),
    [anon_sym_Tuple_DOTnew] = ACTIONS(239),
    [anon_sym_NamedTuple] = ACTIONS(241),
    [anon_sym_BQUOTE] = ACTIONS(243),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(245),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(41),
    [anon_sym_AT] = ACTIONS(43),
    [anon_sym_AT_AT] = ACTIONS(45),
    [anon_sym___LINE__] = ACTIONS(247),
    [anon_sym___END_LINE__] = ACTIONS(247),
    [anon_sym___FILE__] = ACTIONS(247),
    [anon_sym___DIR__] = ACTIONS(247),
    [aux_sym_constant_token1] = ACTIONS(249),
    [anon_sym_class] = ACTIONS(251),
  },
  [42] = {
    [sym__expression] = STATE(206),
    [sym_bool] = STATE(206),
    [sym_float] = STATE(206),
    [sym_integer] = STATE(206),
    [sym_symbol] = STATE(206),
    [sym_char] = STATE(206),
    [sym_string] = STATE(206),
    [sym_array] = STATE(206),
    [sym_hash] = STATE(206),
    [sym_index_expression] = STATE(154),
    [sym_regex] = STATE(206),
    [sym_tuple] = STATE(206),
    [sym_namedTupleLiteral] = STATE(206),
    [sym_commandLiteral] = STATE(206),
    [sym_local_variable] = STATE(268),
    [sym_instance_variable] = STATE(268),
    [sym_class_variable] = STATE(268),
    [sym_constant] = STATE(94),
    [sym__variable] = STATE(268),
    [sym_assignment] = STATE(206),
    [sym_class_definition] = STATE(206),
    [sym_nil] = ACTIONS(309),
    [anon_sym_true] = ACTIONS(255),
    [anon_sym_false] = ACTIONS(255),
    [aux_sym_float_token1] = ACTIONS(154),
    [aux_sym_float_token2] = ACTIONS(156),
    [aux_sym_float_token3] = ACTIONS(156),
    [aux_sym_integer_token1] = ACTIONS(158),
    [aux_sym_integer_token2] = ACTIONS(158),
    [aux_sym_integer_token3] = ACTIONS(158),
    [aux_sym_integer_token4] = ACTIONS(160),
    [anon_sym_COLON] = ACTIONS(279),
    [anon_sym_DQUOTE] = ACTIONS(281),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHa_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHb_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHe_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHf_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHn_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHr_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHt_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE_BSLASHv_SQUOTE] = ACTIONS(166),
    [aux_sym_char_token1] = ACTIONS(166),
    [aux_sym_char_token2] = ACTIONS(168),
    [anon_sym_LBRACK] = ACTIONS(170),
    [anon_sym_LBRACE] = ACTIONS(172),
    [anon_sym_SLASH] = ACTIONS(176),
    [anon_sym_Tuple_DOTnew] = ACTIONS(178),
    [anon_sym_NamedTuple] = ACTIONS(261),
    [anon_sym_BQUOTE] = ACTIONS(182),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(184),
    [sym_comment] = ACTIONS(3),
    [aux_sym_local_variable_token1] = ACTIONS(41),
    [anon_sym_AT] = ACTIONS(43),
    [anon_sym_AT_AT] = ACTIONS(45),
    [anon_sym___LINE__] = ACTIONS(263),
    [anon_sym___END_LINE__] = ACTIONS(263),
    [anon_sym___FILE__] = ACTIONS(263),
    [anon_sym___DIR__] = ACTIONS(263),
    [aux_sym_constant_token1] = ACTIONS(188),
    [anon_sym_class] = ACTIONS(265),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 1,
      anon_sym_LPAREN,
    ACTIONS(317), 1,
      anon_sym_COLON_COLON,
    ACTIONS(313), 8,
      aux_sym_float_token2,
      aux_sym_float_token3,
      aux_sym_integer_token4,
      anon_sym_COLON,
      aux_sym_char_token2,
      aux_sym_local_variable_token1,
      anon_sym_AT,
      aux_sym_constant_token1,
    ACTIONS(311), 40,
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
      anon_sym_NamedTuple,
      anon_sym_RPAREN,
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
  [62] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 1,
      anon_sym_COLON_COLON,
    ACTIONS(323), 1,
      anon_sym_LPAREN,
    ACTIONS(321), 8,
      aux_sym_float_token2,
      aux_sym_float_token3,
      aux_sym_integer_token4,
      anon_sym_COLON,
      aux_sym_char_token2,
      aux_sym_local_variable_token1,
      anon_sym_AT,
      aux_sym_constant_token1,
    ACTIONS(319), 40,
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
      anon_sym_NamedTuple,
      anon_sym_RPAREN,
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
  [124] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 7,
      aux_sym_float_token2,
      aux_sym_float_token3,
      aux_sym_integer_token4,
      aux_sym_char_token2,
      aux_sym_local_variable_token1,
      anon_sym_AT,
      aux_sym_constant_token1,
    ACTIONS(325), 41,
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
      anon_sym_NamedTuple,
      anon_sym_RPAREN,
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
  [180] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 7,
      aux_sym_float_token2,
      aux_sym_float_token3,
      aux_sym_integer_token4,
      aux_sym_char_token2,
      aux_sym_local_variable_token1,
      anon_sym_AT,
      aux_sym_constant_token1,
    ACTIONS(329), 41,
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
      anon_sym_NamedTuple,
      anon_sym_RPAREN,
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
  [236] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 7,
      aux_sym_float_token2,
      aux_sym_float_token3,
      aux_sym_integer_token4,
      aux_sym_char_token2,
      aux_sym_local_variable_token1,
      anon_sym_AT,
      aux_sym_constant_token1,
    ACTIONS(333), 41,
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
      anon_sym_NamedTuple,
      anon_sym_RPAREN,
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
  [292] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 7,
      aux_sym_float_token2,
      aux_sym_float_token3,
      aux_sym_integer_token4,
      aux_sym_char_token2,
      aux_sym_local_variable_token1,
      anon_sym_AT,
      aux_sym_constant_token1,
    ACTIONS(337), 41,
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
      anon_sym_NamedTuple,
      anon_sym_RPAREN,
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
  [348] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 8,
      aux_sym_float_token2,
      aux_sym_float_token3,
      aux_sym_integer_token4,
      anon_sym_COLON,
      aux_sym_char_token2,
      aux_sym_local_variable_token1,
      anon_sym_AT,
      aux_sym_constant_token1,
    ACTIONS(341), 38,
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
      anon_sym_NamedTuple,
      anon_sym_LPAREN,
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
  [402] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 1,
      aux_sym_identifier_token1,
    ACTIONS(347), 18,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      aux_sym_float_token2,
      aux_sym_float_token3,
      aux_sym_integer_token4,
      anon_sym_COLON,
      aux_sym_char_token2,
      anon_sym_NamedTuple,
      aux_sym_local_variable_token1,
      anon_sym_AT,
      anon_sym___LINE__,
      anon_sym___END_LINE__,
      anon_sym___FILE__,
      anon_sym___DIR__,
      aux_sym_constant_token1,
      anon_sym_class,
      anon_sym_end,
    ACTIONS(349), 27,
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
      anon_sym_LPAREN,
      anon_sym_BQUOTE,
      anon_sym_PERCENTx_LPAREN,
      anon_sym_AT_AT,
      anon_sym_LT,
      anon_sym_COLON_COLON,
  [458] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(347), 8,
      aux_sym_float_token2,
      aux_sym_float_token3,
      aux_sym_integer_token4,
      anon_sym_COLON,
      aux_sym_char_token2,
      aux_sym_local_variable_token1,
      anon_sym_AT,
      aux_sym_constant_token1,
    ACTIONS(349), 38,
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
      anon_sym_NamedTuple,
      anon_sym_LPAREN,
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
  [512] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 7,
      aux_sym_float_token2,
      aux_sym_float_token3,
      aux_sym_integer_token4,
      aux_sym_char_token2,
      aux_sym_local_variable_token1,
      anon_sym_AT,
      aux_sym_constant_token1,
    ACTIONS(351), 35,
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
      anon_sym_NamedTuple,
      anon_sym_BQUOTE,
      anon_sym_PERCENTx_LPAREN,
      anon_sym_AT_AT,
      anon_sym___LINE__,
      anon_sym___END_LINE__,
      anon_sym___FILE__,
      anon_sym___DIR__,
      anon_sym_class,
      anon_sym_end,
  [562] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 7,
      aux_sym_float_token2,
      aux_sym_float_token3,
      aux_sym_integer_token4,
      aux_sym_char_token2,
      aux_sym_local_variable_token1,
      anon_sym_AT,
      aux_sym_constant_token1,
    ACTIONS(351), 35,
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
      anon_sym_NamedTuple,
      anon_sym_BQUOTE,
      anon_sym_PERCENTx_LPAREN,
      anon_sym_AT_AT,
      anon_sym___LINE__,
      anon_sym___END_LINE__,
      anon_sym___FILE__,
      anon_sym___DIR__,
      anon_sym_class,
  [612] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      anon_sym_DQUOTE,
    STATE(139), 1,
      sym__operator,
    ACTIONS(359), 7,
      anon_sym_LT,
      anon_sym_STAR,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_LBRACK_RBRACK,
      anon_sym_BANG,
    ACTIONS(355), 20,
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
  [653] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(363), 1,
      anon_sym_DQUOTE,
    STATE(305), 1,
      sym__operator,
    ACTIONS(365), 7,
      anon_sym_LT,
      anon_sym_STAR,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_LBRACK_RBRACK,
      anon_sym_BANG,
    ACTIONS(361), 20,
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
  [694] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 1,
      anon_sym_DQUOTE,
    STATE(276), 1,
      sym__operator,
    ACTIONS(371), 7,
      anon_sym_LT,
      anon_sym_STAR,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_LBRACK_RBRACK,
      anon_sym_BANG,
    ACTIONS(367), 20,
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
  [735] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      anon_sym_DQUOTE,
    STATE(139), 1,
      sym__operator,
    ACTIONS(359), 7,
      anon_sym_LT,
      anon_sym_STAR,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_LBRACK_RBRACK,
      anon_sym_BANG,
    ACTIONS(355), 20,
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
  [776] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 1,
      anon_sym_DQUOTE,
    STATE(139), 1,
      sym__operator,
    ACTIONS(359), 7,
      anon_sym_LT,
      anon_sym_STAR,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_LBRACK_RBRACK,
      anon_sym_BANG,
    ACTIONS(355), 20,
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
  [817] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 1,
      anon_sym_DQUOTE,
    STATE(139), 1,
      sym__operator,
    ACTIONS(359), 7,
      anon_sym_LT,
      anon_sym_STAR,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_LBRACK_RBRACK,
      anon_sym_BANG,
    ACTIONS(355), 20,
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
  [858] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(347), 1,
      anon_sym_EQ,
    ACTIONS(379), 1,
      aux_sym_identifier_token1,
    ACTIONS(349), 8,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
      anon_sym_LBRACK2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLON_COLON,
  [878] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 1,
      anon_sym_EQ,
    ACTIONS(341), 8,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
      anon_sym_LBRACK2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLON_COLON,
  [895] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(347), 1,
      anon_sym_EQ,
    ACTIONS(349), 8,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
      anon_sym_LBRACK2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLON_COLON,
  [912] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 1,
      aux_sym_constant_token1,
    STATE(43), 1,
      sym_constant,
    STATE(91), 1,
      aux_sym_type_repeat1,
    STATE(228), 1,
      sym_type,
    ACTIONS(263), 4,
      anon_sym___LINE__,
      anon_sym___END_LINE__,
      anon_sym___FILE__,
      anon_sym___DIR__,
  [934] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 1,
      aux_sym_constant_token1,
    STATE(43), 1,
      sym_constant,
    STATE(91), 1,
      aux_sym_type_repeat1,
    STATE(363), 1,
      sym_type,
    ACTIONS(263), 4,
      anon_sym___LINE__,
      anon_sym___END_LINE__,
      anon_sym___FILE__,
      anon_sym___DIR__,
  [956] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 1,
      aux_sym_constant_token1,
    STATE(43), 1,
      sym_constant,
    STATE(91), 1,
      aux_sym_type_repeat1,
    STATE(219), 1,
      sym_type,
    ACTIONS(263), 4,
      anon_sym___LINE__,
      anon_sym___END_LINE__,
      anon_sym___FILE__,
      anon_sym___DIR__,
  [978] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 1,
      aux_sym_constant_token1,
    STATE(43), 1,
      sym_constant,
    STATE(91), 1,
      aux_sym_type_repeat1,
    STATE(196), 1,
      sym_type,
    ACTIONS(263), 4,
      anon_sym___LINE__,
      anon_sym___END_LINE__,
      anon_sym___FILE__,
      anon_sym___DIR__,
  [1000] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 1,
      aux_sym_constant_token1,
    STATE(43), 1,
      sym_constant,
    STATE(91), 1,
      aux_sym_type_repeat1,
    STATE(217), 1,
      sym_type,
    ACTIONS(263), 4,
      anon_sym___LINE__,
      anon_sym___END_LINE__,
      anon_sym___FILE__,
      anon_sym___DIR__,
  [1022] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 1,
      aux_sym_constant_token1,
    STATE(43), 1,
      sym_constant,
    STATE(91), 1,
      aux_sym_type_repeat1,
    STATE(291), 1,
      sym_type,
    ACTIONS(263), 4,
      anon_sym___LINE__,
      anon_sym___END_LINE__,
      anon_sym___FILE__,
      anon_sym___DIR__,
  [1044] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 1,
      aux_sym_constant_token1,
    STATE(4), 1,
      sym_type,
    STATE(43), 1,
      sym_constant,
    STATE(89), 1,
      aux_sym_type_repeat1,
    ACTIONS(383), 4,
      anon_sym___LINE__,
      anon_sym___END_LINE__,
      anon_sym___FILE__,
      anon_sym___DIR__,
  [1066] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 1,
      aux_sym_constant_token1,
    STATE(43), 1,
      sym_constant,
    STATE(91), 1,
      aux_sym_type_repeat1,
    STATE(279), 1,
      sym_type,
    ACTIONS(263), 4,
      anon_sym___LINE__,
      anon_sym___END_LINE__,
      anon_sym___FILE__,
      anon_sym___DIR__,
  [1088] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 1,
      aux_sym_constant_token1,
    STATE(7), 1,
      sym_type,
    STATE(43), 1,
      sym_constant,
    STATE(89), 1,
      aux_sym_type_repeat1,
    ACTIONS(383), 4,
      anon_sym___LINE__,
      anon_sym___END_LINE__,
      anon_sym___FILE__,
      anon_sym___DIR__,
  [1110] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 1,
      aux_sym_constant_token1,
    STATE(43), 1,
      sym_constant,
    STATE(91), 1,
      aux_sym_type_repeat1,
    STATE(112), 1,
      sym_type,
    ACTIONS(263), 4,
      anon_sym___LINE__,
      anon_sym___END_LINE__,
      anon_sym___FILE__,
      anon_sym___DIR__,
  [1132] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 1,
      aux_sym_constant_token1,
    STATE(10), 1,
      sym_type,
    STATE(43), 1,
      sym_constant,
    STATE(89), 1,
      aux_sym_type_repeat1,
    ACTIONS(383), 4,
      anon_sym___LINE__,
      anon_sym___END_LINE__,
      anon_sym___FILE__,
      anon_sym___DIR__,
  [1154] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 1,
      aux_sym_constant_token1,
    STATE(43), 1,
      sym_constant,
    STATE(91), 1,
      aux_sym_type_repeat1,
    STATE(198), 1,
      sym_type,
    ACTIONS(263), 4,
      anon_sym___LINE__,
      anon_sym___END_LINE__,
      anon_sym___FILE__,
      anon_sym___DIR__,
  [1176] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 1,
      aux_sym_constant_token1,
    STATE(15), 1,
      sym_type,
    STATE(43), 1,
      sym_constant,
    STATE(89), 1,
      aux_sym_type_repeat1,
    ACTIONS(383), 4,
      anon_sym___LINE__,
      anon_sym___END_LINE__,
      anon_sym___FILE__,
      anon_sym___DIR__,
  [1198] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 1,
      aux_sym_constant_token1,
    STATE(43), 1,
      sym_constant,
    STATE(91), 1,
      aux_sym_type_repeat1,
    STATE(365), 1,
      sym_type,
    ACTIONS(263), 4,
      anon_sym___LINE__,
      anon_sym___END_LINE__,
      anon_sym___FILE__,
      anon_sym___DIR__,
  [1220] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 1,
      aux_sym_constant_token1,
    STATE(43), 1,
      sym_constant,
    STATE(91), 1,
      aux_sym_type_repeat1,
    STATE(191), 1,
      sym_type,
    ACTIONS(263), 4,
      anon_sym___LINE__,
      anon_sym___END_LINE__,
      anon_sym___FILE__,
      anon_sym___DIR__,
  [1242] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 1,
      aux_sym_constant_token1,
    STATE(43), 1,
      sym_constant,
    STATE(91), 1,
      aux_sym_type_repeat1,
    STATE(204), 1,
      sym_type,
    ACTIONS(263), 4,
      anon_sym___LINE__,
      anon_sym___END_LINE__,
      anon_sym___FILE__,
      anon_sym___DIR__,
  [1264] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 1,
      aux_sym_constant_token1,
    STATE(43), 1,
      sym_constant,
    STATE(91), 1,
      aux_sym_type_repeat1,
    STATE(184), 1,
      sym_type,
    ACTIONS(263), 4,
      anon_sym___LINE__,
      anon_sym___END_LINE__,
      anon_sym___FILE__,
      anon_sym___DIR__,
  [1286] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 1,
      aux_sym_constant_token1,
    STATE(90), 1,
      aux_sym_type_repeat1,
    STATE(190), 1,
      sym_constant,
    STATE(341), 1,
      sym_type,
    ACTIONS(383), 4,
      anon_sym___LINE__,
      anon_sym___END_LINE__,
      anon_sym___FILE__,
      anon_sym___DIR__,
  [1308] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 1,
      aux_sym_constant_token1,
    STATE(43), 1,
      sym_constant,
    STATE(91), 1,
      aux_sym_type_repeat1,
    STATE(230), 1,
      sym_type,
    ACTIONS(263), 4,
      anon_sym___LINE__,
      anon_sym___END_LINE__,
      anon_sym___FILE__,
      anon_sym___DIR__,
  [1330] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 1,
      aux_sym_constant_token1,
    STATE(87), 1,
      aux_sym_type_repeat1,
    STATE(142), 1,
      sym_constant,
    STATE(249), 1,
      sym_type,
    ACTIONS(47), 4,
      anon_sym___LINE__,
      anon_sym___END_LINE__,
      anon_sym___FILE__,
      anon_sym___DIR__,
  [1352] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 1,
      aux_sym_constant_token1,
    STATE(3), 1,
      sym_type,
    STATE(43), 1,
      sym_constant,
    STATE(89), 1,
      aux_sym_type_repeat1,
    ACTIONS(383), 4,
      anon_sym___LINE__,
      anon_sym___END_LINE__,
      anon_sym___FILE__,
      anon_sym___DIR__,
  [1374] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 1,
      aux_sym_constant_token1,
    STATE(43), 1,
      sym_constant,
    STATE(91), 1,
      aux_sym_type_repeat1,
    STATE(318), 1,
      sym_type,
    ACTIONS(263), 4,
      anon_sym___LINE__,
      anon_sym___END_LINE__,
      anon_sym___FILE__,
      anon_sym___DIR__,
  [1396] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 1,
      aux_sym_constant_token1,
    STATE(2), 1,
      sym_type,
    STATE(43), 1,
      sym_constant,
    STATE(89), 1,
      aux_sym_type_repeat1,
    ACTIONS(383), 4,
      anon_sym___LINE__,
      anon_sym___END_LINE__,
      anon_sym___FILE__,
      anon_sym___DIR__,
  [1418] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      aux_sym_constant_token1,
    STATE(86), 1,
      aux_sym_type_repeat1,
    STATE(360), 1,
      sym_constant,
    ACTIONS(391), 4,
      anon_sym___LINE__,
      anon_sym___END_LINE__,
      anon_sym___FILE__,
      anon_sym___DIR__,
  [1437] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 1,
      aux_sym_constant_token1,
    STATE(86), 1,
      aux_sym_type_repeat1,
    STATE(127), 1,
      sym_constant,
    ACTIONS(47), 4,
      anon_sym___LINE__,
      anon_sym___END_LINE__,
      anon_sym___FILE__,
      anon_sym___DIR__,
  [1456] = 4,
    ACTIONS(397), 1,
      aux_sym_identifier_token1,
    ACTIONS(399), 1,
      sym_comment,
    ACTIONS(349), 2,
      aux_sym__statement_token1,
      anon_sym_LBRACK2,
    ACTIONS(347), 4,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_EQ,
      anon_sym_COLON_COLON,
  [1473] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 1,
      aux_sym_constant_token1,
    STATE(44), 1,
      sym_constant,
    STATE(86), 1,
      aux_sym_type_repeat1,
    ACTIONS(383), 4,
      anon_sym___LINE__,
      anon_sym___END_LINE__,
      anon_sym___FILE__,
      anon_sym___DIR__,
  [1492] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 1,
      aux_sym_constant_token1,
    STATE(86), 1,
      aux_sym_type_repeat1,
    STATE(199), 1,
      sym_constant,
    ACTIONS(383), 4,
      anon_sym___LINE__,
      anon_sym___END_LINE__,
      anon_sym___FILE__,
      anon_sym___DIR__,
  [1511] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 1,
      aux_sym_constant_token1,
    STATE(44), 1,
      sym_constant,
    STATE(86), 1,
      aux_sym_type_repeat1,
    ACTIONS(263), 4,
      anon_sym___LINE__,
      anon_sym___END_LINE__,
      anon_sym___FILE__,
      anon_sym___DIR__,
  [1530] = 3,
    ACTIONS(399), 1,
      sym_comment,
    ACTIONS(403), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
    ACTIONS(401), 4,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [1544] = 3,
    ACTIONS(399), 1,
      sym_comment,
    ACTIONS(349), 2,
      aux_sym__statement_token1,
      anon_sym_LBRACK2,
    ACTIONS(347), 4,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_EQ,
      anon_sym_COLON_COLON,
  [1558] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 1,
      anon_sym_LBRACK2,
    ACTIONS(409), 1,
      anon_sym_EQ,
    ACTIONS(405), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [1574] = 3,
    ACTIONS(399), 1,
      sym_comment,
    ACTIONS(341), 2,
      aux_sym__statement_token1,
      anon_sym_LBRACK2,
    ACTIONS(343), 4,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_EQ,
      anon_sym_COLON_COLON,
  [1588] = 3,
    ACTIONS(399), 1,
      sym_comment,
    ACTIONS(403), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
    ACTIONS(411), 4,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [1602] = 3,
    ACTIONS(399), 1,
      sym_comment,
    ACTIONS(403), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
    ACTIONS(411), 3,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [1615] = 3,
    ACTIONS(399), 1,
      sym_comment,
    ACTIONS(403), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
    ACTIONS(401), 3,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [1628] = 3,
    ACTIONS(399), 1,
      sym_comment,
    ACTIONS(403), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
    ACTIONS(413), 3,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [1641] = 3,
    ACTIONS(399), 1,
      sym_comment,
    ACTIONS(403), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
    ACTIONS(415), 3,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [1654] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 1,
      anon_sym_EQ,
    ACTIONS(417), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [1667] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 5,
      anon_sym___LINE__,
      anon_sym___END_LINE__,
      anon_sym___FILE__,
      anon_sym___DIR__,
      aux_sym_constant_token1,
  [1678] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [1688] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 1,
      anon_sym_COLON,
    ACTIONS(405), 3,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [1700] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 1,
      anon_sym_COLON,
    ACTIONS(405), 3,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [1712] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 1,
      anon_sym_COMMA,
    ACTIONS(431), 1,
      anon_sym_EQ_GT,
    ACTIONS(433), 1,
      anon_sym_RBRACE,
    STATE(207), 1,
      aux_sym_array_repeat1,
  [1728] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [1738] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [1748] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [1758] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [1768] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [1778] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [1788] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [1798] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [1808] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [1818] = 3,
    ACTIONS(399), 1,
      sym_comment,
    ACTIONS(403), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
    ACTIONS(413), 2,
      anon_sym_SEMI,
      aux_sym__statement_token1,
  [1830] = 3,
    ACTIONS(399), 1,
      sym_comment,
    ACTIONS(401), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(403), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
  [1842] = 3,
    ACTIONS(399), 1,
      sym_comment,
    ACTIONS(403), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
    ACTIONS(411), 2,
      anon_sym_SEMI,
      aux_sym__statement_token1,
  [1854] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 1,
      aux_sym_identifier_token1,
    ACTIONS(349), 3,
      anon_sym_RBRACK2,
      anon_sym_LPAREN,
      anon_sym_COLON_COLON,
  [1866] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [1876] = 3,
    ACTIONS(399), 1,
      sym_comment,
    ACTIONS(403), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
    ACTIONS(415), 2,
      anon_sym_SEMI,
      aux_sym__statement_token1,
  [1888] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [1898] = 3,
    ACTIONS(399), 1,
      sym_comment,
    ACTIONS(403), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
    ACTIONS(415), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1910] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 1,
      aux_sym_identifier_token1,
    ACTIONS(461), 1,
      anon_sym_DQUOTE,
    STATE(317), 2,
      sym_identifier,
      sym_string,
  [1924] = 3,
    ACTIONS(399), 1,
      sym_comment,
    ACTIONS(403), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
    ACTIONS(413), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1936] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [1946] = 5,
    ACTIONS(319), 1,
      aux_sym__statement_token1,
    ACTIONS(321), 1,
      anon_sym_SEMI,
    ACTIONS(399), 1,
      sym_comment,
    ACTIONS(465), 1,
      anon_sym_LPAREN,
    ACTIONS(467), 1,
      anon_sym_COLON_COLON,
  [1962] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 1,
      anon_sym_COMMA,
    ACTIONS(469), 1,
      anon_sym_EQ_GT,
    ACTIONS(471), 1,
      anon_sym_RBRACE,
    STATE(242), 1,
      aux_sym_array_repeat1,
  [1978] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [1988] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 1,
      anon_sym_COMMA,
    ACTIONS(475), 1,
      anon_sym_EQ_GT,
    ACTIONS(477), 1,
      anon_sym_RBRACE,
    STATE(210), 1,
      aux_sym_array_repeat1,
  [2004] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [2014] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(481), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [2024] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [2034] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(485), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [2044] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(487), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [2054] = 3,
    ACTIONS(399), 1,
      sym_comment,
    ACTIONS(401), 2,
      anon_sym_SEMI,
      aux_sym__statement_token1,
    ACTIONS(403), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
  [2066] = 5,
    ACTIONS(399), 1,
      sym_comment,
    ACTIONS(405), 1,
      aux_sym__statement_token1,
    ACTIONS(407), 1,
      anon_sym_LBRACK2,
    ACTIONS(409), 1,
      anon_sym_EQ,
    ACTIONS(489), 1,
      anon_sym_SEMI,
  [2082] = 3,
    ACTIONS(399), 1,
      sym_comment,
    ACTIONS(403), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
    ACTIONS(411), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2094] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(491), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [2104] = 3,
    ACTIONS(399), 1,
      sym_comment,
    ACTIONS(401), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(403), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
  [2116] = 3,
    ACTIONS(399), 1,
      sym_comment,
    ACTIONS(403), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
    ACTIONS(413), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2128] = 5,
    ACTIONS(311), 1,
      aux_sym__statement_token1,
    ACTIONS(313), 1,
      anon_sym_SEMI,
    ACTIONS(399), 1,
      sym_comment,
    ACTIONS(467), 1,
      anon_sym_COLON_COLON,
    ACTIONS(493), 1,
      anon_sym_LPAREN,
  [2144] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [2154] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 1,
      aux_sym_identifier_token1,
    ACTIONS(349), 3,
      anon_sym_LBRACK2,
      anon_sym_RBRACK2,
      anon_sym_EQ,
  [2166] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 1,
      anon_sym_COLON,
    ACTIONS(405), 3,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [2178] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      anon_sym_EQ,
    ACTIONS(405), 3,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [2190] = 3,
    ACTIONS(399), 1,
      sym_comment,
    ACTIONS(403), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
    ACTIONS(415), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2202] = 3,
    ACTIONS(399), 1,
      sym_comment,
    ACTIONS(403), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
    ACTIONS(411), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2214] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(503), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [2224] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(505), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [2234] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [2244] = 3,
    ACTIONS(399), 1,
      sym_comment,
    ACTIONS(417), 1,
      aux_sym__statement_token1,
    ACTIONS(419), 2,
      anon_sym_SEMI,
      anon_sym_EQ,
  [2255] = 4,
    ACTIONS(399), 1,
      sym_comment,
    ACTIONS(509), 1,
      anon_sym_DQUOTE,
    ACTIONS(511), 1,
      aux_sym_symbol_token1,
    STATE(173), 1,
      aux_sym_symbol_repeat1,
  [2268] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 1,
      anon_sym_EQ,
    ACTIONS(405), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2279] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 1,
      anon_sym_EQ,
    ACTIONS(405), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2290] = 4,
    ACTIONS(399), 1,
      sym_comment,
    ACTIONS(517), 1,
      anon_sym_DQUOTE,
    ACTIONS(519), 1,
      aux_sym_symbol_token1,
    STATE(162), 1,
      aux_sym_symbol_repeat1,
  [2303] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(521), 1,
      aux_sym_identifier_token1,
    ACTIONS(523), 2,
      anon_sym_LBRACK2,
      anon_sym_EQ,
  [2314] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(525), 1,
      anon_sym_COMMA,
    ACTIONS(528), 1,
      anon_sym_RPAREN,
    STATE(158), 1,
      aux_sym_namedTupleLiteral_repeat1,
  [2327] = 4,
    ACTIONS(399), 1,
      sym_comment,
    ACTIONS(405), 1,
      aux_sym__statement_token1,
    ACTIONS(489), 1,
      anon_sym_SEMI,
    ACTIONS(530), 1,
      anon_sym_EQ,
  [2340] = 4,
    ACTIONS(399), 1,
      sym_comment,
    ACTIONS(532), 1,
      anon_sym_DQUOTE,
    ACTIONS(534), 1,
      aux_sym_symbol_token1,
    STATE(170), 1,
      aux_sym_symbol_repeat1,
  [2353] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      anon_sym_COMMA,
    ACTIONS(538), 1,
      anon_sym_RPAREN,
    STATE(163), 1,
      aux_sym_type_repeat2,
  [2366] = 4,
    ACTIONS(399), 1,
      sym_comment,
    ACTIONS(540), 1,
      anon_sym_DQUOTE,
    ACTIONS(542), 1,
      aux_sym_symbol_token1,
    STATE(171), 1,
      aux_sym_symbol_repeat1,
  [2379] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 1,
      anon_sym_COMMA,
    ACTIONS(547), 1,
      anon_sym_RPAREN,
    STATE(163), 1,
      aux_sym_type_repeat2,
  [2392] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 1,
      anon_sym_COMMA,
    ACTIONS(551), 1,
      anon_sym_RBRACK,
    STATE(203), 1,
      aux_sym_array_repeat1,
  [2405] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 1,
      anon_sym_COMMA,
    ACTIONS(555), 1,
      anon_sym_RPAREN,
    STATE(158), 1,
      aux_sym_namedTupleLiteral_repeat1,
  [2418] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 1,
      anon_sym_COMMA,
    ACTIONS(560), 1,
      anon_sym_RBRACE,
    STATE(166), 1,
      aux_sym_array_repeat1,
  [2431] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(562), 1,
      aux_sym_identifier_token1,
    ACTIONS(564), 2,
      anon_sym_LBRACK2,
      anon_sym_EQ,
  [2442] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(566), 1,
      aux_sym_identifier_token1,
    ACTIONS(568), 2,
      anon_sym_LBRACK2,
      anon_sym_EQ,
  [2453] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(570), 1,
      anon_sym_COMMA,
    ACTIONS(573), 1,
      anon_sym_RBRACE,
    STATE(169), 1,
      aux_sym_namedTupleLiteral_repeat2,
  [2466] = 4,
    ACTIONS(399), 1,
      sym_comment,
    ACTIONS(542), 1,
      aux_sym_symbol_token1,
    ACTIONS(575), 1,
      anon_sym_DQUOTE,
    STATE(171), 1,
      aux_sym_symbol_repeat1,
  [2479] = 3,
    ACTIONS(399), 1,
      sym_comment,
    STATE(171), 1,
      aux_sym_symbol_repeat1,
    ACTIONS(577), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
  [2490] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(580), 1,
      anon_sym_COMMA,
    ACTIONS(583), 1,
      anon_sym_RBRACE,
    STATE(172), 1,
      aux_sym_hash_repeat1,
  [2503] = 4,
    ACTIONS(399), 1,
      sym_comment,
    ACTIONS(542), 1,
      aux_sym_symbol_token1,
    ACTIONS(585), 1,
      anon_sym_DQUOTE,
    STATE(171), 1,
      aux_sym_symbol_repeat1,
  [2516] = 4,
    ACTIONS(399), 1,
      sym_comment,
    ACTIONS(542), 1,
      aux_sym_symbol_token1,
    ACTIONS(587), 1,
      anon_sym_DQUOTE,
    STATE(171), 1,
      aux_sym_symbol_repeat1,
  [2529] = 4,
    ACTIONS(399), 1,
      sym_comment,
    ACTIONS(589), 1,
      anon_sym_DQUOTE,
    ACTIONS(591), 1,
      aux_sym_symbol_token1,
    STATE(174), 1,
      aux_sym_symbol_repeat1,
  [2542] = 4,
    ACTIONS(399), 1,
      sym_comment,
    ACTIONS(542), 1,
      aux_sym_symbol_token1,
    ACTIONS(593), 1,
      anon_sym_DQUOTE,
    STATE(171), 1,
      aux_sym_symbol_repeat1,
  [2555] = 4,
    ACTIONS(399), 1,
      sym_comment,
    ACTIONS(542), 1,
      aux_sym_symbol_token1,
    ACTIONS(595), 1,
      anon_sym_DQUOTE,
    STATE(171), 1,
      aux_sym_symbol_repeat1,
  [2568] = 4,
    ACTIONS(399), 1,
      sym_comment,
    ACTIONS(597), 1,
      anon_sym_DQUOTE,
    ACTIONS(599), 1,
      aux_sym_symbol_token1,
    STATE(176), 1,
      aux_sym_symbol_repeat1,
  [2581] = 4,
    ACTIONS(399), 1,
      sym_comment,
    ACTIONS(601), 1,
      anon_sym_DQUOTE,
    ACTIONS(603), 1,
      aux_sym_symbol_token1,
    STATE(177), 1,
      aux_sym_symbol_repeat1,
  [2594] = 4,
    ACTIONS(399), 1,
      sym_comment,
    ACTIONS(542), 1,
      aux_sym_symbol_token1,
    ACTIONS(605), 1,
      anon_sym_DQUOTE,
    STATE(171), 1,
      aux_sym_symbol_repeat1,
  [2607] = 4,
    ACTIONS(399), 1,
      sym_comment,
    ACTIONS(542), 1,
      aux_sym_symbol_token1,
    ACTIONS(607), 1,
      anon_sym_DQUOTE,
    STATE(171), 1,
      aux_sym_symbol_repeat1,
  [2620] = 4,
    ACTIONS(399), 1,
      sym_comment,
    ACTIONS(609), 1,
      anon_sym_DQUOTE,
    ACTIONS(611), 1,
      aux_sym_symbol_token1,
    STATE(180), 1,
      aux_sym_symbol_repeat1,
  [2633] = 4,
    ACTIONS(399), 1,
      sym_comment,
    ACTIONS(613), 1,
      anon_sym_DQUOTE,
    ACTIONS(615), 1,
      aux_sym_symbol_token1,
    STATE(181), 1,
      aux_sym_symbol_repeat1,
  [2646] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      anon_sym_COMMA,
    ACTIONS(617), 1,
      anon_sym_RPAREN,
    STATE(161), 1,
      aux_sym_type_repeat2,
  [2659] = 4,
    ACTIONS(399), 1,
      sym_comment,
    ACTIONS(542), 1,
      aux_sym_symbol_token1,
    ACTIONS(619), 1,
      anon_sym_DQUOTE,
    STATE(171), 1,
      aux_sym_symbol_repeat1,
  [2672] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 1,
      anon_sym_RBRACK2,
    ACTIONS(407), 2,
      anon_sym_LBRACK2,
      anon_sym_EQ,
  [2683] = 4,
    ACTIONS(399), 1,
      sym_comment,
    ACTIONS(542), 1,
      aux_sym_symbol_token1,
    ACTIONS(621), 1,
      anon_sym_DQUOTE,
    STATE(171), 1,
      aux_sym_symbol_repeat1,
  [2696] = 4,
    ACTIONS(399), 1,
      sym_comment,
    ACTIONS(623), 1,
      anon_sym_DQUOTE,
    ACTIONS(625), 1,
      aux_sym_symbol_token1,
    STATE(185), 1,
      aux_sym_symbol_repeat1,
  [2709] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      anon_sym_COMMA,
    ACTIONS(627), 1,
      anon_sym_RPAREN,
    STATE(163), 1,
      aux_sym_type_repeat2,
  [2722] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 1,
      anon_sym_RBRACK2,
    ACTIONS(317), 1,
      anon_sym_COLON_COLON,
    ACTIONS(629), 1,
      anon_sym_LPAREN,
  [2735] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 1,
      anon_sym_COMMA,
    ACTIONS(631), 1,
      anon_sym_RPAREN,
    STATE(165), 1,
      aux_sym_namedTupleLiteral_repeat1,
  [2748] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(633), 1,
      anon_sym_COMMA,
    ACTIONS(635), 1,
      anon_sym_RBRACE,
    STATE(169), 1,
      aux_sym_namedTupleLiteral_repeat2,
  [2761] = 4,
    ACTIONS(399), 1,
      sym_comment,
    ACTIONS(637), 1,
      anon_sym_DQUOTE,
    ACTIONS(639), 1,
      aux_sym_symbol_token1,
    STATE(187), 1,
      aux_sym_symbol_repeat1,
  [2774] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      anon_sym_COMMA,
    ACTIONS(641), 1,
      anon_sym_RPAREN,
    STATE(163), 1,
      aux_sym_type_repeat2,
  [2787] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 1,
      anon_sym_COMMA,
    ACTIONS(643), 1,
      anon_sym_RPAREN,
    STATE(158), 1,
      aux_sym_namedTupleLiteral_repeat1,
  [2800] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      anon_sym_COMMA,
    ACTIONS(645), 1,
      anon_sym_RPAREN,
    STATE(194), 1,
      aux_sym_type_repeat2,
  [2813] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      anon_sym_COMMA,
    ACTIONS(647), 1,
      anon_sym_RPAREN,
    STATE(163), 1,
      aux_sym_type_repeat2,
  [2826] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 1,
      anon_sym_COMMA,
    ACTIONS(649), 1,
      anon_sym_RPAREN,
    STATE(195), 1,
      aux_sym_namedTupleLiteral_repeat1,
  [2839] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 1,
      anon_sym_COLON_COLON,
    ACTIONS(319), 1,
      anon_sym_RBRACK2,
    ACTIONS(651), 1,
      anon_sym_LPAREN,
  [2852] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(633), 1,
      anon_sym_COMMA,
    ACTIONS(653), 1,
      anon_sym_RBRACE,
    STATE(169), 1,
      aux_sym_namedTupleLiteral_repeat2,
  [2865] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(655), 1,
      anon_sym_COMMA,
    ACTIONS(657), 1,
      anon_sym_RBRACE,
    STATE(172), 1,
      aux_sym_hash_repeat1,
  [2878] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(655), 1,
      anon_sym_COMMA,
    ACTIONS(659), 1,
      anon_sym_RBRACE,
    STATE(172), 1,
      aux_sym_hash_repeat1,
  [2891] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 1,
      anon_sym_COMMA,
    ACTIONS(661), 1,
      anon_sym_RBRACK,
    STATE(234), 1,
      aux_sym_array_repeat1,
  [2904] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      anon_sym_COMMA,
    ACTIONS(663), 1,
      anon_sym_RPAREN,
    STATE(197), 1,
      aux_sym_type_repeat2,
  [2917] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(633), 1,
      anon_sym_COMMA,
    ACTIONS(665), 1,
      anon_sym_RBRACE,
    STATE(200), 1,
      aux_sym_namedTupleLiteral_repeat2,
  [2930] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(655), 1,
      anon_sym_COMMA,
    ACTIONS(667), 1,
      anon_sym_RBRACE,
    STATE(202), 1,
      aux_sym_hash_repeat1,
  [2943] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 1,
      anon_sym_COMMA,
    ACTIONS(669), 1,
      anon_sym_RBRACE,
    STATE(166), 1,
      aux_sym_array_repeat1,
  [2956] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 1,
      anon_sym_COMMA,
    ACTIONS(671), 1,
      anon_sym_RBRACK,
    STATE(234), 1,
      aux_sym_array_repeat1,
  [2969] = 4,
    ACTIONS(399), 1,
      sym_comment,
    ACTIONS(542), 1,
      aux_sym_symbol_token1,
    ACTIONS(673), 1,
      anon_sym_DQUOTE,
    STATE(171), 1,
      aux_sym_symbol_repeat1,
  [2982] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 1,
      anon_sym_COMMA,
    ACTIONS(675), 1,
      anon_sym_RBRACE,
    STATE(166), 1,
      aux_sym_array_repeat1,
  [2995] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 1,
      anon_sym_COMMA,
    ACTIONS(677), 1,
      anon_sym_RBRACK,
    STATE(208), 1,
      aux_sym_array_repeat1,
  [3008] = 4,
    ACTIONS(399), 1,
      sym_comment,
    ACTIONS(542), 1,
      aux_sym_symbol_token1,
    ACTIONS(679), 1,
      anon_sym_DQUOTE,
    STATE(171), 1,
      aux_sym_symbol_repeat1,
  [3021] = 4,
    ACTIONS(399), 1,
      sym_comment,
    ACTIONS(681), 1,
      anon_sym_DQUOTE,
    ACTIONS(683), 1,
      aux_sym_symbol_token1,
    STATE(209), 1,
      aux_sym_symbol_repeat1,
  [3034] = 4,
    ACTIONS(399), 1,
      sym_comment,
    ACTIONS(685), 1,
      anon_sym_DQUOTE,
    ACTIONS(687), 1,
      aux_sym_symbol_token1,
    STATE(212), 1,
      aux_sym_symbol_repeat1,
  [3047] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      anon_sym_COMMA,
    ACTIONS(689), 1,
      anon_sym_RPAREN,
    STATE(163), 1,
      aux_sym_type_repeat2,
  [3060] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 1,
      anon_sym_COMMA,
    ACTIONS(691), 1,
      anon_sym_RPAREN,
    STATE(158), 1,
      aux_sym_namedTupleLiteral_repeat1,
  [3073] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      anon_sym_COMMA,
    ACTIONS(693), 1,
      anon_sym_RPAREN,
    STATE(215), 1,
      aux_sym_type_repeat2,
  [3086] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      anon_sym_COMMA,
    ACTIONS(695), 1,
      anon_sym_RPAREN,
    STATE(163), 1,
      aux_sym_type_repeat2,
  [3099] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 1,
      anon_sym_COMMA,
    ACTIONS(697), 1,
      anon_sym_RPAREN,
    STATE(216), 1,
      aux_sym_namedTupleLiteral_repeat1,
  [3112] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 3,
      anon_sym_LBRACK2,
      anon_sym_RBRACK2,
      anon_sym_EQ,
  [3121] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(633), 1,
      anon_sym_COMMA,
    ACTIONS(699), 1,
      anon_sym_RBRACE,
    STATE(169), 1,
      aux_sym_namedTupleLiteral_repeat2,
  [3134] = 3,
    ACTIONS(399), 1,
      sym_comment,
    ACTIONS(701), 1,
      anon_sym_RBRACK2,
    ACTIONS(403), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
  [3145] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 3,
      anon_sym_LBRACK2,
      anon_sym_RBRACK2,
      anon_sym_EQ,
  [3154] = 3,
    ACTIONS(399), 1,
      sym_comment,
    ACTIONS(703), 1,
      anon_sym_RBRACK2,
    ACTIONS(403), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
  [3165] = 3,
    ACTIONS(399), 1,
      sym_comment,
    ACTIONS(705), 1,
      anon_sym_RBRACK2,
    ACTIONS(403), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
  [3176] = 3,
    ACTIONS(399), 1,
      sym_comment,
    ACTIONS(707), 1,
      anon_sym_RBRACK2,
    ACTIONS(403), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
  [3187] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(655), 1,
      anon_sym_COMMA,
    ACTIONS(709), 1,
      anon_sym_RBRACE,
    STATE(172), 1,
      aux_sym_hash_repeat1,
  [3200] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      anon_sym_COMMA,
    ACTIONS(711), 1,
      anon_sym_RPAREN,
    STATE(189), 1,
      aux_sym_type_repeat2,
  [3213] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(633), 1,
      anon_sym_COMMA,
    ACTIONS(713), 1,
      anon_sym_RBRACE,
    STATE(192), 1,
      aux_sym_namedTupleLiteral_repeat2,
  [3226] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      anon_sym_COMMA,
    ACTIONS(715), 1,
      anon_sym_RPAREN,
    STATE(218), 1,
      aux_sym_type_repeat2,
  [3239] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(655), 1,
      anon_sym_COMMA,
    ACTIONS(717), 1,
      anon_sym_RBRACE,
    STATE(201), 1,
      aux_sym_hash_repeat1,
  [3252] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(633), 1,
      anon_sym_COMMA,
    ACTIONS(719), 1,
      anon_sym_RBRACE,
    STATE(221), 1,
      aux_sym_namedTupleLiteral_repeat2,
  [3265] = 3,
    ACTIONS(399), 1,
      sym_comment,
    ACTIONS(415), 1,
      anon_sym_EQ_GT,
    ACTIONS(403), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
  [3276] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(560), 1,
      anon_sym_RBRACK,
    ACTIONS(721), 1,
      anon_sym_COMMA,
    STATE(234), 1,
      aux_sym_array_repeat1,
  [3289] = 3,
    ACTIONS(399), 1,
      sym_comment,
    ACTIONS(413), 1,
      anon_sym_EQ_GT,
    ACTIONS(403), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
  [3300] = 3,
    ACTIONS(399), 1,
      sym_comment,
    ACTIONS(401), 1,
      anon_sym_EQ_GT,
    ACTIONS(403), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
  [3311] = 3,
    ACTIONS(399), 1,
      sym_comment,
    ACTIONS(411), 1,
      anon_sym_EQ_GT,
    ACTIONS(403), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
  [3322] = 3,
    ACTIONS(399), 1,
      sym_comment,
    ACTIONS(401), 1,
      anon_sym_COLON,
    ACTIONS(403), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
  [3333] = 3,
    ACTIONS(399), 1,
      sym_comment,
    ACTIONS(411), 1,
      anon_sym_COLON,
    ACTIONS(403), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
  [3344] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(655), 1,
      anon_sym_COMMA,
    ACTIONS(724), 1,
      anon_sym_RBRACE,
    STATE(227), 1,
      aux_sym_hash_repeat1,
  [3357] = 4,
    ACTIONS(399), 1,
      sym_comment,
    ACTIONS(726), 1,
      anon_sym_DQUOTE,
    ACTIONS(728), 1,
      aux_sym_symbol_token1,
    STATE(245), 1,
      aux_sym_symbol_repeat1,
  [3370] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 1,
      anon_sym_COMMA,
    ACTIONS(730), 1,
      anon_sym_RBRACE,
    STATE(166), 1,
      aux_sym_array_repeat1,
  [3383] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 1,
      anon_sym_COMMA,
    ACTIONS(732), 1,
      anon_sym_RBRACK,
    STATE(234), 1,
      aux_sym_array_repeat1,
  [3396] = 4,
    ACTIONS(399), 1,
      sym_comment,
    ACTIONS(734), 1,
      anon_sym_DQUOTE,
    ACTIONS(736), 1,
      aux_sym_symbol_token1,
    STATE(248), 1,
      aux_sym_symbol_repeat1,
  [3409] = 4,
    ACTIONS(399), 1,
      sym_comment,
    ACTIONS(542), 1,
      aux_sym_symbol_token1,
    ACTIONS(738), 1,
      anon_sym_DQUOTE,
    STATE(171), 1,
      aux_sym_symbol_repeat1,
  [3422] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 1,
      anon_sym_COMMA,
    ACTIONS(740), 1,
      anon_sym_RBRACK,
    STATE(243), 1,
      aux_sym_array_repeat1,
  [3435] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(560), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [3444] = 4,
    ACTIONS(399), 1,
      sym_comment,
    ACTIONS(542), 1,
      aux_sym_symbol_token1,
    ACTIONS(742), 1,
      anon_sym_DQUOTE,
    STATE(171), 1,
      aux_sym_symbol_repeat1,
  [3457] = 3,
    ACTIONS(399), 1,
      sym_comment,
    ACTIONS(445), 1,
      aux_sym__statement_token1,
    ACTIONS(744), 1,
      anon_sym_SEMI,
  [3467] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 1,
      aux_sym_identifier_token1,
    STATE(364), 1,
      sym_identifier,
  [3477] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 1,
      aux_sym_identifier_token1,
    STATE(359), 1,
      sym_identifier,
  [3487] = 3,
    ACTIONS(399), 1,
      sym_comment,
    ACTIONS(463), 1,
      aux_sym__statement_token1,
    ACTIONS(746), 1,
      anon_sym_SEMI,
  [3497] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 1,
      anon_sym_EQ_GT,
    ACTIONS(748), 1,
      anon_sym_EQ,
  [3507] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 1,
      anon_sym_EQ,
    ACTIONS(750), 1,
      anon_sym_LBRACK2,
  [3517] = 3,
    ACTIONS(399), 1,
      sym_comment,
    ACTIONS(752), 1,
      anon_sym_SEMI,
    ACTIONS(754), 1,
      aux_sym__statement_token1,
  [3527] = 3,
    ACTIONS(399), 1,
      sym_comment,
    ACTIONS(473), 1,
      aux_sym__statement_token1,
    ACTIONS(756), 1,
      anon_sym_SEMI,
  [3537] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(758), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3545] = 3,
    ACTIONS(399), 1,
      sym_comment,
    ACTIONS(481), 1,
      aux_sym__statement_token1,
    ACTIONS(760), 1,
      anon_sym_SEMI,
  [3555] = 3,
    ACTIONS(399), 1,
      sym_comment,
    ACTIONS(479), 1,
      aux_sym__statement_token1,
    ACTIONS(762), 1,
      anon_sym_SEMI,
  [3565] = 3,
    ACTIONS(399), 1,
      sym_comment,
    ACTIONS(483), 1,
      aux_sym__statement_token1,
    ACTIONS(764), 1,
      anon_sym_SEMI,
  [3575] = 3,
    ACTIONS(399), 1,
      sym_comment,
    ACTIONS(455), 1,
      aux_sym__statement_token1,
    ACTIONS(766), 1,
      anon_sym_SEMI,
  [3585] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(768), 2,
      anon_sym_LBRACK2,
      anon_sym_EQ,
  [3593] = 3,
    ACTIONS(399), 1,
      sym_comment,
    ACTIONS(423), 1,
      aux_sym__statement_token1,
    ACTIONS(770), 1,
      anon_sym_SEMI,
  [3603] = 3,
    ACTIONS(399), 1,
      sym_comment,
    ACTIONS(457), 1,
      aux_sym__statement_token1,
    ACTIONS(772), 1,
      anon_sym_SEMI,
  [3613] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(750), 1,
      anon_sym_LBRACK2,
    ACTIONS(774), 1,
      anon_sym_EQ,
  [3623] = 3,
    ACTIONS(399), 1,
      sym_comment,
    ACTIONS(485), 1,
      aux_sym__statement_token1,
    ACTIONS(776), 1,
      anon_sym_SEMI,
  [3633] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(778), 2,
      anon_sym_LBRACK2,
      anon_sym_EQ,
  [3641] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 1,
      anon_sym_EQ,
    ACTIONS(750), 1,
      anon_sym_LBRACK2,
  [3651] = 3,
    ACTIONS(399), 1,
      sym_comment,
    ACTIONS(487), 1,
      aux_sym__statement_token1,
    ACTIONS(780), 1,
      anon_sym_SEMI,
  [3661] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(782), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3669] = 3,
    ACTIONS(399), 1,
      sym_comment,
    ACTIONS(495), 1,
      aux_sym__statement_token1,
    ACTIONS(784), 1,
      anon_sym_SEMI,
  [3679] = 3,
    ACTIONS(399), 1,
      sym_comment,
    ACTIONS(786), 1,
      anon_sym_SEMI,
    ACTIONS(788), 1,
      aux_sym__statement_token1,
  [3689] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(790), 1,
      anon_sym_LBRACK2,
    ACTIONS(792), 1,
      anon_sym_EQ,
  [3699] = 3,
    ACTIONS(399), 1,
      sym_comment,
    ACTIONS(435), 1,
      aux_sym__statement_token1,
    ACTIONS(794), 1,
      anon_sym_SEMI,
  [3709] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(796), 1,
      anon_sym_LBRACK2,
    ACTIONS(798), 1,
      anon_sym_EQ,
  [3719] = 3,
    ACTIONS(399), 1,
      sym_comment,
    ACTIONS(491), 1,
      aux_sym__statement_token1,
    ACTIONS(800), 1,
      anon_sym_SEMI,
  [3729] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(750), 1,
      anon_sym_LBRACK2,
    ACTIONS(802), 1,
      anon_sym_EQ,
  [3739] = 3,
    ACTIONS(399), 1,
      sym_comment,
    ACTIONS(437), 1,
      aux_sym__statement_token1,
    ACTIONS(804), 1,
      anon_sym_SEMI,
  [3749] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(806), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3757] = 3,
    ACTIONS(399), 1,
      sym_comment,
    ACTIONS(439), 1,
      aux_sym__statement_token1,
    ACTIONS(808), 1,
      anon_sym_SEMI,
  [3767] = 3,
    ACTIONS(399), 1,
      sym_comment,
    ACTIONS(507), 1,
      aux_sym__statement_token1,
    ACTIONS(810), 1,
      anon_sym_SEMI,
  [3777] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 1,
      aux_sym_identifier_token1,
    STATE(337), 1,
      sym_identifier,
  [3787] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(812), 2,
      anon_sym_LBRACK2,
      anon_sym_EQ,
  [3795] = 3,
    ACTIONS(333), 1,
      aux_sym__statement_token1,
    ACTIONS(335), 1,
      anon_sym_SEMI,
    ACTIONS(399), 1,
      sym_comment,
  [3805] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 1,
      aux_sym_identifier_token1,
    STATE(336), 1,
      sym_identifier,
  [3815] = 3,
    ACTIONS(399), 1,
      sym_comment,
    ACTIONS(505), 1,
      aux_sym__statement_token1,
    ACTIONS(814), 1,
      anon_sym_SEMI,
  [3825] = 3,
    ACTIONS(399), 1,
      sym_comment,
    ACTIONS(441), 1,
      aux_sym__statement_token1,
    ACTIONS(816), 1,
      anon_sym_SEMI,
  [3835] = 3,
    ACTIONS(325), 1,
      aux_sym__statement_token1,
    ACTIONS(327), 1,
      anon_sym_SEMI,
    ACTIONS(399), 1,
      sym_comment,
  [3845] = 3,
    ACTIONS(399), 1,
      sym_comment,
    ACTIONS(451), 1,
      aux_sym__statement_token1,
    ACTIONS(818), 1,
      anon_sym_SEMI,
  [3855] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 2,
      anon_sym_RBRACK2,
      anon_sym_EQ,
  [3863] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(820), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3871] = 3,
    ACTIONS(399), 1,
      sym_comment,
    ACTIONS(443), 1,
      aux_sym__statement_token1,
    ACTIONS(822), 1,
      anon_sym_SEMI,
  [3881] = 3,
    ACTIONS(337), 1,
      aux_sym__statement_token1,
    ACTIONS(339), 1,
      anon_sym_SEMI,
    ACTIONS(399), 1,
      sym_comment,
  [3891] = 3,
    ACTIONS(329), 1,
      aux_sym__statement_token1,
    ACTIONS(331), 1,
      anon_sym_SEMI,
    ACTIONS(399), 1,
      sym_comment,
  [3901] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 1,
      anon_sym_RBRACK2,
    ACTIONS(792), 1,
      anon_sym_EQ,
  [3911] = 3,
    ACTIONS(399), 1,
      sym_comment,
    ACTIONS(449), 1,
      aux_sym__statement_token1,
    ACTIONS(824), 1,
      anon_sym_SEMI,
  [3921] = 3,
    ACTIONS(399), 1,
      sym_comment,
    ACTIONS(503), 1,
      aux_sym__statement_token1,
    ACTIONS(826), 1,
      anon_sym_SEMI,
  [3931] = 3,
    ACTIONS(399), 1,
      sym_comment,
    ACTIONS(447), 1,
      aux_sym__statement_token1,
    ACTIONS(828), 1,
      anon_sym_SEMI,
  [3941] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(481), 1,
      anon_sym_RBRACK2,
  [3948] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(830), 1,
      anon_sym_BQUOTE,
  [3955] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 1,
      anon_sym_RBRACK2,
  [3962] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 1,
      anon_sym_RBRACK2,
  [3969] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(505), 1,
      anon_sym_RBRACK2,
  [3976] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(503), 1,
      anon_sym_RBRACK2,
  [3983] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(491), 1,
      anon_sym_RBRACK2,
  [3990] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(487), 1,
      anon_sym_RBRACK2,
  [3997] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(485), 1,
      anon_sym_RBRACK2,
  [4004] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 1,
      anon_sym_RBRACK2,
  [4011] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(832), 1,
      anon_sym_BQUOTE,
  [4018] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 1,
      anon_sym_RBRACK2,
  [4025] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(832), 1,
      anon_sym_RPAREN,
  [4032] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(834), 1,
      anon_sym_EQ_GT,
  [4039] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 1,
      anon_sym_RBRACK2,
  [4046] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      anon_sym_RBRACK2,
  [4053] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      anon_sym_RBRACK2,
  [4060] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 1,
      anon_sym_RBRACK2,
  [4067] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(836), 1,
      anon_sym_COLON,
  [4074] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(838), 1,
      anon_sym_EQ_GT,
  [4081] = 2,
    ACTIONS(399), 1,
      sym_comment,
    ACTIONS(840), 1,
      aux_sym_regex_token1,
  [4088] = 2,
    ACTIONS(399), 1,
      sym_comment,
    ACTIONS(842), 1,
      aux_sym_commandLiteral_token1,
  [4095] = 2,
    ACTIONS(399), 1,
      sym_comment,
    ACTIONS(844), 1,
      aux_sym_commandLiteral_token2,
  [4102] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(846), 1,
      anon_sym_RBRACK2,
  [4109] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 1,
      anon_sym_RBRACK2,
  [4116] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 1,
      anon_sym_RBRACK2,
  [4123] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(848), 1,
      anon_sym_RPAREN,
  [4130] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(848), 1,
      anon_sym_BQUOTE,
  [4137] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 1,
      anon_sym_RBRACK2,
  [4144] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(850), 1,
      anon_sym_SLASH,
  [4151] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 1,
      anon_sym_COLON,
  [4158] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      anon_sym_RBRACK2,
  [4165] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(852), 1,
      anon_sym_of,
  [4172] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(854), 1,
      anon_sym_COLON,
  [4179] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(830), 1,
      anon_sym_RPAREN,
  [4186] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 1,
      anon_sym_RBRACK2,
  [4193] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(856), 1,
      anon_sym_SLASH,
  [4200] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(858), 1,
      anon_sym_COLON,
  [4207] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(860), 1,
      anon_sym_COLON,
  [4214] = 2,
    ACTIONS(399), 1,
      sym_comment,
    ACTIONS(862), 1,
      aux_sym_regex_token1,
  [4221] = 2,
    ACTIONS(399), 1,
      sym_comment,
    ACTIONS(864), 1,
      aux_sym_commandLiteral_token1,
  [4228] = 2,
    ACTIONS(399), 1,
      sym_comment,
    ACTIONS(866), 1,
      aux_sym_commandLiteral_token2,
  [4235] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 1,
      anon_sym_RBRACK2,
  [4242] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      anon_sym_RBRACK2,
  [4249] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 1,
      anon_sym_RBRACK2,
  [4256] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(868), 1,
      ts_builtin_sym_end,
  [4263] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(870), 1,
      aux_sym_local_variable_token1,
  [4270] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(872), 1,
      aux_sym_local_variable_token1,
  [4277] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 1,
      anon_sym_RBRACK2,
  [4284] = 2,
    ACTIONS(399), 1,
      sym_comment,
    ACTIONS(874), 1,
      aux_sym_commandLiteral_token2,
  [4291] = 2,
    ACTIONS(399), 1,
      sym_comment,
    ACTIONS(876), 1,
      aux_sym_commandLiteral_token1,
  [4298] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(878), 1,
      anon_sym_LPAREN,
  [4305] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 1,
      anon_sym_RBRACK2,
  [4312] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_RBRACK2,
  [4319] = 2,
    ACTIONS(399), 1,
      sym_comment,
    ACTIONS(880), 1,
      aux_sym_regex_token1,
  [4326] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      anon_sym_RBRACK2,
  [4333] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 1,
      anon_sym_RBRACK2,
  [4340] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(882), 1,
      anon_sym_of,
  [4347] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 1,
      anon_sym_COLON,
  [4354] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 1,
      anon_sym_RBRACK2,
  [4361] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(884), 1,
      anon_sym_COLON,
  [4368] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 1,
      anon_sym_COLON_COLON,
  [4375] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(886), 1,
      anon_sym_of,
  [4382] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 1,
      anon_sym_COLON,
  [4389] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(888), 1,
      anon_sym_EQ_GT,
  [4396] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(890), 1,
      anon_sym_COLON,
  [4403] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(892), 1,
      anon_sym_EQ_GT,
  [4410] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(894), 1,
      anon_sym_RBRACK2,
  [4417] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(896), 1,
      anon_sym_SLASH,
  [4424] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(898), 1,
      anon_sym_RBRACK2,
  [4431] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(900), 1,
      anon_sym_LPAREN,
  [4438] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(902), 1,
      anon_sym_LPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(43)] = 0,
  [SMALL_STATE(44)] = 62,
  [SMALL_STATE(45)] = 124,
  [SMALL_STATE(46)] = 180,
  [SMALL_STATE(47)] = 236,
  [SMALL_STATE(48)] = 292,
  [SMALL_STATE(49)] = 348,
  [SMALL_STATE(50)] = 402,
  [SMALL_STATE(51)] = 458,
  [SMALL_STATE(52)] = 512,
  [SMALL_STATE(53)] = 562,
  [SMALL_STATE(54)] = 612,
  [SMALL_STATE(55)] = 653,
  [SMALL_STATE(56)] = 694,
  [SMALL_STATE(57)] = 735,
  [SMALL_STATE(58)] = 776,
  [SMALL_STATE(59)] = 817,
  [SMALL_STATE(60)] = 858,
  [SMALL_STATE(61)] = 878,
  [SMALL_STATE(62)] = 895,
  [SMALL_STATE(63)] = 912,
  [SMALL_STATE(64)] = 934,
  [SMALL_STATE(65)] = 956,
  [SMALL_STATE(66)] = 978,
  [SMALL_STATE(67)] = 1000,
  [SMALL_STATE(68)] = 1022,
  [SMALL_STATE(69)] = 1044,
  [SMALL_STATE(70)] = 1066,
  [SMALL_STATE(71)] = 1088,
  [SMALL_STATE(72)] = 1110,
  [SMALL_STATE(73)] = 1132,
  [SMALL_STATE(74)] = 1154,
  [SMALL_STATE(75)] = 1176,
  [SMALL_STATE(76)] = 1198,
  [SMALL_STATE(77)] = 1220,
  [SMALL_STATE(78)] = 1242,
  [SMALL_STATE(79)] = 1264,
  [SMALL_STATE(80)] = 1286,
  [SMALL_STATE(81)] = 1308,
  [SMALL_STATE(82)] = 1330,
  [SMALL_STATE(83)] = 1352,
  [SMALL_STATE(84)] = 1374,
  [SMALL_STATE(85)] = 1396,
  [SMALL_STATE(86)] = 1418,
  [SMALL_STATE(87)] = 1437,
  [SMALL_STATE(88)] = 1456,
  [SMALL_STATE(89)] = 1473,
  [SMALL_STATE(90)] = 1492,
  [SMALL_STATE(91)] = 1511,
  [SMALL_STATE(92)] = 1530,
  [SMALL_STATE(93)] = 1544,
  [SMALL_STATE(94)] = 1558,
  [SMALL_STATE(95)] = 1574,
  [SMALL_STATE(96)] = 1588,
  [SMALL_STATE(97)] = 1602,
  [SMALL_STATE(98)] = 1615,
  [SMALL_STATE(99)] = 1628,
  [SMALL_STATE(100)] = 1641,
  [SMALL_STATE(101)] = 1654,
  [SMALL_STATE(102)] = 1667,
  [SMALL_STATE(103)] = 1678,
  [SMALL_STATE(104)] = 1688,
  [SMALL_STATE(105)] = 1700,
  [SMALL_STATE(106)] = 1712,
  [SMALL_STATE(107)] = 1728,
  [SMALL_STATE(108)] = 1738,
  [SMALL_STATE(109)] = 1748,
  [SMALL_STATE(110)] = 1758,
  [SMALL_STATE(111)] = 1768,
  [SMALL_STATE(112)] = 1778,
  [SMALL_STATE(113)] = 1788,
  [SMALL_STATE(114)] = 1798,
  [SMALL_STATE(115)] = 1808,
  [SMALL_STATE(116)] = 1818,
  [SMALL_STATE(117)] = 1830,
  [SMALL_STATE(118)] = 1842,
  [SMALL_STATE(119)] = 1854,
  [SMALL_STATE(120)] = 1866,
  [SMALL_STATE(121)] = 1876,
  [SMALL_STATE(122)] = 1888,
  [SMALL_STATE(123)] = 1898,
  [SMALL_STATE(124)] = 1910,
  [SMALL_STATE(125)] = 1924,
  [SMALL_STATE(126)] = 1936,
  [SMALL_STATE(127)] = 1946,
  [SMALL_STATE(128)] = 1962,
  [SMALL_STATE(129)] = 1978,
  [SMALL_STATE(130)] = 1988,
  [SMALL_STATE(131)] = 2004,
  [SMALL_STATE(132)] = 2014,
  [SMALL_STATE(133)] = 2024,
  [SMALL_STATE(134)] = 2034,
  [SMALL_STATE(135)] = 2044,
  [SMALL_STATE(136)] = 2054,
  [SMALL_STATE(137)] = 2066,
  [SMALL_STATE(138)] = 2082,
  [SMALL_STATE(139)] = 2094,
  [SMALL_STATE(140)] = 2104,
  [SMALL_STATE(141)] = 2116,
  [SMALL_STATE(142)] = 2128,
  [SMALL_STATE(143)] = 2144,
  [SMALL_STATE(144)] = 2154,
  [SMALL_STATE(145)] = 2166,
  [SMALL_STATE(146)] = 2178,
  [SMALL_STATE(147)] = 2190,
  [SMALL_STATE(148)] = 2202,
  [SMALL_STATE(149)] = 2214,
  [SMALL_STATE(150)] = 2224,
  [SMALL_STATE(151)] = 2234,
  [SMALL_STATE(152)] = 2244,
  [SMALL_STATE(153)] = 2255,
  [SMALL_STATE(154)] = 2268,
  [SMALL_STATE(155)] = 2279,
  [SMALL_STATE(156)] = 2290,
  [SMALL_STATE(157)] = 2303,
  [SMALL_STATE(158)] = 2314,
  [SMALL_STATE(159)] = 2327,
  [SMALL_STATE(160)] = 2340,
  [SMALL_STATE(161)] = 2353,
  [SMALL_STATE(162)] = 2366,
  [SMALL_STATE(163)] = 2379,
  [SMALL_STATE(164)] = 2392,
  [SMALL_STATE(165)] = 2405,
  [SMALL_STATE(166)] = 2418,
  [SMALL_STATE(167)] = 2431,
  [SMALL_STATE(168)] = 2442,
  [SMALL_STATE(169)] = 2453,
  [SMALL_STATE(170)] = 2466,
  [SMALL_STATE(171)] = 2479,
  [SMALL_STATE(172)] = 2490,
  [SMALL_STATE(173)] = 2503,
  [SMALL_STATE(174)] = 2516,
  [SMALL_STATE(175)] = 2529,
  [SMALL_STATE(176)] = 2542,
  [SMALL_STATE(177)] = 2555,
  [SMALL_STATE(178)] = 2568,
  [SMALL_STATE(179)] = 2581,
  [SMALL_STATE(180)] = 2594,
  [SMALL_STATE(181)] = 2607,
  [SMALL_STATE(182)] = 2620,
  [SMALL_STATE(183)] = 2633,
  [SMALL_STATE(184)] = 2646,
  [SMALL_STATE(185)] = 2659,
  [SMALL_STATE(186)] = 2672,
  [SMALL_STATE(187)] = 2683,
  [SMALL_STATE(188)] = 2696,
  [SMALL_STATE(189)] = 2709,
  [SMALL_STATE(190)] = 2722,
  [SMALL_STATE(191)] = 2735,
  [SMALL_STATE(192)] = 2748,
  [SMALL_STATE(193)] = 2761,
  [SMALL_STATE(194)] = 2774,
  [SMALL_STATE(195)] = 2787,
  [SMALL_STATE(196)] = 2800,
  [SMALL_STATE(197)] = 2813,
  [SMALL_STATE(198)] = 2826,
  [SMALL_STATE(199)] = 2839,
  [SMALL_STATE(200)] = 2852,
  [SMALL_STATE(201)] = 2865,
  [SMALL_STATE(202)] = 2878,
  [SMALL_STATE(203)] = 2891,
  [SMALL_STATE(204)] = 2904,
  [SMALL_STATE(205)] = 2917,
  [SMALL_STATE(206)] = 2930,
  [SMALL_STATE(207)] = 2943,
  [SMALL_STATE(208)] = 2956,
  [SMALL_STATE(209)] = 2969,
  [SMALL_STATE(210)] = 2982,
  [SMALL_STATE(211)] = 2995,
  [SMALL_STATE(212)] = 3008,
  [SMALL_STATE(213)] = 3021,
  [SMALL_STATE(214)] = 3034,
  [SMALL_STATE(215)] = 3047,
  [SMALL_STATE(216)] = 3060,
  [SMALL_STATE(217)] = 3073,
  [SMALL_STATE(218)] = 3086,
  [SMALL_STATE(219)] = 3099,
  [SMALL_STATE(220)] = 3112,
  [SMALL_STATE(221)] = 3121,
  [SMALL_STATE(222)] = 3134,
  [SMALL_STATE(223)] = 3145,
  [SMALL_STATE(224)] = 3154,
  [SMALL_STATE(225)] = 3165,
  [SMALL_STATE(226)] = 3176,
  [SMALL_STATE(227)] = 3187,
  [SMALL_STATE(228)] = 3200,
  [SMALL_STATE(229)] = 3213,
  [SMALL_STATE(230)] = 3226,
  [SMALL_STATE(231)] = 3239,
  [SMALL_STATE(232)] = 3252,
  [SMALL_STATE(233)] = 3265,
  [SMALL_STATE(234)] = 3276,
  [SMALL_STATE(235)] = 3289,
  [SMALL_STATE(236)] = 3300,
  [SMALL_STATE(237)] = 3311,
  [SMALL_STATE(238)] = 3322,
  [SMALL_STATE(239)] = 3333,
  [SMALL_STATE(240)] = 3344,
  [SMALL_STATE(241)] = 3357,
  [SMALL_STATE(242)] = 3370,
  [SMALL_STATE(243)] = 3383,
  [SMALL_STATE(244)] = 3396,
  [SMALL_STATE(245)] = 3409,
  [SMALL_STATE(246)] = 3422,
  [SMALL_STATE(247)] = 3435,
  [SMALL_STATE(248)] = 3444,
  [SMALL_STATE(249)] = 3457,
  [SMALL_STATE(250)] = 3467,
  [SMALL_STATE(251)] = 3477,
  [SMALL_STATE(252)] = 3487,
  [SMALL_STATE(253)] = 3497,
  [SMALL_STATE(254)] = 3507,
  [SMALL_STATE(255)] = 3517,
  [SMALL_STATE(256)] = 3527,
  [SMALL_STATE(257)] = 3537,
  [SMALL_STATE(258)] = 3545,
  [SMALL_STATE(259)] = 3555,
  [SMALL_STATE(260)] = 3565,
  [SMALL_STATE(261)] = 3575,
  [SMALL_STATE(262)] = 3585,
  [SMALL_STATE(263)] = 3593,
  [SMALL_STATE(264)] = 3603,
  [SMALL_STATE(265)] = 3613,
  [SMALL_STATE(266)] = 3623,
  [SMALL_STATE(267)] = 3633,
  [SMALL_STATE(268)] = 3641,
  [SMALL_STATE(269)] = 3651,
  [SMALL_STATE(270)] = 3661,
  [SMALL_STATE(271)] = 3669,
  [SMALL_STATE(272)] = 3679,
  [SMALL_STATE(273)] = 3689,
  [SMALL_STATE(274)] = 3699,
  [SMALL_STATE(275)] = 3709,
  [SMALL_STATE(276)] = 3719,
  [SMALL_STATE(277)] = 3729,
  [SMALL_STATE(278)] = 3739,
  [SMALL_STATE(279)] = 3749,
  [SMALL_STATE(280)] = 3757,
  [SMALL_STATE(281)] = 3767,
  [SMALL_STATE(282)] = 3777,
  [SMALL_STATE(283)] = 3787,
  [SMALL_STATE(284)] = 3795,
  [SMALL_STATE(285)] = 3805,
  [SMALL_STATE(286)] = 3815,
  [SMALL_STATE(287)] = 3825,
  [SMALL_STATE(288)] = 3835,
  [SMALL_STATE(289)] = 3845,
  [SMALL_STATE(290)] = 3855,
  [SMALL_STATE(291)] = 3863,
  [SMALL_STATE(292)] = 3871,
  [SMALL_STATE(293)] = 3881,
  [SMALL_STATE(294)] = 3891,
  [SMALL_STATE(295)] = 3901,
  [SMALL_STATE(296)] = 3911,
  [SMALL_STATE(297)] = 3921,
  [SMALL_STATE(298)] = 3931,
  [SMALL_STATE(299)] = 3941,
  [SMALL_STATE(300)] = 3948,
  [SMALL_STATE(301)] = 3955,
  [SMALL_STATE(302)] = 3962,
  [SMALL_STATE(303)] = 3969,
  [SMALL_STATE(304)] = 3976,
  [SMALL_STATE(305)] = 3983,
  [SMALL_STATE(306)] = 3990,
  [SMALL_STATE(307)] = 3997,
  [SMALL_STATE(308)] = 4004,
  [SMALL_STATE(309)] = 4011,
  [SMALL_STATE(310)] = 4018,
  [SMALL_STATE(311)] = 4025,
  [SMALL_STATE(312)] = 4032,
  [SMALL_STATE(313)] = 4039,
  [SMALL_STATE(314)] = 4046,
  [SMALL_STATE(315)] = 4053,
  [SMALL_STATE(316)] = 4060,
  [SMALL_STATE(317)] = 4067,
  [SMALL_STATE(318)] = 4074,
  [SMALL_STATE(319)] = 4081,
  [SMALL_STATE(320)] = 4088,
  [SMALL_STATE(321)] = 4095,
  [SMALL_STATE(322)] = 4102,
  [SMALL_STATE(323)] = 4109,
  [SMALL_STATE(324)] = 4116,
  [SMALL_STATE(325)] = 4123,
  [SMALL_STATE(326)] = 4130,
  [SMALL_STATE(327)] = 4137,
  [SMALL_STATE(328)] = 4144,
  [SMALL_STATE(329)] = 4151,
  [SMALL_STATE(330)] = 4158,
  [SMALL_STATE(331)] = 4165,
  [SMALL_STATE(332)] = 4172,
  [SMALL_STATE(333)] = 4179,
  [SMALL_STATE(334)] = 4186,
  [SMALL_STATE(335)] = 4193,
  [SMALL_STATE(336)] = 4200,
  [SMALL_STATE(337)] = 4207,
  [SMALL_STATE(338)] = 4214,
  [SMALL_STATE(339)] = 4221,
  [SMALL_STATE(340)] = 4228,
  [SMALL_STATE(341)] = 4235,
  [SMALL_STATE(342)] = 4242,
  [SMALL_STATE(343)] = 4249,
  [SMALL_STATE(344)] = 4256,
  [SMALL_STATE(345)] = 4263,
  [SMALL_STATE(346)] = 4270,
  [SMALL_STATE(347)] = 4277,
  [SMALL_STATE(348)] = 4284,
  [SMALL_STATE(349)] = 4291,
  [SMALL_STATE(350)] = 4298,
  [SMALL_STATE(351)] = 4305,
  [SMALL_STATE(352)] = 4312,
  [SMALL_STATE(353)] = 4319,
  [SMALL_STATE(354)] = 4326,
  [SMALL_STATE(355)] = 4333,
  [SMALL_STATE(356)] = 4340,
  [SMALL_STATE(357)] = 4347,
  [SMALL_STATE(358)] = 4354,
  [SMALL_STATE(359)] = 4361,
  [SMALL_STATE(360)] = 4368,
  [SMALL_STATE(361)] = 4375,
  [SMALL_STATE(362)] = 4382,
  [SMALL_STATE(363)] = 4389,
  [SMALL_STATE(364)] = 4396,
  [SMALL_STATE(365)] = 4403,
  [SMALL_STATE(366)] = 4410,
  [SMALL_STATE(367)] = 4417,
  [SMALL_STATE(368)] = 4424,
  [SMALL_STATE(369)] = 4431,
  [SMALL_STATE(370)] = 4438,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(346),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(255),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(259),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(258),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(258),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(260),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(260),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(56),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(156),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(266),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(266),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(28),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(11),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(353),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(269),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(350),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(349),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(348),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(157),
  [123] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(346),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(345),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(93),
  [132] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(88),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(69),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(332),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(369),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [202] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(272),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, .production_id = 1),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1, .production_id = 1),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2, .production_id = 4),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 2, .production_id = 4),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 5, .production_id = 15),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 5, .production_id = 15),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 6, .production_id = 20),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 6, .production_id = 20),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 4, .production_id = 8),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 4, .production_id = 8),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 5, .production_id = 17),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 5, .production_id = 17),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 2),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 2),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [391] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2), SHIFT_REPEAT(62),
  [394] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2), SHIFT_REPEAT(60),
  [397] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [399] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_symbol_repeat1, 1),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variable, 1),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variable, 1),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 4),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 3),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_expression, 4, .production_id = 6),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index_expression, 4, .production_id = 6),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2, .production_id = 2),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 4, .production_id = 3),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namedTupleLiteral, 7, .production_id = 18),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 6, .production_id = 9),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namedTupleLiteral, 6, .production_id = 13),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namedTupleLiteral, 6, .production_id = 11),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hash, 6, .production_id = 11),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hash, 6, .production_id = 10),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 5, .production_id = 9),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namedTupleLiteral, 5, .production_id = 7),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hash, 5, .production_id = 7),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 4),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 4),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3, .production_id = 5),
  [465] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [467] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 3, .production_id = 3),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 1),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 1),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 1),
  [489] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 2),
  [493] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commandLiteral, 3),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [501] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 3),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 3),
  [509] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [511] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [517] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [519] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_variable, 1),
  [525] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_namedTupleLiteral_repeat1, 2, .production_id = 19), SHIFT_REPEAT(285),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_namedTupleLiteral_repeat1, 2, .production_id = 19),
  [530] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [532] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [534] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [540] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [542] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [544] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_repeat2, 2, .production_id = 16), SHIFT_REPEAT(70),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat2, 2, .production_id = 16),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [557] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(40),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance_variable, 2),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_variable, 2),
  [570] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_namedTupleLiteral_repeat2, 2, .production_id = 12), SHIFT_REPEAT(124),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_namedTupleLiteral_repeat2, 2, .production_id = 12),
  [575] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [577] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_symbol_repeat1, 2), SHIFT_REPEAT(171),
  [580] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hash_repeat1, 2, .production_id = 12), SHIFT_REPEAT(23),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_hash_repeat1, 2, .production_id = 12),
  [585] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [587] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [589] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [591] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [593] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [595] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [597] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [599] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [601] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [603] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [605] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [607] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [609] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [611] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [613] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [615] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [619] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [621] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [623] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [625] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [637] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [639] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [673] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [679] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [681] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [683] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [685] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [687] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 3),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 4),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [721] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(21),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [726] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [728] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [734] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [736] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [738] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [742] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [744] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hash, 6, .production_id = 10),
  [746] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 3, .production_id = 5),
  [748] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [752] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [756] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_definition, 3, .production_id = 3),
  [758] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_namedTupleLiteral_repeat2, 4, .production_id = 7),
  [760] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 1),
  [762] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool, 1),
  [764] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1),
  [766] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 4),
  [768] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_variable, 3),
  [770] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_definition, 4, .production_id = 3),
  [772] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 4),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [776] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char, 1),
  [778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance_variable, 3),
  [780] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 1),
  [782] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_hash_repeat1, 4, .production_id = 7),
  [784] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commandLiteral, 3),
  [786] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [794] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namedTupleLiteral, 7, .production_id = 18),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [800] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 2),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [804] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_definition, 6, .production_id = 9),
  [806] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat2, 2, .production_id = 14),
  [808] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namedTupleLiteral, 6, .production_id = 13),
  [810] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex, 3),
  [812] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_variable, 2),
  [814] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 3),
  [816] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namedTupleLiteral, 6, .production_id = 11),
  [818] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hash, 5, .production_id = 7),
  [820] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_namedTupleLiteral_repeat1, 4, .production_id = 21),
  [822] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hash, 6, .production_id = 11),
  [824] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namedTupleLiteral, 5, .production_id = 7),
  [826] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 3),
  [828] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_definition, 5, .production_id = 9),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [840] = {.entry = {.count = 1, .reusable = false}}, SHIFT(367),
  [842] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [844] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [854] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [862] = {.entry = {.count = 1, .reusable = false}}, SHIFT(335),
  [864] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [866] = {.entry = {.count = 1, .reusable = false}}, SHIFT(333),
  [868] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [874] = {.entry = {.count = 1, .reusable = false}}, SHIFT(325),
  [876] = {.entry = {.count = 1, .reusable = false}}, SHIFT(326),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [880] = {.entry = {.count = 1, .reusable = false}}, SHIFT(328),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
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

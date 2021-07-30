#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 155
#define LARGE_STATE_COUNT 6
#define SYMBOL_COUNT 93
#define ALIAS_COUNT 0
#define TOKEN_COUNT 71
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 4

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
  anon_sym_PLUS = 46,
  anon_sym_DASH = 47,
  anon_sym_STAR = 48,
  anon_sym_PERCENT = 49,
  anon_sym_AMP = 50,
  anon_sym_PIPE = 51,
  anon_sym_CARET = 52,
  anon_sym_STAR_STAR = 53,
  anon_sym_GT_GT = 54,
  anon_sym_LT_LT = 55,
  anon_sym_EQ_EQ = 56,
  anon_sym_BANG_EQ = 57,
  anon_sym_LT = 58,
  anon_sym_LT_EQ = 59,
  anon_sym_GT = 60,
  anon_sym_GT_EQ = 61,
  anon_sym_LT_EQ_GT = 62,
  anon_sym_EQ_EQ_EQ = 63,
  anon_sym_LBRACK_RBRACK = 64,
  anon_sym_LBRACK_RBRACK_QMARK = 65,
  anon_sym_LBRACK_RBRACK_EQ = 66,
  anon_sym_BANG = 67,
  anon_sym_TILDE = 68,
  anon_sym_BANG_TILDE = 69,
  anon_sym_EQ_TILDE = 70,
  sym_program = 71,
  sym__statement = 72,
  sym__expression = 73,
  sym_identifier = 74,
  sym_bool = 75,
  sym_float = 76,
  sym_integer = 77,
  sym_symbol = 78,
  sym_char = 79,
  sym_string = 80,
  sym_array = 81,
  sym_hash = 82,
  sym_regex = 83,
  sym_tuple = 84,
  sym_namedTupleLiteral = 85,
  sym_commandLiteral = 86,
  sym__operator = 87,
  aux_sym_program_repeat1 = 88,
  aux_sym_symbol_repeat1 = 89,
  aux_sym_array_repeat1 = 90,
  aux_sym_hash_repeat1 = 91,
  aux_sym_namedTupleLiteral_repeat1 = 92,
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
  field_value = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_key] = "key",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 4},
  [3] = {.index = 6, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_key, 1},
    {field_value, 3},
  [2] =
    {field_key, 1},
    {field_key, 4, .inherited = true},
    {field_value, 3},
    {field_value, 4, .inherited = true},
  [6] =
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
      if (lookahead == '!') ADVANCE(200);
      if (lookahead == '"') ADVANCE(130);
      if (lookahead == '%') ADVANCE(182);
      if (lookahead == '&') ADVANCE(183);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == ')') ADVANCE(175);
      if (lookahead == '*') ADVANCE(180);
      if (lookahead == '+') ADVANCE(177);
      if (lookahead == ',') ADVANCE(157);
      if (lookahead == '-') ADVANCE(179);
      if (lookahead == '/') ADVANCE(164);
      if (lookahead == '0') ADVANCE(27);
      if (lookahead == ':') ADVANCE(129);
      if (lookahead == ';') ADVANCE(90);
      if (lookahead == '<') ADVANCE(191);
      if (lookahead == '=') ADVANCE(56);
      if (lookahead == '>') ADVANCE(193);
      if (lookahead == 'T') ADVANCE(73);
      if (lookahead == '[') ADVANCE(156);
      if (lookahead == ']') ADVANCE(158);
      if (lookahead == '^') ADVANCE(185);
      if (lookahead == '`') ADVANCE(169);
      if (lookahead == 'f') ADVANCE(59);
      if (lookahead == 'n') ADVANCE(65);
      if (lookahead == 'o') ADVANCE(64);
      if (lookahead == 't') ADVANCE(71);
      if (lookahead == '{') ADVANCE(159);
      if (lookahead == '|') ADVANCE(184);
      if (lookahead == '}') ADVANCE(161);
      if (lookahead == '~') ADVANCE(201);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(128);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == '"') ADVANCE(130);
      if (lookahead == ';') ADVANCE(90);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(132);
      if (lookahead != 0) ADVANCE(131);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(92);
      if (lookahead == ';') ADVANCE(90);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(200);
      if (lookahead == '"') ADVANCE(130);
      if (lookahead == '%') ADVANCE(181);
      if (lookahead == '&') ADVANCE(183);
      if (lookahead == '*') ADVANCE(180);
      if (lookahead == '+') ADVANCE(176);
      if (lookahead == '-') ADVANCE(178);
      if (lookahead == '/') ADVANCE(164);
      if (lookahead == '<') ADVANCE(191);
      if (lookahead == '=') ADVANCE(57);
      if (lookahead == '>') ADVANCE(193);
      if (lookahead == '[') ADVANCE(58);
      if (lookahead == '^') ADVANCE(185);
      if (lookahead == '|') ADVANCE(184);
      if (lookahead == '~') ADVANCE(201);
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
      if (lookahead == '%') ADVANCE(76);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == '/') ADVANCE(164);
      if (lookahead == '0') ADVANCE(27);
      if (lookahead == ':') ADVANCE(129);
      if (lookahead == 'T') ADVANCE(106);
      if (lookahead == '[') ADVANCE(155);
      if (lookahead == '`') ADVANCE(169);
      if (lookahead == 'f') ADVANCE(95);
      if (lookahead == 'n') ADVANCE(99);
      if (lookahead == 't') ADVANCE(104);
      if (lookahead == '{') ADVANCE(159);
      if (lookahead == '}') ADVANCE(161);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(128);
      if (lookahead != 0 &&
          lookahead > '@' &&
          (lookahead < '\\' || '^' < lookahead) &&
          (lookahead < '|' || 159 < lookahead)) ADVANCE(108);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(130);
      if (lookahead == ',') ADVANCE(157);
      if (lookahead == ':') ADVANCE(129);
      if (lookahead == '=') ADVANCE(139);
      if (lookahead == '}') ADVANCE(161);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(133);
      if (lookahead != 0) ADVANCE(131);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(130);
      if (lookahead == ',') ADVANCE(157);
      if (lookahead == '=') ADVANCE(139);
      if (lookahead == '}') ADVANCE(161);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(134);
      if (lookahead != 0) ADVANCE(131);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(130);
      if (lookahead == ',') ADVANCE(157);
      if (lookahead == ']') ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(135);
      if (lookahead != 0) ADVANCE(131);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(130);
      if (lookahead == ',') ADVANCE(157);
      if (lookahead == '}') ADVANCE(161);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(136);
      if (lookahead != 0) ADVANCE(131);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(130);
      if (lookahead == ':') ADVANCE(129);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(137);
      if (lookahead != 0) ADVANCE(131);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(130);
      if (lookahead == '=') ADVANCE(139);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(138);
      if (lookahead != 0) ADVANCE(131);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(130);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(140);
      if (lookahead != 0) ADVANCE(131);
      END_STATE();
    case 12:
      if (lookahead == '\'') ADVANCE(141);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 13:
      if (lookahead == '\'') ADVANCE(154);
      if (lookahead == '\\') ADVANCE(15);
      if (lookahead == 'a') ADVANCE(16);
      if (lookahead == 'b') ADVANCE(17);
      if (lookahead == 'e') ADVANCE(18);
      if (lookahead == 'f') ADVANCE(19);
      if (lookahead == 'n') ADVANCE(20);
      if (lookahead == 'r') ADVANCE(21);
      if (lookahead == 't') ADVANCE(22);
      if (lookahead == 'u') ADVANCE(77);
      if (lookahead == 'v') ADVANCE(23);
      END_STATE();
    case 14:
      if (lookahead == '\'') ADVANCE(153);
      END_STATE();
    case 15:
      if (lookahead == '\'') ADVANCE(143);
      END_STATE();
    case 16:
      if (lookahead == '\'') ADVANCE(144);
      END_STATE();
    case 17:
      if (lookahead == '\'') ADVANCE(145);
      END_STATE();
    case 18:
      if (lookahead == '\'') ADVANCE(146);
      END_STATE();
    case 19:
      if (lookahead == '\'') ADVANCE(147);
      END_STATE();
    case 20:
      if (lookahead == '\'') ADVANCE(148);
      END_STATE();
    case 21:
      if (lookahead == '\'') ADVANCE(149);
      END_STATE();
    case 22:
      if (lookahead == '\'') ADVANCE(150);
      END_STATE();
    case 23:
      if (lookahead == '\'') ADVANCE(151);
      END_STATE();
    case 24:
      if (lookahead == '\'') ADVANCE(152);
      END_STATE();
    case 25:
      if (lookahead == '\'') ADVANCE(152);
      if (lookahead == '}') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == '(') ADVANCE(172);
      END_STATE();
    case 27:
      if (lookahead == '.') ADVANCE(85);
      if (lookahead == 'b') ADVANCE(80);
      if (lookahead == 'e') ADVANCE(78);
      if (lookahead == 'f') ADVANCE(42);
      if (lookahead == 'o') ADVANCE(82);
      if (lookahead == 'x') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(28);
      END_STATE();
    case 28:
      if (lookahead == '.') ADVANCE(85);
      if (lookahead == 'e') ADVANCE(78);
      if (lookahead == 'f') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(28);
      END_STATE();
    case 29:
      if (lookahead == '.') ADVANCE(69);
      END_STATE();
    case 30:
      if (lookahead == '0') ADVANCE(27);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(128);
      END_STATE();
    case 31:
      if (lookahead == '1') ADVANCE(52);
      if (lookahead == '3') ADVANCE(35);
      if (lookahead == '6') ADVANCE(45);
      if (lookahead == '8') ADVANCE(127);
      END_STATE();
    case 32:
      if (lookahead == '1') ADVANCE(53);
      if (lookahead == '3') ADVANCE(37);
      if (lookahead == '6') ADVANCE(47);
      if (lookahead == '8') ADVANCE(121);
      END_STATE();
    case 33:
      if (lookahead == '1') ADVANCE(54);
      if (lookahead == '3') ADVANCE(38);
      if (lookahead == '6') ADVANCE(48);
      if (lookahead == '8') ADVANCE(123);
      END_STATE();
    case 34:
      if (lookahead == '1') ADVANCE(55);
      if (lookahead == '3') ADVANCE(39);
      if (lookahead == '6') ADVANCE(49);
      if (lookahead == '8') ADVANCE(125);
      END_STATE();
    case 35:
      if (lookahead == '2') ADVANCE(127);
      END_STATE();
    case 36:
      if (lookahead == '2') ADVANCE(120);
      END_STATE();
    case 37:
      if (lookahead == '2') ADVANCE(121);
      END_STATE();
    case 38:
      if (lookahead == '2') ADVANCE(123);
      END_STATE();
    case 39:
      if (lookahead == '2') ADVANCE(125);
      END_STATE();
    case 40:
      if (lookahead == '2') ADVANCE(115);
      END_STATE();
    case 41:
      if (lookahead == '2') ADVANCE(118);
      END_STATE();
    case 42:
      if (lookahead == '3') ADVANCE(36);
      if (lookahead == '6') ADVANCE(46);
      END_STATE();
    case 43:
      if (lookahead == '3') ADVANCE(40);
      if (lookahead == '6') ADVANCE(50);
      END_STATE();
    case 44:
      if (lookahead == '3') ADVANCE(41);
      if (lookahead == '6') ADVANCE(51);
      END_STATE();
    case 45:
      if (lookahead == '4') ADVANCE(127);
      END_STATE();
    case 46:
      if (lookahead == '4') ADVANCE(120);
      END_STATE();
    case 47:
      if (lookahead == '4') ADVANCE(121);
      END_STATE();
    case 48:
      if (lookahead == '4') ADVANCE(123);
      END_STATE();
    case 49:
      if (lookahead == '4') ADVANCE(125);
      END_STATE();
    case 50:
      if (lookahead == '4') ADVANCE(115);
      END_STATE();
    case 51:
      if (lookahead == '4') ADVANCE(118);
      END_STATE();
    case 52:
      if (lookahead == '6') ADVANCE(127);
      END_STATE();
    case 53:
      if (lookahead == '6') ADVANCE(121);
      END_STATE();
    case 54:
      if (lookahead == '6') ADVANCE(123);
      END_STATE();
    case 55:
      if (lookahead == '6') ADVANCE(125);
      END_STATE();
    case 56:
      if (lookahead == '=') ADVANCE(189);
      if (lookahead == '>') ADVANCE(160);
      if (lookahead == '~') ADVANCE(203);
      END_STATE();
    case 57:
      if (lookahead == '=') ADVANCE(189);
      if (lookahead == '~') ADVANCE(203);
      END_STATE();
    case 58:
      if (lookahead == ']') ADVANCE(197);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(66);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(111);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 64:
      if (lookahead == 'f') ADVANCE(162);
      END_STATE();
    case 65:
      if (lookahead == 'i') ADVANCE(67);
      END_STATE();
    case 66:
      if (lookahead == 'l') ADVANCE(72);
      END_STATE();
    case 67:
      if (lookahead == 'l') ADVANCE(109);
      END_STATE();
    case 68:
      if (lookahead == 'l') ADVANCE(61);
      END_STATE();
    case 69:
      if (lookahead == 'n') ADVANCE(63);
      END_STATE();
    case 70:
      if (lookahead == 'p') ADVANCE(68);
      END_STATE();
    case 71:
      if (lookahead == 'r') ADVANCE(74);
      END_STATE();
    case 72:
      if (lookahead == 's') ADVANCE(62);
      END_STATE();
    case 73:
      if (lookahead == 'u') ADVANCE(70);
      END_STATE();
    case 74:
      if (lookahead == 'u') ADVANCE(60);
      END_STATE();
    case 75:
      if (lookahead == 'w') ADVANCE(168);
      END_STATE();
    case 76:
      if (lookahead == 'x') ADVANCE(26);
      END_STATE();
    case 77:
      if (lookahead == '{') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(25);
      END_STATE();
    case 78:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(119);
      END_STATE();
    case 79:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      END_STATE();
    case 80:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(122);
      END_STATE();
    case 81:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(81)
      if (lookahead != 0) ADVANCE(163);
      END_STATE();
    case 82:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(124);
      END_STATE();
    case 83:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(119);
      END_STATE();
    case 84:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      END_STATE();
    case 85:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(116);
      END_STATE();
    case 86:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(126);
      END_STATE();
    case 87:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(25);
      END_STATE();
    case 88:
      if (eof) ADVANCE(89);
      if (lookahead == '"') ADVANCE(130);
      if (lookahead == '%') ADVANCE(76);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == '/') ADVANCE(164);
      if (lookahead == '0') ADVANCE(27);
      if (lookahead == ':') ADVANCE(129);
      if (lookahead == 'T') ADVANCE(73);
      if (lookahead == '[') ADVANCE(155);
      if (lookahead == '`') ADVANCE(169);
      if (lookahead == 'f') ADVANCE(59);
      if (lookahead == 'n') ADVANCE(65);
      if (lookahead == 't') ADVANCE(71);
      if (lookahead == '{') ADVANCE(159);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(88)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(128);
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
      if (lookahead == '.') ADVANCE(69);
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
      if (lookahead == 'f') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(116);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (lookahead == 'f') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_float_token2);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (lookahead == 'f') ADVANCE(44);
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
      if (lookahead == 'i') ADVANCE(32);
      if (lookahead == 'u') ADVANCE(32);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(122);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_integer_token2);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_integer_token2);
      if (lookahead == 'i') ADVANCE(33);
      if (lookahead == 'u') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(124);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_integer_token3);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_integer_token3);
      if (lookahead == 'i') ADVANCE(34);
      if (lookahead == 'u') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(126);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_integer_token4);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_integer_token4);
      if (lookahead == '.') ADVANCE(85);
      if (lookahead == 'e') ADVANCE(78);
      if (lookahead == 'f') ADVANCE(42);
      if (lookahead == 'i') ADVANCE(31);
      if (lookahead == 'u') ADVANCE(31);
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
      if (lookahead == ';') ADVANCE(90);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(132);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(131);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == ',') ADVANCE(157);
      if (lookahead == ':') ADVANCE(129);
      if (lookahead == '=') ADVANCE(139);
      if (lookahead == '}') ADVANCE(161);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(131);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == ',') ADVANCE(157);
      if (lookahead == '=') ADVANCE(139);
      if (lookahead == '}') ADVANCE(161);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(131);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == ',') ADVANCE(157);
      if (lookahead == ']') ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(131);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == ',') ADVANCE(157);
      if (lookahead == '}') ADVANCE(161);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(131);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
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
      if (lookahead == '=') ADVANCE(139);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(131);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '>') ADVANCE(160);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(131);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_SQUOTE_BSLASHa_SQUOTE);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_SQUOTE_BSLASHb_SQUOTE);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_SQUOTE_BSLASHe_SQUOTE);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_SQUOTE_BSLASHf_SQUOTE);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_SQUOTE_BSLASHn_SQUOTE);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_SQUOTE_BSLASHr_SQUOTE);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_SQUOTE_BSLASHt_SQUOTE);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_SQUOTE_BSLASHv_SQUOTE);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_char_token1);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_char_token2);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_char_token2);
      if (lookahead == '\'') ADVANCE(142);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == ']') ADVANCE(197);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_hash_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(163);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_regex_token1);
      if (lookahead == '\\') ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(166);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_regex_token1);
      if (lookahead == '\\') ADVANCE(167);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(166);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_regex_token1);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(166);
      if (lookahead == '\\') ADVANCE(167);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_Tuple_DOTnew);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_commandLiteral_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(170);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(171);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_commandLiteral_token1);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(171);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_PERCENTx_LPAREN);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_commandLiteral_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(174);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_commandLiteral_token2);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(174);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '0') ADVANCE(27);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(128);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '0') ADVANCE(27);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(128);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(186);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == 'x') ADVANCE(26);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      if (lookahead == '=') ADVANCE(196);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(188);
      if (lookahead == '=') ADVANCE(192);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      if (lookahead == '>') ADVANCE(195);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(194);
      if (lookahead == '>') ADVANCE(187);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_LT_EQ_GT);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_EQ_EQ_EQ);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_LBRACK_RBRACK);
      if (lookahead == '=') ADVANCE(199);
      if (lookahead == '?') ADVANCE(198);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_LBRACK_RBRACK_QMARK);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_LBRACK_RBRACK_EQ);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(190);
      if (lookahead == '~') ADVANCE(202);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_BANG_TILDE);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_EQ_TILDE);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 88},
  [2] = {.lex_state = 88},
  [3] = {.lex_state = 4},
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 88},
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
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 5},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 6},
  [26] = {.lex_state = 6},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 8},
  [37] = {.lex_state = 8},
  [38] = {.lex_state = 8},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 7},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 7},
  [49] = {.lex_state = 7},
  [50] = {.lex_state = 7},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 3},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 8},
  [61] = {.lex_state = 11},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 11},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 11},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 11},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 11},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 11},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 11},
  [82] = {.lex_state = 0},
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
  [96] = {.lex_state = 11},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 11},
  [99] = {.lex_state = 11},
  [100] = {.lex_state = 11},
  [101] = {.lex_state = 10},
  [102] = {.lex_state = 10},
  [103] = {.lex_state = 10},
  [104] = {.lex_state = 10},
  [105] = {.lex_state = 9},
  [106] = {.lex_state = 9},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 11},
  [109] = {.lex_state = 2},
  [110] = {.lex_state = 2},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 2},
  [114] = {.lex_state = 2},
  [115] = {.lex_state = 2},
  [116] = {.lex_state = 2},
  [117] = {.lex_state = 2},
  [118] = {.lex_state = 2},
  [119] = {.lex_state = 2},
  [120] = {.lex_state = 2},
  [121] = {.lex_state = 2},
  [122] = {.lex_state = 2},
  [123] = {.lex_state = 2},
  [124] = {.lex_state = 2},
  [125] = {.lex_state = 2},
  [126] = {.lex_state = 2},
  [127] = {.lex_state = 2},
  [128] = {.lex_state = 2},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 173},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 81},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 81},
  [140] = {.lex_state = 165},
  [141] = {.lex_state = 170},
  [142] = {.lex_state = 81},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 173},
  [145] = {.lex_state = 170},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 165},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 81},
  [154] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
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
    [anon_sym_of] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_Tuple_DOTnew] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
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
    [sym_program] = STATE(143),
    [sym__statement] = STATE(5),
    [sym__expression] = STATE(119),
    [sym_bool] = STATE(119),
    [sym_float] = STATE(119),
    [sym_integer] = STATE(119),
    [sym_symbol] = STATE(119),
    [sym_char] = STATE(119),
    [sym_string] = STATE(119),
    [sym_array] = STATE(119),
    [sym_hash] = STATE(119),
    [sym_regex] = STATE(119),
    [sym_tuple] = STATE(119),
    [sym_namedTupleLiteral] = STATE(119),
    [sym_commandLiteral] = STATE(119),
    [aux_sym_program_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_nil] = ACTIONS(5),
    [anon_sym_true] = ACTIONS(7),
    [anon_sym_false] = ACTIONS(7),
    [aux_sym_float_token1] = ACTIONS(9),
    [aux_sym_float_token2] = ACTIONS(11),
    [aux_sym_float_token3] = ACTIONS(11),
    [aux_sym_integer_token1] = ACTIONS(13),
    [aux_sym_integer_token2] = ACTIONS(13),
    [aux_sym_integer_token3] = ACTIONS(13),
    [aux_sym_integer_token4] = ACTIONS(15),
    [anon_sym_COLON] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(21),
    [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = ACTIONS(21),
    [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = ACTIONS(21),
    [anon_sym_SQUOTE_BSLASHa_SQUOTE] = ACTIONS(21),
    [anon_sym_SQUOTE_BSLASHb_SQUOTE] = ACTIONS(21),
    [anon_sym_SQUOTE_BSLASHe_SQUOTE] = ACTIONS(21),
    [anon_sym_SQUOTE_BSLASHf_SQUOTE] = ACTIONS(21),
    [anon_sym_SQUOTE_BSLASHn_SQUOTE] = ACTIONS(21),
    [anon_sym_SQUOTE_BSLASHr_SQUOTE] = ACTIONS(21),
    [anon_sym_SQUOTE_BSLASHt_SQUOTE] = ACTIONS(21),
    [anon_sym_SQUOTE_BSLASHv_SQUOTE] = ACTIONS(21),
    [aux_sym_char_token1] = ACTIONS(21),
    [aux_sym_char_token2] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_SLASH] = ACTIONS(29),
    [anon_sym_Tuple_DOTnew] = ACTIONS(31),
    [anon_sym_BQUOTE] = ACTIONS(33),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(35),
  },
  [2] = {
    [sym__statement] = STATE(2),
    [sym__expression] = STATE(119),
    [sym_bool] = STATE(119),
    [sym_float] = STATE(119),
    [sym_integer] = STATE(119),
    [sym_symbol] = STATE(119),
    [sym_char] = STATE(119),
    [sym_string] = STATE(119),
    [sym_array] = STATE(119),
    [sym_hash] = STATE(119),
    [sym_regex] = STATE(119),
    [sym_tuple] = STATE(119),
    [sym_namedTupleLiteral] = STATE(119),
    [sym_commandLiteral] = STATE(119),
    [aux_sym_program_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(37),
    [sym_nil] = ACTIONS(39),
    [anon_sym_true] = ACTIONS(42),
    [anon_sym_false] = ACTIONS(42),
    [aux_sym_float_token1] = ACTIONS(45),
    [aux_sym_float_token2] = ACTIONS(48),
    [aux_sym_float_token3] = ACTIONS(48),
    [aux_sym_integer_token1] = ACTIONS(51),
    [aux_sym_integer_token2] = ACTIONS(51),
    [aux_sym_integer_token3] = ACTIONS(51),
    [aux_sym_integer_token4] = ACTIONS(54),
    [anon_sym_COLON] = ACTIONS(57),
    [anon_sym_DQUOTE] = ACTIONS(60),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(63),
    [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = ACTIONS(63),
    [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = ACTIONS(63),
    [anon_sym_SQUOTE_BSLASHa_SQUOTE] = ACTIONS(63),
    [anon_sym_SQUOTE_BSLASHb_SQUOTE] = ACTIONS(63),
    [anon_sym_SQUOTE_BSLASHe_SQUOTE] = ACTIONS(63),
    [anon_sym_SQUOTE_BSLASHf_SQUOTE] = ACTIONS(63),
    [anon_sym_SQUOTE_BSLASHn_SQUOTE] = ACTIONS(63),
    [anon_sym_SQUOTE_BSLASHr_SQUOTE] = ACTIONS(63),
    [anon_sym_SQUOTE_BSLASHt_SQUOTE] = ACTIONS(63),
    [anon_sym_SQUOTE_BSLASHv_SQUOTE] = ACTIONS(63),
    [aux_sym_char_token1] = ACTIONS(63),
    [aux_sym_char_token2] = ACTIONS(66),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_LBRACE] = ACTIONS(72),
    [anon_sym_SLASH] = ACTIONS(75),
    [anon_sym_Tuple_DOTnew] = ACTIONS(78),
    [anon_sym_BQUOTE] = ACTIONS(81),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(84),
  },
  [3] = {
    [sym__expression] = STATE(59),
    [sym_identifier] = STATE(135),
    [sym_bool] = STATE(59),
    [sym_float] = STATE(59),
    [sym_integer] = STATE(59),
    [sym_symbol] = STATE(59),
    [sym_char] = STATE(59),
    [sym_string] = STATE(55),
    [sym_array] = STATE(59),
    [sym_hash] = STATE(59),
    [sym_regex] = STATE(59),
    [sym_tuple] = STATE(59),
    [sym_namedTupleLiteral] = STATE(59),
    [sym_commandLiteral] = STATE(59),
    [aux_sym_identifier_token1] = ACTIONS(87),
    [sym_nil] = ACTIONS(89),
    [anon_sym_true] = ACTIONS(91),
    [anon_sym_false] = ACTIONS(91),
    [aux_sym_float_token1] = ACTIONS(93),
    [aux_sym_float_token2] = ACTIONS(95),
    [aux_sym_float_token3] = ACTIONS(95),
    [aux_sym_integer_token1] = ACTIONS(97),
    [aux_sym_integer_token2] = ACTIONS(97),
    [aux_sym_integer_token3] = ACTIONS(97),
    [aux_sym_integer_token4] = ACTIONS(99),
    [anon_sym_COLON] = ACTIONS(101),
    [anon_sym_DQUOTE] = ACTIONS(103),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(105),
    [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = ACTIONS(105),
    [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = ACTIONS(105),
    [anon_sym_SQUOTE_BSLASHa_SQUOTE] = ACTIONS(105),
    [anon_sym_SQUOTE_BSLASHb_SQUOTE] = ACTIONS(105),
    [anon_sym_SQUOTE_BSLASHe_SQUOTE] = ACTIONS(105),
    [anon_sym_SQUOTE_BSLASHf_SQUOTE] = ACTIONS(105),
    [anon_sym_SQUOTE_BSLASHn_SQUOTE] = ACTIONS(105),
    [anon_sym_SQUOTE_BSLASHr_SQUOTE] = ACTIONS(105),
    [anon_sym_SQUOTE_BSLASHt_SQUOTE] = ACTIONS(105),
    [anon_sym_SQUOTE_BSLASHv_SQUOTE] = ACTIONS(105),
    [aux_sym_char_token1] = ACTIONS(105),
    [aux_sym_char_token2] = ACTIONS(107),
    [anon_sym_LBRACK] = ACTIONS(109),
    [anon_sym_LBRACE] = ACTIONS(111),
    [anon_sym_RBRACE] = ACTIONS(113),
    [anon_sym_SLASH] = ACTIONS(115),
    [anon_sym_Tuple_DOTnew] = ACTIONS(117),
    [anon_sym_BQUOTE] = ACTIONS(119),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(121),
  },
  [4] = {
    [sym__expression] = STATE(58),
    [sym_identifier] = STATE(151),
    [sym_bool] = STATE(58),
    [sym_float] = STATE(58),
    [sym_integer] = STATE(58),
    [sym_symbol] = STATE(58),
    [sym_char] = STATE(58),
    [sym_string] = STATE(31),
    [sym_array] = STATE(58),
    [sym_hash] = STATE(58),
    [sym_regex] = STATE(58),
    [sym_tuple] = STATE(58),
    [sym_namedTupleLiteral] = STATE(58),
    [sym_commandLiteral] = STATE(58),
    [aux_sym_identifier_token1] = ACTIONS(87),
    [sym_nil] = ACTIONS(123),
    [anon_sym_true] = ACTIONS(91),
    [anon_sym_false] = ACTIONS(91),
    [aux_sym_float_token1] = ACTIONS(93),
    [aux_sym_float_token2] = ACTIONS(95),
    [aux_sym_float_token3] = ACTIONS(95),
    [aux_sym_integer_token1] = ACTIONS(97),
    [aux_sym_integer_token2] = ACTIONS(97),
    [aux_sym_integer_token3] = ACTIONS(97),
    [aux_sym_integer_token4] = ACTIONS(99),
    [anon_sym_COLON] = ACTIONS(101),
    [anon_sym_DQUOTE] = ACTIONS(103),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(105),
    [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = ACTIONS(105),
    [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = ACTIONS(105),
    [anon_sym_SQUOTE_BSLASHa_SQUOTE] = ACTIONS(105),
    [anon_sym_SQUOTE_BSLASHb_SQUOTE] = ACTIONS(105),
    [anon_sym_SQUOTE_BSLASHe_SQUOTE] = ACTIONS(105),
    [anon_sym_SQUOTE_BSLASHf_SQUOTE] = ACTIONS(105),
    [anon_sym_SQUOTE_BSLASHn_SQUOTE] = ACTIONS(105),
    [anon_sym_SQUOTE_BSLASHr_SQUOTE] = ACTIONS(105),
    [anon_sym_SQUOTE_BSLASHt_SQUOTE] = ACTIONS(105),
    [anon_sym_SQUOTE_BSLASHv_SQUOTE] = ACTIONS(105),
    [aux_sym_char_token1] = ACTIONS(105),
    [aux_sym_char_token2] = ACTIONS(107),
    [anon_sym_LBRACK] = ACTIONS(109),
    [anon_sym_LBRACE] = ACTIONS(111),
    [anon_sym_RBRACE] = ACTIONS(125),
    [anon_sym_SLASH] = ACTIONS(115),
    [anon_sym_Tuple_DOTnew] = ACTIONS(117),
    [anon_sym_BQUOTE] = ACTIONS(119),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(121),
  },
  [5] = {
    [sym__statement] = STATE(2),
    [sym__expression] = STATE(119),
    [sym_bool] = STATE(119),
    [sym_float] = STATE(119),
    [sym_integer] = STATE(119),
    [sym_symbol] = STATE(119),
    [sym_char] = STATE(119),
    [sym_string] = STATE(119),
    [sym_array] = STATE(119),
    [sym_hash] = STATE(119),
    [sym_regex] = STATE(119),
    [sym_tuple] = STATE(119),
    [sym_namedTupleLiteral] = STATE(119),
    [sym_commandLiteral] = STATE(119),
    [aux_sym_program_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(127),
    [sym_nil] = ACTIONS(5),
    [anon_sym_true] = ACTIONS(7),
    [anon_sym_false] = ACTIONS(7),
    [aux_sym_float_token1] = ACTIONS(9),
    [aux_sym_float_token2] = ACTIONS(11),
    [aux_sym_float_token3] = ACTIONS(11),
    [aux_sym_integer_token1] = ACTIONS(13),
    [aux_sym_integer_token2] = ACTIONS(13),
    [aux_sym_integer_token3] = ACTIONS(13),
    [aux_sym_integer_token4] = ACTIONS(15),
    [anon_sym_COLON] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(21),
    [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = ACTIONS(21),
    [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = ACTIONS(21),
    [anon_sym_SQUOTE_BSLASHa_SQUOTE] = ACTIONS(21),
    [anon_sym_SQUOTE_BSLASHb_SQUOTE] = ACTIONS(21),
    [anon_sym_SQUOTE_BSLASHe_SQUOTE] = ACTIONS(21),
    [anon_sym_SQUOTE_BSLASHf_SQUOTE] = ACTIONS(21),
    [anon_sym_SQUOTE_BSLASHn_SQUOTE] = ACTIONS(21),
    [anon_sym_SQUOTE_BSLASHr_SQUOTE] = ACTIONS(21),
    [anon_sym_SQUOTE_BSLASHt_SQUOTE] = ACTIONS(21),
    [anon_sym_SQUOTE_BSLASHv_SQUOTE] = ACTIONS(21),
    [aux_sym_char_token1] = ACTIONS(21),
    [aux_sym_char_token2] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_SLASH] = ACTIONS(29),
    [anon_sym_Tuple_DOTnew] = ACTIONS(31),
    [anon_sym_BQUOTE] = ACTIONS(33),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(35),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 17,
    ACTIONS(93), 1,
      aux_sym_float_token1,
    ACTIONS(99), 1,
      aux_sym_integer_token4,
    ACTIONS(107), 1,
      aux_sym_char_token2,
    ACTIONS(109), 1,
      anon_sym_LBRACK,
    ACTIONS(111), 1,
      anon_sym_LBRACE,
    ACTIONS(115), 1,
      anon_sym_SLASH,
    ACTIONS(117), 1,
      anon_sym_Tuple_DOTnew,
    ACTIONS(119), 1,
      anon_sym_BQUOTE,
    ACTIONS(121), 1,
      anon_sym_PERCENTx_LPAREN,
    ACTIONS(129), 1,
      sym_nil,
    ACTIONS(133), 1,
      anon_sym_COLON,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(95), 2,
      aux_sym_float_token2,
      aux_sym_float_token3,
    ACTIONS(131), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(97), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
    ACTIONS(105), 12,
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
    STATE(111), 13,
      sym__expression,
      sym_bool,
      sym_float,
      sym_integer,
      sym_symbol,
      sym_char,
      sym_string,
      sym_array,
      sym_hash,
      sym_regex,
      sym_tuple,
      sym_namedTupleLiteral,
      sym_commandLiteral,
  [79] = 17,
    ACTIONS(93), 1,
      aux_sym_float_token1,
    ACTIONS(99), 1,
      aux_sym_integer_token4,
    ACTIONS(107), 1,
      aux_sym_char_token2,
    ACTIONS(109), 1,
      anon_sym_LBRACK,
    ACTIONS(111), 1,
      anon_sym_LBRACE,
    ACTIONS(115), 1,
      anon_sym_SLASH,
    ACTIONS(117), 1,
      anon_sym_Tuple_DOTnew,
    ACTIONS(119), 1,
      anon_sym_BQUOTE,
    ACTIONS(121), 1,
      anon_sym_PERCENTx_LPAREN,
    ACTIONS(133), 1,
      anon_sym_COLON,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      sym_nil,
    ACTIONS(95), 2,
      aux_sym_float_token2,
      aux_sym_float_token3,
    ACTIONS(131), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(97), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
    ACTIONS(105), 12,
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
    STATE(112), 13,
      sym__expression,
      sym_bool,
      sym_float,
      sym_integer,
      sym_symbol,
      sym_char,
      sym_string,
      sym_array,
      sym_hash,
      sym_regex,
      sym_tuple,
      sym_namedTupleLiteral,
      sym_commandLiteral,
  [158] = 17,
    ACTIONS(93), 1,
      aux_sym_float_token1,
    ACTIONS(99), 1,
      aux_sym_integer_token4,
    ACTIONS(107), 1,
      aux_sym_char_token2,
    ACTIONS(109), 1,
      anon_sym_LBRACK,
    ACTIONS(111), 1,
      anon_sym_LBRACE,
    ACTIONS(115), 1,
      anon_sym_SLASH,
    ACTIONS(117), 1,
      anon_sym_Tuple_DOTnew,
    ACTIONS(119), 1,
      anon_sym_BQUOTE,
    ACTIONS(121), 1,
      anon_sym_PERCENTx_LPAREN,
    ACTIONS(139), 1,
      sym_nil,
    ACTIONS(141), 1,
      anon_sym_COLON,
    ACTIONS(143), 1,
      anon_sym_DQUOTE,
    ACTIONS(95), 2,
      aux_sym_float_token2,
      aux_sym_float_token3,
    ACTIONS(131), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(97), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
    ACTIONS(105), 12,
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
    STATE(146), 13,
      sym__expression,
      sym_bool,
      sym_float,
      sym_integer,
      sym_symbol,
      sym_char,
      sym_string,
      sym_array,
      sym_hash,
      sym_regex,
      sym_tuple,
      sym_namedTupleLiteral,
      sym_commandLiteral,
  [237] = 17,
    ACTIONS(93), 1,
      aux_sym_float_token1,
    ACTIONS(99), 1,
      aux_sym_integer_token4,
    ACTIONS(107), 1,
      aux_sym_char_token2,
    ACTIONS(109), 1,
      anon_sym_LBRACK,
    ACTIONS(111), 1,
      anon_sym_LBRACE,
    ACTIONS(115), 1,
      anon_sym_SLASH,
    ACTIONS(117), 1,
      anon_sym_Tuple_DOTnew,
    ACTIONS(119), 1,
      anon_sym_BQUOTE,
    ACTIONS(121), 1,
      anon_sym_PERCENTx_LPAREN,
    ACTIONS(133), 1,
      anon_sym_COLON,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(145), 1,
      sym_nil,
    ACTIONS(95), 2,
      aux_sym_float_token2,
      aux_sym_float_token3,
    ACTIONS(131), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(97), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
    ACTIONS(105), 12,
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
    STATE(76), 13,
      sym__expression,
      sym_bool,
      sym_float,
      sym_integer,
      sym_symbol,
      sym_char,
      sym_string,
      sym_array,
      sym_hash,
      sym_regex,
      sym_tuple,
      sym_namedTupleLiteral,
      sym_commandLiteral,
  [316] = 17,
    ACTIONS(93), 1,
      aux_sym_float_token1,
    ACTIONS(99), 1,
      aux_sym_integer_token4,
    ACTIONS(107), 1,
      aux_sym_char_token2,
    ACTIONS(109), 1,
      anon_sym_LBRACK,
    ACTIONS(111), 1,
      anon_sym_LBRACE,
    ACTIONS(115), 1,
      anon_sym_SLASH,
    ACTIONS(117), 1,
      anon_sym_Tuple_DOTnew,
    ACTIONS(119), 1,
      anon_sym_BQUOTE,
    ACTIONS(121), 1,
      anon_sym_PERCENTx_LPAREN,
    ACTIONS(133), 1,
      anon_sym_COLON,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(147), 1,
      sym_nil,
    ACTIONS(95), 2,
      aux_sym_float_token2,
      aux_sym_float_token3,
    ACTIONS(131), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(97), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
    ACTIONS(105), 12,
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
    STATE(78), 13,
      sym__expression,
      sym_bool,
      sym_float,
      sym_integer,
      sym_symbol,
      sym_char,
      sym_string,
      sym_array,
      sym_hash,
      sym_regex,
      sym_tuple,
      sym_namedTupleLiteral,
      sym_commandLiteral,
  [395] = 17,
    ACTIONS(93), 1,
      aux_sym_float_token1,
    ACTIONS(99), 1,
      aux_sym_integer_token4,
    ACTIONS(107), 1,
      aux_sym_char_token2,
    ACTIONS(109), 1,
      anon_sym_LBRACK,
    ACTIONS(111), 1,
      anon_sym_LBRACE,
    ACTIONS(115), 1,
      anon_sym_SLASH,
    ACTIONS(117), 1,
      anon_sym_Tuple_DOTnew,
    ACTIONS(119), 1,
      anon_sym_BQUOTE,
    ACTIONS(121), 1,
      anon_sym_PERCENTx_LPAREN,
    ACTIONS(149), 1,
      sym_nil,
    ACTIONS(151), 1,
      anon_sym_COLON,
    ACTIONS(153), 1,
      anon_sym_DQUOTE,
    ACTIONS(95), 2,
      aux_sym_float_token2,
      aux_sym_float_token3,
    ACTIONS(131), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(97), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
    ACTIONS(105), 12,
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
    STATE(97), 13,
      sym__expression,
      sym_bool,
      sym_float,
      sym_integer,
      sym_symbol,
      sym_char,
      sym_string,
      sym_array,
      sym_hash,
      sym_regex,
      sym_tuple,
      sym_namedTupleLiteral,
      sym_commandLiteral,
  [474] = 17,
    ACTIONS(93), 1,
      aux_sym_float_token1,
    ACTIONS(99), 1,
      aux_sym_integer_token4,
    ACTIONS(107), 1,
      aux_sym_char_token2,
    ACTIONS(109), 1,
      anon_sym_LBRACK,
    ACTIONS(111), 1,
      anon_sym_LBRACE,
    ACTIONS(115), 1,
      anon_sym_SLASH,
    ACTIONS(117), 1,
      anon_sym_Tuple_DOTnew,
    ACTIONS(119), 1,
      anon_sym_BQUOTE,
    ACTIONS(121), 1,
      anon_sym_PERCENTx_LPAREN,
    ACTIONS(151), 1,
      anon_sym_COLON,
    ACTIONS(153), 1,
      anon_sym_DQUOTE,
    ACTIONS(155), 1,
      sym_nil,
    ACTIONS(95), 2,
      aux_sym_float_token2,
      aux_sym_float_token3,
    ACTIONS(131), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(97), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
    ACTIONS(105), 12,
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
    STATE(82), 13,
      sym__expression,
      sym_bool,
      sym_float,
      sym_integer,
      sym_symbol,
      sym_char,
      sym_string,
      sym_array,
      sym_hash,
      sym_regex,
      sym_tuple,
      sym_namedTupleLiteral,
      sym_commandLiteral,
  [553] = 17,
    ACTIONS(93), 1,
      aux_sym_float_token1,
    ACTIONS(99), 1,
      aux_sym_integer_token4,
    ACTIONS(107), 1,
      aux_sym_char_token2,
    ACTIONS(109), 1,
      anon_sym_LBRACK,
    ACTIONS(111), 1,
      anon_sym_LBRACE,
    ACTIONS(115), 1,
      anon_sym_SLASH,
    ACTIONS(117), 1,
      anon_sym_Tuple_DOTnew,
    ACTIONS(119), 1,
      anon_sym_BQUOTE,
    ACTIONS(121), 1,
      anon_sym_PERCENTx_LPAREN,
    ACTIONS(133), 1,
      anon_sym_COLON,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(157), 1,
      sym_nil,
    ACTIONS(95), 2,
      aux_sym_float_token2,
      aux_sym_float_token3,
    ACTIONS(131), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(97), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
    ACTIONS(105), 12,
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
    STATE(68), 13,
      sym__expression,
      sym_bool,
      sym_float,
      sym_integer,
      sym_symbol,
      sym_char,
      sym_string,
      sym_array,
      sym_hash,
      sym_regex,
      sym_tuple,
      sym_namedTupleLiteral,
      sym_commandLiteral,
  [632] = 17,
    ACTIONS(93), 1,
      aux_sym_float_token1,
    ACTIONS(99), 1,
      aux_sym_integer_token4,
    ACTIONS(107), 1,
      aux_sym_char_token2,
    ACTIONS(109), 1,
      anon_sym_LBRACK,
    ACTIONS(111), 1,
      anon_sym_LBRACE,
    ACTIONS(115), 1,
      anon_sym_SLASH,
    ACTIONS(117), 1,
      anon_sym_Tuple_DOTnew,
    ACTIONS(119), 1,
      anon_sym_BQUOTE,
    ACTIONS(121), 1,
      anon_sym_PERCENTx_LPAREN,
    ACTIONS(133), 1,
      anon_sym_COLON,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(159), 1,
      sym_nil,
    ACTIONS(95), 2,
      aux_sym_float_token2,
      aux_sym_float_token3,
    ACTIONS(131), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(97), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
    ACTIONS(105), 12,
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
    STATE(72), 13,
      sym__expression,
      sym_bool,
      sym_float,
      sym_integer,
      sym_symbol,
      sym_char,
      sym_string,
      sym_array,
      sym_hash,
      sym_regex,
      sym_tuple,
      sym_namedTupleLiteral,
      sym_commandLiteral,
  [711] = 17,
    ACTIONS(93), 1,
      aux_sym_float_token1,
    ACTIONS(99), 1,
      aux_sym_integer_token4,
    ACTIONS(107), 1,
      aux_sym_char_token2,
    ACTIONS(109), 1,
      anon_sym_LBRACK,
    ACTIONS(111), 1,
      anon_sym_LBRACE,
    ACTIONS(115), 1,
      anon_sym_SLASH,
    ACTIONS(117), 1,
      anon_sym_Tuple_DOTnew,
    ACTIONS(119), 1,
      anon_sym_BQUOTE,
    ACTIONS(121), 1,
      anon_sym_PERCENTx_LPAREN,
    ACTIONS(133), 1,
      anon_sym_COLON,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(155), 1,
      sym_nil,
    ACTIONS(95), 2,
      aux_sym_float_token2,
      aux_sym_float_token3,
    ACTIONS(131), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(97), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
    ACTIONS(105), 12,
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
    STATE(82), 13,
      sym__expression,
      sym_bool,
      sym_float,
      sym_integer,
      sym_symbol,
      sym_char,
      sym_string,
      sym_array,
      sym_hash,
      sym_regex,
      sym_tuple,
      sym_namedTupleLiteral,
      sym_commandLiteral,
  [790] = 17,
    ACTIONS(93), 1,
      aux_sym_float_token1,
    ACTIONS(99), 1,
      aux_sym_integer_token4,
    ACTIONS(107), 1,
      aux_sym_char_token2,
    ACTIONS(109), 1,
      anon_sym_LBRACK,
    ACTIONS(111), 1,
      anon_sym_LBRACE,
    ACTIONS(115), 1,
      anon_sym_SLASH,
    ACTIONS(117), 1,
      anon_sym_Tuple_DOTnew,
    ACTIONS(119), 1,
      anon_sym_BQUOTE,
    ACTIONS(121), 1,
      anon_sym_PERCENTx_LPAREN,
    ACTIONS(151), 1,
      anon_sym_COLON,
    ACTIONS(153), 1,
      anon_sym_DQUOTE,
    ACTIONS(161), 1,
      sym_nil,
    ACTIONS(95), 2,
      aux_sym_float_token2,
      aux_sym_float_token3,
    ACTIONS(131), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(97), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
    ACTIONS(105), 12,
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
    STATE(70), 13,
      sym__expression,
      sym_bool,
      sym_float,
      sym_integer,
      sym_symbol,
      sym_char,
      sym_string,
      sym_array,
      sym_hash,
      sym_regex,
      sym_tuple,
      sym_namedTupleLiteral,
      sym_commandLiteral,
  [869] = 2,
    ACTIONS(165), 4,
      aux_sym_float_token2,
      aux_sym_float_token3,
      aux_sym_integer_token4,
      aux_sym_char_token2,
    ACTIONS(163), 28,
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
  [906] = 4,
    ACTIONS(169), 1,
      anon_sym_DQUOTE,
    STATE(51), 1,
      sym__operator,
    ACTIONS(171), 7,
      anon_sym_STAR,
      anon_sym_EQ_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_LBRACK_RBRACK,
      anon_sym_BANG,
    ACTIONS(167), 20,
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
  [944] = 4,
    ACTIONS(173), 1,
      anon_sym_DQUOTE,
    STATE(51), 1,
      sym__operator,
    ACTIONS(171), 7,
      anon_sym_STAR,
      anon_sym_EQ_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_LBRACK_RBRACK,
      anon_sym_BANG,
    ACTIONS(167), 20,
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
  [982] = 4,
    ACTIONS(175), 1,
      anon_sym_DQUOTE,
    STATE(51), 1,
      sym__operator,
    ACTIONS(171), 7,
      anon_sym_STAR,
      anon_sym_EQ_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_LBRACK_RBRACK,
      anon_sym_BANG,
    ACTIONS(167), 20,
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
  [1020] = 4,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
    STATE(121), 1,
      sym__operator,
    ACTIONS(181), 7,
      anon_sym_STAR,
      anon_sym_EQ_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_LBRACK_RBRACK,
      anon_sym_BANG,
    ACTIONS(177), 20,
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
  [1058] = 4,
    ACTIONS(183), 1,
      anon_sym_DQUOTE,
    STATE(51), 1,
      sym__operator,
    ACTIONS(171), 7,
      anon_sym_STAR,
      anon_sym_EQ_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_LBRACK_RBRACK,
      anon_sym_BANG,
    ACTIONS(167), 20,
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
  [1096] = 2,
    ACTIONS(187), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
    ACTIONS(185), 4,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [1107] = 2,
    ACTIONS(187), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
    ACTIONS(189), 4,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [1118] = 2,
    ACTIONS(187), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
    ACTIONS(191), 3,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [1128] = 2,
    ACTIONS(187), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
    ACTIONS(193), 3,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [1138] = 1,
    ACTIONS(195), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [1145] = 1,
    ACTIONS(197), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [1152] = 1,
    ACTIONS(199), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [1159] = 1,
    ACTIONS(201), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [1166] = 2,
    ACTIONS(203), 1,
      anon_sym_COLON,
    ACTIONS(205), 3,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [1175] = 2,
    ACTIONS(187), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
    ACTIONS(193), 2,
      anon_sym_SEMI,
      aux_sym__statement_token1,
  [1184] = 1,
    ACTIONS(207), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [1191] = 2,
    ACTIONS(185), 2,
      anon_sym_SEMI,
      aux_sym__statement_token1,
    ACTIONS(187), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
  [1200] = 1,
    ACTIONS(209), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [1207] = 2,
    ACTIONS(185), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(187), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
  [1216] = 2,
    ACTIONS(187), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
    ACTIONS(191), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1225] = 2,
    ACTIONS(187), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
    ACTIONS(193), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1234] = 1,
    ACTIONS(211), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [1241] = 2,
    ACTIONS(187), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
    ACTIONS(189), 2,
      anon_sym_SEMI,
      aux_sym__statement_token1,
  [1250] = 2,
    ACTIONS(187), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
    ACTIONS(191), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1259] = 1,
    ACTIONS(213), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [1266] = 1,
    ACTIONS(215), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [1273] = 1,
    ACTIONS(217), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [1280] = 1,
    ACTIONS(219), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [1287] = 2,
    ACTIONS(187), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
    ACTIONS(191), 2,
      anon_sym_SEMI,
      aux_sym__statement_token1,
  [1296] = 1,
    ACTIONS(221), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [1303] = 2,
    ACTIONS(185), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(187), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
  [1312] = 2,
    ACTIONS(187), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
    ACTIONS(193), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1321] = 2,
    ACTIONS(187), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
    ACTIONS(189), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1330] = 1,
    ACTIONS(223), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [1337] = 1,
    ACTIONS(225), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [1344] = 1,
    ACTIONS(227), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [1351] = 1,
    ACTIONS(229), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [1358] = 2,
    ACTIONS(231), 1,
      anon_sym_COLON,
    ACTIONS(205), 3,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [1367] = 1,
    ACTIONS(233), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [1374] = 3,
    ACTIONS(235), 1,
      aux_sym_identifier_token1,
    ACTIONS(237), 1,
      anon_sym_DQUOTE,
    STATE(149), 2,
      sym_identifier,
      sym_string,
  [1385] = 4,
    ACTIONS(239), 1,
      anon_sym_COMMA,
    ACTIONS(241), 1,
      anon_sym_EQ_GT,
    ACTIONS(243), 1,
      anon_sym_RBRACE,
    STATE(62), 1,
      aux_sym_array_repeat1,
  [1398] = 4,
    ACTIONS(239), 1,
      anon_sym_COMMA,
    ACTIONS(245), 1,
      anon_sym_EQ_GT,
    ACTIONS(247), 1,
      anon_sym_RBRACE,
    STATE(85), 1,
      aux_sym_array_repeat1,
  [1411] = 2,
    ACTIONS(187), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
    ACTIONS(189), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1420] = 3,
    ACTIONS(249), 1,
      anon_sym_DQUOTE,
    ACTIONS(251), 1,
      aux_sym_symbol_token1,
    STATE(95), 1,
      aux_sym_symbol_repeat1,
  [1430] = 3,
    ACTIONS(239), 1,
      anon_sym_COMMA,
    ACTIONS(253), 1,
      anon_sym_RBRACE,
    STATE(107), 1,
      aux_sym_array_repeat1,
  [1440] = 3,
    ACTIONS(255), 1,
      anon_sym_COMMA,
    ACTIONS(257), 1,
      anon_sym_RBRACK,
    STATE(80), 1,
      aux_sym_array_repeat1,
  [1450] = 3,
    ACTIONS(259), 1,
      anon_sym_COMMA,
    ACTIONS(262), 1,
      anon_sym_RBRACE,
    STATE(64), 1,
      aux_sym_hash_repeat1,
  [1460] = 3,
    ACTIONS(264), 1,
      anon_sym_DQUOTE,
    ACTIONS(266), 1,
      aux_sym_symbol_token1,
    STATE(89), 1,
      aux_sym_symbol_repeat1,
  [1470] = 3,
    ACTIONS(268), 1,
      anon_sym_COMMA,
    ACTIONS(270), 1,
      anon_sym_RBRACE,
    STATE(64), 1,
      aux_sym_hash_repeat1,
  [1480] = 3,
    ACTIONS(272), 1,
      anon_sym_COMMA,
    ACTIONS(275), 1,
      anon_sym_RBRACE,
    STATE(67), 1,
      aux_sym_namedTupleLiteral_repeat1,
  [1490] = 3,
    ACTIONS(277), 1,
      anon_sym_COMMA,
    ACTIONS(279), 1,
      anon_sym_RBRACE,
    STATE(75), 1,
      aux_sym_namedTupleLiteral_repeat1,
  [1500] = 3,
    ACTIONS(277), 1,
      anon_sym_COMMA,
    ACTIONS(281), 1,
      anon_sym_RBRACE,
    STATE(67), 1,
      aux_sym_namedTupleLiteral_repeat1,
  [1510] = 3,
    ACTIONS(255), 1,
      anon_sym_COMMA,
    ACTIONS(283), 1,
      anon_sym_RBRACK,
    STATE(63), 1,
      aux_sym_array_repeat1,
  [1520] = 3,
    ACTIONS(266), 1,
      aux_sym_symbol_token1,
    ACTIONS(285), 1,
      anon_sym_DQUOTE,
    STATE(89), 1,
      aux_sym_symbol_repeat1,
  [1530] = 3,
    ACTIONS(268), 1,
      anon_sym_COMMA,
    ACTIONS(287), 1,
      anon_sym_RBRACE,
    STATE(74), 1,
      aux_sym_hash_repeat1,
  [1540] = 3,
    ACTIONS(289), 1,
      anon_sym_DQUOTE,
    ACTIONS(291), 1,
      aux_sym_symbol_token1,
    STATE(98), 1,
      aux_sym_symbol_repeat1,
  [1550] = 3,
    ACTIONS(268), 1,
      anon_sym_COMMA,
    ACTIONS(293), 1,
      anon_sym_RBRACE,
    STATE(64), 1,
      aux_sym_hash_repeat1,
  [1560] = 3,
    ACTIONS(277), 1,
      anon_sym_COMMA,
    ACTIONS(295), 1,
      anon_sym_RBRACE,
    STATE(67), 1,
      aux_sym_namedTupleLiteral_repeat1,
  [1570] = 3,
    ACTIONS(277), 1,
      anon_sym_COMMA,
    ACTIONS(297), 1,
      anon_sym_RBRACE,
    STATE(69), 1,
      aux_sym_namedTupleLiteral_repeat1,
  [1580] = 3,
    ACTIONS(299), 1,
      anon_sym_DQUOTE,
    ACTIONS(301), 1,
      aux_sym_symbol_token1,
    STATE(81), 1,
      aux_sym_symbol_repeat1,
  [1590] = 3,
    ACTIONS(268), 1,
      anon_sym_COMMA,
    ACTIONS(303), 1,
      anon_sym_RBRACE,
    STATE(66), 1,
      aux_sym_hash_repeat1,
  [1600] = 3,
    ACTIONS(305), 1,
      anon_sym_DQUOTE,
    ACTIONS(307), 1,
      aux_sym_symbol_token1,
    STATE(83), 1,
      aux_sym_symbol_repeat1,
  [1610] = 3,
    ACTIONS(309), 1,
      anon_sym_COMMA,
    ACTIONS(312), 1,
      anon_sym_RBRACK,
    STATE(80), 1,
      aux_sym_array_repeat1,
  [1620] = 3,
    ACTIONS(266), 1,
      aux_sym_symbol_token1,
    ACTIONS(314), 1,
      anon_sym_DQUOTE,
    STATE(89), 1,
      aux_sym_symbol_repeat1,
  [1630] = 1,
    ACTIONS(312), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [1636] = 3,
    ACTIONS(266), 1,
      aux_sym_symbol_token1,
    ACTIONS(316), 1,
      anon_sym_DQUOTE,
    STATE(89), 1,
      aux_sym_symbol_repeat1,
  [1646] = 3,
    ACTIONS(318), 1,
      anon_sym_DQUOTE,
    ACTIONS(320), 1,
      aux_sym_symbol_token1,
    STATE(87), 1,
      aux_sym_symbol_repeat1,
  [1656] = 3,
    ACTIONS(239), 1,
      anon_sym_COMMA,
    ACTIONS(322), 1,
      anon_sym_RBRACE,
    STATE(107), 1,
      aux_sym_array_repeat1,
  [1666] = 3,
    ACTIONS(324), 1,
      anon_sym_DQUOTE,
    ACTIONS(326), 1,
      aux_sym_symbol_token1,
    STATE(91), 1,
      aux_sym_symbol_repeat1,
  [1676] = 3,
    ACTIONS(266), 1,
      aux_sym_symbol_token1,
    ACTIONS(328), 1,
      anon_sym_DQUOTE,
    STATE(89), 1,
      aux_sym_symbol_repeat1,
  [1686] = 3,
    ACTIONS(255), 1,
      anon_sym_COMMA,
    ACTIONS(330), 1,
      anon_sym_RBRACK,
    STATE(80), 1,
      aux_sym_array_repeat1,
  [1696] = 3,
    ACTIONS(332), 1,
      anon_sym_DQUOTE,
    ACTIONS(335), 1,
      aux_sym_symbol_token1,
    STATE(89), 1,
      aux_sym_symbol_repeat1,
  [1706] = 3,
    ACTIONS(266), 1,
      aux_sym_symbol_token1,
    ACTIONS(338), 1,
      anon_sym_DQUOTE,
    STATE(89), 1,
      aux_sym_symbol_repeat1,
  [1716] = 3,
    ACTIONS(266), 1,
      aux_sym_symbol_token1,
    ACTIONS(340), 1,
      anon_sym_DQUOTE,
    STATE(89), 1,
      aux_sym_symbol_repeat1,
  [1726] = 3,
    ACTIONS(342), 1,
      anon_sym_DQUOTE,
    ACTIONS(344), 1,
      aux_sym_symbol_token1,
    STATE(94), 1,
      aux_sym_symbol_repeat1,
  [1736] = 3,
    ACTIONS(346), 1,
      anon_sym_DQUOTE,
    ACTIONS(348), 1,
      aux_sym_symbol_token1,
    STATE(65), 1,
      aux_sym_symbol_repeat1,
  [1746] = 3,
    ACTIONS(266), 1,
      aux_sym_symbol_token1,
    ACTIONS(350), 1,
      anon_sym_DQUOTE,
    STATE(89), 1,
      aux_sym_symbol_repeat1,
  [1756] = 3,
    ACTIONS(266), 1,
      aux_sym_symbol_token1,
    ACTIONS(352), 1,
      anon_sym_DQUOTE,
    STATE(89), 1,
      aux_sym_symbol_repeat1,
  [1766] = 3,
    ACTIONS(354), 1,
      anon_sym_DQUOTE,
    ACTIONS(356), 1,
      aux_sym_symbol_token1,
    STATE(100), 1,
      aux_sym_symbol_repeat1,
  [1776] = 3,
    ACTIONS(255), 1,
      anon_sym_COMMA,
    ACTIONS(358), 1,
      anon_sym_RBRACK,
    STATE(88), 1,
      aux_sym_array_repeat1,
  [1786] = 3,
    ACTIONS(266), 1,
      aux_sym_symbol_token1,
    ACTIONS(360), 1,
      anon_sym_DQUOTE,
    STATE(89), 1,
      aux_sym_symbol_repeat1,
  [1796] = 3,
    ACTIONS(362), 1,
      anon_sym_DQUOTE,
    ACTIONS(364), 1,
      aux_sym_symbol_token1,
    STATE(90), 1,
      aux_sym_symbol_repeat1,
  [1806] = 3,
    ACTIONS(266), 1,
      aux_sym_symbol_token1,
    ACTIONS(366), 1,
      anon_sym_DQUOTE,
    STATE(89), 1,
      aux_sym_symbol_repeat1,
  [1816] = 2,
    ACTIONS(189), 1,
      anon_sym_EQ_GT,
    ACTIONS(187), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
  [1824] = 2,
    ACTIONS(193), 1,
      anon_sym_EQ_GT,
    ACTIONS(187), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
  [1832] = 2,
    ACTIONS(185), 1,
      anon_sym_EQ_GT,
    ACTIONS(187), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
  [1840] = 2,
    ACTIONS(191), 1,
      anon_sym_EQ_GT,
    ACTIONS(187), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
  [1848] = 2,
    ACTIONS(189), 1,
      anon_sym_COLON,
    ACTIONS(187), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
  [1856] = 2,
    ACTIONS(185), 1,
      anon_sym_COLON,
    ACTIONS(187), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
  [1864] = 3,
    ACTIONS(312), 1,
      anon_sym_RBRACE,
    ACTIONS(368), 1,
      anon_sym_COMMA,
    STATE(107), 1,
      aux_sym_array_repeat1,
  [1874] = 3,
    ACTIONS(371), 1,
      anon_sym_DQUOTE,
    ACTIONS(373), 1,
      aux_sym_symbol_token1,
    STATE(71), 1,
      aux_sym_symbol_repeat1,
  [1884] = 2,
    ACTIONS(221), 1,
      aux_sym__statement_token1,
    ACTIONS(375), 1,
      anon_sym_SEMI,
  [1891] = 2,
    ACTIONS(197), 1,
      aux_sym__statement_token1,
    ACTIONS(377), 1,
      anon_sym_SEMI,
  [1898] = 1,
    ACTIONS(379), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1903] = 1,
    ACTIONS(381), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1908] = 2,
    ACTIONS(233), 1,
      aux_sym__statement_token1,
    ACTIONS(383), 1,
      anon_sym_SEMI,
  [1915] = 2,
    ACTIONS(229), 1,
      aux_sym__statement_token1,
    ACTIONS(385), 1,
      anon_sym_SEMI,
  [1922] = 2,
    ACTIONS(227), 1,
      aux_sym__statement_token1,
    ACTIONS(387), 1,
      anon_sym_SEMI,
  [1929] = 2,
    ACTIONS(215), 1,
      aux_sym__statement_token1,
    ACTIONS(389), 1,
      anon_sym_SEMI,
  [1936] = 2,
    ACTIONS(225), 1,
      aux_sym__statement_token1,
    ACTIONS(391), 1,
      anon_sym_SEMI,
  [1943] = 2,
    ACTIONS(217), 1,
      aux_sym__statement_token1,
    ACTIONS(393), 1,
      anon_sym_SEMI,
  [1950] = 2,
    ACTIONS(395), 1,
      anon_sym_SEMI,
    ACTIONS(397), 1,
      aux_sym__statement_token1,
  [1957] = 2,
    ACTIONS(199), 1,
      aux_sym__statement_token1,
    ACTIONS(399), 1,
      anon_sym_SEMI,
  [1964] = 2,
    ACTIONS(223), 1,
      aux_sym__statement_token1,
    ACTIONS(401), 1,
      anon_sym_SEMI,
  [1971] = 2,
    ACTIONS(207), 1,
      aux_sym__statement_token1,
    ACTIONS(403), 1,
      anon_sym_SEMI,
  [1978] = 2,
    ACTIONS(209), 1,
      aux_sym__statement_token1,
    ACTIONS(405), 1,
      anon_sym_SEMI,
  [1985] = 2,
    ACTIONS(219), 1,
      aux_sym__statement_token1,
    ACTIONS(407), 1,
      anon_sym_SEMI,
  [1992] = 2,
    ACTIONS(195), 1,
      aux_sym__statement_token1,
    ACTIONS(409), 1,
      anon_sym_SEMI,
  [1999] = 2,
    ACTIONS(201), 1,
      aux_sym__statement_token1,
    ACTIONS(411), 1,
      anon_sym_SEMI,
  [2006] = 2,
    ACTIONS(211), 1,
      aux_sym__statement_token1,
    ACTIONS(413), 1,
      anon_sym_SEMI,
  [2013] = 2,
    ACTIONS(213), 1,
      aux_sym__statement_token1,
    ACTIONS(415), 1,
      anon_sym_SEMI,
  [2020] = 1,
    ACTIONS(417), 1,
      anon_sym_RPAREN,
  [2024] = 1,
    ACTIONS(419), 1,
      aux_sym_commandLiteral_token2,
  [2028] = 1,
    ACTIONS(421), 1,
      anon_sym_EQ_GT,
  [2032] = 1,
    ACTIONS(423), 1,
      aux_sym_hash_token1,
  [2036] = 1,
    ACTIONS(417), 1,
      anon_sym_BQUOTE,
  [2040] = 1,
    ACTIONS(425), 1,
      anon_sym_SLASH,
  [2044] = 1,
    ACTIONS(231), 1,
      anon_sym_COLON,
  [2048] = 1,
    ACTIONS(427), 1,
      anon_sym_of,
  [2052] = 1,
    ACTIONS(429), 1,
      anon_sym_COLON,
  [2056] = 1,
    ACTIONS(431), 1,
      anon_sym_SLASH,
  [2060] = 1,
    ACTIONS(433), 1,
      aux_sym_hash_token1,
  [2064] = 1,
    ACTIONS(435), 1,
      aux_sym_regex_token1,
  [2068] = 1,
    ACTIONS(437), 1,
      aux_sym_commandLiteral_token1,
  [2072] = 1,
    ACTIONS(439), 1,
      aux_sym_hash_token1,
  [2076] = 1,
    ACTIONS(441), 1,
      ts_builtin_sym_end,
  [2080] = 1,
    ACTIONS(443), 1,
      aux_sym_commandLiteral_token2,
  [2084] = 1,
    ACTIONS(445), 1,
      aux_sym_commandLiteral_token1,
  [2088] = 1,
    ACTIONS(447), 1,
      anon_sym_EQ_GT,
  [2092] = 1,
    ACTIONS(449), 1,
      anon_sym_EQ_GT,
  [2096] = 1,
    ACTIONS(451), 1,
      aux_sym_regex_token1,
  [2100] = 1,
    ACTIONS(453), 1,
      anon_sym_COLON,
  [2104] = 1,
    ACTIONS(455), 1,
      anon_sym_RPAREN,
  [2108] = 1,
    ACTIONS(203), 1,
      anon_sym_COLON,
  [2112] = 1,
    ACTIONS(455), 1,
      anon_sym_BQUOTE,
  [2116] = 1,
    ACTIONS(457), 1,
      aux_sym_hash_token1,
  [2120] = 1,
    ACTIONS(459), 1,
      anon_sym_of,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(6)] = 0,
  [SMALL_STATE(7)] = 79,
  [SMALL_STATE(8)] = 158,
  [SMALL_STATE(9)] = 237,
  [SMALL_STATE(10)] = 316,
  [SMALL_STATE(11)] = 395,
  [SMALL_STATE(12)] = 474,
  [SMALL_STATE(13)] = 553,
  [SMALL_STATE(14)] = 632,
  [SMALL_STATE(15)] = 711,
  [SMALL_STATE(16)] = 790,
  [SMALL_STATE(17)] = 869,
  [SMALL_STATE(18)] = 906,
  [SMALL_STATE(19)] = 944,
  [SMALL_STATE(20)] = 982,
  [SMALL_STATE(21)] = 1020,
  [SMALL_STATE(22)] = 1058,
  [SMALL_STATE(23)] = 1096,
  [SMALL_STATE(24)] = 1107,
  [SMALL_STATE(25)] = 1118,
  [SMALL_STATE(26)] = 1128,
  [SMALL_STATE(27)] = 1138,
  [SMALL_STATE(28)] = 1145,
  [SMALL_STATE(29)] = 1152,
  [SMALL_STATE(30)] = 1159,
  [SMALL_STATE(31)] = 1166,
  [SMALL_STATE(32)] = 1175,
  [SMALL_STATE(33)] = 1184,
  [SMALL_STATE(34)] = 1191,
  [SMALL_STATE(35)] = 1200,
  [SMALL_STATE(36)] = 1207,
  [SMALL_STATE(37)] = 1216,
  [SMALL_STATE(38)] = 1225,
  [SMALL_STATE(39)] = 1234,
  [SMALL_STATE(40)] = 1241,
  [SMALL_STATE(41)] = 1250,
  [SMALL_STATE(42)] = 1259,
  [SMALL_STATE(43)] = 1266,
  [SMALL_STATE(44)] = 1273,
  [SMALL_STATE(45)] = 1280,
  [SMALL_STATE(46)] = 1287,
  [SMALL_STATE(47)] = 1296,
  [SMALL_STATE(48)] = 1303,
  [SMALL_STATE(49)] = 1312,
  [SMALL_STATE(50)] = 1321,
  [SMALL_STATE(51)] = 1330,
  [SMALL_STATE(52)] = 1337,
  [SMALL_STATE(53)] = 1344,
  [SMALL_STATE(54)] = 1351,
  [SMALL_STATE(55)] = 1358,
  [SMALL_STATE(56)] = 1367,
  [SMALL_STATE(57)] = 1374,
  [SMALL_STATE(58)] = 1385,
  [SMALL_STATE(59)] = 1398,
  [SMALL_STATE(60)] = 1411,
  [SMALL_STATE(61)] = 1420,
  [SMALL_STATE(62)] = 1430,
  [SMALL_STATE(63)] = 1440,
  [SMALL_STATE(64)] = 1450,
  [SMALL_STATE(65)] = 1460,
  [SMALL_STATE(66)] = 1470,
  [SMALL_STATE(67)] = 1480,
  [SMALL_STATE(68)] = 1490,
  [SMALL_STATE(69)] = 1500,
  [SMALL_STATE(70)] = 1510,
  [SMALL_STATE(71)] = 1520,
  [SMALL_STATE(72)] = 1530,
  [SMALL_STATE(73)] = 1540,
  [SMALL_STATE(74)] = 1550,
  [SMALL_STATE(75)] = 1560,
  [SMALL_STATE(76)] = 1570,
  [SMALL_STATE(77)] = 1580,
  [SMALL_STATE(78)] = 1590,
  [SMALL_STATE(79)] = 1600,
  [SMALL_STATE(80)] = 1610,
  [SMALL_STATE(81)] = 1620,
  [SMALL_STATE(82)] = 1630,
  [SMALL_STATE(83)] = 1636,
  [SMALL_STATE(84)] = 1646,
  [SMALL_STATE(85)] = 1656,
  [SMALL_STATE(86)] = 1666,
  [SMALL_STATE(87)] = 1676,
  [SMALL_STATE(88)] = 1686,
  [SMALL_STATE(89)] = 1696,
  [SMALL_STATE(90)] = 1706,
  [SMALL_STATE(91)] = 1716,
  [SMALL_STATE(92)] = 1726,
  [SMALL_STATE(93)] = 1736,
  [SMALL_STATE(94)] = 1746,
  [SMALL_STATE(95)] = 1756,
  [SMALL_STATE(96)] = 1766,
  [SMALL_STATE(97)] = 1776,
  [SMALL_STATE(98)] = 1786,
  [SMALL_STATE(99)] = 1796,
  [SMALL_STATE(100)] = 1806,
  [SMALL_STATE(101)] = 1816,
  [SMALL_STATE(102)] = 1824,
  [SMALL_STATE(103)] = 1832,
  [SMALL_STATE(104)] = 1840,
  [SMALL_STATE(105)] = 1848,
  [SMALL_STATE(106)] = 1856,
  [SMALL_STATE(107)] = 1864,
  [SMALL_STATE(108)] = 1874,
  [SMALL_STATE(109)] = 1884,
  [SMALL_STATE(110)] = 1891,
  [SMALL_STATE(111)] = 1898,
  [SMALL_STATE(112)] = 1903,
  [SMALL_STATE(113)] = 1908,
  [SMALL_STATE(114)] = 1915,
  [SMALL_STATE(115)] = 1922,
  [SMALL_STATE(116)] = 1929,
  [SMALL_STATE(117)] = 1936,
  [SMALL_STATE(118)] = 1943,
  [SMALL_STATE(119)] = 1950,
  [SMALL_STATE(120)] = 1957,
  [SMALL_STATE(121)] = 1964,
  [SMALL_STATE(122)] = 1971,
  [SMALL_STATE(123)] = 1978,
  [SMALL_STATE(124)] = 1985,
  [SMALL_STATE(125)] = 1992,
  [SMALL_STATE(126)] = 1999,
  [SMALL_STATE(127)] = 2006,
  [SMALL_STATE(128)] = 2013,
  [SMALL_STATE(129)] = 2020,
  [SMALL_STATE(130)] = 2024,
  [SMALL_STATE(131)] = 2028,
  [SMALL_STATE(132)] = 2032,
  [SMALL_STATE(133)] = 2036,
  [SMALL_STATE(134)] = 2040,
  [SMALL_STATE(135)] = 2044,
  [SMALL_STATE(136)] = 2048,
  [SMALL_STATE(137)] = 2052,
  [SMALL_STATE(138)] = 2056,
  [SMALL_STATE(139)] = 2060,
  [SMALL_STATE(140)] = 2064,
  [SMALL_STATE(141)] = 2068,
  [SMALL_STATE(142)] = 2072,
  [SMALL_STATE(143)] = 2076,
  [SMALL_STATE(144)] = 2080,
  [SMALL_STATE(145)] = 2084,
  [SMALL_STATE(146)] = 2088,
  [SMALL_STATE(147)] = 2092,
  [SMALL_STATE(148)] = 2096,
  [SMALL_STATE(149)] = 2100,
  [SMALL_STATE(150)] = 2104,
  [SMALL_STATE(151)] = 2108,
  [SMALL_STATE(152)] = 2112,
  [SMALL_STATE(153)] = 2116,
  [SMALL_STATE(154)] = 2120,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(119),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(126),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(113),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(113),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(114),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(114),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(21),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(73),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(115),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(115),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(11),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(3),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(148),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(117),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(145),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(144),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_symbol_repeat1, 1),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 4),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 3),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 4),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 3),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hash, 6),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namedTupleLiteral, 5, .production_id = 1),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hash, 5, .production_id = 1),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 4),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commandLiteral, 3),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namedTupleLiteral, 6, .production_id = 2),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hash, 6, .production_id = 2),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 3),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 2),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 1),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 1),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 1),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [259] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hash_repeat1, 2, .production_id = 3), SHIFT_REPEAT(8),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_hash_repeat1, 2, .production_id = 3),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [272] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_namedTupleLiteral_repeat1, 2, .production_id = 3), SHIFT_REPEAT(57),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_namedTupleLiteral_repeat1, 2, .production_id = 3),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [309] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(12),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2),
  [314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [316] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [318] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [324] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [328] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [332] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_symbol_repeat1, 2), SHIFT_REPEAT(89),
  [335] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_symbol_repeat1, 2), SHIFT_REPEAT(89),
  [338] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [342] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [346] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [350] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [352] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [354] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [360] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [362] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [366] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [368] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(15),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 3),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex, 3),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_namedTupleLiteral_repeat1, 4, .production_id = 1),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_hash_repeat1, 4, .production_id = 1),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 1),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char, 1),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namedTupleLiteral, 6, .production_id = 2),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 1),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hash, 6, .production_id = 2),
  [395] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hash, 6),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 2),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namedTupleLiteral, 5, .production_id = 1),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hash, 5, .production_id = 1),
  [407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 3),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 4),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool, 1),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 4),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commandLiteral, 3),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [441] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
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

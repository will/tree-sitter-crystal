#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 155
#define LARGE_STATE_COUNT 6
#define SYMBOL_COUNT 94
#define ALIAS_COUNT 0
#define TOKEN_COUNT 72
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
  sym_comment = 46,
  anon_sym_PLUS = 47,
  anon_sym_DASH = 48,
  anon_sym_STAR = 49,
  anon_sym_PERCENT = 50,
  anon_sym_AMP = 51,
  anon_sym_PIPE = 52,
  anon_sym_CARET = 53,
  anon_sym_STAR_STAR = 54,
  anon_sym_GT_GT = 55,
  anon_sym_LT_LT = 56,
  anon_sym_EQ_EQ = 57,
  anon_sym_BANG_EQ = 58,
  anon_sym_LT = 59,
  anon_sym_LT_EQ = 60,
  anon_sym_GT = 61,
  anon_sym_GT_EQ = 62,
  anon_sym_LT_EQ_GT = 63,
  anon_sym_EQ_EQ_EQ = 64,
  anon_sym_LBRACK_RBRACK = 65,
  anon_sym_LBRACK_RBRACK_QMARK = 66,
  anon_sym_LBRACK_RBRACK_EQ = 67,
  anon_sym_BANG = 68,
  anon_sym_TILDE = 69,
  anon_sym_BANG_TILDE = 70,
  anon_sym_EQ_TILDE = 71,
  sym_program = 72,
  sym__statement = 73,
  sym__expression = 74,
  sym_identifier = 75,
  sym_bool = 76,
  sym_float = 77,
  sym_integer = 78,
  sym_symbol = 79,
  sym_char = 80,
  sym_string = 81,
  sym_array = 82,
  sym_hash = 83,
  sym_regex = 84,
  sym_tuple = 85,
  sym_namedTupleLiteral = 86,
  sym_commandLiteral = 87,
  sym__operator = 88,
  aux_sym_program_repeat1 = 89,
  aux_sym_symbol_repeat1 = 90,
  aux_sym_array_repeat1 = 91,
  aux_sym_hash_repeat1 = 92,
  aux_sym_namedTupleLiteral_repeat1 = 93,
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
  [sym_comment] = sym_comment,
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
  [sym_comment] = {
    .visible = true,
    .named = true,
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
      if (eof) ADVANCE(90);
      if (lookahead == '!') ADVANCE(208);
      if (lookahead == '"') ADVANCE(131);
      if (lookahead == '#') ADVANCE(88);
      if (lookahead == '%') ADVANCE(190);
      if (lookahead == '&') ADVANCE(191);
      if (lookahead == '\'') ADVANCE(13);
      if (lookahead == ')') ADVANCE(182);
      if (lookahead == '*') ADVANCE(188);
      if (lookahead == '+') ADVANCE(185);
      if (lookahead == ',') ADVANCE(159);
      if (lookahead == '-') ADVANCE(187);
      if (lookahead == '/') ADVANCE(167);
      if (lookahead == '0') ADVANCE(28);
      if (lookahead == ':') ADVANCE(130);
      if (lookahead == ';') ADVANCE(91);
      if (lookahead == '<') ADVANCE(199);
      if (lookahead == '=') ADVANCE(57);
      if (lookahead == '>') ADVANCE(201);
      if (lookahead == 'T') ADVANCE(74);
      if (lookahead == '[') ADVANCE(158);
      if (lookahead == ']') ADVANCE(160);
      if (lookahead == '^') ADVANCE(193);
      if (lookahead == '`') ADVANCE(174);
      if (lookahead == 'f') ADVANCE(60);
      if (lookahead == 'n') ADVANCE(66);
      if (lookahead == 'o') ADVANCE(65);
      if (lookahead == 't') ADVANCE(72);
      if (lookahead == '{') ADVANCE(161);
      if (lookahead == '|') ADVANCE(192);
      if (lookahead == '}') ADVANCE(163);
      if (lookahead == '~') ADVANCE(209);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(129);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(92);
      if (lookahead == '"') ADVANCE(131);
      if (lookahead == '#') ADVANCE(142);
      if (lookahead == ';') ADVANCE(91);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(133);
      if (lookahead != 0) ADVANCE(132);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(93);
      if (lookahead == '#') ADVANCE(88);
      if (lookahead == ';') ADVANCE(91);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(208);
      if (lookahead == '"') ADVANCE(131);
      if (lookahead == '#') ADVANCE(88);
      if (lookahead == '%') ADVANCE(189);
      if (lookahead == '&') ADVANCE(191);
      if (lookahead == '*') ADVANCE(188);
      if (lookahead == '+') ADVANCE(184);
      if (lookahead == '-') ADVANCE(186);
      if (lookahead == '/') ADVANCE(167);
      if (lookahead == '<') ADVANCE(199);
      if (lookahead == '=') ADVANCE(58);
      if (lookahead == '>') ADVANCE(201);
      if (lookahead == '[') ADVANCE(59);
      if (lookahead == '^') ADVANCE(193);
      if (lookahead == '|') ADVANCE(192);
      if (lookahead == '~') ADVANCE(209);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (lookahead != 0 &&
          lookahead > '@' &&
          lookahead != '\\' &&
          lookahead != ']' &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(109);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(131);
      if (lookahead == '#') ADVANCE(88);
      if (lookahead == '%') ADVANCE(77);
      if (lookahead == '\'') ADVANCE(13);
      if (lookahead == '/') ADVANCE(167);
      if (lookahead == '0') ADVANCE(28);
      if (lookahead == ':') ADVANCE(130);
      if (lookahead == 'T') ADVANCE(107);
      if (lookahead == '[') ADVANCE(157);
      if (lookahead == '`') ADVANCE(174);
      if (lookahead == 'f') ADVANCE(96);
      if (lookahead == 'n') ADVANCE(100);
      if (lookahead == 't') ADVANCE(105);
      if (lookahead == '{') ADVANCE(161);
      if (lookahead == '}') ADVANCE(163);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(129);
      if (lookahead != 0 &&
          lookahead > '@' &&
          (lookahead < '\\' || '^' < lookahead) &&
          (lookahead < '|' || 159 < lookahead)) ADVANCE(109);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(131);
      if (lookahead == '#') ADVANCE(142);
      if (lookahead == ',') ADVANCE(159);
      if (lookahead == ':') ADVANCE(130);
      if (lookahead == '=') ADVANCE(141);
      if (lookahead == '}') ADVANCE(163);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(134);
      if (lookahead != 0) ADVANCE(132);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(131);
      if (lookahead == '#') ADVANCE(142);
      if (lookahead == ',') ADVANCE(159);
      if (lookahead == '=') ADVANCE(141);
      if (lookahead == '}') ADVANCE(163);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(135);
      if (lookahead != 0) ADVANCE(132);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(131);
      if (lookahead == '#') ADVANCE(142);
      if (lookahead == ',') ADVANCE(159);
      if (lookahead == ']') ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(136);
      if (lookahead != 0) ADVANCE(132);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(131);
      if (lookahead == '#') ADVANCE(142);
      if (lookahead == ',') ADVANCE(159);
      if (lookahead == '}') ADVANCE(163);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(137);
      if (lookahead != 0) ADVANCE(132);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(131);
      if (lookahead == '#') ADVANCE(142);
      if (lookahead == ':') ADVANCE(130);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(138);
      if (lookahead != 0) ADVANCE(132);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(131);
      if (lookahead == '#') ADVANCE(142);
      if (lookahead == '=') ADVANCE(141);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(139);
      if (lookahead != 0) ADVANCE(132);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(131);
      if (lookahead == '#') ADVANCE(142);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(140);
      if (lookahead != 0) ADVANCE(132);
      END_STATE();
    case 12:
      if (lookahead == '#') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (lookahead != 0) ADVANCE(166);
      END_STATE();
    case 13:
      if (lookahead == '\'') ADVANCE(143);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 14:
      if (lookahead == '\'') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'a') ADVANCE(17);
      if (lookahead == 'b') ADVANCE(18);
      if (lookahead == 'e') ADVANCE(19);
      if (lookahead == 'f') ADVANCE(20);
      if (lookahead == 'n') ADVANCE(21);
      if (lookahead == 'r') ADVANCE(22);
      if (lookahead == 't') ADVANCE(23);
      if (lookahead == 'u') ADVANCE(78);
      if (lookahead == 'v') ADVANCE(24);
      END_STATE();
    case 15:
      if (lookahead == '\'') ADVANCE(155);
      END_STATE();
    case 16:
      if (lookahead == '\'') ADVANCE(145);
      END_STATE();
    case 17:
      if (lookahead == '\'') ADVANCE(146);
      END_STATE();
    case 18:
      if (lookahead == '\'') ADVANCE(147);
      END_STATE();
    case 19:
      if (lookahead == '\'') ADVANCE(148);
      END_STATE();
    case 20:
      if (lookahead == '\'') ADVANCE(149);
      END_STATE();
    case 21:
      if (lookahead == '\'') ADVANCE(150);
      END_STATE();
    case 22:
      if (lookahead == '\'') ADVANCE(151);
      END_STATE();
    case 23:
      if (lookahead == '\'') ADVANCE(152);
      END_STATE();
    case 24:
      if (lookahead == '\'') ADVANCE(153);
      END_STATE();
    case 25:
      if (lookahead == '\'') ADVANCE(154);
      END_STATE();
    case 26:
      if (lookahead == '\'') ADVANCE(154);
      if (lookahead == '}') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(26);
      END_STATE();
    case 27:
      if (lookahead == '(') ADVANCE(178);
      END_STATE();
    case 28:
      if (lookahead == '.') ADVANCE(85);
      if (lookahead == 'b') ADVANCE(81);
      if (lookahead == 'e') ADVANCE(79);
      if (lookahead == 'f') ADVANCE(43);
      if (lookahead == 'o') ADVANCE(82);
      if (lookahead == 'x') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(29);
      END_STATE();
    case 29:
      if (lookahead == '.') ADVANCE(85);
      if (lookahead == 'e') ADVANCE(79);
      if (lookahead == 'f') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(29);
      END_STATE();
    case 30:
      if (lookahead == '.') ADVANCE(70);
      END_STATE();
    case 31:
      if (lookahead == '0') ADVANCE(28);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(129);
      END_STATE();
    case 32:
      if (lookahead == '1') ADVANCE(53);
      if (lookahead == '3') ADVANCE(36);
      if (lookahead == '6') ADVANCE(46);
      if (lookahead == '8') ADVANCE(128);
      END_STATE();
    case 33:
      if (lookahead == '1') ADVANCE(54);
      if (lookahead == '3') ADVANCE(38);
      if (lookahead == '6') ADVANCE(48);
      if (lookahead == '8') ADVANCE(122);
      END_STATE();
    case 34:
      if (lookahead == '1') ADVANCE(55);
      if (lookahead == '3') ADVANCE(39);
      if (lookahead == '6') ADVANCE(49);
      if (lookahead == '8') ADVANCE(124);
      END_STATE();
    case 35:
      if (lookahead == '1') ADVANCE(56);
      if (lookahead == '3') ADVANCE(40);
      if (lookahead == '6') ADVANCE(50);
      if (lookahead == '8') ADVANCE(126);
      END_STATE();
    case 36:
      if (lookahead == '2') ADVANCE(128);
      END_STATE();
    case 37:
      if (lookahead == '2') ADVANCE(121);
      END_STATE();
    case 38:
      if (lookahead == '2') ADVANCE(122);
      END_STATE();
    case 39:
      if (lookahead == '2') ADVANCE(124);
      END_STATE();
    case 40:
      if (lookahead == '2') ADVANCE(126);
      END_STATE();
    case 41:
      if (lookahead == '2') ADVANCE(116);
      END_STATE();
    case 42:
      if (lookahead == '2') ADVANCE(119);
      END_STATE();
    case 43:
      if (lookahead == '3') ADVANCE(37);
      if (lookahead == '6') ADVANCE(47);
      END_STATE();
    case 44:
      if (lookahead == '3') ADVANCE(41);
      if (lookahead == '6') ADVANCE(51);
      END_STATE();
    case 45:
      if (lookahead == '3') ADVANCE(42);
      if (lookahead == '6') ADVANCE(52);
      END_STATE();
    case 46:
      if (lookahead == '4') ADVANCE(128);
      END_STATE();
    case 47:
      if (lookahead == '4') ADVANCE(121);
      END_STATE();
    case 48:
      if (lookahead == '4') ADVANCE(122);
      END_STATE();
    case 49:
      if (lookahead == '4') ADVANCE(124);
      END_STATE();
    case 50:
      if (lookahead == '4') ADVANCE(126);
      END_STATE();
    case 51:
      if (lookahead == '4') ADVANCE(116);
      END_STATE();
    case 52:
      if (lookahead == '4') ADVANCE(119);
      END_STATE();
    case 53:
      if (lookahead == '6') ADVANCE(128);
      END_STATE();
    case 54:
      if (lookahead == '6') ADVANCE(122);
      END_STATE();
    case 55:
      if (lookahead == '6') ADVANCE(124);
      END_STATE();
    case 56:
      if (lookahead == '6') ADVANCE(126);
      END_STATE();
    case 57:
      if (lookahead == '=') ADVANCE(197);
      if (lookahead == '>') ADVANCE(162);
      if (lookahead == '~') ADVANCE(211);
      END_STATE();
    case 58:
      if (lookahead == '=') ADVANCE(197);
      if (lookahead == '~') ADVANCE(211);
      END_STATE();
    case 59:
      if (lookahead == ']') ADVANCE(205);
      END_STATE();
    case 60:
      if (lookahead == 'a') ADVANCE(67);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 65:
      if (lookahead == 'f') ADVANCE(164);
      END_STATE();
    case 66:
      if (lookahead == 'i') ADVANCE(68);
      END_STATE();
    case 67:
      if (lookahead == 'l') ADVANCE(73);
      END_STATE();
    case 68:
      if (lookahead == 'l') ADVANCE(110);
      END_STATE();
    case 69:
      if (lookahead == 'l') ADVANCE(62);
      END_STATE();
    case 70:
      if (lookahead == 'n') ADVANCE(64);
      END_STATE();
    case 71:
      if (lookahead == 'p') ADVANCE(69);
      END_STATE();
    case 72:
      if (lookahead == 'r') ADVANCE(75);
      END_STATE();
    case 73:
      if (lookahead == 's') ADVANCE(63);
      END_STATE();
    case 74:
      if (lookahead == 'u') ADVANCE(71);
      END_STATE();
    case 75:
      if (lookahead == 'u') ADVANCE(61);
      END_STATE();
    case 76:
      if (lookahead == 'w') ADVANCE(173);
      END_STATE();
    case 77:
      if (lookahead == 'x') ADVANCE(27);
      END_STATE();
    case 78:
      if (lookahead == '{') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(26);
      END_STATE();
    case 79:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      END_STATE();
    case 80:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(118);
      END_STATE();
    case 81:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(123);
      END_STATE();
    case 82:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(125);
      END_STATE();
    case 83:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      END_STATE();
    case 84:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(118);
      END_STATE();
    case 85:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(117);
      END_STATE();
    case 86:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(127);
      END_STATE();
    case 87:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(26);
      END_STATE();
    case 88:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(183);
      END_STATE();
    case 89:
      if (eof) ADVANCE(90);
      if (lookahead == '"') ADVANCE(131);
      if (lookahead == '#') ADVANCE(88);
      if (lookahead == '%') ADVANCE(77);
      if (lookahead == '\'') ADVANCE(13);
      if (lookahead == '/') ADVANCE(167);
      if (lookahead == '0') ADVANCE(28);
      if (lookahead == ':') ADVANCE(130);
      if (lookahead == 'T') ADVANCE(74);
      if (lookahead == '[') ADVANCE(157);
      if (lookahead == '`') ADVANCE(174);
      if (lookahead == 'f') ADVANCE(60);
      if (lookahead == 'n') ADVANCE(66);
      if (lookahead == 't') ADVANCE(72);
      if (lookahead == '{') ADVANCE(161);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(89)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(129);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym__statement_token1);
      if (lookahead == '\n') ADVANCE(92);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(133);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym__statement_token1);
      if (lookahead == '\n') ADVANCE(93);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(70);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(94);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(109);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(101);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(94);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(109);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(113);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(94);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(109);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(95);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(94);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(109);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(115);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(94);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(109);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(102);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(94);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(109);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(106);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(94);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(109);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(111);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(94);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(109);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(98);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(94);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(109);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'p') ADVANCE(103);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(94);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(109);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(108);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(94);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(109);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 's') ADVANCE(99);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(94);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(109);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'u') ADVANCE(104);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(94);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(109);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'u') ADVANCE(97);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(94);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(109);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(94);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(109);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_nil);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_nil);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(94);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(109);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(94);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(109);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(94);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(109);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_float_token1);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (lookahead == 'e') ADVANCE(80);
      if (lookahead == 'f') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(117);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (lookahead == 'f') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(118);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_float_token2);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (lookahead == 'f') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_float_token3);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == 'i') ADVANCE(33);
      if (lookahead == 'u') ADVANCE(33);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(123);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_integer_token2);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_integer_token2);
      if (lookahead == 'i') ADVANCE(34);
      if (lookahead == 'u') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(125);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_integer_token3);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_integer_token3);
      if (lookahead == 'i') ADVANCE(35);
      if (lookahead == 'u') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(127);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_integer_token4);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_integer_token4);
      if (lookahead == '.') ADVANCE(85);
      if (lookahead == 'e') ADVANCE(79);
      if (lookahead == 'f') ADVANCE(43);
      if (lookahead == 'i') ADVANCE(32);
      if (lookahead == 'u') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(129);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\n') ADVANCE(92);
      if (lookahead == '#') ADVANCE(142);
      if (lookahead == ';') ADVANCE(91);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(132);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(142);
      if (lookahead == ',') ADVANCE(159);
      if (lookahead == ':') ADVANCE(130);
      if (lookahead == '=') ADVANCE(141);
      if (lookahead == '}') ADVANCE(163);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(132);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(142);
      if (lookahead == ',') ADVANCE(159);
      if (lookahead == '=') ADVANCE(141);
      if (lookahead == '}') ADVANCE(163);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(132);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(142);
      if (lookahead == ',') ADVANCE(159);
      if (lookahead == ']') ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(132);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(142);
      if (lookahead == ',') ADVANCE(159);
      if (lookahead == '}') ADVANCE(163);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(137);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(132);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(142);
      if (lookahead == ':') ADVANCE(130);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(132);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(142);
      if (lookahead == '=') ADVANCE(141);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(139);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(132);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(142);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(132);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '>') ADVANCE(162);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(183);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_SQUOTE_BSLASHa_SQUOTE);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_SQUOTE_BSLASHb_SQUOTE);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_SQUOTE_BSLASHe_SQUOTE);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_SQUOTE_BSLASHf_SQUOTE);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_SQUOTE_BSLASHn_SQUOTE);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_SQUOTE_BSLASHr_SQUOTE);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_SQUOTE_BSLASHt_SQUOTE);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_SQUOTE_BSLASHv_SQUOTE);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_char_token1);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_char_token2);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_char_token2);
      if (lookahead == '\'') ADVANCE(144);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == ']') ADVANCE(205);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_hash_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(183);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(165);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_hash_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(166);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_regex_token1);
      if (lookahead == '\n') ADVANCE(171);
      if (lookahead == '/') ADVANCE(183);
      if (lookahead == '\\') ADVANCE(169);
      if (lookahead != 0) ADVANCE(168);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_regex_token1);
      if (lookahead == '\n') ADVANCE(171);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(168);
      if (lookahead == '\\') ADVANCE(169);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_regex_token1);
      if (lookahead == '#') ADVANCE(168);
      if (lookahead == '\\') ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(170);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(171);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_regex_token1);
      if (lookahead == '\\') ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(171);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_regex_token1);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(171);
      if (lookahead == '\\') ADVANCE(172);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_Tuple_DOTnew);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_commandLiteral_token1);
      if (lookahead == '\n') ADVANCE(177);
      if (lookahead == '`') ADVANCE(183);
      if (lookahead != 0) ADVANCE(175);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_commandLiteral_token1);
      if (lookahead == '#') ADVANCE(175);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(176);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(177);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_commandLiteral_token1);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(177);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_PERCENTx_LPAREN);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_commandLiteral_token2);
      if (lookahead == '\n') ADVANCE(181);
      if (lookahead == ')') ADVANCE(183);
      if (lookahead != 0) ADVANCE(179);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_commandLiteral_token2);
      if (lookahead == '#') ADVANCE(179);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(181);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_commandLiteral_token2);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(181);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(183);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '0') ADVANCE(28);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(129);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '0') ADVANCE(28);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(129);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(194);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == 'x') ADVANCE(27);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      if (lookahead == '=') ADVANCE(204);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(196);
      if (lookahead == '=') ADVANCE(200);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      if (lookahead == '>') ADVANCE(203);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(202);
      if (lookahead == '>') ADVANCE(195);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_LT_EQ_GT);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_EQ_EQ_EQ);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_LBRACK_RBRACK);
      if (lookahead == '=') ADVANCE(207);
      if (lookahead == '?') ADVANCE(206);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_LBRACK_RBRACK_QMARK);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_LBRACK_RBRACK_EQ);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(198);
      if (lookahead == '~') ADVANCE(210);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_BANG_TILDE);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_EQ_TILDE);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 89},
  [2] = {.lex_state = 89},
  [3] = {.lex_state = 4},
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 89},
  [6] = {.lex_state = 89},
  [7] = {.lex_state = 89},
  [8] = {.lex_state = 89},
  [9] = {.lex_state = 89},
  [10] = {.lex_state = 89},
  [11] = {.lex_state = 89},
  [12] = {.lex_state = 89},
  [13] = {.lex_state = 89},
  [14] = {.lex_state = 89},
  [15] = {.lex_state = 89},
  [16] = {.lex_state = 89},
  [17] = {.lex_state = 89},
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
  [130] = {.lex_state = 180},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 12},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 12},
  [140] = {.lex_state = 170},
  [141] = {.lex_state = 176},
  [142] = {.lex_state = 12},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 180},
  [145] = {.lex_state = 176},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 170},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 12},
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
    [sym_comment] = ACTIONS(3),
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
    [ts_builtin_sym_end] = ACTIONS(39),
    [sym_nil] = ACTIONS(41),
    [anon_sym_true] = ACTIONS(44),
    [anon_sym_false] = ACTIONS(44),
    [aux_sym_float_token1] = ACTIONS(47),
    [aux_sym_float_token2] = ACTIONS(50),
    [aux_sym_float_token3] = ACTIONS(50),
    [aux_sym_integer_token1] = ACTIONS(53),
    [aux_sym_integer_token2] = ACTIONS(53),
    [aux_sym_integer_token3] = ACTIONS(53),
    [aux_sym_integer_token4] = ACTIONS(56),
    [anon_sym_COLON] = ACTIONS(59),
    [anon_sym_DQUOTE] = ACTIONS(62),
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
    [aux_sym_char_token2] = ACTIONS(68),
    [anon_sym_LBRACK] = ACTIONS(71),
    [anon_sym_LBRACE] = ACTIONS(74),
    [anon_sym_SLASH] = ACTIONS(77),
    [anon_sym_Tuple_DOTnew] = ACTIONS(80),
    [anon_sym_BQUOTE] = ACTIONS(83),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(86),
    [sym_comment] = ACTIONS(3),
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
    [aux_sym_identifier_token1] = ACTIONS(89),
    [sym_nil] = ACTIONS(91),
    [anon_sym_true] = ACTIONS(93),
    [anon_sym_false] = ACTIONS(93),
    [aux_sym_float_token1] = ACTIONS(95),
    [aux_sym_float_token2] = ACTIONS(97),
    [aux_sym_float_token3] = ACTIONS(97),
    [aux_sym_integer_token1] = ACTIONS(99),
    [aux_sym_integer_token2] = ACTIONS(99),
    [aux_sym_integer_token3] = ACTIONS(99),
    [aux_sym_integer_token4] = ACTIONS(101),
    [anon_sym_COLON] = ACTIONS(103),
    [anon_sym_DQUOTE] = ACTIONS(105),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(107),
    [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = ACTIONS(107),
    [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = ACTIONS(107),
    [anon_sym_SQUOTE_BSLASHa_SQUOTE] = ACTIONS(107),
    [anon_sym_SQUOTE_BSLASHb_SQUOTE] = ACTIONS(107),
    [anon_sym_SQUOTE_BSLASHe_SQUOTE] = ACTIONS(107),
    [anon_sym_SQUOTE_BSLASHf_SQUOTE] = ACTIONS(107),
    [anon_sym_SQUOTE_BSLASHn_SQUOTE] = ACTIONS(107),
    [anon_sym_SQUOTE_BSLASHr_SQUOTE] = ACTIONS(107),
    [anon_sym_SQUOTE_BSLASHt_SQUOTE] = ACTIONS(107),
    [anon_sym_SQUOTE_BSLASHv_SQUOTE] = ACTIONS(107),
    [aux_sym_char_token1] = ACTIONS(107),
    [aux_sym_char_token2] = ACTIONS(109),
    [anon_sym_LBRACK] = ACTIONS(111),
    [anon_sym_LBRACE] = ACTIONS(113),
    [anon_sym_RBRACE] = ACTIONS(115),
    [anon_sym_SLASH] = ACTIONS(117),
    [anon_sym_Tuple_DOTnew] = ACTIONS(119),
    [anon_sym_BQUOTE] = ACTIONS(121),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(123),
    [sym_comment] = ACTIONS(3),
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
    [aux_sym_identifier_token1] = ACTIONS(89),
    [sym_nil] = ACTIONS(125),
    [anon_sym_true] = ACTIONS(93),
    [anon_sym_false] = ACTIONS(93),
    [aux_sym_float_token1] = ACTIONS(95),
    [aux_sym_float_token2] = ACTIONS(97),
    [aux_sym_float_token3] = ACTIONS(97),
    [aux_sym_integer_token1] = ACTIONS(99),
    [aux_sym_integer_token2] = ACTIONS(99),
    [aux_sym_integer_token3] = ACTIONS(99),
    [aux_sym_integer_token4] = ACTIONS(101),
    [anon_sym_COLON] = ACTIONS(103),
    [anon_sym_DQUOTE] = ACTIONS(105),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(107),
    [anon_sym_SQUOTE_BSLASH_SQUOTE_SQUOTE] = ACTIONS(107),
    [anon_sym_SQUOTE_BSLASH_BSLASH_SQUOTE] = ACTIONS(107),
    [anon_sym_SQUOTE_BSLASHa_SQUOTE] = ACTIONS(107),
    [anon_sym_SQUOTE_BSLASHb_SQUOTE] = ACTIONS(107),
    [anon_sym_SQUOTE_BSLASHe_SQUOTE] = ACTIONS(107),
    [anon_sym_SQUOTE_BSLASHf_SQUOTE] = ACTIONS(107),
    [anon_sym_SQUOTE_BSLASHn_SQUOTE] = ACTIONS(107),
    [anon_sym_SQUOTE_BSLASHr_SQUOTE] = ACTIONS(107),
    [anon_sym_SQUOTE_BSLASHt_SQUOTE] = ACTIONS(107),
    [anon_sym_SQUOTE_BSLASHv_SQUOTE] = ACTIONS(107),
    [aux_sym_char_token1] = ACTIONS(107),
    [aux_sym_char_token2] = ACTIONS(109),
    [anon_sym_LBRACK] = ACTIONS(111),
    [anon_sym_LBRACE] = ACTIONS(113),
    [anon_sym_RBRACE] = ACTIONS(127),
    [anon_sym_SLASH] = ACTIONS(117),
    [anon_sym_Tuple_DOTnew] = ACTIONS(119),
    [anon_sym_BQUOTE] = ACTIONS(121),
    [anon_sym_PERCENTx_LPAREN] = ACTIONS(123),
    [sym_comment] = ACTIONS(3),
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
    [ts_builtin_sym_end] = ACTIONS(129),
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
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      aux_sym_float_token1,
    ACTIONS(101), 1,
      aux_sym_integer_token4,
    ACTIONS(109), 1,
      aux_sym_char_token2,
    ACTIONS(111), 1,
      anon_sym_LBRACK,
    ACTIONS(113), 1,
      anon_sym_LBRACE,
    ACTIONS(117), 1,
      anon_sym_SLASH,
    ACTIONS(119), 1,
      anon_sym_Tuple_DOTnew,
    ACTIONS(121), 1,
      anon_sym_BQUOTE,
    ACTIONS(123), 1,
      anon_sym_PERCENTx_LPAREN,
    ACTIONS(131), 1,
      sym_nil,
    ACTIONS(135), 1,
      anon_sym_COLON,
    ACTIONS(137), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 2,
      aux_sym_float_token2,
      aux_sym_float_token3,
    ACTIONS(133), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(99), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
    ACTIONS(107), 12,
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
  [82] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      aux_sym_float_token1,
    ACTIONS(101), 1,
      aux_sym_integer_token4,
    ACTIONS(109), 1,
      aux_sym_char_token2,
    ACTIONS(111), 1,
      anon_sym_LBRACK,
    ACTIONS(113), 1,
      anon_sym_LBRACE,
    ACTIONS(117), 1,
      anon_sym_SLASH,
    ACTIONS(119), 1,
      anon_sym_Tuple_DOTnew,
    ACTIONS(121), 1,
      anon_sym_BQUOTE,
    ACTIONS(123), 1,
      anon_sym_PERCENTx_LPAREN,
    ACTIONS(135), 1,
      anon_sym_COLON,
    ACTIONS(137), 1,
      anon_sym_DQUOTE,
    ACTIONS(139), 1,
      sym_nil,
    ACTIONS(97), 2,
      aux_sym_float_token2,
      aux_sym_float_token3,
    ACTIONS(133), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(99), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
    ACTIONS(107), 12,
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
  [164] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      aux_sym_float_token1,
    ACTIONS(101), 1,
      aux_sym_integer_token4,
    ACTIONS(109), 1,
      aux_sym_char_token2,
    ACTIONS(111), 1,
      anon_sym_LBRACK,
    ACTIONS(113), 1,
      anon_sym_LBRACE,
    ACTIONS(117), 1,
      anon_sym_SLASH,
    ACTIONS(119), 1,
      anon_sym_Tuple_DOTnew,
    ACTIONS(121), 1,
      anon_sym_BQUOTE,
    ACTIONS(123), 1,
      anon_sym_PERCENTx_LPAREN,
    ACTIONS(141), 1,
      sym_nil,
    ACTIONS(143), 1,
      anon_sym_COLON,
    ACTIONS(145), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 2,
      aux_sym_float_token2,
      aux_sym_float_token3,
    ACTIONS(133), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(99), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
    ACTIONS(107), 12,
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
  [246] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      aux_sym_float_token1,
    ACTIONS(101), 1,
      aux_sym_integer_token4,
    ACTIONS(109), 1,
      aux_sym_char_token2,
    ACTIONS(111), 1,
      anon_sym_LBRACK,
    ACTIONS(113), 1,
      anon_sym_LBRACE,
    ACTIONS(117), 1,
      anon_sym_SLASH,
    ACTIONS(119), 1,
      anon_sym_Tuple_DOTnew,
    ACTIONS(121), 1,
      anon_sym_BQUOTE,
    ACTIONS(123), 1,
      anon_sym_PERCENTx_LPAREN,
    ACTIONS(135), 1,
      anon_sym_COLON,
    ACTIONS(137), 1,
      anon_sym_DQUOTE,
    ACTIONS(147), 1,
      sym_nil,
    ACTIONS(97), 2,
      aux_sym_float_token2,
      aux_sym_float_token3,
    ACTIONS(133), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(99), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
    ACTIONS(107), 12,
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
  [328] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      aux_sym_float_token1,
    ACTIONS(101), 1,
      aux_sym_integer_token4,
    ACTIONS(109), 1,
      aux_sym_char_token2,
    ACTIONS(111), 1,
      anon_sym_LBRACK,
    ACTIONS(113), 1,
      anon_sym_LBRACE,
    ACTIONS(117), 1,
      anon_sym_SLASH,
    ACTIONS(119), 1,
      anon_sym_Tuple_DOTnew,
    ACTIONS(121), 1,
      anon_sym_BQUOTE,
    ACTIONS(123), 1,
      anon_sym_PERCENTx_LPAREN,
    ACTIONS(135), 1,
      anon_sym_COLON,
    ACTIONS(137), 1,
      anon_sym_DQUOTE,
    ACTIONS(149), 1,
      sym_nil,
    ACTIONS(97), 2,
      aux_sym_float_token2,
      aux_sym_float_token3,
    ACTIONS(133), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(99), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
    ACTIONS(107), 12,
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
  [410] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      aux_sym_float_token1,
    ACTIONS(101), 1,
      aux_sym_integer_token4,
    ACTIONS(109), 1,
      aux_sym_char_token2,
    ACTIONS(111), 1,
      anon_sym_LBRACK,
    ACTIONS(113), 1,
      anon_sym_LBRACE,
    ACTIONS(117), 1,
      anon_sym_SLASH,
    ACTIONS(119), 1,
      anon_sym_Tuple_DOTnew,
    ACTIONS(121), 1,
      anon_sym_BQUOTE,
    ACTIONS(123), 1,
      anon_sym_PERCENTx_LPAREN,
    ACTIONS(151), 1,
      sym_nil,
    ACTIONS(153), 1,
      anon_sym_COLON,
    ACTIONS(155), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 2,
      aux_sym_float_token2,
      aux_sym_float_token3,
    ACTIONS(133), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(99), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
    ACTIONS(107), 12,
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
  [492] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      aux_sym_float_token1,
    ACTIONS(101), 1,
      aux_sym_integer_token4,
    ACTIONS(109), 1,
      aux_sym_char_token2,
    ACTIONS(111), 1,
      anon_sym_LBRACK,
    ACTIONS(113), 1,
      anon_sym_LBRACE,
    ACTIONS(117), 1,
      anon_sym_SLASH,
    ACTIONS(119), 1,
      anon_sym_Tuple_DOTnew,
    ACTIONS(121), 1,
      anon_sym_BQUOTE,
    ACTIONS(123), 1,
      anon_sym_PERCENTx_LPAREN,
    ACTIONS(153), 1,
      anon_sym_COLON,
    ACTIONS(155), 1,
      anon_sym_DQUOTE,
    ACTIONS(157), 1,
      sym_nil,
    ACTIONS(97), 2,
      aux_sym_float_token2,
      aux_sym_float_token3,
    ACTIONS(133), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(99), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
    ACTIONS(107), 12,
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
  [574] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      aux_sym_float_token1,
    ACTIONS(101), 1,
      aux_sym_integer_token4,
    ACTIONS(109), 1,
      aux_sym_char_token2,
    ACTIONS(111), 1,
      anon_sym_LBRACK,
    ACTIONS(113), 1,
      anon_sym_LBRACE,
    ACTIONS(117), 1,
      anon_sym_SLASH,
    ACTIONS(119), 1,
      anon_sym_Tuple_DOTnew,
    ACTIONS(121), 1,
      anon_sym_BQUOTE,
    ACTIONS(123), 1,
      anon_sym_PERCENTx_LPAREN,
    ACTIONS(135), 1,
      anon_sym_COLON,
    ACTIONS(137), 1,
      anon_sym_DQUOTE,
    ACTIONS(159), 1,
      sym_nil,
    ACTIONS(97), 2,
      aux_sym_float_token2,
      aux_sym_float_token3,
    ACTIONS(133), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(99), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
    ACTIONS(107), 12,
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
  [656] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      aux_sym_float_token1,
    ACTIONS(101), 1,
      aux_sym_integer_token4,
    ACTIONS(109), 1,
      aux_sym_char_token2,
    ACTIONS(111), 1,
      anon_sym_LBRACK,
    ACTIONS(113), 1,
      anon_sym_LBRACE,
    ACTIONS(117), 1,
      anon_sym_SLASH,
    ACTIONS(119), 1,
      anon_sym_Tuple_DOTnew,
    ACTIONS(121), 1,
      anon_sym_BQUOTE,
    ACTIONS(123), 1,
      anon_sym_PERCENTx_LPAREN,
    ACTIONS(135), 1,
      anon_sym_COLON,
    ACTIONS(137), 1,
      anon_sym_DQUOTE,
    ACTIONS(161), 1,
      sym_nil,
    ACTIONS(97), 2,
      aux_sym_float_token2,
      aux_sym_float_token3,
    ACTIONS(133), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(99), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
    ACTIONS(107), 12,
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
  [738] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      aux_sym_float_token1,
    ACTIONS(101), 1,
      aux_sym_integer_token4,
    ACTIONS(109), 1,
      aux_sym_char_token2,
    ACTIONS(111), 1,
      anon_sym_LBRACK,
    ACTIONS(113), 1,
      anon_sym_LBRACE,
    ACTIONS(117), 1,
      anon_sym_SLASH,
    ACTIONS(119), 1,
      anon_sym_Tuple_DOTnew,
    ACTIONS(121), 1,
      anon_sym_BQUOTE,
    ACTIONS(123), 1,
      anon_sym_PERCENTx_LPAREN,
    ACTIONS(135), 1,
      anon_sym_COLON,
    ACTIONS(137), 1,
      anon_sym_DQUOTE,
    ACTIONS(157), 1,
      sym_nil,
    ACTIONS(97), 2,
      aux_sym_float_token2,
      aux_sym_float_token3,
    ACTIONS(133), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(99), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
    ACTIONS(107), 12,
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
  [820] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      aux_sym_float_token1,
    ACTIONS(101), 1,
      aux_sym_integer_token4,
    ACTIONS(109), 1,
      aux_sym_char_token2,
    ACTIONS(111), 1,
      anon_sym_LBRACK,
    ACTIONS(113), 1,
      anon_sym_LBRACE,
    ACTIONS(117), 1,
      anon_sym_SLASH,
    ACTIONS(119), 1,
      anon_sym_Tuple_DOTnew,
    ACTIONS(121), 1,
      anon_sym_BQUOTE,
    ACTIONS(123), 1,
      anon_sym_PERCENTx_LPAREN,
    ACTIONS(153), 1,
      anon_sym_COLON,
    ACTIONS(155), 1,
      anon_sym_DQUOTE,
    ACTIONS(163), 1,
      sym_nil,
    ACTIONS(97), 2,
      aux_sym_float_token2,
      aux_sym_float_token3,
    ACTIONS(133), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(99), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
    ACTIONS(107), 12,
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
  [902] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 4,
      aux_sym_float_token2,
      aux_sym_float_token3,
      aux_sym_integer_token4,
      aux_sym_char_token2,
    ACTIONS(165), 28,
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
  [942] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_DQUOTE,
    STATE(51), 1,
      sym__operator,
    ACTIONS(173), 7,
      anon_sym_STAR,
      anon_sym_EQ_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_LBRACK_RBRACK,
      anon_sym_BANG,
    ACTIONS(169), 20,
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
  [983] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      anon_sym_DQUOTE,
    STATE(51), 1,
      sym__operator,
    ACTIONS(173), 7,
      anon_sym_STAR,
      anon_sym_EQ_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_LBRACK_RBRACK,
      anon_sym_BANG,
    ACTIONS(169), 20,
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
  [1024] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      anon_sym_DQUOTE,
    STATE(51), 1,
      sym__operator,
    ACTIONS(173), 7,
      anon_sym_STAR,
      anon_sym_EQ_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_LBRACK_RBRACK,
      anon_sym_BANG,
    ACTIONS(169), 20,
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
  [1065] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_DQUOTE,
    STATE(121), 1,
      sym__operator,
    ACTIONS(183), 7,
      anon_sym_STAR,
      anon_sym_EQ_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_LBRACK_RBRACK,
      anon_sym_BANG,
    ACTIONS(179), 20,
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
  [1106] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      anon_sym_DQUOTE,
    STATE(51), 1,
      sym__operator,
    ACTIONS(173), 7,
      anon_sym_STAR,
      anon_sym_EQ_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_LBRACK_RBRACK,
      anon_sym_BANG,
    ACTIONS(169), 20,
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
  [1147] = 3,
    ACTIONS(191), 1,
      sym_comment,
    ACTIONS(189), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
    ACTIONS(187), 4,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [1161] = 3,
    ACTIONS(191), 1,
      sym_comment,
    ACTIONS(189), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
    ACTIONS(193), 4,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [1175] = 3,
    ACTIONS(191), 1,
      sym_comment,
    ACTIONS(189), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
    ACTIONS(195), 3,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [1188] = 3,
    ACTIONS(191), 1,
      sym_comment,
    ACTIONS(189), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
    ACTIONS(197), 3,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [1201] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [1211] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [1221] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [1231] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [1241] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_COLON,
    ACTIONS(209), 3,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [1253] = 3,
    ACTIONS(191), 1,
      sym_comment,
    ACTIONS(189), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
    ACTIONS(197), 2,
      anon_sym_SEMI,
      aux_sym__statement_token1,
  [1265] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [1275] = 3,
    ACTIONS(191), 1,
      sym_comment,
    ACTIONS(187), 2,
      anon_sym_SEMI,
      aux_sym__statement_token1,
    ACTIONS(189), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
  [1287] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [1297] = 3,
    ACTIONS(191), 1,
      sym_comment,
    ACTIONS(187), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(189), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
  [1309] = 3,
    ACTIONS(191), 1,
      sym_comment,
    ACTIONS(189), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
    ACTIONS(195), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1321] = 3,
    ACTIONS(191), 1,
      sym_comment,
    ACTIONS(189), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
    ACTIONS(197), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1333] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [1343] = 3,
    ACTIONS(191), 1,
      sym_comment,
    ACTIONS(189), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
    ACTIONS(193), 2,
      anon_sym_SEMI,
      aux_sym__statement_token1,
  [1355] = 3,
    ACTIONS(191), 1,
      sym_comment,
    ACTIONS(189), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
    ACTIONS(195), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1367] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [1377] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [1387] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [1397] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [1407] = 3,
    ACTIONS(191), 1,
      sym_comment,
    ACTIONS(189), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
    ACTIONS(195), 2,
      anon_sym_SEMI,
      aux_sym__statement_token1,
  [1419] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [1429] = 3,
    ACTIONS(191), 1,
      sym_comment,
    ACTIONS(187), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(189), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
  [1441] = 3,
    ACTIONS(191), 1,
      sym_comment,
    ACTIONS(189), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
    ACTIONS(197), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1453] = 3,
    ACTIONS(191), 1,
      sym_comment,
    ACTIONS(189), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
    ACTIONS(193), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1465] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [1475] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [1485] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [1495] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [1505] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      anon_sym_COLON,
    ACTIONS(209), 3,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [1517] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_RBRACE,
  [1527] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      aux_sym_identifier_token1,
    ACTIONS(241), 1,
      anon_sym_DQUOTE,
    STATE(149), 2,
      sym_identifier,
      sym_string,
  [1541] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_COMMA,
    ACTIONS(245), 1,
      anon_sym_EQ_GT,
    ACTIONS(247), 1,
      anon_sym_RBRACE,
    STATE(62), 1,
      aux_sym_array_repeat1,
  [1557] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_COMMA,
    ACTIONS(249), 1,
      anon_sym_EQ_GT,
    ACTIONS(251), 1,
      anon_sym_RBRACE,
    STATE(85), 1,
      aux_sym_array_repeat1,
  [1573] = 3,
    ACTIONS(191), 1,
      sym_comment,
    ACTIONS(189), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
    ACTIONS(193), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1585] = 4,
    ACTIONS(191), 1,
      sym_comment,
    ACTIONS(253), 1,
      anon_sym_DQUOTE,
    ACTIONS(255), 1,
      aux_sym_symbol_token1,
    STATE(95), 1,
      aux_sym_symbol_repeat1,
  [1598] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_COMMA,
    ACTIONS(257), 1,
      anon_sym_RBRACE,
    STATE(107), 1,
      aux_sym_array_repeat1,
  [1611] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      anon_sym_COMMA,
    ACTIONS(261), 1,
      anon_sym_RBRACK,
    STATE(80), 1,
      aux_sym_array_repeat1,
  [1624] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_COMMA,
    ACTIONS(266), 1,
      anon_sym_RBRACE,
    STATE(64), 1,
      aux_sym_hash_repeat1,
  [1637] = 4,
    ACTIONS(191), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_DQUOTE,
    ACTIONS(270), 1,
      aux_sym_symbol_token1,
    STATE(89), 1,
      aux_sym_symbol_repeat1,
  [1650] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 1,
      anon_sym_COMMA,
    ACTIONS(274), 1,
      anon_sym_RBRACE,
    STATE(64), 1,
      aux_sym_hash_repeat1,
  [1663] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 1,
      anon_sym_COMMA,
    ACTIONS(279), 1,
      anon_sym_RBRACE,
    STATE(67), 1,
      aux_sym_namedTupleLiteral_repeat1,
  [1676] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 1,
      anon_sym_COMMA,
    ACTIONS(283), 1,
      anon_sym_RBRACE,
    STATE(75), 1,
      aux_sym_namedTupleLiteral_repeat1,
  [1689] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 1,
      anon_sym_COMMA,
    ACTIONS(285), 1,
      anon_sym_RBRACE,
    STATE(67), 1,
      aux_sym_namedTupleLiteral_repeat1,
  [1702] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      anon_sym_COMMA,
    ACTIONS(287), 1,
      anon_sym_RBRACK,
    STATE(63), 1,
      aux_sym_array_repeat1,
  [1715] = 4,
    ACTIONS(191), 1,
      sym_comment,
    ACTIONS(270), 1,
      aux_sym_symbol_token1,
    ACTIONS(289), 1,
      anon_sym_DQUOTE,
    STATE(89), 1,
      aux_sym_symbol_repeat1,
  [1728] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 1,
      anon_sym_COMMA,
    ACTIONS(291), 1,
      anon_sym_RBRACE,
    STATE(74), 1,
      aux_sym_hash_repeat1,
  [1741] = 4,
    ACTIONS(191), 1,
      sym_comment,
    ACTIONS(293), 1,
      anon_sym_DQUOTE,
    ACTIONS(295), 1,
      aux_sym_symbol_token1,
    STATE(98), 1,
      aux_sym_symbol_repeat1,
  [1754] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 1,
      anon_sym_COMMA,
    ACTIONS(297), 1,
      anon_sym_RBRACE,
    STATE(64), 1,
      aux_sym_hash_repeat1,
  [1767] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 1,
      anon_sym_COMMA,
    ACTIONS(299), 1,
      anon_sym_RBRACE,
    STATE(67), 1,
      aux_sym_namedTupleLiteral_repeat1,
  [1780] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 1,
      anon_sym_COMMA,
    ACTIONS(301), 1,
      anon_sym_RBRACE,
    STATE(69), 1,
      aux_sym_namedTupleLiteral_repeat1,
  [1793] = 4,
    ACTIONS(191), 1,
      sym_comment,
    ACTIONS(303), 1,
      anon_sym_DQUOTE,
    ACTIONS(305), 1,
      aux_sym_symbol_token1,
    STATE(81), 1,
      aux_sym_symbol_repeat1,
  [1806] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 1,
      anon_sym_COMMA,
    ACTIONS(307), 1,
      anon_sym_RBRACE,
    STATE(66), 1,
      aux_sym_hash_repeat1,
  [1819] = 4,
    ACTIONS(191), 1,
      sym_comment,
    ACTIONS(309), 1,
      anon_sym_DQUOTE,
    ACTIONS(311), 1,
      aux_sym_symbol_token1,
    STATE(83), 1,
      aux_sym_symbol_repeat1,
  [1832] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 1,
      anon_sym_COMMA,
    ACTIONS(316), 1,
      anon_sym_RBRACK,
    STATE(80), 1,
      aux_sym_array_repeat1,
  [1845] = 4,
    ACTIONS(191), 1,
      sym_comment,
    ACTIONS(270), 1,
      aux_sym_symbol_token1,
    ACTIONS(318), 1,
      anon_sym_DQUOTE,
    STATE(89), 1,
      aux_sym_symbol_repeat1,
  [1858] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [1867] = 4,
    ACTIONS(191), 1,
      sym_comment,
    ACTIONS(270), 1,
      aux_sym_symbol_token1,
    ACTIONS(320), 1,
      anon_sym_DQUOTE,
    STATE(89), 1,
      aux_sym_symbol_repeat1,
  [1880] = 4,
    ACTIONS(191), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_DQUOTE,
    ACTIONS(324), 1,
      aux_sym_symbol_token1,
    STATE(87), 1,
      aux_sym_symbol_repeat1,
  [1893] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_COMMA,
    ACTIONS(326), 1,
      anon_sym_RBRACE,
    STATE(107), 1,
      aux_sym_array_repeat1,
  [1906] = 4,
    ACTIONS(191), 1,
      sym_comment,
    ACTIONS(328), 1,
      anon_sym_DQUOTE,
    ACTIONS(330), 1,
      aux_sym_symbol_token1,
    STATE(91), 1,
      aux_sym_symbol_repeat1,
  [1919] = 4,
    ACTIONS(191), 1,
      sym_comment,
    ACTIONS(270), 1,
      aux_sym_symbol_token1,
    ACTIONS(332), 1,
      anon_sym_DQUOTE,
    STATE(89), 1,
      aux_sym_symbol_repeat1,
  [1932] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      anon_sym_COMMA,
    ACTIONS(334), 1,
      anon_sym_RBRACK,
    STATE(80), 1,
      aux_sym_array_repeat1,
  [1945] = 3,
    ACTIONS(191), 1,
      sym_comment,
    STATE(89), 1,
      aux_sym_symbol_repeat1,
    ACTIONS(336), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
  [1956] = 4,
    ACTIONS(191), 1,
      sym_comment,
    ACTIONS(270), 1,
      aux_sym_symbol_token1,
    ACTIONS(339), 1,
      anon_sym_DQUOTE,
    STATE(89), 1,
      aux_sym_symbol_repeat1,
  [1969] = 4,
    ACTIONS(191), 1,
      sym_comment,
    ACTIONS(270), 1,
      aux_sym_symbol_token1,
    ACTIONS(341), 1,
      anon_sym_DQUOTE,
    STATE(89), 1,
      aux_sym_symbol_repeat1,
  [1982] = 4,
    ACTIONS(191), 1,
      sym_comment,
    ACTIONS(343), 1,
      anon_sym_DQUOTE,
    ACTIONS(345), 1,
      aux_sym_symbol_token1,
    STATE(94), 1,
      aux_sym_symbol_repeat1,
  [1995] = 4,
    ACTIONS(191), 1,
      sym_comment,
    ACTIONS(347), 1,
      anon_sym_DQUOTE,
    ACTIONS(349), 1,
      aux_sym_symbol_token1,
    STATE(65), 1,
      aux_sym_symbol_repeat1,
  [2008] = 4,
    ACTIONS(191), 1,
      sym_comment,
    ACTIONS(270), 1,
      aux_sym_symbol_token1,
    ACTIONS(351), 1,
      anon_sym_DQUOTE,
    STATE(89), 1,
      aux_sym_symbol_repeat1,
  [2021] = 4,
    ACTIONS(191), 1,
      sym_comment,
    ACTIONS(270), 1,
      aux_sym_symbol_token1,
    ACTIONS(353), 1,
      anon_sym_DQUOTE,
    STATE(89), 1,
      aux_sym_symbol_repeat1,
  [2034] = 4,
    ACTIONS(191), 1,
      sym_comment,
    ACTIONS(355), 1,
      anon_sym_DQUOTE,
    ACTIONS(357), 1,
      aux_sym_symbol_token1,
    STATE(100), 1,
      aux_sym_symbol_repeat1,
  [2047] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      anon_sym_COMMA,
    ACTIONS(359), 1,
      anon_sym_RBRACK,
    STATE(88), 1,
      aux_sym_array_repeat1,
  [2060] = 4,
    ACTIONS(191), 1,
      sym_comment,
    ACTIONS(270), 1,
      aux_sym_symbol_token1,
    ACTIONS(361), 1,
      anon_sym_DQUOTE,
    STATE(89), 1,
      aux_sym_symbol_repeat1,
  [2073] = 4,
    ACTIONS(191), 1,
      sym_comment,
    ACTIONS(363), 1,
      anon_sym_DQUOTE,
    ACTIONS(365), 1,
      aux_sym_symbol_token1,
    STATE(90), 1,
      aux_sym_symbol_repeat1,
  [2086] = 4,
    ACTIONS(191), 1,
      sym_comment,
    ACTIONS(270), 1,
      aux_sym_symbol_token1,
    ACTIONS(367), 1,
      anon_sym_DQUOTE,
    STATE(89), 1,
      aux_sym_symbol_repeat1,
  [2099] = 3,
    ACTIONS(191), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_EQ_GT,
    ACTIONS(189), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
  [2110] = 3,
    ACTIONS(191), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_EQ_GT,
    ACTIONS(189), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
  [2121] = 3,
    ACTIONS(187), 1,
      anon_sym_EQ_GT,
    ACTIONS(191), 1,
      sym_comment,
    ACTIONS(189), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
  [2132] = 3,
    ACTIONS(191), 1,
      sym_comment,
    ACTIONS(195), 1,
      anon_sym_EQ_GT,
    ACTIONS(189), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
  [2143] = 3,
    ACTIONS(191), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_COLON,
    ACTIONS(189), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
  [2154] = 3,
    ACTIONS(187), 1,
      anon_sym_COLON,
    ACTIONS(191), 1,
      sym_comment,
    ACTIONS(189), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token1,
  [2165] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      anon_sym_RBRACE,
    ACTIONS(369), 1,
      anon_sym_COMMA,
    STATE(107), 1,
      aux_sym_array_repeat1,
  [2178] = 4,
    ACTIONS(191), 1,
      sym_comment,
    ACTIONS(372), 1,
      anon_sym_DQUOTE,
    ACTIONS(374), 1,
      aux_sym_symbol_token1,
    STATE(71), 1,
      aux_sym_symbol_repeat1,
  [2191] = 3,
    ACTIONS(191), 1,
      sym_comment,
    ACTIONS(225), 1,
      aux_sym__statement_token1,
    ACTIONS(376), 1,
      anon_sym_SEMI,
  [2201] = 3,
    ACTIONS(191), 1,
      sym_comment,
    ACTIONS(201), 1,
      aux_sym__statement_token1,
    ACTIONS(378), 1,
      anon_sym_SEMI,
  [2211] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2219] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2227] = 3,
    ACTIONS(191), 1,
      sym_comment,
    ACTIONS(237), 1,
      aux_sym__statement_token1,
    ACTIONS(384), 1,
      anon_sym_SEMI,
  [2237] = 3,
    ACTIONS(191), 1,
      sym_comment,
    ACTIONS(233), 1,
      aux_sym__statement_token1,
    ACTIONS(386), 1,
      anon_sym_SEMI,
  [2247] = 3,
    ACTIONS(191), 1,
      sym_comment,
    ACTIONS(231), 1,
      aux_sym__statement_token1,
    ACTIONS(388), 1,
      anon_sym_SEMI,
  [2257] = 3,
    ACTIONS(191), 1,
      sym_comment,
    ACTIONS(219), 1,
      aux_sym__statement_token1,
    ACTIONS(390), 1,
      anon_sym_SEMI,
  [2267] = 3,
    ACTIONS(191), 1,
      sym_comment,
    ACTIONS(229), 1,
      aux_sym__statement_token1,
    ACTIONS(392), 1,
      anon_sym_SEMI,
  [2277] = 3,
    ACTIONS(191), 1,
      sym_comment,
    ACTIONS(221), 1,
      aux_sym__statement_token1,
    ACTIONS(394), 1,
      anon_sym_SEMI,
  [2287] = 3,
    ACTIONS(191), 1,
      sym_comment,
    ACTIONS(396), 1,
      anon_sym_SEMI,
    ACTIONS(398), 1,
      aux_sym__statement_token1,
  [2297] = 3,
    ACTIONS(191), 1,
      sym_comment,
    ACTIONS(203), 1,
      aux_sym__statement_token1,
    ACTIONS(400), 1,
      anon_sym_SEMI,
  [2307] = 3,
    ACTIONS(191), 1,
      sym_comment,
    ACTIONS(227), 1,
      aux_sym__statement_token1,
    ACTIONS(402), 1,
      anon_sym_SEMI,
  [2317] = 3,
    ACTIONS(191), 1,
      sym_comment,
    ACTIONS(211), 1,
      aux_sym__statement_token1,
    ACTIONS(404), 1,
      anon_sym_SEMI,
  [2327] = 3,
    ACTIONS(191), 1,
      sym_comment,
    ACTIONS(213), 1,
      aux_sym__statement_token1,
    ACTIONS(406), 1,
      anon_sym_SEMI,
  [2337] = 3,
    ACTIONS(191), 1,
      sym_comment,
    ACTIONS(223), 1,
      aux_sym__statement_token1,
    ACTIONS(408), 1,
      anon_sym_SEMI,
  [2347] = 3,
    ACTIONS(191), 1,
      sym_comment,
    ACTIONS(199), 1,
      aux_sym__statement_token1,
    ACTIONS(410), 1,
      anon_sym_SEMI,
  [2357] = 3,
    ACTIONS(191), 1,
      sym_comment,
    ACTIONS(205), 1,
      aux_sym__statement_token1,
    ACTIONS(412), 1,
      anon_sym_SEMI,
  [2367] = 3,
    ACTIONS(191), 1,
      sym_comment,
    ACTIONS(215), 1,
      aux_sym__statement_token1,
    ACTIONS(414), 1,
      anon_sym_SEMI,
  [2377] = 3,
    ACTIONS(191), 1,
      sym_comment,
    ACTIONS(217), 1,
      aux_sym__statement_token1,
    ACTIONS(416), 1,
      anon_sym_SEMI,
  [2387] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 1,
      anon_sym_RPAREN,
  [2394] = 2,
    ACTIONS(191), 1,
      sym_comment,
    ACTIONS(420), 1,
      aux_sym_commandLiteral_token2,
  [2401] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 1,
      anon_sym_EQ_GT,
  [2408] = 2,
    ACTIONS(191), 1,
      sym_comment,
    ACTIONS(424), 1,
      aux_sym_hash_token1,
  [2415] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 1,
      anon_sym_BQUOTE,
  [2422] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(426), 1,
      anon_sym_SLASH,
  [2429] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      anon_sym_COLON,
  [2436] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 1,
      anon_sym_of,
  [2443] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 1,
      anon_sym_COLON,
  [2450] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 1,
      anon_sym_SLASH,
  [2457] = 2,
    ACTIONS(191), 1,
      sym_comment,
    ACTIONS(434), 1,
      aux_sym_hash_token1,
  [2464] = 2,
    ACTIONS(191), 1,
      sym_comment,
    ACTIONS(436), 1,
      aux_sym_regex_token1,
  [2471] = 2,
    ACTIONS(191), 1,
      sym_comment,
    ACTIONS(438), 1,
      aux_sym_commandLiteral_token1,
  [2478] = 2,
    ACTIONS(191), 1,
      sym_comment,
    ACTIONS(440), 1,
      aux_sym_hash_token1,
  [2485] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 1,
      ts_builtin_sym_end,
  [2492] = 2,
    ACTIONS(191), 1,
      sym_comment,
    ACTIONS(444), 1,
      aux_sym_commandLiteral_token2,
  [2499] = 2,
    ACTIONS(191), 1,
      sym_comment,
    ACTIONS(446), 1,
      aux_sym_commandLiteral_token1,
  [2506] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 1,
      anon_sym_EQ_GT,
  [2513] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      anon_sym_EQ_GT,
  [2520] = 2,
    ACTIONS(191), 1,
      sym_comment,
    ACTIONS(452), 1,
      aux_sym_regex_token1,
  [2527] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 1,
      anon_sym_COLON,
  [2534] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 1,
      anon_sym_RPAREN,
  [2541] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_COLON,
  [2548] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 1,
      anon_sym_BQUOTE,
  [2555] = 2,
    ACTIONS(191), 1,
      sym_comment,
    ACTIONS(458), 1,
      aux_sym_hash_token1,
  [2562] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(460), 1,
      anon_sym_of,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(6)] = 0,
  [SMALL_STATE(7)] = 82,
  [SMALL_STATE(8)] = 164,
  [SMALL_STATE(9)] = 246,
  [SMALL_STATE(10)] = 328,
  [SMALL_STATE(11)] = 410,
  [SMALL_STATE(12)] = 492,
  [SMALL_STATE(13)] = 574,
  [SMALL_STATE(14)] = 656,
  [SMALL_STATE(15)] = 738,
  [SMALL_STATE(16)] = 820,
  [SMALL_STATE(17)] = 902,
  [SMALL_STATE(18)] = 942,
  [SMALL_STATE(19)] = 983,
  [SMALL_STATE(20)] = 1024,
  [SMALL_STATE(21)] = 1065,
  [SMALL_STATE(22)] = 1106,
  [SMALL_STATE(23)] = 1147,
  [SMALL_STATE(24)] = 1161,
  [SMALL_STATE(25)] = 1175,
  [SMALL_STATE(26)] = 1188,
  [SMALL_STATE(27)] = 1201,
  [SMALL_STATE(28)] = 1211,
  [SMALL_STATE(29)] = 1221,
  [SMALL_STATE(30)] = 1231,
  [SMALL_STATE(31)] = 1241,
  [SMALL_STATE(32)] = 1253,
  [SMALL_STATE(33)] = 1265,
  [SMALL_STATE(34)] = 1275,
  [SMALL_STATE(35)] = 1287,
  [SMALL_STATE(36)] = 1297,
  [SMALL_STATE(37)] = 1309,
  [SMALL_STATE(38)] = 1321,
  [SMALL_STATE(39)] = 1333,
  [SMALL_STATE(40)] = 1343,
  [SMALL_STATE(41)] = 1355,
  [SMALL_STATE(42)] = 1367,
  [SMALL_STATE(43)] = 1377,
  [SMALL_STATE(44)] = 1387,
  [SMALL_STATE(45)] = 1397,
  [SMALL_STATE(46)] = 1407,
  [SMALL_STATE(47)] = 1419,
  [SMALL_STATE(48)] = 1429,
  [SMALL_STATE(49)] = 1441,
  [SMALL_STATE(50)] = 1453,
  [SMALL_STATE(51)] = 1465,
  [SMALL_STATE(52)] = 1475,
  [SMALL_STATE(53)] = 1485,
  [SMALL_STATE(54)] = 1495,
  [SMALL_STATE(55)] = 1505,
  [SMALL_STATE(56)] = 1517,
  [SMALL_STATE(57)] = 1527,
  [SMALL_STATE(58)] = 1541,
  [SMALL_STATE(59)] = 1557,
  [SMALL_STATE(60)] = 1573,
  [SMALL_STATE(61)] = 1585,
  [SMALL_STATE(62)] = 1598,
  [SMALL_STATE(63)] = 1611,
  [SMALL_STATE(64)] = 1624,
  [SMALL_STATE(65)] = 1637,
  [SMALL_STATE(66)] = 1650,
  [SMALL_STATE(67)] = 1663,
  [SMALL_STATE(68)] = 1676,
  [SMALL_STATE(69)] = 1689,
  [SMALL_STATE(70)] = 1702,
  [SMALL_STATE(71)] = 1715,
  [SMALL_STATE(72)] = 1728,
  [SMALL_STATE(73)] = 1741,
  [SMALL_STATE(74)] = 1754,
  [SMALL_STATE(75)] = 1767,
  [SMALL_STATE(76)] = 1780,
  [SMALL_STATE(77)] = 1793,
  [SMALL_STATE(78)] = 1806,
  [SMALL_STATE(79)] = 1819,
  [SMALL_STATE(80)] = 1832,
  [SMALL_STATE(81)] = 1845,
  [SMALL_STATE(82)] = 1858,
  [SMALL_STATE(83)] = 1867,
  [SMALL_STATE(84)] = 1880,
  [SMALL_STATE(85)] = 1893,
  [SMALL_STATE(86)] = 1906,
  [SMALL_STATE(87)] = 1919,
  [SMALL_STATE(88)] = 1932,
  [SMALL_STATE(89)] = 1945,
  [SMALL_STATE(90)] = 1956,
  [SMALL_STATE(91)] = 1969,
  [SMALL_STATE(92)] = 1982,
  [SMALL_STATE(93)] = 1995,
  [SMALL_STATE(94)] = 2008,
  [SMALL_STATE(95)] = 2021,
  [SMALL_STATE(96)] = 2034,
  [SMALL_STATE(97)] = 2047,
  [SMALL_STATE(98)] = 2060,
  [SMALL_STATE(99)] = 2073,
  [SMALL_STATE(100)] = 2086,
  [SMALL_STATE(101)] = 2099,
  [SMALL_STATE(102)] = 2110,
  [SMALL_STATE(103)] = 2121,
  [SMALL_STATE(104)] = 2132,
  [SMALL_STATE(105)] = 2143,
  [SMALL_STATE(106)] = 2154,
  [SMALL_STATE(107)] = 2165,
  [SMALL_STATE(108)] = 2178,
  [SMALL_STATE(109)] = 2191,
  [SMALL_STATE(110)] = 2201,
  [SMALL_STATE(111)] = 2211,
  [SMALL_STATE(112)] = 2219,
  [SMALL_STATE(113)] = 2227,
  [SMALL_STATE(114)] = 2237,
  [SMALL_STATE(115)] = 2247,
  [SMALL_STATE(116)] = 2257,
  [SMALL_STATE(117)] = 2267,
  [SMALL_STATE(118)] = 2277,
  [SMALL_STATE(119)] = 2287,
  [SMALL_STATE(120)] = 2297,
  [SMALL_STATE(121)] = 2307,
  [SMALL_STATE(122)] = 2317,
  [SMALL_STATE(123)] = 2327,
  [SMALL_STATE(124)] = 2337,
  [SMALL_STATE(125)] = 2347,
  [SMALL_STATE(126)] = 2357,
  [SMALL_STATE(127)] = 2367,
  [SMALL_STATE(128)] = 2377,
  [SMALL_STATE(129)] = 2387,
  [SMALL_STATE(130)] = 2394,
  [SMALL_STATE(131)] = 2401,
  [SMALL_STATE(132)] = 2408,
  [SMALL_STATE(133)] = 2415,
  [SMALL_STATE(134)] = 2422,
  [SMALL_STATE(135)] = 2429,
  [SMALL_STATE(136)] = 2436,
  [SMALL_STATE(137)] = 2443,
  [SMALL_STATE(138)] = 2450,
  [SMALL_STATE(139)] = 2457,
  [SMALL_STATE(140)] = 2464,
  [SMALL_STATE(141)] = 2471,
  [SMALL_STATE(142)] = 2478,
  [SMALL_STATE(143)] = 2485,
  [SMALL_STATE(144)] = 2492,
  [SMALL_STATE(145)] = 2499,
  [SMALL_STATE(146)] = 2506,
  [SMALL_STATE(147)] = 2513,
  [SMALL_STATE(148)] = 2520,
  [SMALL_STATE(149)] = 2527,
  [SMALL_STATE(150)] = 2534,
  [SMALL_STATE(151)] = 2541,
  [SMALL_STATE(152)] = 2548,
  [SMALL_STATE(153)] = 2555,
  [SMALL_STATE(154)] = 2562,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(119),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(126),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(113),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(113),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(114),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(114),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(21),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(73),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(115),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(115),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(11),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(3),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(148),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(117),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(145),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(144),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_symbol_repeat1, 1),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 4),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 3),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 4),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 3),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hash, 6),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namedTupleLiteral, 5, .production_id = 1),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hash, 5, .production_id = 1),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 4),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commandLiteral, 3),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namedTupleLiteral, 6, .production_id = 2),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hash, 6, .production_id = 2),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 3),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 2),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 1),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 1),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 1),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [263] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hash_repeat1, 2, .production_id = 3), SHIFT_REPEAT(8),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_hash_repeat1, 2, .production_id = 3),
  [268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [276] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_namedTupleLiteral_repeat1, 2, .production_id = 3), SHIFT_REPEAT(57),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_namedTupleLiteral_repeat1, 2, .production_id = 3),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [313] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(12),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2),
  [318] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [320] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [322] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [324] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [328] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [330] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [336] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_symbol_repeat1, 2), SHIFT_REPEAT(89),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [363] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [369] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(15),
  [372] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [374] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 3),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex, 3),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_namedTupleLiteral_repeat1, 4, .production_id = 1),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_hash_repeat1, 4, .production_id = 1),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 1),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char, 1),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namedTupleLiteral, 6, .production_id = 2),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 1),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hash, 6, .production_id = 2),
  [396] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hash, 6),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 2),
  [404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namedTupleLiteral, 5, .production_id = 1),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hash, 5, .production_id = 1),
  [408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 3),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 4),
  [412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool, 1),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 4),
  [416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commandLiteral, 3),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [420] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [424] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [434] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [436] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [438] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [440] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [442] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [444] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [446] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [452] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [458] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
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

#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 18
#define LARGE_STATE_COUNT 3
#define SYMBOL_COUNT 41
#define ALIAS_COUNT 0
#define TOKEN_COUNT 33
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_SEMI = 1,
  aux_sym__statement_token1 = 2,
  anon_sym_COLON = 3,
  aux_sym_symbol_token1 = 4,
  anon_sym_DQUOTE = 5,
  aux_sym_symbol_token2 = 6,
  anon_sym_PLUS = 7,
  anon_sym_DASH = 8,
  anon_sym_STAR = 9,
  anon_sym_SLASH = 10,
  anon_sym_PERCENT = 11,
  anon_sym_AMP = 12,
  anon_sym_PIPE = 13,
  anon_sym_CARET = 14,
  anon_sym_STAR_STAR = 15,
  anon_sym_GT_GT = 16,
  anon_sym_LT_LT = 17,
  anon_sym_EQ_EQ = 18,
  anon_sym_BANG_EQ = 19,
  anon_sym_LT = 20,
  anon_sym_LT_EQ = 21,
  anon_sym_GT = 22,
  anon_sym_GT_EQ = 23,
  anon_sym_LT_EQ_GT = 24,
  anon_sym_EQ_EQ_EQ = 25,
  anon_sym_LBRACK_RBRACK = 26,
  anon_sym_LBRACK_RBRACK_QMARK = 27,
  anon_sym_LBRACK_RBRACK_EQ = 28,
  anon_sym_BANG = 29,
  anon_sym_TILDE = 30,
  anon_sym_BANG_TILDE = 31,
  anon_sym_EQ_TILDE = 32,
  sym_program = 33,
  sym__statement = 34,
  sym__expression = 35,
  sym_symbol = 36,
  sym_string = 37,
  sym__operator = 38,
  aux_sym_program_repeat1 = 39,
  aux_sym_symbol_repeat1 = 40,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [aux_sym__statement_token1] = "_statement_token1",
  [anon_sym_COLON] = ":",
  [aux_sym_symbol_token1] = "symbol_token1",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_symbol_token2] = "symbol_token2",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
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
  [sym_symbol] = "symbol",
  [sym_string] = "string",
  [sym__operator] = "_operator",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_symbol_repeat1] = "symbol_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [aux_sym__statement_token1] = aux_sym__statement_token1,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym_symbol_token1] = aux_sym_symbol_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_symbol_token2] = aux_sym_symbol_token2,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
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
  [sym_symbol] = sym_symbol,
  [sym_string] = sym_string,
  [sym__operator] = sym__operator,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_symbol_repeat1] = aux_sym_symbol_repeat1,
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
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_symbol_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_symbol_token2] = {
    .visible = false,
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
  [anon_sym_SLASH] = {
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
  [sym_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
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
      if (eof) ADVANCE(6);
      if (lookahead == '!') ADVANCE(39);
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '%') ADVANCE(21);
      if (lookahead == '&') ADVANCE(22);
      if (lookahead == '*') ADVANCE(19);
      if (lookahead == '+') ADVANCE(17);
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == '/') ADVANCE(20);
      if (lookahead == ':') ADVANCE(10);
      if (lookahead == ';') ADVANCE(7);
      if (lookahead == '<') ADVANCE(30);
      if (lookahead == '=') ADVANCE(4);
      if (lookahead == '>') ADVANCE(32);
      if (lookahead == '[') ADVANCE(5);
      if (lookahead == '^') ADVANCE(24);
      if (lookahead == '|') ADVANCE(23);
      if (lookahead == '~') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead != 0 &&
          lookahead > '@' &&
          lookahead != '\\' &&
          lookahead != ']' &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(12);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(8);
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == ';') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(15);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(9);
      if (lookahead == ';') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 4:
      if (lookahead == '=') ADVANCE(28);
      if (lookahead == '~') ADVANCE(42);
      END_STATE();
    case 5:
      if (lookahead == ']') ADVANCE(36);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(aux_sym__statement_token1);
      if (lookahead == '\n') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(15);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(aux_sym__statement_token1);
      if (lookahead == '\n') ADVANCE(9);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '!' ||
          lookahead == '=' ||
          lookahead == '?') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\n') ADVANCE(8);
      if (lookahead == ';') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(14);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(14);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(25);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      if (lookahead == '=') ADVANCE(35);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(27);
      if (lookahead == '=') ADVANCE(31);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      if (lookahead == '>') ADVANCE(34);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(33);
      if (lookahead == '>') ADVANCE(26);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_LT_EQ_GT);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_EQ_EQ_EQ);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_LBRACK_RBRACK);
      if (lookahead == '=') ADVANCE(38);
      if (lookahead == '?') ADVANCE(37);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_LBRACK_RBRACK_QMARK);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_LBRACK_RBRACK_EQ);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(29);
      if (lookahead == '~') ADVANCE(41);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_BANG_TILDE);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_EQ_TILDE);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [aux_sym_symbol_token1] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
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
    [sym_program] = STATE(17),
    [sym__statement] = STATE(3),
    [sym__expression] = STATE(15),
    [sym_symbol] = STATE(15),
    [sym_string] = STATE(15),
    [aux_sym_program_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_COLON] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(7),
  },
  [2] = {
    [sym__operator] = STATE(16),
    [aux_sym_symbol_token1] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(9),
    [anon_sym_DASH] = ACTIONS(9),
    [anon_sym_STAR] = ACTIONS(13),
    [anon_sym_SLASH] = ACTIONS(9),
    [anon_sym_PERCENT] = ACTIONS(9),
    [anon_sym_AMP] = ACTIONS(9),
    [anon_sym_PIPE] = ACTIONS(9),
    [anon_sym_CARET] = ACTIONS(9),
    [anon_sym_STAR_STAR] = ACTIONS(9),
    [anon_sym_GT_GT] = ACTIONS(9),
    [anon_sym_LT_LT] = ACTIONS(9),
    [anon_sym_EQ_EQ] = ACTIONS(13),
    [anon_sym_BANG_EQ] = ACTIONS(9),
    [anon_sym_LT] = ACTIONS(13),
    [anon_sym_LT_EQ] = ACTIONS(13),
    [anon_sym_GT] = ACTIONS(13),
    [anon_sym_GT_EQ] = ACTIONS(9),
    [anon_sym_LT_EQ_GT] = ACTIONS(9),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(9),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(13),
    [anon_sym_LBRACK_RBRACK_QMARK] = ACTIONS(9),
    [anon_sym_LBRACK_RBRACK_EQ] = ACTIONS(9),
    [anon_sym_BANG] = ACTIONS(13),
    [anon_sym_TILDE] = ACTIONS(9),
    [anon_sym_BANG_TILDE] = ACTIONS(9),
    [anon_sym_EQ_TILDE] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(5), 1,
      anon_sym_COLON,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    STATE(4), 2,
      sym__statement,
      aux_sym_program_repeat1,
    STATE(15), 3,
      sym__expression,
      sym_symbol,
      sym_string,
  [19] = 5,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    ACTIONS(19), 1,
      anon_sym_COLON,
    ACTIONS(22), 1,
      anon_sym_DQUOTE,
    STATE(4), 2,
      sym__statement,
      aux_sym_program_repeat1,
    STATE(15), 3,
      sym__expression,
      sym_symbol,
      sym_string,
  [38] = 2,
    ACTIONS(25), 2,
      anon_sym_SEMI,
      aux_sym__statement_token1,
    ACTIONS(27), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token2,
  [47] = 2,
    ACTIONS(27), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token2,
    ACTIONS(29), 2,
      anon_sym_SEMI,
      aux_sym__statement_token1,
  [56] = 2,
    ACTIONS(27), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token2,
    ACTIONS(31), 2,
      anon_sym_SEMI,
      aux_sym__statement_token1,
  [65] = 2,
    ACTIONS(27), 2,
      anon_sym_DQUOTE,
      aux_sym_symbol_token2,
    ACTIONS(33), 2,
      anon_sym_SEMI,
      aux_sym__statement_token1,
  [74] = 3,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      aux_sym_symbol_token2,
    STATE(11), 1,
      aux_sym_symbol_repeat1,
  [84] = 3,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      aux_sym_symbol_token2,
    STATE(13), 1,
      aux_sym_symbol_repeat1,
  [94] = 3,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      aux_sym_symbol_token2,
    STATE(14), 1,
      aux_sym_symbol_repeat1,
  [104] = 1,
    ACTIONS(47), 3,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_DQUOTE,
  [110] = 3,
    ACTIONS(45), 1,
      aux_sym_symbol_token2,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    STATE(14), 1,
      aux_sym_symbol_repeat1,
  [120] = 3,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(54), 1,
      aux_sym_symbol_token2,
    STATE(14), 1,
      aux_sym_symbol_repeat1,
  [130] = 2,
    ACTIONS(57), 1,
      anon_sym_SEMI,
    ACTIONS(59), 1,
      aux_sym__statement_token1,
  [137] = 2,
    ACTIONS(61), 1,
      anon_sym_SEMI,
    ACTIONS(63), 1,
      aux_sym__statement_token1,
  [144] = 1,
    ACTIONS(65), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(3)] = 0,
  [SMALL_STATE(4)] = 19,
  [SMALL_STATE(5)] = 38,
  [SMALL_STATE(6)] = 47,
  [SMALL_STATE(7)] = 56,
  [SMALL_STATE(8)] = 65,
  [SMALL_STATE(9)] = 74,
  [SMALL_STATE(10)] = 84,
  [SMALL_STATE(11)] = 94,
  [SMALL_STATE(12)] = 104,
  [SMALL_STATE(13)] = 110,
  [SMALL_STATE(14)] = 120,
  [SMALL_STATE(15)] = 130,
  [SMALL_STATE(16)] = 137,
  [SMALL_STATE(17)] = 144,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(9),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_symbol_repeat1, 1),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 3),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 4),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_symbol_repeat1, 2), SHIFT_REPEAT(14),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_symbol_repeat1, 2), SHIFT_REPEAT(14),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 2),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 2),
  [65] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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

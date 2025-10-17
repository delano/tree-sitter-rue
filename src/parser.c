#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 76
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 28
#define ALIAS_COUNT 0
#define TOKEN_COUNT 18
#define EXTERNAL_TOKEN_COUNT 7
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_LT = 1,
  anon_sym_GT = 2,
  anon_sym_LT_SLASH = 3,
  anon_sym_EQ = 4,
  sym_attribute_name = 5,
  sym_attribute_value = 6,
  anon_sym_DQUOTE = 7,
  aux_sym_quoted_attribute_value_token1 = 8,
  anon_sym_SQUOTE = 9,
  aux_sym_quoted_attribute_value_token2 = 10,
  sym__schema_start_tag_name = 11,
  sym__data_start_tag_name = 12,
  sym__template_start_tag_name = 13,
  sym__logic_start_tag_name = 14,
  sym__end_tag_name = 15,
  sym_raw_text = 16,
  sym_comment = 17,
  sym_document = 18,
  sym__element = 19,
  sym_schema_element = 20,
  sym_data_element = 21,
  sym_template_element = 22,
  sym_logic_element = 23,
  sym_attribute = 24,
  sym_quoted_attribute_value = 25,
  aux_sym_document_repeat1 = 26,
  aux_sym_schema_element_repeat1 = 27,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_LT_SLASH] = "</",
  [anon_sym_EQ] = "=",
  [sym_attribute_name] = "attribute_name",
  [sym_attribute_value] = "attribute_value",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_quoted_attribute_value_token1] = "attribute_value",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_quoted_attribute_value_token2] = "attribute_value",
  [sym__schema_start_tag_name] = "tag_name",
  [sym__data_start_tag_name] = "tag_name",
  [sym__template_start_tag_name] = "tag_name",
  [sym__logic_start_tag_name] = "tag_name",
  [sym__end_tag_name] = "_end_tag_name",
  [sym_raw_text] = "raw_text",
  [sym_comment] = "comment",
  [sym_document] = "document",
  [sym__element] = "_element",
  [sym_schema_element] = "schema_element",
  [sym_data_element] = "data_element",
  [sym_template_element] = "template_element",
  [sym_logic_element] = "logic_element",
  [sym_attribute] = "attribute",
  [sym_quoted_attribute_value] = "quoted_attribute_value",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_schema_element_repeat1] = "schema_element_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT_SLASH] = anon_sym_LT_SLASH,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_attribute_name] = sym_attribute_name,
  [sym_attribute_value] = sym_attribute_value,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_quoted_attribute_value_token1] = sym_attribute_value,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_quoted_attribute_value_token2] = sym_attribute_value,
  [sym__schema_start_tag_name] = sym__schema_start_tag_name,
  [sym__data_start_tag_name] = sym__schema_start_tag_name,
  [sym__template_start_tag_name] = sym__schema_start_tag_name,
  [sym__logic_start_tag_name] = sym__schema_start_tag_name,
  [sym__end_tag_name] = sym__end_tag_name,
  [sym_raw_text] = sym_raw_text,
  [sym_comment] = sym_comment,
  [sym_document] = sym_document,
  [sym__element] = sym__element,
  [sym_schema_element] = sym_schema_element,
  [sym_data_element] = sym_data_element,
  [sym_template_element] = sym_template_element,
  [sym_logic_element] = sym_logic_element,
  [sym_attribute] = sym_attribute,
  [sym_quoted_attribute_value] = sym_quoted_attribute_value,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_schema_element_repeat1] = aux_sym_schema_element_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_attribute_name] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_value] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_quoted_attribute_value_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_quoted_attribute_value_token2] = {
    .visible = true,
    .named = true,
  },
  [sym__schema_start_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym__data_start_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym__template_start_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym__logic_start_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym__end_tag_name] = {
    .visible = false,
    .named = true,
  },
  [sym_raw_text] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym__element] = {
    .visible = false,
    .named = true,
  },
  [sym_schema_element] = {
    .visible = true,
    .named = true,
  },
  [sym_data_element] = {
    .visible = true,
    .named = true,
  },
  [sym_template_element] = {
    .visible = true,
    .named = true,
  },
  [sym_logic_element] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_attribute_value] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_schema_element_repeat1] = {
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

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(6);
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == '<') ADVANCE(8);
      if (lookahead == '=') ADVANCE(11);
      if (lookahead == '>') ADVANCE(9);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == '<') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (lookahead != 0 &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(14);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(15);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 3:
      if (lookahead == '\'') ADVANCE(18);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 4:
      if (lookahead == '/') ADVANCE(10);
      END_STATE();
    case 5:
      if (eof) ADVANCE(6);
      if (lookahead == '<') ADVANCE(7);
      if (lookahead == '=') ADVANCE(11);
      if (lookahead == '>') ADVANCE(9);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/') ADVANCE(13);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '/') ADVANCE(10);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_attribute_value);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(17);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(20);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(20);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 5, .external_lex_state = 2},
  [2] = {.lex_state = 5, .external_lex_state = 2},
  [3] = {.lex_state = 5, .external_lex_state = 2},
  [4] = {.lex_state = 5},
  [5] = {.lex_state = 5},
  [6] = {.lex_state = 5},
  [7] = {.lex_state = 5},
  [8] = {.lex_state = 5},
  [9] = {.lex_state = 0, .external_lex_state = 3},
  [10] = {.lex_state = 5},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 5},
  [13] = {.lex_state = 5},
  [14] = {.lex_state = 5},
  [15] = {.lex_state = 5, .external_lex_state = 2},
  [16] = {.lex_state = 5, .external_lex_state = 2},
  [17] = {.lex_state = 5, .external_lex_state = 2},
  [18] = {.lex_state = 5, .external_lex_state = 2},
  [19] = {.lex_state = 5, .external_lex_state = 2},
  [20] = {.lex_state = 5, .external_lex_state = 2},
  [21] = {.lex_state = 5, .external_lex_state = 2},
  [22] = {.lex_state = 5, .external_lex_state = 2},
  [23] = {.lex_state = 5},
  [24] = {.lex_state = 5, .external_lex_state = 2},
  [25] = {.lex_state = 5, .external_lex_state = 2},
  [26] = {.lex_state = 5, .external_lex_state = 2},
  [27] = {.lex_state = 5, .external_lex_state = 2},
  [28] = {.lex_state = 1, .external_lex_state = 4},
  [29] = {.lex_state = 1, .external_lex_state = 4},
  [30] = {.lex_state = 5},
  [31] = {.lex_state = 1, .external_lex_state = 4},
  [32] = {.lex_state = 1, .external_lex_state = 4},
  [33] = {.lex_state = 1, .external_lex_state = 4},
  [34] = {.lex_state = 1, .external_lex_state = 4},
  [35] = {.lex_state = 5},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 1, .external_lex_state = 4},
  [39] = {.lex_state = 1, .external_lex_state = 4},
  [40] = {.lex_state = 5},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 0, .external_lex_state = 5},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 0, .external_lex_state = 5},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0, .external_lex_state = 5},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0, .external_lex_state = 5},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 0, .external_lex_state = 5},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0, .external_lex_state = 5},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0, .external_lex_state = 5},
  [63] = {.lex_state = 0, .external_lex_state = 5},
  [64] = {.lex_state = 0, .external_lex_state = 5},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0, .external_lex_state = 5},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0, .external_lex_state = 5},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 0, .external_lex_state = 5},
  [75] = {.lex_state = 1},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT_SLASH] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_attribute_name] = ACTIONS(1),
    [sym_attribute_value] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym__schema_start_tag_name] = ACTIONS(1),
    [sym__data_start_tag_name] = ACTIONS(1),
    [sym__template_start_tag_name] = ACTIONS(1),
    [sym__logic_start_tag_name] = ACTIONS(1),
    [sym__end_tag_name] = ACTIONS(1),
    [sym_raw_text] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(58),
    [sym__element] = STATE(2),
    [sym_schema_element] = STATE(2),
    [sym_data_element] = STATE(2),
    [sym_template_element] = STATE(2),
    [sym_logic_element] = STATE(2),
    [aux_sym_document_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LT] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(5), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    ACTIONS(11), 1,
      sym_comment,
    STATE(3), 6,
      sym__element,
      sym_schema_element,
      sym_data_element,
      sym_template_element,
      sym_logic_element,
      aux_sym_document_repeat1,
  [18] = 4,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(18), 1,
      sym_comment,
    STATE(3), 6,
      sym__element,
      sym_schema_element,
      sym_data_element,
      sym_template_element,
      sym_logic_element,
      aux_sym_document_repeat1,
  [36] = 3,
    ACTIONS(21), 1,
      anon_sym_GT,
    ACTIONS(23), 1,
      sym_attribute_name,
    STATE(10), 2,
      sym_attribute,
      aux_sym_schema_element_repeat1,
  [47] = 3,
    ACTIONS(23), 1,
      sym_attribute_name,
    ACTIONS(25), 1,
      anon_sym_GT,
    STATE(12), 2,
      sym_attribute,
      aux_sym_schema_element_repeat1,
  [58] = 3,
    ACTIONS(23), 1,
      sym_attribute_name,
    ACTIONS(27), 1,
      anon_sym_GT,
    STATE(4), 2,
      sym_attribute,
      aux_sym_schema_element_repeat1,
  [69] = 3,
    ACTIONS(23), 1,
      sym_attribute_name,
    ACTIONS(29), 1,
      anon_sym_GT,
    STATE(14), 2,
      sym_attribute,
      aux_sym_schema_element_repeat1,
  [80] = 3,
    ACTIONS(23), 1,
      sym_attribute_name,
    ACTIONS(31), 1,
      anon_sym_GT,
    STATE(13), 2,
      sym_attribute,
      aux_sym_schema_element_repeat1,
  [91] = 4,
    ACTIONS(33), 1,
      sym__schema_start_tag_name,
    ACTIONS(35), 1,
      sym__data_start_tag_name,
    ACTIONS(37), 1,
      sym__template_start_tag_name,
    ACTIONS(39), 1,
      sym__logic_start_tag_name,
  [104] = 3,
    ACTIONS(41), 1,
      anon_sym_GT,
    ACTIONS(43), 1,
      sym_attribute_name,
    STATE(10), 2,
      sym_attribute,
      aux_sym_schema_element_repeat1,
  [115] = 4,
    ACTIONS(46), 1,
      sym_attribute_value,
    ACTIONS(48), 1,
      anon_sym_DQUOTE,
    ACTIONS(50), 1,
      anon_sym_SQUOTE,
    STATE(35), 1,
      sym_quoted_attribute_value,
  [128] = 3,
    ACTIONS(23), 1,
      sym_attribute_name,
    ACTIONS(52), 1,
      anon_sym_GT,
    STATE(10), 2,
      sym_attribute,
      aux_sym_schema_element_repeat1,
  [139] = 3,
    ACTIONS(23), 1,
      sym_attribute_name,
    ACTIONS(54), 1,
      anon_sym_GT,
    STATE(10), 2,
      sym_attribute,
      aux_sym_schema_element_repeat1,
  [150] = 3,
    ACTIONS(23), 1,
      sym_attribute_name,
    ACTIONS(56), 1,
      anon_sym_GT,
    STATE(10), 2,
      sym_attribute,
      aux_sym_schema_element_repeat1,
  [161] = 1,
    ACTIONS(58), 3,
      sym_comment,
      ts_builtin_sym_end,
      anon_sym_LT,
  [167] = 1,
    ACTIONS(60), 3,
      sym_comment,
      ts_builtin_sym_end,
      anon_sym_LT,
  [173] = 1,
    ACTIONS(62), 3,
      sym_comment,
      ts_builtin_sym_end,
      anon_sym_LT,
  [179] = 1,
    ACTIONS(64), 3,
      sym_comment,
      ts_builtin_sym_end,
      anon_sym_LT,
  [185] = 1,
    ACTIONS(66), 3,
      sym_comment,
      ts_builtin_sym_end,
      anon_sym_LT,
  [191] = 1,
    ACTIONS(68), 3,
      sym_comment,
      ts_builtin_sym_end,
      anon_sym_LT,
  [197] = 1,
    ACTIONS(70), 3,
      sym_comment,
      ts_builtin_sym_end,
      anon_sym_LT,
  [203] = 1,
    ACTIONS(72), 3,
      sym_comment,
      ts_builtin_sym_end,
      anon_sym_LT,
  [209] = 2,
    ACTIONS(76), 1,
      anon_sym_EQ,
    ACTIONS(74), 2,
      anon_sym_GT,
      sym_attribute_name,
  [217] = 1,
    ACTIONS(78), 3,
      sym_comment,
      ts_builtin_sym_end,
      anon_sym_LT,
  [223] = 1,
    ACTIONS(80), 3,
      sym_comment,
      ts_builtin_sym_end,
      anon_sym_LT,
  [229] = 1,
    ACTIONS(82), 3,
      sym_comment,
      ts_builtin_sym_end,
      anon_sym_LT,
  [235] = 1,
    ACTIONS(84), 3,
      sym_comment,
      ts_builtin_sym_end,
      anon_sym_LT,
  [241] = 2,
    ACTIONS(86), 1,
      anon_sym_LT_SLASH,
    ACTIONS(88), 1,
      sym_raw_text,
  [248] = 2,
    ACTIONS(90), 1,
      anon_sym_LT_SLASH,
    ACTIONS(92), 1,
      sym_raw_text,
  [255] = 1,
    ACTIONS(94), 2,
      anon_sym_GT,
      sym_attribute_name,
  [260] = 2,
    ACTIONS(96), 1,
      anon_sym_LT_SLASH,
    ACTIONS(98), 1,
      sym_raw_text,
  [267] = 2,
    ACTIONS(100), 1,
      anon_sym_LT_SLASH,
    ACTIONS(102), 1,
      sym_raw_text,
  [274] = 2,
    ACTIONS(104), 1,
      anon_sym_LT_SLASH,
    ACTIONS(106), 1,
      sym_raw_text,
  [281] = 2,
    ACTIONS(108), 1,
      anon_sym_LT_SLASH,
    ACTIONS(110), 1,
      sym_raw_text,
  [288] = 1,
    ACTIONS(112), 2,
      anon_sym_GT,
      sym_attribute_name,
  [293] = 2,
    ACTIONS(114), 1,
      anon_sym_DQUOTE,
    ACTIONS(116), 1,
      aux_sym_quoted_attribute_value_token1,
  [300] = 2,
    ACTIONS(114), 1,
      anon_sym_SQUOTE,
    ACTIONS(118), 1,
      aux_sym_quoted_attribute_value_token2,
  [307] = 2,
    ACTIONS(120), 1,
      anon_sym_LT_SLASH,
    ACTIONS(122), 1,
      sym_raw_text,
  [314] = 2,
    ACTIONS(124), 1,
      anon_sym_LT_SLASH,
    ACTIONS(126), 1,
      sym_raw_text,
  [321] = 1,
    ACTIONS(128), 2,
      anon_sym_GT,
      sym_attribute_name,
  [326] = 1,
    ACTIONS(130), 1,
      anon_sym_LT_SLASH,
  [330] = 1,
    ACTIONS(132), 1,
      sym__end_tag_name,
  [334] = 1,
    ACTIONS(134), 1,
      anon_sym_GT,
  [338] = 1,
    ACTIONS(136), 1,
      anon_sym_LT_SLASH,
  [342] = 1,
    ACTIONS(138), 1,
      sym__end_tag_name,
  [346] = 1,
    ACTIONS(140), 1,
      anon_sym_GT,
  [350] = 1,
    ACTIONS(142), 1,
      anon_sym_LT_SLASH,
  [354] = 1,
    ACTIONS(144), 1,
      anon_sym_GT,
  [358] = 1,
    ACTIONS(146), 1,
      sym__end_tag_name,
  [362] = 1,
    ACTIONS(148), 1,
      anon_sym_GT,
  [366] = 1,
    ACTIONS(150), 1,
      anon_sym_DQUOTE,
  [370] = 1,
    ACTIONS(150), 1,
      anon_sym_SQUOTE,
  [374] = 1,
    ACTIONS(152), 1,
      sym__end_tag_name,
  [378] = 1,
    ACTIONS(154), 1,
      anon_sym_GT,
  [382] = 1,
    ACTIONS(156), 1,
      anon_sym_LT_SLASH,
  [386] = 1,
    ACTIONS(158), 1,
      sym__end_tag_name,
  [390] = 1,
    ACTIONS(160), 1,
      anon_sym_GT,
  [394] = 1,
    ACTIONS(162), 1,
      ts_builtin_sym_end,
  [398] = 1,
    ACTIONS(164), 1,
      sym__end_tag_name,
  [402] = 1,
    ACTIONS(166), 1,
      anon_sym_GT,
  [406] = 1,
    ACTIONS(168), 1,
      anon_sym_GT,
  [410] = 1,
    ACTIONS(170), 1,
      sym__end_tag_name,
  [414] = 1,
    ACTIONS(172), 1,
      sym__end_tag_name,
  [418] = 1,
    ACTIONS(174), 1,
      sym__end_tag_name,
  [422] = 1,
    ACTIONS(176), 1,
      anon_sym_GT,
  [426] = 1,
    ACTIONS(100), 1,
      anon_sym_LT_SLASH,
  [430] = 1,
    ACTIONS(178), 1,
      anon_sym_GT,
  [434] = 1,
    ACTIONS(180), 1,
      sym__end_tag_name,
  [438] = 1,
    ACTIONS(182), 1,
      anon_sym_GT,
  [442] = 1,
    ACTIONS(90), 1,
      anon_sym_LT_SLASH,
  [446] = 1,
    ACTIONS(184), 1,
      anon_sym_GT,
  [450] = 1,
    ACTIONS(186), 1,
      sym__end_tag_name,
  [454] = 1,
    ACTIONS(96), 1,
      anon_sym_LT_SLASH,
  [458] = 1,
    ACTIONS(188), 1,
      sym__end_tag_name,
  [462] = 1,
    ACTIONS(108), 1,
      anon_sym_LT_SLASH,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 18,
  [SMALL_STATE(4)] = 36,
  [SMALL_STATE(5)] = 47,
  [SMALL_STATE(6)] = 58,
  [SMALL_STATE(7)] = 69,
  [SMALL_STATE(8)] = 80,
  [SMALL_STATE(9)] = 91,
  [SMALL_STATE(10)] = 104,
  [SMALL_STATE(11)] = 115,
  [SMALL_STATE(12)] = 128,
  [SMALL_STATE(13)] = 139,
  [SMALL_STATE(14)] = 150,
  [SMALL_STATE(15)] = 161,
  [SMALL_STATE(16)] = 167,
  [SMALL_STATE(17)] = 173,
  [SMALL_STATE(18)] = 179,
  [SMALL_STATE(19)] = 185,
  [SMALL_STATE(20)] = 191,
  [SMALL_STATE(21)] = 197,
  [SMALL_STATE(22)] = 203,
  [SMALL_STATE(23)] = 209,
  [SMALL_STATE(24)] = 217,
  [SMALL_STATE(25)] = 223,
  [SMALL_STATE(26)] = 229,
  [SMALL_STATE(27)] = 235,
  [SMALL_STATE(28)] = 241,
  [SMALL_STATE(29)] = 248,
  [SMALL_STATE(30)] = 255,
  [SMALL_STATE(31)] = 260,
  [SMALL_STATE(32)] = 267,
  [SMALL_STATE(33)] = 274,
  [SMALL_STATE(34)] = 281,
  [SMALL_STATE(35)] = 288,
  [SMALL_STATE(36)] = 293,
  [SMALL_STATE(37)] = 300,
  [SMALL_STATE(38)] = 307,
  [SMALL_STATE(39)] = 314,
  [SMALL_STATE(40)] = 321,
  [SMALL_STATE(41)] = 326,
  [SMALL_STATE(42)] = 330,
  [SMALL_STATE(43)] = 334,
  [SMALL_STATE(44)] = 338,
  [SMALL_STATE(45)] = 342,
  [SMALL_STATE(46)] = 346,
  [SMALL_STATE(47)] = 350,
  [SMALL_STATE(48)] = 354,
  [SMALL_STATE(49)] = 358,
  [SMALL_STATE(50)] = 362,
  [SMALL_STATE(51)] = 366,
  [SMALL_STATE(52)] = 370,
  [SMALL_STATE(53)] = 374,
  [SMALL_STATE(54)] = 378,
  [SMALL_STATE(55)] = 382,
  [SMALL_STATE(56)] = 386,
  [SMALL_STATE(57)] = 390,
  [SMALL_STATE(58)] = 394,
  [SMALL_STATE(59)] = 398,
  [SMALL_STATE(60)] = 402,
  [SMALL_STATE(61)] = 406,
  [SMALL_STATE(62)] = 410,
  [SMALL_STATE(63)] = 414,
  [SMALL_STATE(64)] = 418,
  [SMALL_STATE(65)] = 422,
  [SMALL_STATE(66)] = 426,
  [SMALL_STATE(67)] = 430,
  [SMALL_STATE(68)] = 434,
  [SMALL_STATE(69)] = 438,
  [SMALL_STATE(70)] = 442,
  [SMALL_STATE(71)] = 446,
  [SMALL_STATE(72)] = 450,
  [SMALL_STATE(73)] = 454,
  [SMALL_STATE(74)] = 458,
  [SMALL_STATE(75)] = 462,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1, 0, 0),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [18] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_schema_element_repeat1, 2, 0, 0),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_schema_element_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logic_element, 8, 0, 0),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schema_element, 7, 0, 0),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_element, 6, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_element, 6, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_element, 8, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_element, 8, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schema_element, 6, 0, 0),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logic_element, 6, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schema_element, 8, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logic_element, 7, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_element, 7, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_element, 7, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 3, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 2, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [162] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token__schema_start_tag_name = 0,
  ts_external_token__data_start_tag_name = 1,
  ts_external_token__template_start_tag_name = 2,
  ts_external_token__logic_start_tag_name = 3,
  ts_external_token__end_tag_name = 4,
  ts_external_token_raw_text = 5,
  ts_external_token_comment = 6,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__schema_start_tag_name] = sym__schema_start_tag_name,
  [ts_external_token__data_start_tag_name] = sym__data_start_tag_name,
  [ts_external_token__template_start_tag_name] = sym__template_start_tag_name,
  [ts_external_token__logic_start_tag_name] = sym__logic_start_tag_name,
  [ts_external_token__end_tag_name] = sym__end_tag_name,
  [ts_external_token_raw_text] = sym_raw_text,
  [ts_external_token_comment] = sym_comment,
};

static const bool ts_external_scanner_states[6][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__schema_start_tag_name] = true,
    [ts_external_token__data_start_tag_name] = true,
    [ts_external_token__template_start_tag_name] = true,
    [ts_external_token__logic_start_tag_name] = true,
    [ts_external_token__end_tag_name] = true,
    [ts_external_token_raw_text] = true,
    [ts_external_token_comment] = true,
  },
  [2] = {
    [ts_external_token_comment] = true,
  },
  [3] = {
    [ts_external_token__schema_start_tag_name] = true,
    [ts_external_token__data_start_tag_name] = true,
    [ts_external_token__template_start_tag_name] = true,
    [ts_external_token__logic_start_tag_name] = true,
  },
  [4] = {
    [ts_external_token_raw_text] = true,
  },
  [5] = {
    [ts_external_token__end_tag_name] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_rue_external_scanner_create(void);
void tree_sitter_rue_external_scanner_destroy(void *);
bool tree_sitter_rue_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_rue_external_scanner_serialize(void *, char *);
void tree_sitter_rue_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_rue(void) {
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
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_rue_external_scanner_create,
      tree_sitter_rue_external_scanner_destroy,
      tree_sitter_rue_external_scanner_scan,
      tree_sitter_rue_external_scanner_serialize,
      tree_sitter_rue_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif

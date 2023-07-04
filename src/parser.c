#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 8
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 24
#define ALIAS_COUNT 0
#define TOKEN_COUNT 17
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 2
#define PRODUCTION_ID_COUNT 2

enum {
  anon_sym_GET = 1,
  anon_sym_POST = 2,
  anon_sym_PUT = 3,
  anon_sym_DELETE = 4,
  anon_sym_CONNECT = 5,
  anon_sym_OPTIONS = 6,
  anon_sym_TRACE = 7,
  anon_sym_PATCH = 8,
  anon_sym_LINK = 9,
  anon_sym_UNLINK = 10,
  anon_sym_PURGE = 11,
  anon_sym_LOCK = 12,
  anon_sym_UNLOCK = 13,
  anon_sym_PROPFIND = 14,
  anon_sym_VIEW = 15,
  sym__url = 16,
  sym_source_file = 17,
  sym__statement = 18,
  sym__declaration_statement = 19,
  sym_request_declaration = 20,
  sym__literal = 21,
  sym_request_literal = 22,
  aux_sym_source_file_repeat1 = 23,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_GET] = "GET",
  [anon_sym_POST] = "POST",
  [anon_sym_PUT] = "PUT",
  [anon_sym_DELETE] = "DELETE",
  [anon_sym_CONNECT] = "CONNECT",
  [anon_sym_OPTIONS] = "OPTIONS",
  [anon_sym_TRACE] = "TRACE",
  [anon_sym_PATCH] = "PATCH",
  [anon_sym_LINK] = "LINK",
  [anon_sym_UNLINK] = "UNLINK",
  [anon_sym_PURGE] = "PURGE",
  [anon_sym_LOCK] = "LOCK",
  [anon_sym_UNLOCK] = "UNLOCK",
  [anon_sym_PROPFIND] = "PROPFIND",
  [anon_sym_VIEW] = "VIEW",
  [sym__url] = "_url",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym__declaration_statement] = "_declaration_statement",
  [sym_request_declaration] = "request_declaration",
  [sym__literal] = "_literal",
  [sym_request_literal] = "request_literal",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_GET] = anon_sym_GET,
  [anon_sym_POST] = anon_sym_POST,
  [anon_sym_PUT] = anon_sym_PUT,
  [anon_sym_DELETE] = anon_sym_DELETE,
  [anon_sym_CONNECT] = anon_sym_CONNECT,
  [anon_sym_OPTIONS] = anon_sym_OPTIONS,
  [anon_sym_TRACE] = anon_sym_TRACE,
  [anon_sym_PATCH] = anon_sym_PATCH,
  [anon_sym_LINK] = anon_sym_LINK,
  [anon_sym_UNLINK] = anon_sym_UNLINK,
  [anon_sym_PURGE] = anon_sym_PURGE,
  [anon_sym_LOCK] = anon_sym_LOCK,
  [anon_sym_UNLOCK] = anon_sym_UNLOCK,
  [anon_sym_PROPFIND] = anon_sym_PROPFIND,
  [anon_sym_VIEW] = anon_sym_VIEW,
  [sym__url] = sym__url,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym__declaration_statement] = sym__declaration_statement,
  [sym_request_declaration] = sym_request_declaration,
  [sym__literal] = sym__literal,
  [sym_request_literal] = sym_request_literal,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_GET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POST] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PUT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DELETE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CONNECT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OPTIONS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PATCH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LINK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_UNLINK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PURGE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LOCK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_UNLOCK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PROPFIND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_VIEW] = {
    .visible = true,
    .named = false,
  },
  [sym__url] = {
    .visible = false,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym__declaration_statement] = {
    .visible = false,
    .named = true,
  },
  [sym_request_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym__literal] = {
    .visible = false,
    .named = true,
  },
  [sym_request_literal] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_url = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_url] = "url",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_url, 1},
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(55);
      if (lookahead == 'C') ADVANCE(39);
      if (lookahead == 'D') ADVANCE(9);
      if (lookahead == 'G') ADVANCE(10);
      if (lookahead == 'L') ADVANCE(21);
      if (lookahead == 'O') ADVANCE(42);
      if (lookahead == 'P') ADVANCE(1);
      if (lookahead == 'T') ADVANCE(43);
      if (lookahead == 'U') ADVANCE(33);
      if (lookahead == 'V') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'A') ADVANCE(51);
      if (lookahead == 'O') ADVANCE(46);
      if (lookahead == 'R') ADVANCE(38);
      if (lookahead == 'U') ADVANCE(44);
      END_STATE();
    case 2:
      if (lookahead == 'A') ADVANCE(7);
      END_STATE();
    case 3:
      if (lookahead == 'C') ADVANCE(19);
      END_STATE();
    case 4:
      if (lookahead == 'C') ADVANCE(26);
      END_STATE();
    case 5:
      if (lookahead == 'C') ADVANCE(28);
      END_STATE();
    case 6:
      if (lookahead == 'C') ADVANCE(49);
      END_STATE();
    case 7:
      if (lookahead == 'C') ADVANCE(13);
      END_STATE();
    case 8:
      if (lookahead == 'D') ADVANCE(69);
      END_STATE();
    case 9:
      if (lookahead == 'E') ADVANCE(29);
      END_STATE();
    case 10:
      if (lookahead == 'E') ADVANCE(47);
      END_STATE();
    case 11:
      if (lookahead == 'E') ADVANCE(53);
      END_STATE();
    case 12:
      if (lookahead == 'E') ADVANCE(66);
      END_STATE();
    case 13:
      if (lookahead == 'E') ADVANCE(62);
      END_STATE();
    case 14:
      if (lookahead == 'E') ADVANCE(59);
      END_STATE();
    case 15:
      if (lookahead == 'E') ADVANCE(6);
      END_STATE();
    case 16:
      if (lookahead == 'E') ADVANCE(52);
      END_STATE();
    case 17:
      if (lookahead == 'F') ADVANCE(23);
      END_STATE();
    case 18:
      if (lookahead == 'G') ADVANCE(12);
      END_STATE();
    case 19:
      if (lookahead == 'H') ADVANCE(63);
      END_STATE();
    case 20:
      if (lookahead == 'I') ADVANCE(11);
      END_STATE();
    case 21:
      if (lookahead == 'I') ADVANCE(31);
      if (lookahead == 'O') ADVANCE(4);
      END_STATE();
    case 22:
      if (lookahead == 'I') ADVANCE(35);
      if (lookahead == 'O') ADVANCE(5);
      END_STATE();
    case 23:
      if (lookahead == 'I') ADVANCE(32);
      END_STATE();
    case 24:
      if (lookahead == 'I') ADVANCE(40);
      END_STATE();
    case 25:
      if (lookahead == 'K') ADVANCE(64);
      END_STATE();
    case 26:
      if (lookahead == 'K') ADVANCE(67);
      END_STATE();
    case 27:
      if (lookahead == 'K') ADVANCE(65);
      END_STATE();
    case 28:
      if (lookahead == 'K') ADVANCE(68);
      END_STATE();
    case 29:
      if (lookahead == 'L') ADVANCE(16);
      END_STATE();
    case 30:
      if (lookahead == 'L') ADVANCE(22);
      END_STATE();
    case 31:
      if (lookahead == 'N') ADVANCE(25);
      END_STATE();
    case 32:
      if (lookahead == 'N') ADVANCE(8);
      END_STATE();
    case 33:
      if (lookahead == 'N') ADVANCE(30);
      END_STATE();
    case 34:
      if (lookahead == 'N') ADVANCE(45);
      END_STATE();
    case 35:
      if (lookahead == 'N') ADVANCE(27);
      END_STATE();
    case 36:
      if (lookahead == 'N') ADVANCE(37);
      END_STATE();
    case 37:
      if (lookahead == 'N') ADVANCE(15);
      END_STATE();
    case 38:
      if (lookahead == 'O') ADVANCE(41);
      END_STATE();
    case 39:
      if (lookahead == 'O') ADVANCE(36);
      END_STATE();
    case 40:
      if (lookahead == 'O') ADVANCE(34);
      END_STATE();
    case 41:
      if (lookahead == 'P') ADVANCE(17);
      END_STATE();
    case 42:
      if (lookahead == 'P') ADVANCE(50);
      END_STATE();
    case 43:
      if (lookahead == 'R') ADVANCE(2);
      END_STATE();
    case 44:
      if (lookahead == 'R') ADVANCE(18);
      if (lookahead == 'T') ADVANCE(58);
      END_STATE();
    case 45:
      if (lookahead == 'S') ADVANCE(61);
      END_STATE();
    case 46:
      if (lookahead == 'S') ADVANCE(48);
      END_STATE();
    case 47:
      if (lookahead == 'T') ADVANCE(56);
      END_STATE();
    case 48:
      if (lookahead == 'T') ADVANCE(57);
      END_STATE();
    case 49:
      if (lookahead == 'T') ADVANCE(60);
      END_STATE();
    case 50:
      if (lookahead == 'T') ADVANCE(24);
      END_STATE();
    case 51:
      if (lookahead == 'T') ADVANCE(3);
      END_STATE();
    case 52:
      if (lookahead == 'T') ADVANCE(14);
      END_STATE();
    case 53:
      if (lookahead == 'W') ADVANCE(70);
      END_STATE();
    case 54:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(54)
      if (lookahead != 0) ADVANCE(71);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_GET);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_POST);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_PUT);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_DELETE);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_CONNECT);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_OPTIONS);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_TRACE);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_PATCH);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_LINK);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_UNLINK);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_PURGE);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_LOCK);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_UNLOCK);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_PROPFIND);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_VIEW);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym__url);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(71);
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
  [5] = {.lex_state = 54},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 54},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_GET] = ACTIONS(1),
    [anon_sym_POST] = ACTIONS(1),
    [anon_sym_PUT] = ACTIONS(1),
    [anon_sym_DELETE] = ACTIONS(1),
    [anon_sym_CONNECT] = ACTIONS(1),
    [anon_sym_OPTIONS] = ACTIONS(1),
    [anon_sym_TRACE] = ACTIONS(1),
    [anon_sym_PATCH] = ACTIONS(1),
    [anon_sym_LINK] = ACTIONS(1),
    [anon_sym_UNLINK] = ACTIONS(1),
    [anon_sym_PURGE] = ACTIONS(1),
    [anon_sym_LOCK] = ACTIONS(1),
    [anon_sym_UNLOCK] = ACTIONS(1),
    [anon_sym_PROPFIND] = ACTIONS(1),
    [anon_sym_VIEW] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(6),
    [sym__statement] = STATE(2),
    [sym__declaration_statement] = STATE(2),
    [sym_request_declaration] = STATE(2),
    [sym__literal] = STATE(7),
    [sym_request_literal] = STATE(7),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_GET] = ACTIONS(5),
    [anon_sym_POST] = ACTIONS(5),
    [anon_sym_PUT] = ACTIONS(5),
    [anon_sym_DELETE] = ACTIONS(5),
    [anon_sym_CONNECT] = ACTIONS(5),
    [anon_sym_OPTIONS] = ACTIONS(5),
    [anon_sym_TRACE] = ACTIONS(5),
    [anon_sym_PATCH] = ACTIONS(5),
    [anon_sym_LINK] = ACTIONS(5),
    [anon_sym_UNLINK] = ACTIONS(5),
    [anon_sym_PURGE] = ACTIONS(5),
    [anon_sym_LOCK] = ACTIONS(5),
    [anon_sym_UNLOCK] = ACTIONS(5),
    [anon_sym_PROPFIND] = ACTIONS(5),
    [anon_sym_VIEW] = ACTIONS(5),
  },
  [2] = {
    [sym__statement] = STATE(3),
    [sym__declaration_statement] = STATE(3),
    [sym_request_declaration] = STATE(3),
    [sym__literal] = STATE(7),
    [sym_request_literal] = STATE(7),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(7),
    [anon_sym_GET] = ACTIONS(5),
    [anon_sym_POST] = ACTIONS(5),
    [anon_sym_PUT] = ACTIONS(5),
    [anon_sym_DELETE] = ACTIONS(5),
    [anon_sym_CONNECT] = ACTIONS(5),
    [anon_sym_OPTIONS] = ACTIONS(5),
    [anon_sym_TRACE] = ACTIONS(5),
    [anon_sym_PATCH] = ACTIONS(5),
    [anon_sym_LINK] = ACTIONS(5),
    [anon_sym_UNLINK] = ACTIONS(5),
    [anon_sym_PURGE] = ACTIONS(5),
    [anon_sym_LOCK] = ACTIONS(5),
    [anon_sym_UNLOCK] = ACTIONS(5),
    [anon_sym_PROPFIND] = ACTIONS(5),
    [anon_sym_VIEW] = ACTIONS(5),
  },
  [3] = {
    [sym__statement] = STATE(3),
    [sym__declaration_statement] = STATE(3),
    [sym_request_declaration] = STATE(3),
    [sym__literal] = STATE(7),
    [sym_request_literal] = STATE(7),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(9),
    [anon_sym_GET] = ACTIONS(11),
    [anon_sym_POST] = ACTIONS(11),
    [anon_sym_PUT] = ACTIONS(11),
    [anon_sym_DELETE] = ACTIONS(11),
    [anon_sym_CONNECT] = ACTIONS(11),
    [anon_sym_OPTIONS] = ACTIONS(11),
    [anon_sym_TRACE] = ACTIONS(11),
    [anon_sym_PATCH] = ACTIONS(11),
    [anon_sym_LINK] = ACTIONS(11),
    [anon_sym_UNLINK] = ACTIONS(11),
    [anon_sym_PURGE] = ACTIONS(11),
    [anon_sym_LOCK] = ACTIONS(11),
    [anon_sym_UNLOCK] = ACTIONS(11),
    [anon_sym_PROPFIND] = ACTIONS(11),
    [anon_sym_VIEW] = ACTIONS(11),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(14),
    [anon_sym_GET] = ACTIONS(14),
    [anon_sym_POST] = ACTIONS(14),
    [anon_sym_PUT] = ACTIONS(14),
    [anon_sym_DELETE] = ACTIONS(14),
    [anon_sym_CONNECT] = ACTIONS(14),
    [anon_sym_OPTIONS] = ACTIONS(14),
    [anon_sym_TRACE] = ACTIONS(14),
    [anon_sym_PATCH] = ACTIONS(14),
    [anon_sym_LINK] = ACTIONS(14),
    [anon_sym_UNLINK] = ACTIONS(14),
    [anon_sym_PURGE] = ACTIONS(14),
    [anon_sym_LOCK] = ACTIONS(14),
    [anon_sym_UNLOCK] = ACTIONS(14),
    [anon_sym_PROPFIND] = ACTIONS(14),
    [anon_sym_VIEW] = ACTIONS(14),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(16), 1,
      sym__url,
  [4] = 1,
    ACTIONS(18), 1,
      ts_builtin_sym_end,
  [8] = 1,
    ACTIONS(20), 1,
      sym__url,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 4,
  [SMALL_STATE(7)] = 8,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [11] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [14] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request_declaration, 2, .production_id = 1),
  [16] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request_literal, 1),
  [18] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [20] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_hurl(void) {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif

#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 14
#define LARGE_STATE_COUNT 7
#define SYMBOL_COUNT 32
#define ALIAS_COUNT 0
#define TOKEN_COUNT 23
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 3

enum {
  anon_sym_COLON = 1,
  anon_sym_GET = 2,
  anon_sym_POST = 3,
  anon_sym_PUT = 4,
  anon_sym_DELETE = 5,
  anon_sym_CONNECT = 6,
  anon_sym_OPTIONS = 7,
  anon_sym_TRACE = 8,
  anon_sym_PATCH = 9,
  anon_sym_LINK = 10,
  anon_sym_UNLINK = 11,
  anon_sym_PURGE = 12,
  anon_sym_LOCK = 13,
  anon_sym_UNLOCK = 14,
  anon_sym_PROPFIND = 15,
  anon_sym_VIEW = 16,
  sym_scheme_literal = 17,
  sym__space_literal = 18,
  sym_status_code_pattern = 19,
  sym_header_name = 20,
  sym_header_value = 21,
  sym_url = 22,
  sym_source_file = 23,
  sym__statement = 24,
  sym__declaration_statement = 25,
  sym_request_declaration = 26,
  sym_header_declaration = 27,
  sym_http_response_declaration = 28,
  sym__literal = 29,
  sym_request_literal = 30,
  aux_sym_source_file_repeat1 = 31,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_COLON] = ":",
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
  [sym_scheme_literal] = "scheme_literal",
  [sym__space_literal] = "_space_literal",
  [sym_status_code_pattern] = "status_code_pattern",
  [sym_header_name] = "header_name",
  [sym_header_value] = "header_value",
  [sym_url] = "url",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym__declaration_statement] = "_declaration_statement",
  [sym_request_declaration] = "request_declaration",
  [sym_header_declaration] = "header_declaration",
  [sym_http_response_declaration] = "response",
  [sym__literal] = "_literal",
  [sym_request_literal] = "request_literal",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_COLON] = anon_sym_COLON,
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
  [sym_scheme_literal] = sym_scheme_literal,
  [sym__space_literal] = sym__space_literal,
  [sym_status_code_pattern] = sym_status_code_pattern,
  [sym_header_name] = sym_header_name,
  [sym_header_value] = sym_header_value,
  [sym_url] = sym_url,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym__declaration_statement] = sym__declaration_statement,
  [sym_request_declaration] = sym_request_declaration,
  [sym_header_declaration] = sym_header_declaration,
  [sym_http_response_declaration] = sym_http_response_declaration,
  [sym__literal] = sym__literal,
  [sym_request_literal] = sym_request_literal,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
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
  [sym_scheme_literal] = {
    .visible = true,
    .named = true,
  },
  [sym__space_literal] = {
    .visible = false,
    .named = true,
  },
  [sym_status_code_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_header_name] = {
    .visible = true,
    .named = true,
  },
  [sym_header_value] = {
    .visible = true,
    .named = true,
  },
  [sym_url] = {
    .visible = true,
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
  [sym_header_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_http_response_declaration] = {
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
  field_header_name = 1,
  field_header_value = 2,
  field_url = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_header_name] = "header_name",
  [field_header_value] = "header_value",
  [field_url] = "url",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_url, 1},
  [1] =
    {field_header_name, 0},
    {field_header_value, 2},
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(63);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == 'C') ADVANCE(39);
      if (lookahead == 'D') ADVANCE(10);
      if (lookahead == 'G') ADVANCE(15);
      if (lookahead == 'H') ADVANCE(55);
      if (lookahead == 'L') ADVANCE(22);
      if (lookahead == 'O') ADVANCE(44);
      if (lookahead == 'P') ADVANCE(3);
      if (lookahead == 'T') ADVANCE(45);
      if (lookahead == 'U') ADVANCE(34);
      if (lookahead == 'V') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(97);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == 'A') ADVANCE(7);
      END_STATE();
    case 3:
      if (lookahead == 'A') ADVANCE(54);
      if (lookahead == 'O') ADVANCE(48);
      if (lookahead == 'R') ADVANCE(40);
      if (lookahead == 'U') ADVANCE(46);
      END_STATE();
    case 4:
      if (lookahead == 'C') ADVANCE(20);
      END_STATE();
    case 5:
      if (lookahead == 'C') ADVANCE(27);
      END_STATE();
    case 6:
      if (lookahead == 'C') ADVANCE(29);
      END_STATE();
    case 7:
      if (lookahead == 'C') ADVANCE(13);
      END_STATE();
    case 8:
      if (lookahead == 'C') ADVANCE(51);
      END_STATE();
    case 9:
      if (lookahead == 'D') ADVANCE(91);
      END_STATE();
    case 10:
      if (lookahead == 'E') ADVANCE(31);
      END_STATE();
    case 11:
      if (lookahead == 'E') ADVANCE(57);
      END_STATE();
    case 12:
      if (lookahead == 'E') ADVANCE(85);
      END_STATE();
    case 13:
      if (lookahead == 'E') ADVANCE(77);
      END_STATE();
    case 14:
      if (lookahead == 'E') ADVANCE(71);
      END_STATE();
    case 15:
      if (lookahead == 'E') ADVANCE(49);
      END_STATE();
    case 16:
      if (lookahead == 'E') ADVANCE(8);
      END_STATE();
    case 17:
      if (lookahead == 'E') ADVANCE(56);
      END_STATE();
    case 18:
      if (lookahead == 'F') ADVANCE(24);
      END_STATE();
    case 19:
      if (lookahead == 'G') ADVANCE(12);
      END_STATE();
    case 20:
      if (lookahead == 'H') ADVANCE(79);
      END_STATE();
    case 21:
      if (lookahead == 'I') ADVANCE(11);
      END_STATE();
    case 22:
      if (lookahead == 'I') ADVANCE(32);
      if (lookahead == 'O') ADVANCE(5);
      END_STATE();
    case 23:
      if (lookahead == 'I') ADVANCE(36);
      if (lookahead == 'O') ADVANCE(6);
      END_STATE();
    case 24:
      if (lookahead == 'I') ADVANCE(33);
      END_STATE();
    case 25:
      if (lookahead == 'I') ADVANCE(41);
      END_STATE();
    case 26:
      if (lookahead == 'K') ADVANCE(81);
      END_STATE();
    case 27:
      if (lookahead == 'K') ADVANCE(87);
      END_STATE();
    case 28:
      if (lookahead == 'K') ADVANCE(83);
      END_STATE();
    case 29:
      if (lookahead == 'K') ADVANCE(89);
      END_STATE();
    case 30:
      if (lookahead == 'L') ADVANCE(23);
      END_STATE();
    case 31:
      if (lookahead == 'L') ADVANCE(17);
      END_STATE();
    case 32:
      if (lookahead == 'N') ADVANCE(26);
      END_STATE();
    case 33:
      if (lookahead == 'N') ADVANCE(9);
      END_STATE();
    case 34:
      if (lookahead == 'N') ADVANCE(30);
      END_STATE();
    case 35:
      if (lookahead == 'N') ADVANCE(47);
      END_STATE();
    case 36:
      if (lookahead == 'N') ADVANCE(28);
      END_STATE();
    case 37:
      if (lookahead == 'N') ADVANCE(16);
      END_STATE();
    case 38:
      if (lookahead == 'N') ADVANCE(37);
      END_STATE();
    case 39:
      if (lookahead == 'O') ADVANCE(38);
      END_STATE();
    case 40:
      if (lookahead == 'O') ADVANCE(43);
      END_STATE();
    case 41:
      if (lookahead == 'O') ADVANCE(35);
      END_STATE();
    case 42:
      if (lookahead == 'P') ADVANCE(95);
      END_STATE();
    case 43:
      if (lookahead == 'P') ADVANCE(18);
      END_STATE();
    case 44:
      if (lookahead == 'P') ADVANCE(53);
      END_STATE();
    case 45:
      if (lookahead == 'R') ADVANCE(2);
      END_STATE();
    case 46:
      if (lookahead == 'R') ADVANCE(19);
      if (lookahead == 'T') ADVANCE(69);
      END_STATE();
    case 47:
      if (lookahead == 'S') ADVANCE(75);
      END_STATE();
    case 48:
      if (lookahead == 'S') ADVANCE(50);
      END_STATE();
    case 49:
      if (lookahead == 'T') ADVANCE(65);
      END_STATE();
    case 50:
      if (lookahead == 'T') ADVANCE(67);
      END_STATE();
    case 51:
      if (lookahead == 'T') ADVANCE(73);
      END_STATE();
    case 52:
      if (lookahead == 'T') ADVANCE(42);
      END_STATE();
    case 53:
      if (lookahead == 'T') ADVANCE(25);
      END_STATE();
    case 54:
      if (lookahead == 'T') ADVANCE(4);
      END_STATE();
    case 55:
      if (lookahead == 'T') ADVANCE(52);
      END_STATE();
    case 56:
      if (lookahead == 'T') ADVANCE(14);
      END_STATE();
    case 57:
      if (lookahead == 'W') ADVANCE(93);
      END_STATE();
    case 58:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(58)
      if (lookahead != 0) ADVANCE(158);
      END_STATE();
    case 59:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(156);
      if (('!' <= lookahead && lookahead <= '~')) ADVANCE(157);
      END_STATE();
    case 60:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      END_STATE();
    case 61:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      END_STATE();
    case 62:
      if (eof) ADVANCE(63);
      if (lookahead == 'C') ADVANCE(136);
      if (lookahead == 'D') ADVANCE(107);
      if (lookahead == 'G') ADVANCE(112);
      if (lookahead == 'H') ADVANCE(152);
      if (lookahead == 'L') ADVANCE(119);
      if (lookahead == 'O') ADVANCE(141);
      if (lookahead == 'P') ADVANCE(100);
      if (lookahead == 'T') ADVANCE(142);
      if (lookahead == 'U') ADVANCE(131);
      if (lookahead == 'V') ADVANCE(118);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(62)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_GET);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_GET);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_POST);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_POST);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_PUT);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_PUT);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_DELETE);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_DELETE);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_CONNECT);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_CONNECT);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_OPTIONS);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_OPTIONS);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_TRACE);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_TRACE);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_PATCH);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_PATCH);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_LINK);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_LINK);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_UNLINK);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_UNLINK);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_PURGE);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_PURGE);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_LOCK);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_LOCK);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_UNLOCK);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_UNLOCK);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_PROPFIND);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_PROPFIND);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_VIEW);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_VIEW);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_scheme_literal);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_scheme_literal);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym__space_literal);
      if (lookahead == ' ') ADVANCE(97);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_status_code_pattern);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'A') ADVANCE(104);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'A') ADVANCE(151);
      if (lookahead == 'O') ADVANCE(145);
      if (lookahead == 'R') ADVANCE(137);
      if (lookahead == 'U') ADVANCE(143);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'C') ADVANCE(117);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'C') ADVANCE(124);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'C') ADVANCE(126);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'C') ADVANCE(110);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'C') ADVANCE(148);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'D') ADVANCE(92);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'E') ADVANCE(128);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'E') ADVANCE(154);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'E') ADVANCE(86);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'E') ADVANCE(78);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'E') ADVANCE(72);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'E') ADVANCE(146);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'E') ADVANCE(105);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'E') ADVANCE(153);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'F') ADVANCE(121);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'G') ADVANCE(109);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'H') ADVANCE(80);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'I') ADVANCE(108);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'I') ADVANCE(129);
      if (lookahead == 'O') ADVANCE(102);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'I') ADVANCE(133);
      if (lookahead == 'O') ADVANCE(103);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'I') ADVANCE(130);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'I') ADVANCE(138);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'K') ADVANCE(82);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'K') ADVANCE(88);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'K') ADVANCE(84);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'K') ADVANCE(90);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'L') ADVANCE(120);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'L') ADVANCE(114);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'N') ADVANCE(123);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'N') ADVANCE(106);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'N') ADVANCE(127);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'N') ADVANCE(144);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'N') ADVANCE(125);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'N') ADVANCE(113);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'N') ADVANCE(134);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'O') ADVANCE(135);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'O') ADVANCE(140);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'O') ADVANCE(132);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'P') ADVANCE(96);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'P') ADVANCE(115);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'P') ADVANCE(150);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'R') ADVANCE(99);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'R') ADVANCE(116);
      if (lookahead == 'T') ADVANCE(70);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'S') ADVANCE(76);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'S') ADVANCE(147);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'T') ADVANCE(66);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'T') ADVANCE(68);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'T') ADVANCE(74);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'T') ADVANCE(139);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'T') ADVANCE(122);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'T') ADVANCE(101);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'T') ADVANCE(149);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'T') ADVANCE(111);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'W') ADVANCE(94);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(156);
      if (('!' <= lookahead && lookahead <= '~')) ADVANCE(157);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          (' ' <= lookahead && lookahead <= '~')) ADVANCE(157);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_url);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(158);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 62},
  [2] = {.lex_state = 62},
  [3] = {.lex_state = 62},
  [4] = {.lex_state = 62},
  [5] = {.lex_state = 62},
  [6] = {.lex_state = 62},
  [7] = {.lex_state = 58},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 58},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 59},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
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
    [sym_scheme_literal] = ACTIONS(1),
    [sym_status_code_pattern] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(10),
    [sym__statement] = STATE(2),
    [sym__declaration_statement] = STATE(2),
    [sym_request_declaration] = STATE(2),
    [sym_header_declaration] = STATE(2),
    [sym_http_response_declaration] = STATE(2),
    [sym__literal] = STATE(11),
    [sym_request_literal] = STATE(11),
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
    [sym_scheme_literal] = ACTIONS(7),
    [sym_header_name] = ACTIONS(9),
  },
  [2] = {
    [sym__statement] = STATE(3),
    [sym__declaration_statement] = STATE(3),
    [sym_request_declaration] = STATE(3),
    [sym_header_declaration] = STATE(3),
    [sym_http_response_declaration] = STATE(3),
    [sym__literal] = STATE(11),
    [sym_request_literal] = STATE(11),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(11),
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
    [sym_scheme_literal] = ACTIONS(7),
    [sym_header_name] = ACTIONS(9),
  },
  [3] = {
    [sym__statement] = STATE(3),
    [sym__declaration_statement] = STATE(3),
    [sym_request_declaration] = STATE(3),
    [sym_header_declaration] = STATE(3),
    [sym_http_response_declaration] = STATE(3),
    [sym__literal] = STATE(11),
    [sym_request_literal] = STATE(11),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(13),
    [anon_sym_GET] = ACTIONS(15),
    [anon_sym_POST] = ACTIONS(15),
    [anon_sym_PUT] = ACTIONS(15),
    [anon_sym_DELETE] = ACTIONS(15),
    [anon_sym_CONNECT] = ACTIONS(15),
    [anon_sym_OPTIONS] = ACTIONS(15),
    [anon_sym_TRACE] = ACTIONS(15),
    [anon_sym_PATCH] = ACTIONS(15),
    [anon_sym_LINK] = ACTIONS(15),
    [anon_sym_UNLINK] = ACTIONS(15),
    [anon_sym_PURGE] = ACTIONS(15),
    [anon_sym_LOCK] = ACTIONS(15),
    [anon_sym_UNLOCK] = ACTIONS(15),
    [anon_sym_PROPFIND] = ACTIONS(15),
    [anon_sym_VIEW] = ACTIONS(15),
    [sym_scheme_literal] = ACTIONS(18),
    [sym_header_name] = ACTIONS(21),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(24),
    [anon_sym_GET] = ACTIONS(26),
    [anon_sym_POST] = ACTIONS(26),
    [anon_sym_PUT] = ACTIONS(26),
    [anon_sym_DELETE] = ACTIONS(26),
    [anon_sym_CONNECT] = ACTIONS(26),
    [anon_sym_OPTIONS] = ACTIONS(26),
    [anon_sym_TRACE] = ACTIONS(26),
    [anon_sym_PATCH] = ACTIONS(26),
    [anon_sym_LINK] = ACTIONS(26),
    [anon_sym_UNLINK] = ACTIONS(26),
    [anon_sym_PURGE] = ACTIONS(26),
    [anon_sym_LOCK] = ACTIONS(26),
    [anon_sym_UNLOCK] = ACTIONS(26),
    [anon_sym_PROPFIND] = ACTIONS(26),
    [anon_sym_VIEW] = ACTIONS(26),
    [sym_scheme_literal] = ACTIONS(26),
    [sym_header_name] = ACTIONS(26),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(28),
    [anon_sym_GET] = ACTIONS(30),
    [anon_sym_POST] = ACTIONS(30),
    [anon_sym_PUT] = ACTIONS(30),
    [anon_sym_DELETE] = ACTIONS(30),
    [anon_sym_CONNECT] = ACTIONS(30),
    [anon_sym_OPTIONS] = ACTIONS(30),
    [anon_sym_TRACE] = ACTIONS(30),
    [anon_sym_PATCH] = ACTIONS(30),
    [anon_sym_LINK] = ACTIONS(30),
    [anon_sym_UNLINK] = ACTIONS(30),
    [anon_sym_PURGE] = ACTIONS(30),
    [anon_sym_LOCK] = ACTIONS(30),
    [anon_sym_UNLOCK] = ACTIONS(30),
    [anon_sym_PROPFIND] = ACTIONS(30),
    [anon_sym_VIEW] = ACTIONS(30),
    [sym_scheme_literal] = ACTIONS(30),
    [sym_header_name] = ACTIONS(30),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(32),
    [anon_sym_GET] = ACTIONS(34),
    [anon_sym_POST] = ACTIONS(34),
    [anon_sym_PUT] = ACTIONS(34),
    [anon_sym_DELETE] = ACTIONS(34),
    [anon_sym_CONNECT] = ACTIONS(34),
    [anon_sym_OPTIONS] = ACTIONS(34),
    [anon_sym_TRACE] = ACTIONS(34),
    [anon_sym_PATCH] = ACTIONS(34),
    [anon_sym_LINK] = ACTIONS(34),
    [anon_sym_UNLINK] = ACTIONS(34),
    [anon_sym_PURGE] = ACTIONS(34),
    [anon_sym_LOCK] = ACTIONS(34),
    [anon_sym_UNLOCK] = ACTIONS(34),
    [anon_sym_PROPFIND] = ACTIONS(34),
    [anon_sym_VIEW] = ACTIONS(34),
    [sym_scheme_literal] = ACTIONS(34),
    [sym_header_name] = ACTIONS(34),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(36), 1,
      sym_url,
  [4] = 1,
    ACTIONS(38), 1,
      sym__space_literal,
  [8] = 1,
    ACTIONS(40), 1,
      anon_sym_COLON,
  [12] = 1,
    ACTIONS(42), 1,
      ts_builtin_sym_end,
  [16] = 1,
    ACTIONS(44), 1,
      sym_url,
  [20] = 1,
    ACTIONS(46), 1,
      sym_status_code_pattern,
  [24] = 1,
    ACTIONS(48), 1,
      sym_header_value,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(7)] = 0,
  [SMALL_STATE(8)] = 4,
  [SMALL_STATE(9)] = 8,
  [SMALL_STATE(10)] = 12,
  [SMALL_STATE(11)] = 16,
  [SMALL_STATE(12)] = 20,
  [SMALL_STATE(13)] = 24,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [15] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [18] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request_declaration, 2, .production_id = 1),
  [26] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request_declaration, 2, .production_id = 1),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_http_response_declaration, 3),
  [30] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_http_response_declaration, 3),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_declaration, 3, .production_id = 2),
  [34] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header_declaration, 3, .production_id = 2),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request_literal, 1),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [42] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
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

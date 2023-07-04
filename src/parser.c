#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 13
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
  sym_comment = 18,
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
  [sym_comment] = "comment",
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
  [sym_comment] = sym_comment,
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
  [sym_comment] = {
    .visible = true,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(62);
      if (lookahead == '#') ADVANCE(96);
      if (lookahead == ':') ADVANCE(63);
      if (lookahead == 'C') ADVANCE(40);
      if (lookahead == 'D') ADVANCE(11);
      if (lookahead == 'G') ADVANCE(16);
      if (lookahead == 'H') ADVANCE(56);
      if (lookahead == 'L') ADVANCE(23);
      if (lookahead == 'O') ADVANCE(45);
      if (lookahead == 'P') ADVANCE(4);
      if (lookahead == 'T') ADVANCE(46);
      if (lookahead == 'U') ADVANCE(35);
      if (lookahead == 'V') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      END_STATE();
    case 1:
      if (lookahead == '#') ADVANCE(96);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (lookahead != 0) ADVANCE(156);
      END_STATE();
    case 3:
      if (lookahead == 'A') ADVANCE(8);
      END_STATE();
    case 4:
      if (lookahead == 'A') ADVANCE(55);
      if (lookahead == 'O') ADVANCE(49);
      if (lookahead == 'R') ADVANCE(41);
      if (lookahead == 'U') ADVANCE(47);
      END_STATE();
    case 5:
      if (lookahead == 'C') ADVANCE(21);
      END_STATE();
    case 6:
      if (lookahead == 'C') ADVANCE(28);
      END_STATE();
    case 7:
      if (lookahead == 'C') ADVANCE(30);
      END_STATE();
    case 8:
      if (lookahead == 'C') ADVANCE(14);
      END_STATE();
    case 9:
      if (lookahead == 'C') ADVANCE(52);
      END_STATE();
    case 10:
      if (lookahead == 'D') ADVANCE(90);
      END_STATE();
    case 11:
      if (lookahead == 'E') ADVANCE(32);
      END_STATE();
    case 12:
      if (lookahead == 'E') ADVANCE(58);
      END_STATE();
    case 13:
      if (lookahead == 'E') ADVANCE(84);
      END_STATE();
    case 14:
      if (lookahead == 'E') ADVANCE(76);
      END_STATE();
    case 15:
      if (lookahead == 'E') ADVANCE(70);
      END_STATE();
    case 16:
      if (lookahead == 'E') ADVANCE(50);
      END_STATE();
    case 17:
      if (lookahead == 'E') ADVANCE(9);
      END_STATE();
    case 18:
      if (lookahead == 'E') ADVANCE(57);
      END_STATE();
    case 19:
      if (lookahead == 'F') ADVANCE(25);
      END_STATE();
    case 20:
      if (lookahead == 'G') ADVANCE(13);
      END_STATE();
    case 21:
      if (lookahead == 'H') ADVANCE(78);
      END_STATE();
    case 22:
      if (lookahead == 'I') ADVANCE(12);
      END_STATE();
    case 23:
      if (lookahead == 'I') ADVANCE(33);
      if (lookahead == 'O') ADVANCE(6);
      END_STATE();
    case 24:
      if (lookahead == 'I') ADVANCE(37);
      if (lookahead == 'O') ADVANCE(7);
      END_STATE();
    case 25:
      if (lookahead == 'I') ADVANCE(34);
      END_STATE();
    case 26:
      if (lookahead == 'I') ADVANCE(42);
      END_STATE();
    case 27:
      if (lookahead == 'K') ADVANCE(80);
      END_STATE();
    case 28:
      if (lookahead == 'K') ADVANCE(86);
      END_STATE();
    case 29:
      if (lookahead == 'K') ADVANCE(82);
      END_STATE();
    case 30:
      if (lookahead == 'K') ADVANCE(88);
      END_STATE();
    case 31:
      if (lookahead == 'L') ADVANCE(24);
      END_STATE();
    case 32:
      if (lookahead == 'L') ADVANCE(18);
      END_STATE();
    case 33:
      if (lookahead == 'N') ADVANCE(27);
      END_STATE();
    case 34:
      if (lookahead == 'N') ADVANCE(10);
      END_STATE();
    case 35:
      if (lookahead == 'N') ADVANCE(31);
      END_STATE();
    case 36:
      if (lookahead == 'N') ADVANCE(48);
      END_STATE();
    case 37:
      if (lookahead == 'N') ADVANCE(29);
      END_STATE();
    case 38:
      if (lookahead == 'N') ADVANCE(17);
      END_STATE();
    case 39:
      if (lookahead == 'N') ADVANCE(38);
      END_STATE();
    case 40:
      if (lookahead == 'O') ADVANCE(39);
      END_STATE();
    case 41:
      if (lookahead == 'O') ADVANCE(44);
      END_STATE();
    case 42:
      if (lookahead == 'O') ADVANCE(36);
      END_STATE();
    case 43:
      if (lookahead == 'P') ADVANCE(94);
      END_STATE();
    case 44:
      if (lookahead == 'P') ADVANCE(19);
      END_STATE();
    case 45:
      if (lookahead == 'P') ADVANCE(54);
      END_STATE();
    case 46:
      if (lookahead == 'R') ADVANCE(3);
      END_STATE();
    case 47:
      if (lookahead == 'R') ADVANCE(20);
      if (lookahead == 'T') ADVANCE(68);
      END_STATE();
    case 48:
      if (lookahead == 'S') ADVANCE(74);
      END_STATE();
    case 49:
      if (lookahead == 'S') ADVANCE(51);
      END_STATE();
    case 50:
      if (lookahead == 'T') ADVANCE(64);
      END_STATE();
    case 51:
      if (lookahead == 'T') ADVANCE(66);
      END_STATE();
    case 52:
      if (lookahead == 'T') ADVANCE(72);
      END_STATE();
    case 53:
      if (lookahead == 'T') ADVANCE(43);
      END_STATE();
    case 54:
      if (lookahead == 'T') ADVANCE(26);
      END_STATE();
    case 55:
      if (lookahead == 'T') ADVANCE(5);
      END_STATE();
    case 56:
      if (lookahead == 'T') ADVANCE(53);
      END_STATE();
    case 57:
      if (lookahead == 'T') ADVANCE(15);
      END_STATE();
    case 58:
      if (lookahead == 'W') ADVANCE(92);
      END_STATE();
    case 59:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(97);
      END_STATE();
    case 60:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 61:
      if (eof) ADVANCE(62);
      if (lookahead == '#') ADVANCE(96);
      if (lookahead == 'C') ADVANCE(135);
      if (lookahead == 'D') ADVANCE(106);
      if (lookahead == 'G') ADVANCE(111);
      if (lookahead == 'H') ADVANCE(151);
      if (lookahead == 'L') ADVANCE(118);
      if (lookahead == 'O') ADVANCE(140);
      if (lookahead == 'P') ADVANCE(99);
      if (lookahead == 'T') ADVANCE(141);
      if (lookahead == 'U') ADVANCE(130);
      if (lookahead == 'V') ADVANCE(117);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(61)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_GET);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_GET);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_POST);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_POST);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_PUT);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_PUT);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_DELETE);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_DELETE);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_CONNECT);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_CONNECT);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_OPTIONS);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_OPTIONS);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_TRACE);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_TRACE);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_PATCH);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_PATCH);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_LINK);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_LINK);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_UNLINK);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_UNLINK);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_PURGE);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_PURGE);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_LOCK);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_LOCK);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_UNLOCK);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_UNLOCK);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_PROPFIND);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_PROPFIND);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_VIEW);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_VIEW);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_scheme_literal);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_scheme_literal);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_status_code_pattern);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'A') ADVANCE(103);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'A') ADVANCE(150);
      if (lookahead == 'O') ADVANCE(144);
      if (lookahead == 'R') ADVANCE(136);
      if (lookahead == 'U') ADVANCE(142);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'C') ADVANCE(116);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'C') ADVANCE(123);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'C') ADVANCE(125);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'C') ADVANCE(109);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'C') ADVANCE(147);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'D') ADVANCE(91);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'E') ADVANCE(127);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'E') ADVANCE(153);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'E') ADVANCE(85);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'E') ADVANCE(77);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'E') ADVANCE(71);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'E') ADVANCE(145);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'E') ADVANCE(104);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'E') ADVANCE(152);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'F') ADVANCE(120);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'G') ADVANCE(108);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'H') ADVANCE(79);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'I') ADVANCE(107);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'I') ADVANCE(128);
      if (lookahead == 'O') ADVANCE(101);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'I') ADVANCE(132);
      if (lookahead == 'O') ADVANCE(102);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'I') ADVANCE(129);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'I') ADVANCE(137);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'K') ADVANCE(81);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'K') ADVANCE(87);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'K') ADVANCE(83);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'K') ADVANCE(89);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'L') ADVANCE(119);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'L') ADVANCE(113);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'N') ADVANCE(122);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'N') ADVANCE(105);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'N') ADVANCE(126);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'N') ADVANCE(143);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'N') ADVANCE(124);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'N') ADVANCE(112);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'N') ADVANCE(133);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'O') ADVANCE(134);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'O') ADVANCE(139);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'O') ADVANCE(131);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'P') ADVANCE(95);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'P') ADVANCE(114);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'P') ADVANCE(149);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'R') ADVANCE(98);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'R') ADVANCE(115);
      if (lookahead == 'T') ADVANCE(69);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'S') ADVANCE(75);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'S') ADVANCE(146);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'T') ADVANCE(65);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'T') ADVANCE(67);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'T') ADVANCE(73);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'T') ADVANCE(138);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'T') ADVANCE(121);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'T') ADVANCE(100);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'T') ADVANCE(148);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'T') ADVANCE(110);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'W') ADVANCE(93);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_url);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(156);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 61},
  [2] = {.lex_state = 61},
  [3] = {.lex_state = 61},
  [4] = {.lex_state = 61},
  [5] = {.lex_state = 61},
  [6] = {.lex_state = 61},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 1},
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
    [sym_comment] = ACTIONS(3),
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
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_GET] = ACTIONS(7),
    [anon_sym_POST] = ACTIONS(7),
    [anon_sym_PUT] = ACTIONS(7),
    [anon_sym_DELETE] = ACTIONS(7),
    [anon_sym_CONNECT] = ACTIONS(7),
    [anon_sym_OPTIONS] = ACTIONS(7),
    [anon_sym_TRACE] = ACTIONS(7),
    [anon_sym_PATCH] = ACTIONS(7),
    [anon_sym_LINK] = ACTIONS(7),
    [anon_sym_UNLINK] = ACTIONS(7),
    [anon_sym_PURGE] = ACTIONS(7),
    [anon_sym_LOCK] = ACTIONS(7),
    [anon_sym_UNLOCK] = ACTIONS(7),
    [anon_sym_PROPFIND] = ACTIONS(7),
    [anon_sym_VIEW] = ACTIONS(7),
    [sym_scheme_literal] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
    [sym_header_name] = ACTIONS(11),
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
    [ts_builtin_sym_end] = ACTIONS(13),
    [anon_sym_GET] = ACTIONS(7),
    [anon_sym_POST] = ACTIONS(7),
    [anon_sym_PUT] = ACTIONS(7),
    [anon_sym_DELETE] = ACTIONS(7),
    [anon_sym_CONNECT] = ACTIONS(7),
    [anon_sym_OPTIONS] = ACTIONS(7),
    [anon_sym_TRACE] = ACTIONS(7),
    [anon_sym_PATCH] = ACTIONS(7),
    [anon_sym_LINK] = ACTIONS(7),
    [anon_sym_UNLINK] = ACTIONS(7),
    [anon_sym_PURGE] = ACTIONS(7),
    [anon_sym_LOCK] = ACTIONS(7),
    [anon_sym_UNLOCK] = ACTIONS(7),
    [anon_sym_PROPFIND] = ACTIONS(7),
    [anon_sym_VIEW] = ACTIONS(7),
    [sym_scheme_literal] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
    [sym_header_name] = ACTIONS(11),
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
    [ts_builtin_sym_end] = ACTIONS(15),
    [anon_sym_GET] = ACTIONS(17),
    [anon_sym_POST] = ACTIONS(17),
    [anon_sym_PUT] = ACTIONS(17),
    [anon_sym_DELETE] = ACTIONS(17),
    [anon_sym_CONNECT] = ACTIONS(17),
    [anon_sym_OPTIONS] = ACTIONS(17),
    [anon_sym_TRACE] = ACTIONS(17),
    [anon_sym_PATCH] = ACTIONS(17),
    [anon_sym_LINK] = ACTIONS(17),
    [anon_sym_UNLINK] = ACTIONS(17),
    [anon_sym_PURGE] = ACTIONS(17),
    [anon_sym_LOCK] = ACTIONS(17),
    [anon_sym_UNLOCK] = ACTIONS(17),
    [anon_sym_PROPFIND] = ACTIONS(17),
    [anon_sym_VIEW] = ACTIONS(17),
    [sym_scheme_literal] = ACTIONS(20),
    [sym_comment] = ACTIONS(3),
    [sym_header_name] = ACTIONS(23),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(26),
    [anon_sym_GET] = ACTIONS(28),
    [anon_sym_POST] = ACTIONS(28),
    [anon_sym_PUT] = ACTIONS(28),
    [anon_sym_DELETE] = ACTIONS(28),
    [anon_sym_CONNECT] = ACTIONS(28),
    [anon_sym_OPTIONS] = ACTIONS(28),
    [anon_sym_TRACE] = ACTIONS(28),
    [anon_sym_PATCH] = ACTIONS(28),
    [anon_sym_LINK] = ACTIONS(28),
    [anon_sym_UNLINK] = ACTIONS(28),
    [anon_sym_PURGE] = ACTIONS(28),
    [anon_sym_LOCK] = ACTIONS(28),
    [anon_sym_UNLOCK] = ACTIONS(28),
    [anon_sym_PROPFIND] = ACTIONS(28),
    [anon_sym_VIEW] = ACTIONS(28),
    [sym_scheme_literal] = ACTIONS(28),
    [sym_comment] = ACTIONS(3),
    [sym_header_name] = ACTIONS(28),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(30),
    [anon_sym_GET] = ACTIONS(32),
    [anon_sym_POST] = ACTIONS(32),
    [anon_sym_PUT] = ACTIONS(32),
    [anon_sym_DELETE] = ACTIONS(32),
    [anon_sym_CONNECT] = ACTIONS(32),
    [anon_sym_OPTIONS] = ACTIONS(32),
    [anon_sym_TRACE] = ACTIONS(32),
    [anon_sym_PATCH] = ACTIONS(32),
    [anon_sym_LINK] = ACTIONS(32),
    [anon_sym_UNLINK] = ACTIONS(32),
    [anon_sym_PURGE] = ACTIONS(32),
    [anon_sym_LOCK] = ACTIONS(32),
    [anon_sym_UNLOCK] = ACTIONS(32),
    [anon_sym_PROPFIND] = ACTIONS(32),
    [anon_sym_VIEW] = ACTIONS(32),
    [sym_scheme_literal] = ACTIONS(32),
    [sym_comment] = ACTIONS(3),
    [sym_header_name] = ACTIONS(32),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(34),
    [anon_sym_GET] = ACTIONS(36),
    [anon_sym_POST] = ACTIONS(36),
    [anon_sym_PUT] = ACTIONS(36),
    [anon_sym_DELETE] = ACTIONS(36),
    [anon_sym_CONNECT] = ACTIONS(36),
    [anon_sym_OPTIONS] = ACTIONS(36),
    [anon_sym_TRACE] = ACTIONS(36),
    [anon_sym_PATCH] = ACTIONS(36),
    [anon_sym_LINK] = ACTIONS(36),
    [anon_sym_UNLINK] = ACTIONS(36),
    [anon_sym_PURGE] = ACTIONS(36),
    [anon_sym_LOCK] = ACTIONS(36),
    [anon_sym_UNLOCK] = ACTIONS(36),
    [anon_sym_PROPFIND] = ACTIONS(36),
    [anon_sym_VIEW] = ACTIONS(36),
    [sym_scheme_literal] = ACTIONS(36),
    [sym_comment] = ACTIONS(3),
    [sym_header_name] = ACTIONS(36),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(38), 1,
      sym_comment,
    ACTIONS(40), 1,
      sym_url,
  [7] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(42), 1,
      sym_status_code_pattern,
  [14] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(44), 1,
      anon_sym_COLON,
  [21] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(46), 1,
      ts_builtin_sym_end,
  [28] = 2,
    ACTIONS(38), 1,
      sym_comment,
    ACTIONS(48), 1,
      sym_url,
  [35] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(50), 1,
      sym_header_value,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(7)] = 0,
  [SMALL_STATE(8)] = 7,
  [SMALL_STATE(9)] = 14,
  [SMALL_STATE(10)] = 21,
  [SMALL_STATE(11)] = 28,
  [SMALL_STATE(12)] = 35,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [20] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_http_response_declaration, 2),
  [28] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_http_response_declaration, 2),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request_declaration, 2, .production_id = 1),
  [32] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request_declaration, 2, .production_id = 1),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_declaration, 3, .production_id = 2),
  [36] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header_declaration, 3, .production_id = 2),
  [38] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request_literal, 1),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [46] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
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

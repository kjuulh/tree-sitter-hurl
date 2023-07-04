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

#define LANGUAGE_VERSION 14
#define STATE_COUNT 48
#define LARGE_STATE_COUNT 19
#define SYMBOL_COUNT 55
#define ALIAS_COUNT 0
#define TOKEN_COUNT 38
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 4

enum {
  aux_sym__statement_token1 = 1,
  aux_sym_json_request_declaration_token1 = 2,
  aux_sym_json_request_declaration_token2 = 3,
  aux_sym_json_request_declaration_token3 = 4,
  anon_sym_COLON = 5,
  anon_sym_LBRACK = 6,
  anon_sym_RBRACK = 7,
  anon_sym_GET = 8,
  anon_sym_POST = 9,
  anon_sym_PUT = 10,
  anon_sym_DELETE = 11,
  anon_sym_CONNECT = 12,
  anon_sym_OPTIONS = 13,
  anon_sym_TRACE = 14,
  anon_sym_PATCH = 15,
  anon_sym_LINK = 16,
  anon_sym_UNLINK = 17,
  anon_sym_PURGE = 18,
  anon_sym_LOCK = 19,
  anon_sym_UNLOCK = 20,
  anon_sym_PROPFIND = 21,
  anon_sym_VIEW = 22,
  anon_sym_QueryStringParams = 23,
  anon_sym_FormParams = 24,
  anon_sym_MultipartFormData = 25,
  anon_sym_Cookies = 26,
  anon_sym_Captures = 27,
  anon_sym_Asserts = 28,
  anon_sym_Options = 29,
  sym_scheme_literal = 30,
  aux_sym_comment_token1 = 31,
  sym_status_code_pattern = 32,
  sym_header_name = 33,
  sym_header_value = 34,
  sym_url = 35,
  sym__line = 36,
  aux_sym__whitespace_token1 = 37,
  sym_source_file = 38,
  sym__statement = 39,
  sym__declaration_statement = 40,
  sym_request_declaration = 41,
  sym_request_body_declaration = 42,
  sym_json_request_declaration = 43,
  sym_header_declaration = 44,
  sym_http_response_declaration = 45,
  sym_assert_declaration = 46,
  sym__literal = 47,
  sym_request_literal = 48,
  sym_assert_literal = 49,
  sym_comment = 50,
  aux_sym__whitespace = 51,
  aux_sym_source_file_repeat1 = 52,
  aux_sym_json_request_declaration_repeat1 = 53,
  aux_sym_json_request_declaration_repeat2 = 54,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym__statement_token1] = "_statement_token1",
  [aux_sym_json_request_declaration_token1] = "json_request_declaration_token1",
  [aux_sym_json_request_declaration_token2] = "json_request_declaration_token2",
  [aux_sym_json_request_declaration_token3] = "json_request_declaration_token3",
  [anon_sym_COLON] = ":",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
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
  [anon_sym_QueryStringParams] = "QueryStringParams",
  [anon_sym_FormParams] = "FormParams",
  [anon_sym_MultipartFormData] = "MultipartFormData",
  [anon_sym_Cookies] = "Cookies",
  [anon_sym_Captures] = "Captures",
  [anon_sym_Asserts] = "Asserts",
  [anon_sym_Options] = "Options",
  [sym_scheme_literal] = "scheme_literal",
  [aux_sym_comment_token1] = "comment_token1",
  [sym_status_code_pattern] = "status_code_pattern",
  [sym_header_name] = "header_name",
  [sym_header_value] = "header_value",
  [sym_url] = "url",
  [sym__line] = "_line",
  [aux_sym__whitespace_token1] = "_whitespace_token1",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym__declaration_statement] = "_declaration_statement",
  [sym_request_declaration] = "request_declaration",
  [sym_request_body_declaration] = "body",
  [sym_json_request_declaration] = "json_request_declaration",
  [sym_header_declaration] = "header_declaration",
  [sym_http_response_declaration] = "response",
  [sym_assert_declaration] = "assert_declaration",
  [sym__literal] = "_literal",
  [sym_request_literal] = "request_literal",
  [sym_assert_literal] = "assert_literal",
  [sym_comment] = "comment",
  [aux_sym__whitespace] = "_whitespace",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_json_request_declaration_repeat1] = "json_request_declaration_repeat1",
  [aux_sym_json_request_declaration_repeat2] = "json_request_declaration_repeat2",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym__statement_token1] = aux_sym__statement_token1,
  [aux_sym_json_request_declaration_token1] = aux_sym_json_request_declaration_token1,
  [aux_sym_json_request_declaration_token2] = aux_sym_json_request_declaration_token2,
  [aux_sym_json_request_declaration_token3] = aux_sym_json_request_declaration_token3,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
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
  [anon_sym_QueryStringParams] = anon_sym_QueryStringParams,
  [anon_sym_FormParams] = anon_sym_FormParams,
  [anon_sym_MultipartFormData] = anon_sym_MultipartFormData,
  [anon_sym_Cookies] = anon_sym_Cookies,
  [anon_sym_Captures] = anon_sym_Captures,
  [anon_sym_Asserts] = anon_sym_Asserts,
  [anon_sym_Options] = anon_sym_Options,
  [sym_scheme_literal] = sym_scheme_literal,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [sym_status_code_pattern] = sym_status_code_pattern,
  [sym_header_name] = sym_header_name,
  [sym_header_value] = sym_header_value,
  [sym_url] = sym_url,
  [sym__line] = sym__line,
  [aux_sym__whitespace_token1] = aux_sym__whitespace_token1,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym__declaration_statement] = sym__declaration_statement,
  [sym_request_declaration] = sym_request_declaration,
  [sym_request_body_declaration] = sym_request_body_declaration,
  [sym_json_request_declaration] = sym_json_request_declaration,
  [sym_header_declaration] = sym_header_declaration,
  [sym_http_response_declaration] = sym_http_response_declaration,
  [sym_assert_declaration] = sym_assert_declaration,
  [sym__literal] = sym__literal,
  [sym_request_literal] = sym_request_literal,
  [sym_assert_literal] = sym_assert_literal,
  [sym_comment] = sym_comment,
  [aux_sym__whitespace] = aux_sym__whitespace,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_json_request_declaration_repeat1] = aux_sym_json_request_declaration_repeat1,
  [aux_sym_json_request_declaration_repeat2] = aux_sym_json_request_declaration_repeat2,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__statement_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_json_request_declaration_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_json_request_declaration_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_json_request_declaration_token3] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
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
  [anon_sym_QueryStringParams] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FormParams] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MultipartFormData] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Cookies] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Captures] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Asserts] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Options] = {
    .visible = true,
    .named = false,
  },
  [sym_scheme_literal] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
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
  [sym__line] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__whitespace_token1] = {
    .visible = false,
    .named = false,
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
  [sym_request_body_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_json_request_declaration] = {
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
  [sym_assert_declaration] = {
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
  [sym_assert_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__whitespace] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_json_request_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_json_request_declaration_repeat2] = {
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
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 1},
  [3] = {.index = 3, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_header_name, 0},
    {field_header_value, 2},
  [2] =
    {field_url, 2},
  [3] =
    {field_header_name, 0},
    {field_header_value, 3},
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
  [24] = 5,
  [25] = 25,
  [26] = 5,
  [27] = 27,
  [28] = 5,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 14,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 14,
  [40] = 14,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(129);
      if (lookahead == '\n') ADVANCE(130);
      if (lookahead == '\r') ADVANCE(130);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == ':') ADVANCE(134);
      if (lookahead == 'A') ADVANCE(113);
      if (lookahead == 'C') ADVANCE(46);
      if (lookahead == 'D') ADVANCE(16);
      if (lookahead == 'F') ADVANCE(92);
      if (lookahead == 'G') ADVANCE(21);
      if (lookahead == 'H') ADVANCE(65);
      if (lookahead == 'L') ADVANCE(30);
      if (lookahead == 'M') ADVANCE(122);
      if (lookahead == 'O') ADVANCE(52);
      if (lookahead == 'P') ADVANCE(8);
      if (lookahead == 'Q') ADVANCE(123);
      if (lookahead == 'T') ADVANCE(54);
      if (lookahead == 'U') ADVANCE(41);
      if (lookahead == 'V') ADVANCE(29);
      if (lookahead == '[') ADVANCE(135);
      if (lookahead == ']') ADVANCE(136);
      if (lookahead == '{') ADVANCE(131);
      if (lookahead == '}') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(185);
      if (lookahead == '\r') ADVANCE(183);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(133);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(132);
      if (lookahead == '#') ADVANCE(310);
      if (lookahead == '}') ADVANCE(311);
      if (lookahead != 0) ADVANCE(312);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(2);
      END_STATE();
    case 5:
      if (lookahead == 11) ADVANCE(309);
      if (lookahead == '#') ADVANCE(308);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(313);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(309);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == ' ') ADVANCE(313);
      if (lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 7:
      if (lookahead == 'A') ADVANCE(12);
      END_STATE();
    case 8:
      if (lookahead == 'A') ADVANCE(64);
      if (lookahead == 'O') ADVANCE(58);
      if (lookahead == 'R') ADVANCE(47);
      if (lookahead == 'U') ADVANCE(55);
      END_STATE();
    case 9:
      if (lookahead == 'C') ADVANCE(27);
      END_STATE();
    case 10:
      if (lookahead == 'C') ADVANCE(34);
      END_STATE();
    case 11:
      if (lookahead == 'C') ADVANCE(36);
      END_STATE();
    case 12:
      if (lookahead == 'C') ADVANCE(19);
      END_STATE();
    case 13:
      if (lookahead == 'C') ADVANCE(62);
      END_STATE();
    case 14:
      if (lookahead == 'D') ADVANCE(163);
      END_STATE();
    case 15:
      if (lookahead == 'D') ADVANCE(71);
      END_STATE();
    case 16:
      if (lookahead == 'E') ADVANCE(38);
      END_STATE();
    case 17:
      if (lookahead == 'E') ADVANCE(67);
      END_STATE();
    case 18:
      if (lookahead == 'E') ADVANCE(157);
      END_STATE();
    case 19:
      if (lookahead == 'E') ADVANCE(149);
      END_STATE();
    case 20:
      if (lookahead == 'E') ADVANCE(143);
      END_STATE();
    case 21:
      if (lookahead == 'E') ADVANCE(59);
      END_STATE();
    case 22:
      if (lookahead == 'E') ADVANCE(13);
      END_STATE();
    case 23:
      if (lookahead == 'E') ADVANCE(66);
      END_STATE();
    case 24:
      if (lookahead == 'F') ADVANCE(32);
      END_STATE();
    case 25:
      if (lookahead == 'F') ADVANCE(95);
      END_STATE();
    case 26:
      if (lookahead == 'G') ADVANCE(18);
      END_STATE();
    case 27:
      if (lookahead == 'H') ADVANCE(151);
      END_STATE();
    case 28:
      if (lookahead == 'I') ADVANCE(48);
      END_STATE();
    case 29:
      if (lookahead == 'I') ADVANCE(17);
      END_STATE();
    case 30:
      if (lookahead == 'I') ADVANCE(39);
      if (lookahead == 'O') ADVANCE(10);
      END_STATE();
    case 31:
      if (lookahead == 'I') ADVANCE(43);
      if (lookahead == 'O') ADVANCE(11);
      END_STATE();
    case 32:
      if (lookahead == 'I') ADVANCE(40);
      END_STATE();
    case 33:
      if (lookahead == 'K') ADVANCE(153);
      END_STATE();
    case 34:
      if (lookahead == 'K') ADVANCE(159);
      END_STATE();
    case 35:
      if (lookahead == 'K') ADVANCE(155);
      END_STATE();
    case 36:
      if (lookahead == 'K') ADVANCE(161);
      END_STATE();
    case 37:
      if (lookahead == 'L') ADVANCE(31);
      END_STATE();
    case 38:
      if (lookahead == 'L') ADVANCE(23);
      END_STATE();
    case 39:
      if (lookahead == 'N') ADVANCE(33);
      END_STATE();
    case 40:
      if (lookahead == 'N') ADVANCE(14);
      END_STATE();
    case 41:
      if (lookahead == 'N') ADVANCE(37);
      END_STATE();
    case 42:
      if (lookahead == 'N') ADVANCE(56);
      END_STATE();
    case 43:
      if (lookahead == 'N') ADVANCE(35);
      END_STATE();
    case 44:
      if (lookahead == 'N') ADVANCE(22);
      END_STATE();
    case 45:
      if (lookahead == 'N') ADVANCE(44);
      END_STATE();
    case 46:
      if (lookahead == 'O') ADVANCE(45);
      if (lookahead == 'a') ADVANCE(96);
      if (lookahead == 'o') ADVANCE(93);
      END_STATE();
    case 47:
      if (lookahead == 'O') ADVANCE(50);
      END_STATE();
    case 48:
      if (lookahead == 'O') ADVANCE(42);
      END_STATE();
    case 49:
      if (lookahead == 'P') ADVANCE(181);
      END_STATE();
    case 50:
      if (lookahead == 'P') ADVANCE(24);
      END_STATE();
    case 51:
      if (lookahead == 'P') ADVANCE(70);
      END_STATE();
    case 52:
      if (lookahead == 'P') ADVANCE(63);
      if (lookahead == 'p') ADVANCE(115);
      END_STATE();
    case 53:
      if (lookahead == 'P') ADVANCE(74);
      END_STATE();
    case 54:
      if (lookahead == 'R') ADVANCE(7);
      END_STATE();
    case 55:
      if (lookahead == 'R') ADVANCE(26);
      if (lookahead == 'T') ADVANCE(141);
      END_STATE();
    case 56:
      if (lookahead == 'S') ADVANCE(147);
      END_STATE();
    case 57:
      if (lookahead == 'S') ADVANCE(121);
      END_STATE();
    case 58:
      if (lookahead == 'S') ADVANCE(61);
      END_STATE();
    case 59:
      if (lookahead == 'T') ADVANCE(137);
      END_STATE();
    case 60:
      if (lookahead == 'T') ADVANCE(49);
      END_STATE();
    case 61:
      if (lookahead == 'T') ADVANCE(139);
      END_STATE();
    case 62:
      if (lookahead == 'T') ADVANCE(145);
      END_STATE();
    case 63:
      if (lookahead == 'T') ADVANCE(28);
      END_STATE();
    case 64:
      if (lookahead == 'T') ADVANCE(9);
      END_STATE();
    case 65:
      if (lookahead == 'T') ADVANCE(60);
      END_STATE();
    case 66:
      if (lookahead == 'T') ADVANCE(20);
      END_STATE();
    case 67:
      if (lookahead == 'W') ADVANCE(165);
      END_STATE();
    case 68:
      if (lookahead == 'a') ADVANCE(171);
      END_STATE();
    case 69:
      if (lookahead == 'a') ADVANCE(88);
      END_STATE();
    case 70:
      if (lookahead == 'a') ADVANCE(100);
      END_STATE();
    case 71:
      if (lookahead == 'a') ADVANCE(120);
      END_STATE();
    case 72:
      if (lookahead == 'a') ADVANCE(89);
      END_STATE();
    case 73:
      if (lookahead == 'a') ADVANCE(104);
      END_STATE();
    case 74:
      if (lookahead == 'a') ADVANCE(106);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 79:
      if (lookahead == 'g') ADVANCE(53);
      END_STATE();
    case 80:
      if (lookahead == 'i') ADVANCE(97);
      END_STATE();
    case 81:
      if (lookahead == 'i') ADVANCE(77);
      END_STATE();
    case 82:
      if (lookahead == 'i') ADVANCE(90);
      END_STATE();
    case 83:
      if (lookahead == 'i') ADVANCE(94);
      END_STATE();
    case 84:
      if (lookahead == 'k') ADVANCE(81);
      END_STATE();
    case 85:
      if (lookahead == 'l') ADVANCE(119);
      END_STATE();
    case 86:
      if (lookahead == 'm') ADVANCE(15);
      END_STATE();
    case 87:
      if (lookahead == 'm') ADVANCE(51);
      END_STATE();
    case 88:
      if (lookahead == 'm') ADVANCE(111);
      END_STATE();
    case 89:
      if (lookahead == 'm') ADVANCE(112);
      END_STATE();
    case 90:
      if (lookahead == 'n') ADVANCE(79);
      END_STATE();
    case 91:
      if (lookahead == 'n') ADVANCE(109);
      END_STATE();
    case 92:
      if (lookahead == 'o') ADVANCE(98);
      END_STATE();
    case 93:
      if (lookahead == 'o') ADVANCE(84);
      END_STATE();
    case 94:
      if (lookahead == 'o') ADVANCE(91);
      END_STATE();
    case 95:
      if (lookahead == 'o') ADVANCE(102);
      END_STATE();
    case 96:
      if (lookahead == 'p') ADVANCE(118);
      END_STATE();
    case 97:
      if (lookahead == 'p') ADVANCE(73);
      END_STATE();
    case 98:
      if (lookahead == 'r') ADVANCE(87);
      END_STATE();
    case 99:
      if (lookahead == 'r') ADVANCE(125);
      END_STATE();
    case 100:
      if (lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 101:
      if (lookahead == 'r') ADVANCE(117);
      END_STATE();
    case 102:
      if (lookahead == 'r') ADVANCE(86);
      END_STATE();
    case 103:
      if (lookahead == 'r') ADVANCE(82);
      END_STATE();
    case 104:
      if (lookahead == 'r') ADVANCE(116);
      END_STATE();
    case 105:
      if (lookahead == 'r') ADVANCE(78);
      END_STATE();
    case 106:
      if (lookahead == 'r') ADVANCE(72);
      END_STATE();
    case 107:
      if (lookahead == 's') ADVANCE(177);
      END_STATE();
    case 108:
      if (lookahead == 's') ADVANCE(173);
      END_STATE();
    case 109:
      if (lookahead == 's') ADVANCE(179);
      END_STATE();
    case 110:
      if (lookahead == 's') ADVANCE(175);
      END_STATE();
    case 111:
      if (lookahead == 's') ADVANCE(169);
      END_STATE();
    case 112:
      if (lookahead == 's') ADVANCE(167);
      END_STATE();
    case 113:
      if (lookahead == 's') ADVANCE(114);
      END_STATE();
    case 114:
      if (lookahead == 's') ADVANCE(76);
      END_STATE();
    case 115:
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 116:
      if (lookahead == 't') ADVANCE(25);
      END_STATE();
    case 117:
      if (lookahead == 't') ADVANCE(107);
      END_STATE();
    case 118:
      if (lookahead == 't') ADVANCE(124);
      END_STATE();
    case 119:
      if (lookahead == 't') ADVANCE(80);
      END_STATE();
    case 120:
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 121:
      if (lookahead == 't') ADVANCE(103);
      END_STATE();
    case 122:
      if (lookahead == 'u') ADVANCE(85);
      END_STATE();
    case 123:
      if (lookahead == 'u') ADVANCE(75);
      END_STATE();
    case 124:
      if (lookahead == 'u') ADVANCE(105);
      END_STATE();
    case 125:
      if (lookahead == 'y') ADVANCE(57);
      END_STATE();
    case 126:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      END_STATE();
    case 127:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(126);
      END_STATE();
    case 128:
      if (eof) ADVANCE(129);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == 'A') ADVANCE(293);
      if (lookahead == 'C') ADVANCE(226);
      if (lookahead == 'D') ADVANCE(196);
      if (lookahead == 'F') ADVANCE(272);
      if (lookahead == 'G') ADVANCE(201);
      if (lookahead == 'H') ADVANCE(245);
      if (lookahead == 'L') ADVANCE(210);
      if (lookahead == 'M') ADVANCE(302);
      if (lookahead == 'O') ADVANCE(232);
      if (lookahead == 'P') ADVANCE(188);
      if (lookahead == 'Q') ADVANCE(303);
      if (lookahead == 'T') ADVANCE(234);
      if (lookahead == 'U') ADVANCE(221);
      if (lookahead == 'V') ADVANCE(209);
      if (lookahead == '[') ADVANCE(135);
      if (lookahead == '{') ADVANCE(131);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') ADVANCE(313);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym__statement_token1);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_json_request_declaration_token1);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_json_request_declaration_token2);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_json_request_declaration_token3);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_GET);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_GET);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_POST);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_POST);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_PUT);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_PUT);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_DELETE);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_DELETE);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_CONNECT);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_CONNECT);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_OPTIONS);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_OPTIONS);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_TRACE);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_TRACE);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_PATCH);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_PATCH);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_LINK);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_LINK);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_UNLINK);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_UNLINK);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_PURGE);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_PURGE);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_LOCK);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_LOCK);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_UNLOCK);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_UNLOCK);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_PROPFIND);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_PROPFIND);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_VIEW);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_VIEW);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_QueryStringParams);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_QueryStringParams);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_FormParams);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_FormParams);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_MultipartFormData);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_MultipartFormData);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_Cookies);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_Cookies);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_Captures);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_Captures);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_Asserts);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_Asserts);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_Options);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_Options);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_scheme_literal);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_scheme_literal);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(185);
      if (lookahead == '\r') ADVANCE(183);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(185);
      if (lookahead == '\r') ADVANCE(184);
      if (lookahead != 0) ADVANCE(310);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(185);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_status_code_pattern);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'A') ADVANCE(192);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'A') ADVANCE(244);
      if (lookahead == 'O') ADVANCE(238);
      if (lookahead == 'R') ADVANCE(227);
      if (lookahead == 'U') ADVANCE(235);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'C') ADVANCE(207);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'C') ADVANCE(214);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'C') ADVANCE(216);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'C') ADVANCE(199);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'C') ADVANCE(242);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'D') ADVANCE(164);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'D') ADVANCE(251);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'E') ADVANCE(218);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'E') ADVANCE(247);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'E') ADVANCE(158);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'E') ADVANCE(150);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'E') ADVANCE(144);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'E') ADVANCE(239);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'E') ADVANCE(193);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'E') ADVANCE(246);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'F') ADVANCE(212);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'F') ADVANCE(275);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'G') ADVANCE(198);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'H') ADVANCE(152);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'I') ADVANCE(228);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'I') ADVANCE(197);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'I') ADVANCE(219);
      if (lookahead == 'O') ADVANCE(190);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'I') ADVANCE(223);
      if (lookahead == 'O') ADVANCE(191);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'I') ADVANCE(220);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'K') ADVANCE(154);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'K') ADVANCE(160);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'K') ADVANCE(156);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'K') ADVANCE(162);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'L') ADVANCE(211);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'L') ADVANCE(203);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'N') ADVANCE(213);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'N') ADVANCE(194);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'N') ADVANCE(217);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'N') ADVANCE(236);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'N') ADVANCE(215);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'N') ADVANCE(202);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'N') ADVANCE(224);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'O') ADVANCE(225);
      if (lookahead == 'a') ADVANCE(276);
      if (lookahead == 'o') ADVANCE(273);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'O') ADVANCE(230);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'O') ADVANCE(222);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'P') ADVANCE(182);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'P') ADVANCE(204);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'P') ADVANCE(250);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'P') ADVANCE(243);
      if (lookahead == 'p') ADVANCE(295);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'P') ADVANCE(254);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'R') ADVANCE(187);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'R') ADVANCE(206);
      if (lookahead == 'T') ADVANCE(142);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'S') ADVANCE(148);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'S') ADVANCE(301);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'S') ADVANCE(241);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'T') ADVANCE(138);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'T') ADVANCE(229);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'T') ADVANCE(140);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'T') ADVANCE(146);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'T') ADVANCE(208);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'T') ADVANCE(189);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'T') ADVANCE(240);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'T') ADVANCE(200);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'W') ADVANCE(166);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'a') ADVANCE(172);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'a') ADVANCE(268);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'a') ADVANCE(280);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'a') ADVANCE(300);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'a') ADVANCE(269);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'a') ADVANCE(284);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'a') ADVANCE(286);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'e') ADVANCE(279);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'e') ADVANCE(281);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'e') ADVANCE(288);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'e') ADVANCE(290);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'g') ADVANCE(233);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'i') ADVANCE(277);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'i') ADVANCE(257);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'i') ADVANCE(270);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'i') ADVANCE(274);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'k') ADVANCE(261);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'l') ADVANCE(299);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'm') ADVANCE(195);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'm') ADVANCE(231);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'm') ADVANCE(291);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'm') ADVANCE(292);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'n') ADVANCE(259);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'n') ADVANCE(289);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'o') ADVANCE(278);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'o') ADVANCE(264);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'o') ADVANCE(271);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'o') ADVANCE(282);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'p') ADVANCE(298);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'p') ADVANCE(253);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'r') ADVANCE(267);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'r') ADVANCE(305);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'r') ADVANCE(249);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'r') ADVANCE(297);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'r') ADVANCE(266);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'r') ADVANCE(262);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'r') ADVANCE(296);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'r') ADVANCE(258);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'r') ADVANCE(252);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 's') ADVANCE(178);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 's') ADVANCE(174);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 's') ADVANCE(180);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 's') ADVANCE(176);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 's') ADVANCE(170);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 's') ADVANCE(168);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 's') ADVANCE(294);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 's') ADVANCE(256);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 't') ADVANCE(263);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 't') ADVANCE(205);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 't') ADVANCE(287);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 't') ADVANCE(304);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 't') ADVANCE(260);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 't') ADVANCE(248);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 't') ADVANCE(283);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'u') ADVANCE(265);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'u') ADVANCE(255);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'u') ADVANCE(285);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'y') ADVANCE(237);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == '\n') ADVANCE(185);
      if (lookahead == '\r') ADVANCE(183);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1);
      if (lookahead != 0) ADVANCE(308);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_url);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(309);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(185);
      if (lookahead == '\r') ADVANCE(184);
      if (lookahead != 0) ADVANCE(310);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(2);
      if (lookahead != 0) ADVANCE(312);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym__line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(312);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 128},
  [2] = {.lex_state = 128},
  [3] = {.lex_state = 128},
  [4] = {.lex_state = 128},
  [5] = {.lex_state = 128},
  [6] = {.lex_state = 128},
  [7] = {.lex_state = 128},
  [8] = {.lex_state = 128},
  [9] = {.lex_state = 128},
  [10] = {.lex_state = 128},
  [11] = {.lex_state = 128},
  [12] = {.lex_state = 128},
  [13] = {.lex_state = 128},
  [14] = {.lex_state = 128},
  [15] = {.lex_state = 128},
  [16] = {.lex_state = 128},
  [17] = {.lex_state = 128},
  [18] = {.lex_state = 128},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 6},
  [26] = {.lex_state = 6},
  [27] = {.lex_state = 5},
  [28] = {.lex_state = 5},
  [29] = {.lex_state = 6},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 5},
  [40] = {.lex_state = 6},
  [41] = {.lex_state = 128},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym__statement_token1] = ACTIONS(1),
    [aux_sym_json_request_declaration_token1] = ACTIONS(1),
    [aux_sym_json_request_declaration_token2] = ACTIONS(1),
    [aux_sym_json_request_declaration_token3] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
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
    [anon_sym_QueryStringParams] = ACTIONS(1),
    [anon_sym_FormParams] = ACTIONS(1),
    [anon_sym_MultipartFormData] = ACTIONS(1),
    [anon_sym_Cookies] = ACTIONS(1),
    [anon_sym_Captures] = ACTIONS(1),
    [anon_sym_Asserts] = ACTIONS(1),
    [anon_sym_Options] = ACTIONS(1),
    [sym_scheme_literal] = ACTIONS(1),
    [aux_sym_comment_token1] = ACTIONS(3),
    [sym_status_code_pattern] = ACTIONS(1),
    [aux_sym__whitespace_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(43),
    [sym__statement] = STATE(17),
    [sym__declaration_statement] = STATE(18),
    [sym_request_declaration] = STATE(4),
    [sym_request_body_declaration] = STATE(4),
    [sym_json_request_declaration] = STATE(12),
    [sym_header_declaration] = STATE(4),
    [sym_http_response_declaration] = STATE(4),
    [sym_assert_declaration] = STATE(4),
    [sym__literal] = STATE(35),
    [sym_request_literal] = STATE(42),
    [sym_assert_literal] = STATE(42),
    [sym_comment] = STATE(1),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym__statement_token1] = ACTIONS(7),
    [aux_sym_json_request_declaration_token1] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_GET] = ACTIONS(13),
    [anon_sym_POST] = ACTIONS(13),
    [anon_sym_PUT] = ACTIONS(13),
    [anon_sym_DELETE] = ACTIONS(13),
    [anon_sym_CONNECT] = ACTIONS(13),
    [anon_sym_OPTIONS] = ACTIONS(13),
    [anon_sym_TRACE] = ACTIONS(13),
    [anon_sym_PATCH] = ACTIONS(13),
    [anon_sym_LINK] = ACTIONS(13),
    [anon_sym_UNLINK] = ACTIONS(13),
    [anon_sym_PURGE] = ACTIONS(13),
    [anon_sym_LOCK] = ACTIONS(13),
    [anon_sym_UNLOCK] = ACTIONS(13),
    [anon_sym_PROPFIND] = ACTIONS(13),
    [anon_sym_VIEW] = ACTIONS(13),
    [anon_sym_QueryStringParams] = ACTIONS(15),
    [anon_sym_FormParams] = ACTIONS(15),
    [anon_sym_MultipartFormData] = ACTIONS(15),
    [anon_sym_Cookies] = ACTIONS(15),
    [anon_sym_Captures] = ACTIONS(15),
    [anon_sym_Asserts] = ACTIONS(15),
    [anon_sym_Options] = ACTIONS(15),
    [sym_scheme_literal] = ACTIONS(17),
    [aux_sym_comment_token1] = ACTIONS(3),
    [sym_header_name] = ACTIONS(19),
  },
  [2] = {
    [sym__statement] = STATE(17),
    [sym__declaration_statement] = STATE(18),
    [sym_request_declaration] = STATE(4),
    [sym_request_body_declaration] = STATE(4),
    [sym_json_request_declaration] = STATE(12),
    [sym_header_declaration] = STATE(4),
    [sym_http_response_declaration] = STATE(4),
    [sym_assert_declaration] = STATE(4),
    [sym__literal] = STATE(35),
    [sym_request_literal] = STATE(42),
    [sym_assert_literal] = STATE(42),
    [sym_comment] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(21),
    [aux_sym__statement_token1] = ACTIONS(23),
    [aux_sym_json_request_declaration_token1] = ACTIONS(26),
    [anon_sym_LBRACK] = ACTIONS(29),
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
    [anon_sym_QueryStringParams] = ACTIONS(35),
    [anon_sym_FormParams] = ACTIONS(35),
    [anon_sym_MultipartFormData] = ACTIONS(35),
    [anon_sym_Cookies] = ACTIONS(35),
    [anon_sym_Captures] = ACTIONS(35),
    [anon_sym_Asserts] = ACTIONS(35),
    [anon_sym_Options] = ACTIONS(35),
    [sym_scheme_literal] = ACTIONS(38),
    [aux_sym_comment_token1] = ACTIONS(3),
    [sym_header_name] = ACTIONS(41),
  },
  [3] = {
    [sym__statement] = STATE(17),
    [sym__declaration_statement] = STATE(18),
    [sym_request_declaration] = STATE(4),
    [sym_request_body_declaration] = STATE(4),
    [sym_json_request_declaration] = STATE(12),
    [sym_header_declaration] = STATE(4),
    [sym_http_response_declaration] = STATE(4),
    [sym_assert_declaration] = STATE(4),
    [sym__literal] = STATE(35),
    [sym_request_literal] = STATE(42),
    [sym_assert_literal] = STATE(42),
    [sym_comment] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(44),
    [aux_sym__statement_token1] = ACTIONS(7),
    [aux_sym_json_request_declaration_token1] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_GET] = ACTIONS(13),
    [anon_sym_POST] = ACTIONS(13),
    [anon_sym_PUT] = ACTIONS(13),
    [anon_sym_DELETE] = ACTIONS(13),
    [anon_sym_CONNECT] = ACTIONS(13),
    [anon_sym_OPTIONS] = ACTIONS(13),
    [anon_sym_TRACE] = ACTIONS(13),
    [anon_sym_PATCH] = ACTIONS(13),
    [anon_sym_LINK] = ACTIONS(13),
    [anon_sym_UNLINK] = ACTIONS(13),
    [anon_sym_PURGE] = ACTIONS(13),
    [anon_sym_LOCK] = ACTIONS(13),
    [anon_sym_UNLOCK] = ACTIONS(13),
    [anon_sym_PROPFIND] = ACTIONS(13),
    [anon_sym_VIEW] = ACTIONS(13),
    [anon_sym_QueryStringParams] = ACTIONS(15),
    [anon_sym_FormParams] = ACTIONS(15),
    [anon_sym_MultipartFormData] = ACTIONS(15),
    [anon_sym_Cookies] = ACTIONS(15),
    [anon_sym_Captures] = ACTIONS(15),
    [anon_sym_Asserts] = ACTIONS(15),
    [anon_sym_Options] = ACTIONS(15),
    [sym_scheme_literal] = ACTIONS(17),
    [aux_sym_comment_token1] = ACTIONS(3),
    [sym_header_name] = ACTIONS(19),
  },
  [4] = {
    [sym_comment] = STATE(4),
    [aux_sym__whitespace] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(46),
    [aux_sym__statement_token1] = ACTIONS(46),
    [aux_sym_json_request_declaration_token1] = ACTIONS(46),
    [anon_sym_LBRACK] = ACTIONS(46),
    [anon_sym_GET] = ACTIONS(48),
    [anon_sym_POST] = ACTIONS(48),
    [anon_sym_PUT] = ACTIONS(48),
    [anon_sym_DELETE] = ACTIONS(48),
    [anon_sym_CONNECT] = ACTIONS(48),
    [anon_sym_OPTIONS] = ACTIONS(48),
    [anon_sym_TRACE] = ACTIONS(48),
    [anon_sym_PATCH] = ACTIONS(48),
    [anon_sym_LINK] = ACTIONS(48),
    [anon_sym_UNLINK] = ACTIONS(48),
    [anon_sym_PURGE] = ACTIONS(48),
    [anon_sym_LOCK] = ACTIONS(48),
    [anon_sym_UNLOCK] = ACTIONS(48),
    [anon_sym_PROPFIND] = ACTIONS(48),
    [anon_sym_VIEW] = ACTIONS(48),
    [anon_sym_QueryStringParams] = ACTIONS(48),
    [anon_sym_FormParams] = ACTIONS(48),
    [anon_sym_MultipartFormData] = ACTIONS(48),
    [anon_sym_Cookies] = ACTIONS(48),
    [anon_sym_Captures] = ACTIONS(48),
    [anon_sym_Asserts] = ACTIONS(48),
    [anon_sym_Options] = ACTIONS(48),
    [sym_scheme_literal] = ACTIONS(48),
    [aux_sym_comment_token1] = ACTIONS(3),
    [sym_header_name] = ACTIONS(48),
    [aux_sym__whitespace_token1] = ACTIONS(50),
  },
  [5] = {
    [sym_comment] = STATE(5),
    [aux_sym__whitespace] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(52),
    [aux_sym__statement_token1] = ACTIONS(52),
    [aux_sym_json_request_declaration_token1] = ACTIONS(52),
    [anon_sym_LBRACK] = ACTIONS(52),
    [anon_sym_GET] = ACTIONS(54),
    [anon_sym_POST] = ACTIONS(54),
    [anon_sym_PUT] = ACTIONS(54),
    [anon_sym_DELETE] = ACTIONS(54),
    [anon_sym_CONNECT] = ACTIONS(54),
    [anon_sym_OPTIONS] = ACTIONS(54),
    [anon_sym_TRACE] = ACTIONS(54),
    [anon_sym_PATCH] = ACTIONS(54),
    [anon_sym_LINK] = ACTIONS(54),
    [anon_sym_UNLINK] = ACTIONS(54),
    [anon_sym_PURGE] = ACTIONS(54),
    [anon_sym_LOCK] = ACTIONS(54),
    [anon_sym_UNLOCK] = ACTIONS(54),
    [anon_sym_PROPFIND] = ACTIONS(54),
    [anon_sym_VIEW] = ACTIONS(54),
    [anon_sym_QueryStringParams] = ACTIONS(54),
    [anon_sym_FormParams] = ACTIONS(54),
    [anon_sym_MultipartFormData] = ACTIONS(54),
    [anon_sym_Cookies] = ACTIONS(54),
    [anon_sym_Captures] = ACTIONS(54),
    [anon_sym_Asserts] = ACTIONS(54),
    [anon_sym_Options] = ACTIONS(54),
    [sym_scheme_literal] = ACTIONS(54),
    [aux_sym_comment_token1] = ACTIONS(3),
    [sym_header_name] = ACTIONS(54),
    [aux_sym__whitespace_token1] = ACTIONS(56),
  },
  [6] = {
    [sym_comment] = STATE(6),
    [aux_sym__whitespace] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(59),
    [aux_sym__statement_token1] = ACTIONS(59),
    [aux_sym_json_request_declaration_token1] = ACTIONS(59),
    [anon_sym_LBRACK] = ACTIONS(59),
    [anon_sym_GET] = ACTIONS(61),
    [anon_sym_POST] = ACTIONS(61),
    [anon_sym_PUT] = ACTIONS(61),
    [anon_sym_DELETE] = ACTIONS(61),
    [anon_sym_CONNECT] = ACTIONS(61),
    [anon_sym_OPTIONS] = ACTIONS(61),
    [anon_sym_TRACE] = ACTIONS(61),
    [anon_sym_PATCH] = ACTIONS(61),
    [anon_sym_LINK] = ACTIONS(61),
    [anon_sym_UNLINK] = ACTIONS(61),
    [anon_sym_PURGE] = ACTIONS(61),
    [anon_sym_LOCK] = ACTIONS(61),
    [anon_sym_UNLOCK] = ACTIONS(61),
    [anon_sym_PROPFIND] = ACTIONS(61),
    [anon_sym_VIEW] = ACTIONS(61),
    [anon_sym_QueryStringParams] = ACTIONS(61),
    [anon_sym_FormParams] = ACTIONS(61),
    [anon_sym_MultipartFormData] = ACTIONS(61),
    [anon_sym_Cookies] = ACTIONS(61),
    [anon_sym_Captures] = ACTIONS(61),
    [anon_sym_Asserts] = ACTIONS(61),
    [anon_sym_Options] = ACTIONS(61),
    [sym_scheme_literal] = ACTIONS(61),
    [aux_sym_comment_token1] = ACTIONS(3),
    [sym_header_name] = ACTIONS(61),
    [aux_sym__whitespace_token1] = ACTIONS(50),
  },
  [7] = {
    [sym_comment] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(63),
    [aux_sym__statement_token1] = ACTIONS(63),
    [aux_sym_json_request_declaration_token1] = ACTIONS(63),
    [anon_sym_LBRACK] = ACTIONS(63),
    [anon_sym_GET] = ACTIONS(65),
    [anon_sym_POST] = ACTIONS(65),
    [anon_sym_PUT] = ACTIONS(65),
    [anon_sym_DELETE] = ACTIONS(65),
    [anon_sym_CONNECT] = ACTIONS(65),
    [anon_sym_OPTIONS] = ACTIONS(65),
    [anon_sym_TRACE] = ACTIONS(65),
    [anon_sym_PATCH] = ACTIONS(65),
    [anon_sym_LINK] = ACTIONS(65),
    [anon_sym_UNLINK] = ACTIONS(65),
    [anon_sym_PURGE] = ACTIONS(65),
    [anon_sym_LOCK] = ACTIONS(65),
    [anon_sym_UNLOCK] = ACTIONS(65),
    [anon_sym_PROPFIND] = ACTIONS(65),
    [anon_sym_VIEW] = ACTIONS(65),
    [anon_sym_QueryStringParams] = ACTIONS(65),
    [anon_sym_FormParams] = ACTIONS(65),
    [anon_sym_MultipartFormData] = ACTIONS(65),
    [anon_sym_Cookies] = ACTIONS(65),
    [anon_sym_Captures] = ACTIONS(65),
    [anon_sym_Asserts] = ACTIONS(65),
    [anon_sym_Options] = ACTIONS(65),
    [sym_scheme_literal] = ACTIONS(65),
    [aux_sym_comment_token1] = ACTIONS(3),
    [sym_header_name] = ACTIONS(65),
    [aux_sym__whitespace_token1] = ACTIONS(63),
  },
  [8] = {
    [sym_comment] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(67),
    [aux_sym__statement_token1] = ACTIONS(67),
    [aux_sym_json_request_declaration_token1] = ACTIONS(67),
    [anon_sym_LBRACK] = ACTIONS(67),
    [anon_sym_GET] = ACTIONS(69),
    [anon_sym_POST] = ACTIONS(69),
    [anon_sym_PUT] = ACTIONS(69),
    [anon_sym_DELETE] = ACTIONS(69),
    [anon_sym_CONNECT] = ACTIONS(69),
    [anon_sym_OPTIONS] = ACTIONS(69),
    [anon_sym_TRACE] = ACTIONS(69),
    [anon_sym_PATCH] = ACTIONS(69),
    [anon_sym_LINK] = ACTIONS(69),
    [anon_sym_UNLINK] = ACTIONS(69),
    [anon_sym_PURGE] = ACTIONS(69),
    [anon_sym_LOCK] = ACTIONS(69),
    [anon_sym_UNLOCK] = ACTIONS(69),
    [anon_sym_PROPFIND] = ACTIONS(69),
    [anon_sym_VIEW] = ACTIONS(69),
    [anon_sym_QueryStringParams] = ACTIONS(69),
    [anon_sym_FormParams] = ACTIONS(69),
    [anon_sym_MultipartFormData] = ACTIONS(69),
    [anon_sym_Cookies] = ACTIONS(69),
    [anon_sym_Captures] = ACTIONS(69),
    [anon_sym_Asserts] = ACTIONS(69),
    [anon_sym_Options] = ACTIONS(69),
    [sym_scheme_literal] = ACTIONS(69),
    [aux_sym_comment_token1] = ACTIONS(3),
    [sym_header_name] = ACTIONS(69),
    [aux_sym__whitespace_token1] = ACTIONS(67),
  },
  [9] = {
    [sym_comment] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(71),
    [aux_sym__statement_token1] = ACTIONS(71),
    [aux_sym_json_request_declaration_token1] = ACTIONS(71),
    [anon_sym_LBRACK] = ACTIONS(71),
    [anon_sym_GET] = ACTIONS(73),
    [anon_sym_POST] = ACTIONS(73),
    [anon_sym_PUT] = ACTIONS(73),
    [anon_sym_DELETE] = ACTIONS(73),
    [anon_sym_CONNECT] = ACTIONS(73),
    [anon_sym_OPTIONS] = ACTIONS(73),
    [anon_sym_TRACE] = ACTIONS(73),
    [anon_sym_PATCH] = ACTIONS(73),
    [anon_sym_LINK] = ACTIONS(73),
    [anon_sym_UNLINK] = ACTIONS(73),
    [anon_sym_PURGE] = ACTIONS(73),
    [anon_sym_LOCK] = ACTIONS(73),
    [anon_sym_UNLOCK] = ACTIONS(73),
    [anon_sym_PROPFIND] = ACTIONS(73),
    [anon_sym_VIEW] = ACTIONS(73),
    [anon_sym_QueryStringParams] = ACTIONS(73),
    [anon_sym_FormParams] = ACTIONS(73),
    [anon_sym_MultipartFormData] = ACTIONS(73),
    [anon_sym_Cookies] = ACTIONS(73),
    [anon_sym_Captures] = ACTIONS(73),
    [anon_sym_Asserts] = ACTIONS(73),
    [anon_sym_Options] = ACTIONS(73),
    [sym_scheme_literal] = ACTIONS(73),
    [aux_sym_comment_token1] = ACTIONS(3),
    [sym_header_name] = ACTIONS(73),
    [aux_sym__whitespace_token1] = ACTIONS(71),
  },
  [10] = {
    [sym_comment] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(75),
    [aux_sym__statement_token1] = ACTIONS(75),
    [aux_sym_json_request_declaration_token1] = ACTIONS(75),
    [anon_sym_LBRACK] = ACTIONS(75),
    [anon_sym_GET] = ACTIONS(77),
    [anon_sym_POST] = ACTIONS(77),
    [anon_sym_PUT] = ACTIONS(77),
    [anon_sym_DELETE] = ACTIONS(77),
    [anon_sym_CONNECT] = ACTIONS(77),
    [anon_sym_OPTIONS] = ACTIONS(77),
    [anon_sym_TRACE] = ACTIONS(77),
    [anon_sym_PATCH] = ACTIONS(77),
    [anon_sym_LINK] = ACTIONS(77),
    [anon_sym_UNLINK] = ACTIONS(77),
    [anon_sym_PURGE] = ACTIONS(77),
    [anon_sym_LOCK] = ACTIONS(77),
    [anon_sym_UNLOCK] = ACTIONS(77),
    [anon_sym_PROPFIND] = ACTIONS(77),
    [anon_sym_VIEW] = ACTIONS(77),
    [anon_sym_QueryStringParams] = ACTIONS(77),
    [anon_sym_FormParams] = ACTIONS(77),
    [anon_sym_MultipartFormData] = ACTIONS(77),
    [anon_sym_Cookies] = ACTIONS(77),
    [anon_sym_Captures] = ACTIONS(77),
    [anon_sym_Asserts] = ACTIONS(77),
    [anon_sym_Options] = ACTIONS(77),
    [sym_scheme_literal] = ACTIONS(77),
    [aux_sym_comment_token1] = ACTIONS(3),
    [sym_header_name] = ACTIONS(77),
    [aux_sym__whitespace_token1] = ACTIONS(75),
  },
  [11] = {
    [sym_comment] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(79),
    [aux_sym__statement_token1] = ACTIONS(79),
    [aux_sym_json_request_declaration_token1] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(79),
    [anon_sym_GET] = ACTIONS(81),
    [anon_sym_POST] = ACTIONS(81),
    [anon_sym_PUT] = ACTIONS(81),
    [anon_sym_DELETE] = ACTIONS(81),
    [anon_sym_CONNECT] = ACTIONS(81),
    [anon_sym_OPTIONS] = ACTIONS(81),
    [anon_sym_TRACE] = ACTIONS(81),
    [anon_sym_PATCH] = ACTIONS(81),
    [anon_sym_LINK] = ACTIONS(81),
    [anon_sym_UNLINK] = ACTIONS(81),
    [anon_sym_PURGE] = ACTIONS(81),
    [anon_sym_LOCK] = ACTIONS(81),
    [anon_sym_UNLOCK] = ACTIONS(81),
    [anon_sym_PROPFIND] = ACTIONS(81),
    [anon_sym_VIEW] = ACTIONS(81),
    [anon_sym_QueryStringParams] = ACTIONS(81),
    [anon_sym_FormParams] = ACTIONS(81),
    [anon_sym_MultipartFormData] = ACTIONS(81),
    [anon_sym_Cookies] = ACTIONS(81),
    [anon_sym_Captures] = ACTIONS(81),
    [anon_sym_Asserts] = ACTIONS(81),
    [anon_sym_Options] = ACTIONS(81),
    [sym_scheme_literal] = ACTIONS(81),
    [aux_sym_comment_token1] = ACTIONS(3),
    [sym_header_name] = ACTIONS(81),
    [aux_sym__whitespace_token1] = ACTIONS(79),
  },
  [12] = {
    [sym_comment] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(83),
    [aux_sym__statement_token1] = ACTIONS(83),
    [aux_sym_json_request_declaration_token1] = ACTIONS(83),
    [anon_sym_LBRACK] = ACTIONS(83),
    [anon_sym_GET] = ACTIONS(85),
    [anon_sym_POST] = ACTIONS(85),
    [anon_sym_PUT] = ACTIONS(85),
    [anon_sym_DELETE] = ACTIONS(85),
    [anon_sym_CONNECT] = ACTIONS(85),
    [anon_sym_OPTIONS] = ACTIONS(85),
    [anon_sym_TRACE] = ACTIONS(85),
    [anon_sym_PATCH] = ACTIONS(85),
    [anon_sym_LINK] = ACTIONS(85),
    [anon_sym_UNLINK] = ACTIONS(85),
    [anon_sym_PURGE] = ACTIONS(85),
    [anon_sym_LOCK] = ACTIONS(85),
    [anon_sym_UNLOCK] = ACTIONS(85),
    [anon_sym_PROPFIND] = ACTIONS(85),
    [anon_sym_VIEW] = ACTIONS(85),
    [anon_sym_QueryStringParams] = ACTIONS(85),
    [anon_sym_FormParams] = ACTIONS(85),
    [anon_sym_MultipartFormData] = ACTIONS(85),
    [anon_sym_Cookies] = ACTIONS(85),
    [anon_sym_Captures] = ACTIONS(85),
    [anon_sym_Asserts] = ACTIONS(85),
    [anon_sym_Options] = ACTIONS(85),
    [sym_scheme_literal] = ACTIONS(85),
    [aux_sym_comment_token1] = ACTIONS(3),
    [sym_header_name] = ACTIONS(85),
    [aux_sym__whitespace_token1] = ACTIONS(83),
  },
  [13] = {
    [sym_comment] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(87),
    [aux_sym__statement_token1] = ACTIONS(87),
    [aux_sym_json_request_declaration_token1] = ACTIONS(87),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_GET] = ACTIONS(89),
    [anon_sym_POST] = ACTIONS(89),
    [anon_sym_PUT] = ACTIONS(89),
    [anon_sym_DELETE] = ACTIONS(89),
    [anon_sym_CONNECT] = ACTIONS(89),
    [anon_sym_OPTIONS] = ACTIONS(89),
    [anon_sym_TRACE] = ACTIONS(89),
    [anon_sym_PATCH] = ACTIONS(89),
    [anon_sym_LINK] = ACTIONS(89),
    [anon_sym_UNLINK] = ACTIONS(89),
    [anon_sym_PURGE] = ACTIONS(89),
    [anon_sym_LOCK] = ACTIONS(89),
    [anon_sym_UNLOCK] = ACTIONS(89),
    [anon_sym_PROPFIND] = ACTIONS(89),
    [anon_sym_VIEW] = ACTIONS(89),
    [anon_sym_QueryStringParams] = ACTIONS(89),
    [anon_sym_FormParams] = ACTIONS(89),
    [anon_sym_MultipartFormData] = ACTIONS(89),
    [anon_sym_Cookies] = ACTIONS(89),
    [anon_sym_Captures] = ACTIONS(89),
    [anon_sym_Asserts] = ACTIONS(89),
    [anon_sym_Options] = ACTIONS(89),
    [sym_scheme_literal] = ACTIONS(89),
    [aux_sym_comment_token1] = ACTIONS(3),
    [sym_header_name] = ACTIONS(89),
    [aux_sym__whitespace_token1] = ACTIONS(87),
  },
  [14] = {
    [sym_comment] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(91),
    [aux_sym__statement_token1] = ACTIONS(91),
    [aux_sym_json_request_declaration_token1] = ACTIONS(91),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_GET] = ACTIONS(93),
    [anon_sym_POST] = ACTIONS(93),
    [anon_sym_PUT] = ACTIONS(93),
    [anon_sym_DELETE] = ACTIONS(93),
    [anon_sym_CONNECT] = ACTIONS(93),
    [anon_sym_OPTIONS] = ACTIONS(93),
    [anon_sym_TRACE] = ACTIONS(93),
    [anon_sym_PATCH] = ACTIONS(93),
    [anon_sym_LINK] = ACTIONS(93),
    [anon_sym_UNLINK] = ACTIONS(93),
    [anon_sym_PURGE] = ACTIONS(93),
    [anon_sym_LOCK] = ACTIONS(93),
    [anon_sym_UNLOCK] = ACTIONS(93),
    [anon_sym_PROPFIND] = ACTIONS(93),
    [anon_sym_VIEW] = ACTIONS(93),
    [anon_sym_QueryStringParams] = ACTIONS(93),
    [anon_sym_FormParams] = ACTIONS(93),
    [anon_sym_MultipartFormData] = ACTIONS(93),
    [anon_sym_Cookies] = ACTIONS(93),
    [anon_sym_Captures] = ACTIONS(93),
    [anon_sym_Asserts] = ACTIONS(93),
    [anon_sym_Options] = ACTIONS(93),
    [sym_scheme_literal] = ACTIONS(93),
    [aux_sym_comment_token1] = ACTIONS(3),
    [sym_header_name] = ACTIONS(93),
    [aux_sym__whitespace_token1] = ACTIONS(91),
  },
  [15] = {
    [sym_comment] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(95),
    [aux_sym__statement_token1] = ACTIONS(95),
    [aux_sym_json_request_declaration_token1] = ACTIONS(95),
    [anon_sym_LBRACK] = ACTIONS(95),
    [anon_sym_GET] = ACTIONS(97),
    [anon_sym_POST] = ACTIONS(97),
    [anon_sym_PUT] = ACTIONS(97),
    [anon_sym_DELETE] = ACTIONS(97),
    [anon_sym_CONNECT] = ACTIONS(97),
    [anon_sym_OPTIONS] = ACTIONS(97),
    [anon_sym_TRACE] = ACTIONS(97),
    [anon_sym_PATCH] = ACTIONS(97),
    [anon_sym_LINK] = ACTIONS(97),
    [anon_sym_UNLINK] = ACTIONS(97),
    [anon_sym_PURGE] = ACTIONS(97),
    [anon_sym_LOCK] = ACTIONS(97),
    [anon_sym_UNLOCK] = ACTIONS(97),
    [anon_sym_PROPFIND] = ACTIONS(97),
    [anon_sym_VIEW] = ACTIONS(97),
    [anon_sym_QueryStringParams] = ACTIONS(97),
    [anon_sym_FormParams] = ACTIONS(97),
    [anon_sym_MultipartFormData] = ACTIONS(97),
    [anon_sym_Cookies] = ACTIONS(97),
    [anon_sym_Captures] = ACTIONS(97),
    [anon_sym_Asserts] = ACTIONS(97),
    [anon_sym_Options] = ACTIONS(97),
    [sym_scheme_literal] = ACTIONS(97),
    [aux_sym_comment_token1] = ACTIONS(3),
    [sym_header_name] = ACTIONS(97),
    [aux_sym__whitespace_token1] = ACTIONS(95),
  },
  [16] = {
    [sym_comment] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(99),
    [aux_sym__statement_token1] = ACTIONS(99),
    [aux_sym_json_request_declaration_token1] = ACTIONS(99),
    [anon_sym_LBRACK] = ACTIONS(99),
    [anon_sym_GET] = ACTIONS(101),
    [anon_sym_POST] = ACTIONS(101),
    [anon_sym_PUT] = ACTIONS(101),
    [anon_sym_DELETE] = ACTIONS(101),
    [anon_sym_CONNECT] = ACTIONS(101),
    [anon_sym_OPTIONS] = ACTIONS(101),
    [anon_sym_TRACE] = ACTIONS(101),
    [anon_sym_PATCH] = ACTIONS(101),
    [anon_sym_LINK] = ACTIONS(101),
    [anon_sym_UNLINK] = ACTIONS(101),
    [anon_sym_PURGE] = ACTIONS(101),
    [anon_sym_LOCK] = ACTIONS(101),
    [anon_sym_UNLOCK] = ACTIONS(101),
    [anon_sym_PROPFIND] = ACTIONS(101),
    [anon_sym_VIEW] = ACTIONS(101),
    [anon_sym_QueryStringParams] = ACTIONS(101),
    [anon_sym_FormParams] = ACTIONS(101),
    [anon_sym_MultipartFormData] = ACTIONS(101),
    [anon_sym_Cookies] = ACTIONS(101),
    [anon_sym_Captures] = ACTIONS(101),
    [anon_sym_Asserts] = ACTIONS(101),
    [anon_sym_Options] = ACTIONS(101),
    [sym_scheme_literal] = ACTIONS(101),
    [aux_sym_comment_token1] = ACTIONS(3),
    [sym_header_name] = ACTIONS(101),
    [aux_sym__whitespace_token1] = ACTIONS(99),
  },
  [17] = {
    [sym_comment] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(103),
    [aux_sym__statement_token1] = ACTIONS(103),
    [aux_sym_json_request_declaration_token1] = ACTIONS(103),
    [anon_sym_LBRACK] = ACTIONS(103),
    [anon_sym_GET] = ACTIONS(105),
    [anon_sym_POST] = ACTIONS(105),
    [anon_sym_PUT] = ACTIONS(105),
    [anon_sym_DELETE] = ACTIONS(105),
    [anon_sym_CONNECT] = ACTIONS(105),
    [anon_sym_OPTIONS] = ACTIONS(105),
    [anon_sym_TRACE] = ACTIONS(105),
    [anon_sym_PATCH] = ACTIONS(105),
    [anon_sym_LINK] = ACTIONS(105),
    [anon_sym_UNLINK] = ACTIONS(105),
    [anon_sym_PURGE] = ACTIONS(105),
    [anon_sym_LOCK] = ACTIONS(105),
    [anon_sym_UNLOCK] = ACTIONS(105),
    [anon_sym_PROPFIND] = ACTIONS(105),
    [anon_sym_VIEW] = ACTIONS(105),
    [anon_sym_QueryStringParams] = ACTIONS(105),
    [anon_sym_FormParams] = ACTIONS(105),
    [anon_sym_MultipartFormData] = ACTIONS(105),
    [anon_sym_Cookies] = ACTIONS(105),
    [anon_sym_Captures] = ACTIONS(105),
    [anon_sym_Asserts] = ACTIONS(105),
    [anon_sym_Options] = ACTIONS(105),
    [sym_scheme_literal] = ACTIONS(105),
    [aux_sym_comment_token1] = ACTIONS(3),
    [sym_header_name] = ACTIONS(105),
  },
  [18] = {
    [sym_comment] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(107),
    [aux_sym__statement_token1] = ACTIONS(107),
    [aux_sym_json_request_declaration_token1] = ACTIONS(107),
    [anon_sym_LBRACK] = ACTIONS(107),
    [anon_sym_GET] = ACTIONS(109),
    [anon_sym_POST] = ACTIONS(109),
    [anon_sym_PUT] = ACTIONS(109),
    [anon_sym_DELETE] = ACTIONS(109),
    [anon_sym_CONNECT] = ACTIONS(109),
    [anon_sym_OPTIONS] = ACTIONS(109),
    [anon_sym_TRACE] = ACTIONS(109),
    [anon_sym_PATCH] = ACTIONS(109),
    [anon_sym_LINK] = ACTIONS(109),
    [anon_sym_UNLINK] = ACTIONS(109),
    [anon_sym_PURGE] = ACTIONS(109),
    [anon_sym_LOCK] = ACTIONS(109),
    [anon_sym_UNLOCK] = ACTIONS(109),
    [anon_sym_PROPFIND] = ACTIONS(109),
    [anon_sym_VIEW] = ACTIONS(109),
    [anon_sym_QueryStringParams] = ACTIONS(109),
    [anon_sym_FormParams] = ACTIONS(109),
    [anon_sym_MultipartFormData] = ACTIONS(109),
    [anon_sym_Cookies] = ACTIONS(109),
    [anon_sym_Captures] = ACTIONS(109),
    [anon_sym_Asserts] = ACTIONS(109),
    [anon_sym_Options] = ACTIONS(109),
    [sym_scheme_literal] = ACTIONS(109),
    [aux_sym_comment_token1] = ACTIONS(3),
    [sym_header_name] = ACTIONS(109),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(19), 1,
      sym_comment,
    STATE(46), 1,
      sym_assert_literal,
    ACTIONS(111), 7,
      anon_sym_QueryStringParams,
      anon_sym_FormParams,
      anon_sym_MultipartFormData,
      anon_sym_Cookies,
      anon_sym_Captures,
      anon_sym_Asserts,
      anon_sym_Options,
  [19] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(113), 1,
      aux_sym_json_request_declaration_token2,
    ACTIONS(115), 1,
      aux_sym_json_request_declaration_token3,
    ACTIONS(117), 1,
      sym__line,
    STATE(20), 1,
      sym_comment,
    STATE(22), 1,
      aux_sym_json_request_declaration_repeat1,
    STATE(32), 1,
      aux_sym_json_request_declaration_repeat2,
  [41] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(113), 1,
      aux_sym_json_request_declaration_token2,
    ACTIONS(117), 1,
      sym__line,
    ACTIONS(119), 1,
      aux_sym_json_request_declaration_token3,
    STATE(20), 1,
      aux_sym_json_request_declaration_repeat1,
    STATE(21), 1,
      sym_comment,
    STATE(30), 1,
      aux_sym_json_request_declaration_repeat2,
  [63] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(121), 1,
      aux_sym_json_request_declaration_token2,
    ACTIONS(124), 1,
      aux_sym_json_request_declaration_token3,
    ACTIONS(126), 1,
      sym__line,
    STATE(22), 2,
      sym_comment,
      aux_sym_json_request_declaration_repeat1,
  [80] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(128), 1,
      sym_status_code_pattern,
    ACTIONS(130), 1,
      aux_sym__whitespace_token1,
    STATE(23), 1,
      sym_comment,
    STATE(24), 1,
      aux_sym__whitespace,
  [96] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(52), 1,
      sym_status_code_pattern,
    ACTIONS(132), 1,
      aux_sym__whitespace_token1,
    STATE(24), 2,
      sym_comment,
      aux_sym__whitespace,
  [110] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(135), 1,
      sym_header_value,
    ACTIONS(137), 1,
      aux_sym__whitespace_token1,
    STATE(25), 1,
      sym_comment,
    STATE(29), 1,
      aux_sym__whitespace,
  [126] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(52), 1,
      sym_header_value,
    ACTIONS(139), 1,
      aux_sym__whitespace_token1,
    STATE(26), 2,
      sym_comment,
      aux_sym__whitespace,
  [140] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(142), 1,
      sym_url,
    ACTIONS(144), 1,
      aux_sym__whitespace_token1,
    STATE(27), 1,
      sym_comment,
    STATE(28), 1,
      aux_sym__whitespace,
  [156] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(54), 1,
      sym_url,
    ACTIONS(146), 1,
      aux_sym__whitespace_token1,
    STATE(28), 2,
      sym_comment,
      aux_sym__whitespace,
  [170] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(137), 1,
      aux_sym__whitespace_token1,
    ACTIONS(149), 1,
      sym_header_value,
    STATE(26), 1,
      aux_sym__whitespace,
    STATE(29), 1,
      sym_comment,
  [186] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(115), 1,
      aux_sym_json_request_declaration_token3,
    ACTIONS(117), 1,
      sym__line,
    STATE(30), 1,
      sym_comment,
    STATE(33), 1,
      aux_sym_json_request_declaration_repeat2,
  [202] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(153), 1,
      sym__line,
    STATE(31), 1,
      sym_comment,
    ACTIONS(151), 2,
      aux_sym_json_request_declaration_token2,
      aux_sym_json_request_declaration_token3,
  [216] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(117), 1,
      sym__line,
    ACTIONS(155), 1,
      aux_sym_json_request_declaration_token3,
    STATE(32), 1,
      sym_comment,
    STATE(33), 1,
      aux_sym_json_request_declaration_repeat2,
  [232] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(157), 1,
      aux_sym_json_request_declaration_token3,
    ACTIONS(159), 1,
      sym__line,
    STATE(33), 2,
      sym_comment,
      aux_sym_json_request_declaration_repeat2,
  [246] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(34), 1,
      sym_comment,
    ACTIONS(91), 2,
      sym_status_code_pattern,
      aux_sym__whitespace_token1,
  [257] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(162), 1,
      aux_sym__whitespace_token1,
    STATE(27), 1,
      aux_sym__whitespace,
    STATE(35), 1,
      sym_comment,
  [270] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(157), 1,
      aux_sym_json_request_declaration_token3,
    ACTIONS(164), 1,
      sym__line,
    STATE(36), 1,
      sym_comment,
  [283] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(130), 1,
      aux_sym__whitespace_token1,
    STATE(23), 1,
      aux_sym__whitespace,
    STATE(37), 1,
      sym_comment,
  [296] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(38), 1,
      sym_comment,
    ACTIONS(166), 2,
      anon_sym_RBRACK,
      aux_sym__whitespace_token1,
  [307] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(39), 1,
      sym_comment,
    ACTIONS(93), 2,
      sym_url,
      aux_sym__whitespace_token1,
  [318] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(40), 1,
      sym_comment,
    ACTIONS(91), 2,
      sym_header_value,
      aux_sym__whitespace_token1,
  [329] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(168), 1,
      aux_sym__statement_token1,
    STATE(41), 1,
      sym_comment,
  [339] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(170), 1,
      aux_sym__whitespace_token1,
    STATE(42), 1,
      sym_comment,
  [349] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(172), 1,
      ts_builtin_sym_end,
    STATE(43), 1,
      sym_comment,
  [359] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(174), 1,
      anon_sym_COLON,
    STATE(44), 1,
      sym_comment,
  [369] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(176), 1,
      aux_sym__whitespace_token1,
    STATE(45), 1,
      sym_comment,
  [379] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(178), 1,
      anon_sym_RBRACK,
    STATE(46), 1,
      sym_comment,
  [389] = 1,
    ACTIONS(180), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(19)] = 0,
  [SMALL_STATE(20)] = 19,
  [SMALL_STATE(21)] = 41,
  [SMALL_STATE(22)] = 63,
  [SMALL_STATE(23)] = 80,
  [SMALL_STATE(24)] = 96,
  [SMALL_STATE(25)] = 110,
  [SMALL_STATE(26)] = 126,
  [SMALL_STATE(27)] = 140,
  [SMALL_STATE(28)] = 156,
  [SMALL_STATE(29)] = 170,
  [SMALL_STATE(30)] = 186,
  [SMALL_STATE(31)] = 202,
  [SMALL_STATE(32)] = 216,
  [SMALL_STATE(33)] = 232,
  [SMALL_STATE(34)] = 246,
  [SMALL_STATE(35)] = 257,
  [SMALL_STATE(36)] = 270,
  [SMALL_STATE(37)] = 283,
  [SMALL_STATE(38)] = 296,
  [SMALL_STATE(39)] = 307,
  [SMALL_STATE(40)] = 318,
  [SMALL_STATE(41)] = 329,
  [SMALL_STATE(42)] = 339,
  [SMALL_STATE(43)] = 349,
  [SMALL_STATE(44)] = 359,
  [SMALL_STATE(45)] = 369,
  [SMALL_STATE(46)] = 379,
  [SMALL_STATE(47)] = 389,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(18),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(21),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(19),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(45),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(38),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(37),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(44),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__declaration_statement, 1),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__declaration_statement, 1),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__whitespace, 2),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__whitespace, 2),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__whitespace, 2), SHIFT_REPEAT(14),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__declaration_statement, 2),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__declaration_statement, 2),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assert_declaration, 3),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assert_declaration, 3),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_declaration, 4, .production_id = 3),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header_declaration, 4, .production_id = 3),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_request_declaration, 4),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_request_declaration, 4),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request_declaration, 3, .production_id = 2),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request_declaration, 3, .production_id = 2),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_declaration, 3, .production_id = 1),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header_declaration, 3, .production_id = 1),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request_body_declaration, 1),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request_body_declaration, 1),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_http_response_declaration, 3),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_http_response_declaration, 3),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__whitespace, 1),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__whitespace, 1),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_request_declaration, 2),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_request_declaration, 2),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_request_declaration, 3),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_request_declaration, 3),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 1),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_request_declaration_repeat1, 2), SHIFT_REPEAT(31),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_request_declaration_repeat1, 2),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_json_request_declaration_repeat1, 2),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__whitespace, 2), SHIFT_REPEAT(34),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__whitespace, 2), SHIFT_REPEAT(40),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [146] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__whitespace, 2), SHIFT_REPEAT(39),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_request_declaration_repeat1, 1),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_json_request_declaration_repeat1, 1),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_request_declaration_repeat2, 2),
  [159] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_request_declaration_repeat2, 2), SHIFT_REPEAT(41),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_json_request_declaration_repeat2, 2),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assert_literal, 1),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal, 1),
  [172] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request_literal, 1),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
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

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
#define STATE_COUNT 60
#define LARGE_STATE_COUNT 22
#define SYMBOL_COUNT 60
#define ALIAS_COUNT 0
#define TOKEN_COUNT 42
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 4

enum {
  sym_identifier = 1,
  aux_sym__statement_token1 = 2,
  aux_sym_json_request_declaration_token1 = 3,
  aux_sym_json_request_declaration_token2 = 4,
  aux_sym_json_request_declaration_token3 = 5,
  aux_sym_text_body_declaration_token1 = 6,
  aux_sym_text_body_declaration_token2 = 7,
  anon_sym_COLON = 8,
  anon_sym_LBRACK = 9,
  anon_sym_RBRACK = 10,
  anon_sym_GET = 11,
  anon_sym_POST = 12,
  anon_sym_PUT = 13,
  anon_sym_DELETE = 14,
  anon_sym_CONNECT = 15,
  anon_sym_OPTIONS = 16,
  anon_sym_TRACE = 17,
  anon_sym_PATCH = 18,
  anon_sym_LINK = 19,
  anon_sym_UNLINK = 20,
  anon_sym_PURGE = 21,
  anon_sym_LOCK = 22,
  anon_sym_UNLOCK = 23,
  anon_sym_PROPFIND = 24,
  anon_sym_VIEW = 25,
  anon_sym_QueryStringParams = 26,
  anon_sym_FormParams = 27,
  anon_sym_MultipartFormData = 28,
  anon_sym_Cookies = 29,
  anon_sym_Captures = 30,
  anon_sym_Asserts = 31,
  anon_sym_Options = 32,
  sym_scheme_literal = 33,
  sym_const_pattern = 34,
  aux_sym_comment_token1 = 35,
  sym_status_code_pattern = 36,
  sym_header_name = 37,
  sym_header_value = 38,
  sym_url = 39,
  sym__line = 40,
  aux_sym__whitespace_token1 = 41,
  sym_source_file = 42,
  sym__statement = 43,
  sym__declaration_statement = 44,
  sym_request_declaration = 45,
  sym_request_body_declaration = 46,
  sym_json_request_declaration = 47,
  sym_text_body_declaration = 48,
  sym_header_declaration = 49,
  sym_http_response_declaration = 50,
  sym_assert_declaration = 51,
  sym__literal = 52,
  sym_request_literal = 53,
  sym_assert_literal = 54,
  sym_comment = 55,
  aux_sym__whitespace = 56,
  aux_sym_source_file_repeat1 = 57,
  aux_sym_json_request_declaration_repeat1 = 58,
  aux_sym_json_request_declaration_repeat2 = 59,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [aux_sym__statement_token1] = "_statement_token1",
  [aux_sym_json_request_declaration_token1] = "json_request_declaration_token1",
  [aux_sym_json_request_declaration_token2] = "json_request_declaration_token2",
  [aux_sym_json_request_declaration_token3] = "json_request_declaration_token3",
  [aux_sym_text_body_declaration_token1] = "text_body_declaration_token1",
  [aux_sym_text_body_declaration_token2] = "text_body_declaration_token2",
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
  [sym_const_pattern] = "const_pattern",
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
  [sym_text_body_declaration] = "text_body_declaration",
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
  [sym_identifier] = sym_identifier,
  [aux_sym__statement_token1] = aux_sym__statement_token1,
  [aux_sym_json_request_declaration_token1] = aux_sym_json_request_declaration_token1,
  [aux_sym_json_request_declaration_token2] = aux_sym_json_request_declaration_token2,
  [aux_sym_json_request_declaration_token3] = aux_sym_json_request_declaration_token3,
  [aux_sym_text_body_declaration_token1] = aux_sym_text_body_declaration_token1,
  [aux_sym_text_body_declaration_token2] = aux_sym_text_body_declaration_token2,
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
  [sym_const_pattern] = sym_const_pattern,
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
  [sym_text_body_declaration] = sym_text_body_declaration,
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
  [sym_identifier] = {
    .visible = true,
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
  [aux_sym_text_body_declaration_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_text_body_declaration_token2] = {
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
  [sym_const_pattern] = {
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
  [sym_text_body_declaration] = {
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
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 27,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 5,
  [33] = 5,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 34,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 5,
  [43] = 35,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 8,
  [49] = 8,
  [50] = 46,
  [51] = 8,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 52,
  [59] = 59,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(15);
      if (lookahead == '\n') ADVANCE(16);
      if (lookahead == '\r') ADVANCE(16);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == 'A') ADVANCE(185);
      if (lookahead == 'C') ADVANCE(145);
      if (lookahead == 'D') ADVANCE(87);
      if (lookahead == 'F') ADVANCE(183);
      if (lookahead == 'G') ADVANCE(97);
      if (lookahead == 'H') ADVANCE(177);
      if (lookahead == 'L') ADVANCE(112);
      if (lookahead == 'M') ADVANCE(187);
      if (lookahead == 'O') ADVANCE(155);
      if (lookahead == 'P') ADVANCE(73);
      if (lookahead == 'Q') ADVANCE(188);
      if (lookahead == 'T') ADVANCE(157);
      if (lookahead == 'U') ADVANCE(135);
      if (lookahead == 'V') ADVANCE(111);
      if (lookahead == '[') ADVANCE(23);
      if (lookahead == ']') ADVANCE(24);
      if (lookahead == '`') ADVANCE(11);
      if (lookahead == '{') ADVANCE(17);
      if (lookahead == '}') ADVANCE(6);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(194);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(198);
      if (lookahead == '\r') ADVANCE(196);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(19);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(18);
      if (lookahead == '#') ADVANCE(263);
      if (lookahead == '`') ADVANCE(266);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(18);
      if (lookahead == '#') ADVANCE(263);
      if (lookahead == '}') ADVANCE(264);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(21);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(2);
      END_STATE();
    case 7:
      if (lookahead == 11) ADVANCE(262);
      if (lookahead == '#') ADVANCE(261);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(329);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(262);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == ' ') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == ' ') ADVANCE(329);
      if (lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 10:
      if (lookahead == '`') ADVANCE(20);
      END_STATE();
    case 11:
      if (lookahead == '`') ADVANCE(10);
      END_STATE();
    case 12:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 14:
      if (eof) ADVANCE(15);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == 'A') ADVANCE(186);
      if (lookahead == 'C') ADVANCE(147);
      if (lookahead == 'D') ADVANCE(92);
      if (lookahead == 'F') ADVANCE(184);
      if (lookahead == 'G') ADVANCE(98);
      if (lookahead == 'H') ADVANCE(178);
      if (lookahead == 'L') ADVANCE(114);
      if (lookahead == 'M') ADVANCE(189);
      if (lookahead == 'O') ADVANCE(156);
      if (lookahead == 'P') ADVANCE(74);
      if (lookahead == 'Q') ADVANCE(190);
      if (lookahead == 'T') ADVANCE(159);
      if (lookahead == 'U') ADVANCE(137);
      if (lookahead == 'V') ADVANCE(113);
      if (lookahead == '[') ADVANCE(23);
      if (lookahead == '`') ADVANCE(11);
      if (lookahead == '{') ADVANCE(17);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(16);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(193);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym__statement_token1);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_json_request_declaration_token1);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_json_request_declaration_token2);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_json_request_declaration_token3);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_text_body_declaration_token1);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_text_body_declaration_token2);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_GET);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(193);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_GET);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(194);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_POST);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(193);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_POST);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(194);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_PUT);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(193);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_PUT);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(194);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_DELETE);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(193);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_DELETE);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(194);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_CONNECT);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(193);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_CONNECT);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(194);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_OPTIONS);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(193);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_OPTIONS);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(194);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_TRACE);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(193);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_TRACE);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(194);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_PATCH);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(193);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_PATCH);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(194);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_LINK);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(193);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_LINK);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(194);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_UNLINK);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(193);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_UNLINK);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(194);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_PURGE);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(193);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_PURGE);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(194);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_LOCK);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(193);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_LOCK);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(194);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_UNLOCK);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(193);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_UNLOCK);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(194);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_PROPFIND);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(193);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_PROPFIND);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(194);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_VIEW);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(193);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_VIEW);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(194);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_QueryStringParams);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_QueryStringParams);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_FormParams);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_FormParams);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_MultipartFormData);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_MultipartFormData);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_Cookies);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_Cookies);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_Captures);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_Captures);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_Asserts);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_Asserts);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_Options);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_Options);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_scheme_literal);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(193);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_scheme_literal);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(194);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_const_pattern);
      if (lookahead == 'A') ADVANCE(81);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(194);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_const_pattern);
      if (lookahead == 'A') ADVANCE(82);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(193);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_const_pattern);
      if (lookahead == 'A') ADVANCE(174);
      if (lookahead == 'O') ADVANCE(163);
      if (lookahead == 'R') ADVANCE(146);
      if (lookahead == 'U') ADVANCE(158);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(194);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_const_pattern);
      if (lookahead == 'A') ADVANCE(176);
      if (lookahead == 'O') ADVANCE(164);
      if (lookahead == 'R') ADVANCE(148);
      if (lookahead == 'U') ADVANCE(160);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(193);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_const_pattern);
      if (lookahead == 'C') ADVANCE(107);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(194);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_const_pattern);
      if (lookahead == 'C') ADVANCE(108);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(193);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_const_pattern);
      if (lookahead == 'C') ADVANCE(120);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(194);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_const_pattern);
      if (lookahead == 'C') ADVANCE(124);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(193);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_const_pattern);
      if (lookahead == 'C') ADVANCE(122);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(194);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_const_pattern);
      if (lookahead == 'C') ADVANCE(126);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(193);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_const_pattern);
      if (lookahead == 'C') ADVANCE(90);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(194);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_const_pattern);
      if (lookahead == 'C') ADVANCE(95);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(193);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_const_pattern);
      if (lookahead == 'C') ADVANCE(168);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(194);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_const_pattern);
      if (lookahead == 'C') ADVANCE(172);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(193);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_const_pattern);
      if (lookahead == 'D') ADVANCE(52);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(194);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_const_pattern);
      if (lookahead == 'D') ADVANCE(51);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(193);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_const_pattern);
      if (lookahead == 'E') ADVANCE(129);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(194);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_const_pattern);
      if (lookahead == 'E') ADVANCE(181);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(194);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_const_pattern);
      if (lookahead == 'E') ADVANCE(46);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(194);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_const_pattern);
      if (lookahead == 'E') ADVANCE(38);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(194);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_const_pattern);
      if (lookahead == 'E') ADVANCE(32);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(194);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_const_pattern);
      if (lookahead == 'E') ADVANCE(130);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(193);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_const_pattern);
      if (lookahead == 'E') ADVANCE(182);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(193);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_const_pattern);
      if (lookahead == 'E') ADVANCE(45);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(193);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_const_pattern);
      if (lookahead == 'E') ADVANCE(37);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(193);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_const_pattern);
      if (lookahead == 'E') ADVANCE(31);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(193);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_const_pattern);
      if (lookahead == 'E') ADVANCE(165);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(194);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_const_pattern);
      if (lookahead == 'E') ADVANCE(169);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(193);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_const_pattern);
      if (lookahead == 'E') ADVANCE(83);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(194);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_const_pattern);
      if (lookahead == 'E') ADVANCE(84);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(193);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_const_pattern);
      if (lookahead == 'E') ADVANCE(179);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(194);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_const_pattern);
      if (lookahead == 'E') ADVANCE(180);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(193);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_const_pattern);
      if (lookahead == 'F') ADVANCE(117);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(194);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_const_pattern);
      if (lookahead == 'F') ADVANCE(118);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(193);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_const_pattern);
      if (lookahead == 'G') ADVANCE(89);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(194);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_const_pattern);
      if (lookahead == 'G') ADVANCE(94);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(193);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_const_pattern);
      if (lookahead == 'H') ADVANCE(40);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(194);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_const_pattern);
      if (lookahead == 'H') ADVANCE(39);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(193);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_const_pattern);
      if (lookahead == 'I') ADVANCE(149);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(194);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_const_pattern);
      if (lookahead == 'I') ADVANCE(150);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(193);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_const_pattern);
      if (lookahead == 'I') ADVANCE(88);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(194);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_const_pattern);
      if (lookahead == 'I') ADVANCE(131);
      if (lookahead == 'O') ADVANCE(77);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(194);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_const_pattern);
      if (lookahead == 'I') ADVANCE(93);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(193);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_const_pattern);
      if (lookahead == 'I') ADVANCE(133);
      if (lookahead == 'O') ADVANCE(78);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(193);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_const_pattern);
      if (lookahead == 'I') ADVANCE(139);
      if (lookahead == 'O') ADVANCE(79);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(194);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_const_pattern);
      if (lookahead == 'I') ADVANCE(140);
      if (lookahead == 'O') ADVANCE(80);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(193);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_const_pattern);
      if (lookahead == 'I') ADVANCE(132);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(194);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_const_pattern);
      if (lookahead == 'I') ADVANCE(134);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(193);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_const_pattern);
      if (lookahead == 'K') ADVANCE(42);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(194);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_const_pattern);
      if (lookahead == 'K') ADVANCE(48);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(194);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_const_pattern);
      if (lookahead == 'K') ADVANCE(44);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(194);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_const_pattern);
      if (lookahead == 'K') ADVANCE(50);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(194);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_const_pattern);
      if (lookahead == 'K') ADVANCE(41);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(193);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_const_pattern);
      if (lookahead == 'K') ADVANCE(47);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(193);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_const_pattern);
      if (lookahead == 'K') ADVANCE(43);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(193);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_const_pattern);
      if (lookahead == 'K') ADVANCE(49);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(193);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_const_pattern);
      if (lookahead == 'L') ADVANCE(115);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(194);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_const_pattern);
      if (lookahead == 'L') ADVANCE(116);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(193);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_const_pattern);
      if (lookahead == 'L') ADVANCE(101);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(194);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_const_pattern);
      if (lookahead == 'L') ADVANCE(102);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(193);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_const_pattern);
      if (lookahead == 'N') ADVANCE(119);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(194);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_const_pattern);
      if (lookahead == 'N') ADVANCE(85);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(194);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_const_pattern);
      if (lookahead == 'N') ADVANCE(123);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(193);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_const_pattern);
      if (lookahead == 'N') ADVANCE(86);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(193);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_const_pattern);
      if (lookahead == 'N') ADVANCE(127);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(194);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_const_pattern);
      if (lookahead == 'N') ADVANCE(161);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(194);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_const_pattern);
      if (lookahead == 'N') ADVANCE(128);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(193);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_const_pattern);
      if (lookahead == 'N') ADVANCE(162);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(193);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_const_pattern);
      if (lookahead == 'N') ADVANCE(121);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(194);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_const_pattern);
      if (lookahead == 'N') ADVANCE(125);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(193);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_const_pattern);
      if (lookahead == 'N') ADVANCE(99);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(194);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_const_pattern);
      if (lookahead == 'N') ADVANCE(141);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(194);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_const_pattern);
      if (lookahead == 'N') ADVANCE(100);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(193);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_const_pattern);
      if (lookahead == 'N') ADVANCE(143);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(193);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_const_pattern);
      if (lookahead == 'O') ADVANCE(142);
      if (lookahead == 'a') ADVANCE(301);
      if (lookahead == 'o') ADVANCE(298);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(194);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_const_pattern);
      if (lookahead == 'O') ADVANCE(152);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(194);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_const_pattern);
      if (lookahead == 'O') ADVANCE(144);
      if (lookahead == 'a') ADVANCE(232);
      if (lookahead == 'o') ADVANCE(229);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(193);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_const_pattern);
      if (lookahead == 'O') ADVANCE(154);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(193);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_const_pattern);
      if (lookahead == 'O') ADVANCE(136);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(194);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_const_pattern);
      if (lookahead == 'O') ADVANCE(138);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(193);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_const_pattern);
      if (lookahead == 'P') ADVANCE(70);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(194);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_const_pattern);
      if (lookahead == 'P') ADVANCE(103);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(194);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_const_pattern);
      if (lookahead == 'P') ADVANCE(69);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(193);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_const_pattern);
      if (lookahead == 'P') ADVANCE(104);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(193);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_const_pattern);
      if (lookahead == 'P') ADVANCE(173);
      if (lookahead == 'p') ADVANCE(319);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(194);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_const_pattern);
      if (lookahead == 'P') ADVANCE(175);
      if (lookahead == 'p') ADVANCE(250);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(193);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_const_pattern);
      if (lookahead == 'R') ADVANCE(71);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(194);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_const_pattern);
      if (lookahead == 'R') ADVANCE(105);
      if (lookahead == 'T') ADVANCE(30);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(194);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_const_pattern);
      if (lookahead == 'R') ADVANCE(72);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(193);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_const_pattern);
      if (lookahead == 'R') ADVANCE(106);
      if (lookahead == 'T') ADVANCE(29);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(193);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_const_pattern);
      if (lookahead == 'S') ADVANCE(36);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(194);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_const_pattern);
      if (lookahead == 'S') ADVANCE(35);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(193);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_const_pattern);
      if (lookahead == 'S') ADVANCE(167);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(194);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_const_pattern);
      if (lookahead == 'S') ADVANCE(171);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(193);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_const_pattern);
      if (lookahead == 'T') ADVANCE(26);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(194);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_const_pattern);
      if (lookahead == 'T') ADVANCE(151);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(194);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_const_pattern);
      if (lookahead == 'T') ADVANCE(28);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(194);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_const_pattern);
      if (lookahead == 'T') ADVANCE(34);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(194);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_const_pattern);
      if (lookahead == 'T') ADVANCE(25);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(193);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_const_pattern);
      if (lookahead == 'T') ADVANCE(153);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(193);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_const_pattern);
      if (lookahead == 'T') ADVANCE(27);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(193);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_const_pattern);
      if (lookahead == 'T') ADVANCE(33);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(193);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_const_pattern);
      if (lookahead == 'T') ADVANCE(109);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(194);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_const_pattern);
      if (lookahead == 'T') ADVANCE(75);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(194);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_const_pattern);
      if (lookahead == 'T') ADVANCE(110);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(193);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_const_pattern);
      if (lookahead == 'T') ADVANCE(76);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(193);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_const_pattern);
      if (lookahead == 'T') ADVANCE(166);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(194);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_const_pattern);
      if (lookahead == 'T') ADVANCE(170);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(193);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_const_pattern);
      if (lookahead == 'T') ADVANCE(91);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(194);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_const_pattern);
      if (lookahead == 'T') ADVANCE(96);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(193);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_const_pattern);
      if (lookahead == 'W') ADVANCE(54);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(194);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_const_pattern);
      if (lookahead == 'W') ADVANCE(53);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(193);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_const_pattern);
      if (lookahead == 'o') ADVANCE(303);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(194);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_const_pattern);
      if (lookahead == 'o') ADVANCE(234);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(193);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_const_pattern);
      if (lookahead == 's') ADVANCE(318);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(194);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_const_pattern);
      if (lookahead == 's') ADVANCE(249);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(193);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_const_pattern);
      if (lookahead == 'u') ADVANCE(291);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(194);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_const_pattern);
      if (lookahead == 'u') ADVANCE(281);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(194);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_const_pattern);
      if (lookahead == 'u') ADVANCE(222);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(193);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_const_pattern);
      if (lookahead == 'u') ADVANCE(212);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(193);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_const_pattern);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(194);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(194);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_const_pattern);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(191);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(194);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_const_pattern);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(193);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_const_pattern);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(194);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_const_pattern);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_') ADVANCE(195);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(198);
      if (lookahead == '\r') ADVANCE(196);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(198);
      if (lookahead == '\r') ADVANCE(197);
      if (lookahead != 0) ADVANCE(263);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(198);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_status_code_pattern);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'D') ADVANCE(208);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'F') ADVANCE(231);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'P') ADVANCE(207);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'P') ADVANCE(211);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'S') ADVANCE(256);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'a') ADVANCE(59);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'a') ADVANCE(225);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'a') ADVANCE(236);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'a') ADVANCE(255);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'a') ADVANCE(226);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'a') ADVANCE(240);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'a') ADVANCE(242);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'e') ADVANCE(235);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'e') ADVANCE(244);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'e') ADVANCE(237);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'e') ADVANCE(246);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'g') ADVANCE(203);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'i') ADVANCE(233);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'i') ADVANCE(230);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'i') ADVANCE(213);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'i') ADVANCE(227);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'k') ADVANCE(219);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'l') ADVANCE(254);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'm') ADVANCE(202);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'm') ADVANCE(200);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'm') ADVANCE(247);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'm') ADVANCE(248);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'n') ADVANCE(216);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'n') ADVANCE(245);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'o') ADVANCE(221);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'o') ADVANCE(228);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'o') ADVANCE(238);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'p') ADVANCE(251);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'p') ADVANCE(210);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'r') ADVANCE(223);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'r') ADVANCE(258);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'r') ADVANCE(206);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'r') ADVANCE(253);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'r') ADVANCE(224);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'r') ADVANCE(220);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'r') ADVANCE(252);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'r') ADVANCE(215);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'r') ADVANCE(209);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 's') ADVANCE(65);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 's') ADVANCE(61);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 's') ADVANCE(67);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 's') ADVANCE(63);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 's') ADVANCE(57);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 's') ADVANCE(55);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 's') ADVANCE(214);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 't') ADVANCE(218);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 't') ADVANCE(257);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 't') ADVANCE(201);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 't') ADVANCE(243);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 't') ADVANCE(217);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 't') ADVANCE(205);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 't') ADVANCE(239);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'u') ADVANCE(241);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'y') ADVANCE(204);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == '\n') ADVANCE(198);
      if (lookahead == '\r') ADVANCE(196);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1);
      if (lookahead != 0) ADVANCE(261);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_url);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(262);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(198);
      if (lookahead == '\r') ADVANCE(197);
      if (lookahead != 0) ADVANCE(263);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(2);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(5);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '`') ADVANCE(267);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(268);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '`') ADVANCE(265);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(268);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym__line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(268);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(277);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F') ADVANCE(300);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(276);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(280);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(325);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(60);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(294);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(305);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(324);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(295);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(309);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(311);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(304);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(313);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(306);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(315);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(272);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(302);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(299);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(282);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(296);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(288);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(323);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(271);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(269);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(316);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(317);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(285);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(314);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(290);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(297);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(307);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(320);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(279);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(292);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(327);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(275);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(322);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(293);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(289);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(321);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(284);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(278);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(66);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(62);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(68);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(64);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(58);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(56);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(283);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(287);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(326);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(270);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(312);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(286);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(274);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(308);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(310);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(273);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(328);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 14},
  [2] = {.lex_state = 14},
  [3] = {.lex_state = 14},
  [4] = {.lex_state = 14},
  [5] = {.lex_state = 14},
  [6] = {.lex_state = 14},
  [7] = {.lex_state = 14},
  [8] = {.lex_state = 14},
  [9] = {.lex_state = 14},
  [10] = {.lex_state = 14},
  [11] = {.lex_state = 14},
  [12] = {.lex_state = 14},
  [13] = {.lex_state = 14},
  [14] = {.lex_state = 14},
  [15] = {.lex_state = 14},
  [16] = {.lex_state = 14},
  [17] = {.lex_state = 14},
  [18] = {.lex_state = 14},
  [19] = {.lex_state = 14},
  [20] = {.lex_state = 14},
  [21] = {.lex_state = 14},
  [22] = {.lex_state = 14},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 9},
  [30] = {.lex_state = 9},
  [31] = {.lex_state = 7},
  [32] = {.lex_state = 9},
  [33] = {.lex_state = 7},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 8},
  [42] = {.lex_state = 8},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 8},
  [49] = {.lex_state = 7},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 9},
  [52] = {.lex_state = 14},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 14},
  [59] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [aux_sym__statement_token1] = ACTIONS(1),
    [aux_sym_json_request_declaration_token1] = ACTIONS(1),
    [aux_sym_json_request_declaration_token2] = ACTIONS(1),
    [aux_sym_json_request_declaration_token3] = ACTIONS(1),
    [aux_sym_text_body_declaration_token1] = ACTIONS(1),
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
    [sym_const_pattern] = ACTIONS(1),
    [aux_sym_comment_token1] = ACTIONS(3),
    [sym_status_code_pattern] = ACTIONS(1),
    [aux_sym__whitespace_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(54),
    [sym__statement] = STATE(20),
    [sym__declaration_statement] = STATE(21),
    [sym_request_declaration] = STATE(4),
    [sym_request_body_declaration] = STATE(4),
    [sym_json_request_declaration] = STATE(12),
    [sym_text_body_declaration] = STATE(12),
    [sym_header_declaration] = STATE(4),
    [sym_http_response_declaration] = STATE(4),
    [sym_assert_declaration] = STATE(4),
    [sym__literal] = STATE(44),
    [sym_request_literal] = STATE(53),
    [sym_assert_literal] = STATE(53),
    [sym_comment] = STATE(1),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym__statement_token1] = ACTIONS(7),
    [aux_sym_json_request_declaration_token1] = ACTIONS(9),
    [aux_sym_text_body_declaration_token1] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
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
    [anon_sym_QueryStringParams] = ACTIONS(17),
    [anon_sym_FormParams] = ACTIONS(17),
    [anon_sym_MultipartFormData] = ACTIONS(17),
    [anon_sym_Cookies] = ACTIONS(17),
    [anon_sym_Captures] = ACTIONS(17),
    [anon_sym_Asserts] = ACTIONS(17),
    [anon_sym_Options] = ACTIONS(17),
    [sym_scheme_literal] = ACTIONS(19),
    [sym_const_pattern] = ACTIONS(15),
    [aux_sym_comment_token1] = ACTIONS(3),
    [sym_header_name] = ACTIONS(21),
  },
  [2] = {
    [sym__statement] = STATE(20),
    [sym__declaration_statement] = STATE(21),
    [sym_request_declaration] = STATE(4),
    [sym_request_body_declaration] = STATE(4),
    [sym_json_request_declaration] = STATE(12),
    [sym_text_body_declaration] = STATE(12),
    [sym_header_declaration] = STATE(4),
    [sym_http_response_declaration] = STATE(4),
    [sym_assert_declaration] = STATE(4),
    [sym__literal] = STATE(44),
    [sym_request_literal] = STATE(53),
    [sym_assert_literal] = STATE(53),
    [sym_comment] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(23),
    [aux_sym__statement_token1] = ACTIONS(25),
    [aux_sym_json_request_declaration_token1] = ACTIONS(28),
    [aux_sym_text_body_declaration_token1] = ACTIONS(31),
    [anon_sym_LBRACK] = ACTIONS(34),
    [anon_sym_GET] = ACTIONS(37),
    [anon_sym_POST] = ACTIONS(37),
    [anon_sym_PUT] = ACTIONS(37),
    [anon_sym_DELETE] = ACTIONS(37),
    [anon_sym_CONNECT] = ACTIONS(37),
    [anon_sym_OPTIONS] = ACTIONS(37),
    [anon_sym_TRACE] = ACTIONS(37),
    [anon_sym_PATCH] = ACTIONS(37),
    [anon_sym_LINK] = ACTIONS(37),
    [anon_sym_UNLINK] = ACTIONS(37),
    [anon_sym_PURGE] = ACTIONS(37),
    [anon_sym_LOCK] = ACTIONS(37),
    [anon_sym_UNLOCK] = ACTIONS(37),
    [anon_sym_PROPFIND] = ACTIONS(37),
    [anon_sym_VIEW] = ACTIONS(37),
    [anon_sym_QueryStringParams] = ACTIONS(40),
    [anon_sym_FormParams] = ACTIONS(40),
    [anon_sym_MultipartFormData] = ACTIONS(40),
    [anon_sym_Cookies] = ACTIONS(40),
    [anon_sym_Captures] = ACTIONS(40),
    [anon_sym_Asserts] = ACTIONS(40),
    [anon_sym_Options] = ACTIONS(40),
    [sym_scheme_literal] = ACTIONS(43),
    [sym_const_pattern] = ACTIONS(37),
    [aux_sym_comment_token1] = ACTIONS(3),
    [sym_header_name] = ACTIONS(46),
  },
  [3] = {
    [sym__statement] = STATE(20),
    [sym__declaration_statement] = STATE(21),
    [sym_request_declaration] = STATE(4),
    [sym_request_body_declaration] = STATE(4),
    [sym_json_request_declaration] = STATE(12),
    [sym_text_body_declaration] = STATE(12),
    [sym_header_declaration] = STATE(4),
    [sym_http_response_declaration] = STATE(4),
    [sym_assert_declaration] = STATE(4),
    [sym__literal] = STATE(44),
    [sym_request_literal] = STATE(53),
    [sym_assert_literal] = STATE(53),
    [sym_comment] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(49),
    [aux_sym__statement_token1] = ACTIONS(7),
    [aux_sym_json_request_declaration_token1] = ACTIONS(9),
    [aux_sym_text_body_declaration_token1] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
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
    [anon_sym_QueryStringParams] = ACTIONS(17),
    [anon_sym_FormParams] = ACTIONS(17),
    [anon_sym_MultipartFormData] = ACTIONS(17),
    [anon_sym_Cookies] = ACTIONS(17),
    [anon_sym_Captures] = ACTIONS(17),
    [anon_sym_Asserts] = ACTIONS(17),
    [anon_sym_Options] = ACTIONS(17),
    [sym_scheme_literal] = ACTIONS(19),
    [sym_const_pattern] = ACTIONS(15),
    [aux_sym_comment_token1] = ACTIONS(3),
    [sym_header_name] = ACTIONS(21),
  },
  [4] = {
    [sym_comment] = STATE(4),
    [aux_sym__whitespace] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(51),
    [aux_sym__statement_token1] = ACTIONS(51),
    [aux_sym_json_request_declaration_token1] = ACTIONS(51),
    [aux_sym_text_body_declaration_token1] = ACTIONS(51),
    [anon_sym_LBRACK] = ACTIONS(51),
    [anon_sym_GET] = ACTIONS(53),
    [anon_sym_POST] = ACTIONS(53),
    [anon_sym_PUT] = ACTIONS(53),
    [anon_sym_DELETE] = ACTIONS(53),
    [anon_sym_CONNECT] = ACTIONS(53),
    [anon_sym_OPTIONS] = ACTIONS(53),
    [anon_sym_TRACE] = ACTIONS(53),
    [anon_sym_PATCH] = ACTIONS(53),
    [anon_sym_LINK] = ACTIONS(53),
    [anon_sym_UNLINK] = ACTIONS(53),
    [anon_sym_PURGE] = ACTIONS(53),
    [anon_sym_LOCK] = ACTIONS(53),
    [anon_sym_UNLOCK] = ACTIONS(53),
    [anon_sym_PROPFIND] = ACTIONS(53),
    [anon_sym_VIEW] = ACTIONS(53),
    [anon_sym_QueryStringParams] = ACTIONS(53),
    [anon_sym_FormParams] = ACTIONS(53),
    [anon_sym_MultipartFormData] = ACTIONS(53),
    [anon_sym_Cookies] = ACTIONS(53),
    [anon_sym_Captures] = ACTIONS(53),
    [anon_sym_Asserts] = ACTIONS(53),
    [anon_sym_Options] = ACTIONS(53),
    [sym_scheme_literal] = ACTIONS(53),
    [sym_const_pattern] = ACTIONS(53),
    [aux_sym_comment_token1] = ACTIONS(3),
    [sym_header_name] = ACTIONS(53),
    [aux_sym__whitespace_token1] = ACTIONS(55),
  },
  [5] = {
    [sym_comment] = STATE(5),
    [aux_sym__whitespace] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(57),
    [aux_sym__statement_token1] = ACTIONS(57),
    [aux_sym_json_request_declaration_token1] = ACTIONS(57),
    [aux_sym_text_body_declaration_token1] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(57),
    [anon_sym_GET] = ACTIONS(59),
    [anon_sym_POST] = ACTIONS(59),
    [anon_sym_PUT] = ACTIONS(59),
    [anon_sym_DELETE] = ACTIONS(59),
    [anon_sym_CONNECT] = ACTIONS(59),
    [anon_sym_OPTIONS] = ACTIONS(59),
    [anon_sym_TRACE] = ACTIONS(59),
    [anon_sym_PATCH] = ACTIONS(59),
    [anon_sym_LINK] = ACTIONS(59),
    [anon_sym_UNLINK] = ACTIONS(59),
    [anon_sym_PURGE] = ACTIONS(59),
    [anon_sym_LOCK] = ACTIONS(59),
    [anon_sym_UNLOCK] = ACTIONS(59),
    [anon_sym_PROPFIND] = ACTIONS(59),
    [anon_sym_VIEW] = ACTIONS(59),
    [anon_sym_QueryStringParams] = ACTIONS(59),
    [anon_sym_FormParams] = ACTIONS(59),
    [anon_sym_MultipartFormData] = ACTIONS(59),
    [anon_sym_Cookies] = ACTIONS(59),
    [anon_sym_Captures] = ACTIONS(59),
    [anon_sym_Asserts] = ACTIONS(59),
    [anon_sym_Options] = ACTIONS(59),
    [sym_scheme_literal] = ACTIONS(59),
    [sym_const_pattern] = ACTIONS(59),
    [aux_sym_comment_token1] = ACTIONS(3),
    [sym_header_name] = ACTIONS(59),
    [aux_sym__whitespace_token1] = ACTIONS(61),
  },
  [6] = {
    [sym_comment] = STATE(6),
    [aux_sym__whitespace] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(64),
    [aux_sym__statement_token1] = ACTIONS(64),
    [aux_sym_json_request_declaration_token1] = ACTIONS(64),
    [aux_sym_text_body_declaration_token1] = ACTIONS(64),
    [anon_sym_LBRACK] = ACTIONS(64),
    [anon_sym_GET] = ACTIONS(66),
    [anon_sym_POST] = ACTIONS(66),
    [anon_sym_PUT] = ACTIONS(66),
    [anon_sym_DELETE] = ACTIONS(66),
    [anon_sym_CONNECT] = ACTIONS(66),
    [anon_sym_OPTIONS] = ACTIONS(66),
    [anon_sym_TRACE] = ACTIONS(66),
    [anon_sym_PATCH] = ACTIONS(66),
    [anon_sym_LINK] = ACTIONS(66),
    [anon_sym_UNLINK] = ACTIONS(66),
    [anon_sym_PURGE] = ACTIONS(66),
    [anon_sym_LOCK] = ACTIONS(66),
    [anon_sym_UNLOCK] = ACTIONS(66),
    [anon_sym_PROPFIND] = ACTIONS(66),
    [anon_sym_VIEW] = ACTIONS(66),
    [anon_sym_QueryStringParams] = ACTIONS(66),
    [anon_sym_FormParams] = ACTIONS(66),
    [anon_sym_MultipartFormData] = ACTIONS(66),
    [anon_sym_Cookies] = ACTIONS(66),
    [anon_sym_Captures] = ACTIONS(66),
    [anon_sym_Asserts] = ACTIONS(66),
    [anon_sym_Options] = ACTIONS(66),
    [sym_scheme_literal] = ACTIONS(66),
    [sym_const_pattern] = ACTIONS(66),
    [aux_sym_comment_token1] = ACTIONS(3),
    [sym_header_name] = ACTIONS(66),
    [aux_sym__whitespace_token1] = ACTIONS(55),
  },
  [7] = {
    [sym_comment] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(68),
    [aux_sym__statement_token1] = ACTIONS(68),
    [aux_sym_json_request_declaration_token1] = ACTIONS(68),
    [aux_sym_text_body_declaration_token1] = ACTIONS(68),
    [anon_sym_LBRACK] = ACTIONS(68),
    [anon_sym_GET] = ACTIONS(70),
    [anon_sym_POST] = ACTIONS(70),
    [anon_sym_PUT] = ACTIONS(70),
    [anon_sym_DELETE] = ACTIONS(70),
    [anon_sym_CONNECT] = ACTIONS(70),
    [anon_sym_OPTIONS] = ACTIONS(70),
    [anon_sym_TRACE] = ACTIONS(70),
    [anon_sym_PATCH] = ACTIONS(70),
    [anon_sym_LINK] = ACTIONS(70),
    [anon_sym_UNLINK] = ACTIONS(70),
    [anon_sym_PURGE] = ACTIONS(70),
    [anon_sym_LOCK] = ACTIONS(70),
    [anon_sym_UNLOCK] = ACTIONS(70),
    [anon_sym_PROPFIND] = ACTIONS(70),
    [anon_sym_VIEW] = ACTIONS(70),
    [anon_sym_QueryStringParams] = ACTIONS(70),
    [anon_sym_FormParams] = ACTIONS(70),
    [anon_sym_MultipartFormData] = ACTIONS(70),
    [anon_sym_Cookies] = ACTIONS(70),
    [anon_sym_Captures] = ACTIONS(70),
    [anon_sym_Asserts] = ACTIONS(70),
    [anon_sym_Options] = ACTIONS(70),
    [sym_scheme_literal] = ACTIONS(70),
    [sym_const_pattern] = ACTIONS(70),
    [aux_sym_comment_token1] = ACTIONS(3),
    [sym_header_name] = ACTIONS(70),
    [aux_sym__whitespace_token1] = ACTIONS(68),
  },
  [8] = {
    [sym_comment] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(72),
    [aux_sym__statement_token1] = ACTIONS(72),
    [aux_sym_json_request_declaration_token1] = ACTIONS(72),
    [aux_sym_text_body_declaration_token1] = ACTIONS(72),
    [anon_sym_LBRACK] = ACTIONS(72),
    [anon_sym_GET] = ACTIONS(74),
    [anon_sym_POST] = ACTIONS(74),
    [anon_sym_PUT] = ACTIONS(74),
    [anon_sym_DELETE] = ACTIONS(74),
    [anon_sym_CONNECT] = ACTIONS(74),
    [anon_sym_OPTIONS] = ACTIONS(74),
    [anon_sym_TRACE] = ACTIONS(74),
    [anon_sym_PATCH] = ACTIONS(74),
    [anon_sym_LINK] = ACTIONS(74),
    [anon_sym_UNLINK] = ACTIONS(74),
    [anon_sym_PURGE] = ACTIONS(74),
    [anon_sym_LOCK] = ACTIONS(74),
    [anon_sym_UNLOCK] = ACTIONS(74),
    [anon_sym_PROPFIND] = ACTIONS(74),
    [anon_sym_VIEW] = ACTIONS(74),
    [anon_sym_QueryStringParams] = ACTIONS(74),
    [anon_sym_FormParams] = ACTIONS(74),
    [anon_sym_MultipartFormData] = ACTIONS(74),
    [anon_sym_Cookies] = ACTIONS(74),
    [anon_sym_Captures] = ACTIONS(74),
    [anon_sym_Asserts] = ACTIONS(74),
    [anon_sym_Options] = ACTIONS(74),
    [sym_scheme_literal] = ACTIONS(74),
    [sym_const_pattern] = ACTIONS(74),
    [aux_sym_comment_token1] = ACTIONS(3),
    [sym_header_name] = ACTIONS(74),
    [aux_sym__whitespace_token1] = ACTIONS(72),
  },
  [9] = {
    [sym_comment] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(76),
    [aux_sym__statement_token1] = ACTIONS(76),
    [aux_sym_json_request_declaration_token1] = ACTIONS(76),
    [aux_sym_text_body_declaration_token1] = ACTIONS(76),
    [anon_sym_LBRACK] = ACTIONS(76),
    [anon_sym_GET] = ACTIONS(78),
    [anon_sym_POST] = ACTIONS(78),
    [anon_sym_PUT] = ACTIONS(78),
    [anon_sym_DELETE] = ACTIONS(78),
    [anon_sym_CONNECT] = ACTIONS(78),
    [anon_sym_OPTIONS] = ACTIONS(78),
    [anon_sym_TRACE] = ACTIONS(78),
    [anon_sym_PATCH] = ACTIONS(78),
    [anon_sym_LINK] = ACTIONS(78),
    [anon_sym_UNLINK] = ACTIONS(78),
    [anon_sym_PURGE] = ACTIONS(78),
    [anon_sym_LOCK] = ACTIONS(78),
    [anon_sym_UNLOCK] = ACTIONS(78),
    [anon_sym_PROPFIND] = ACTIONS(78),
    [anon_sym_VIEW] = ACTIONS(78),
    [anon_sym_QueryStringParams] = ACTIONS(78),
    [anon_sym_FormParams] = ACTIONS(78),
    [anon_sym_MultipartFormData] = ACTIONS(78),
    [anon_sym_Cookies] = ACTIONS(78),
    [anon_sym_Captures] = ACTIONS(78),
    [anon_sym_Asserts] = ACTIONS(78),
    [anon_sym_Options] = ACTIONS(78),
    [sym_scheme_literal] = ACTIONS(78),
    [sym_const_pattern] = ACTIONS(78),
    [aux_sym_comment_token1] = ACTIONS(3),
    [sym_header_name] = ACTIONS(78),
    [aux_sym__whitespace_token1] = ACTIONS(76),
  },
  [10] = {
    [sym_comment] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(80),
    [aux_sym__statement_token1] = ACTIONS(80),
    [aux_sym_json_request_declaration_token1] = ACTIONS(80),
    [aux_sym_text_body_declaration_token1] = ACTIONS(80),
    [anon_sym_LBRACK] = ACTIONS(80),
    [anon_sym_GET] = ACTIONS(82),
    [anon_sym_POST] = ACTIONS(82),
    [anon_sym_PUT] = ACTIONS(82),
    [anon_sym_DELETE] = ACTIONS(82),
    [anon_sym_CONNECT] = ACTIONS(82),
    [anon_sym_OPTIONS] = ACTIONS(82),
    [anon_sym_TRACE] = ACTIONS(82),
    [anon_sym_PATCH] = ACTIONS(82),
    [anon_sym_LINK] = ACTIONS(82),
    [anon_sym_UNLINK] = ACTIONS(82),
    [anon_sym_PURGE] = ACTIONS(82),
    [anon_sym_LOCK] = ACTIONS(82),
    [anon_sym_UNLOCK] = ACTIONS(82),
    [anon_sym_PROPFIND] = ACTIONS(82),
    [anon_sym_VIEW] = ACTIONS(82),
    [anon_sym_QueryStringParams] = ACTIONS(82),
    [anon_sym_FormParams] = ACTIONS(82),
    [anon_sym_MultipartFormData] = ACTIONS(82),
    [anon_sym_Cookies] = ACTIONS(82),
    [anon_sym_Captures] = ACTIONS(82),
    [anon_sym_Asserts] = ACTIONS(82),
    [anon_sym_Options] = ACTIONS(82),
    [sym_scheme_literal] = ACTIONS(82),
    [sym_const_pattern] = ACTIONS(82),
    [aux_sym_comment_token1] = ACTIONS(3),
    [sym_header_name] = ACTIONS(82),
    [aux_sym__whitespace_token1] = ACTIONS(80),
  },
  [11] = {
    [sym_comment] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(84),
    [aux_sym__statement_token1] = ACTIONS(84),
    [aux_sym_json_request_declaration_token1] = ACTIONS(84),
    [aux_sym_text_body_declaration_token1] = ACTIONS(84),
    [anon_sym_LBRACK] = ACTIONS(84),
    [anon_sym_GET] = ACTIONS(86),
    [anon_sym_POST] = ACTIONS(86),
    [anon_sym_PUT] = ACTIONS(86),
    [anon_sym_DELETE] = ACTIONS(86),
    [anon_sym_CONNECT] = ACTIONS(86),
    [anon_sym_OPTIONS] = ACTIONS(86),
    [anon_sym_TRACE] = ACTIONS(86),
    [anon_sym_PATCH] = ACTIONS(86),
    [anon_sym_LINK] = ACTIONS(86),
    [anon_sym_UNLINK] = ACTIONS(86),
    [anon_sym_PURGE] = ACTIONS(86),
    [anon_sym_LOCK] = ACTIONS(86),
    [anon_sym_UNLOCK] = ACTIONS(86),
    [anon_sym_PROPFIND] = ACTIONS(86),
    [anon_sym_VIEW] = ACTIONS(86),
    [anon_sym_QueryStringParams] = ACTIONS(86),
    [anon_sym_FormParams] = ACTIONS(86),
    [anon_sym_MultipartFormData] = ACTIONS(86),
    [anon_sym_Cookies] = ACTIONS(86),
    [anon_sym_Captures] = ACTIONS(86),
    [anon_sym_Asserts] = ACTIONS(86),
    [anon_sym_Options] = ACTIONS(86),
    [sym_scheme_literal] = ACTIONS(86),
    [sym_const_pattern] = ACTIONS(86),
    [aux_sym_comment_token1] = ACTIONS(3),
    [sym_header_name] = ACTIONS(86),
    [aux_sym__whitespace_token1] = ACTIONS(84),
  },
  [12] = {
    [sym_comment] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(88),
    [aux_sym__statement_token1] = ACTIONS(88),
    [aux_sym_json_request_declaration_token1] = ACTIONS(88),
    [aux_sym_text_body_declaration_token1] = ACTIONS(88),
    [anon_sym_LBRACK] = ACTIONS(88),
    [anon_sym_GET] = ACTIONS(90),
    [anon_sym_POST] = ACTIONS(90),
    [anon_sym_PUT] = ACTIONS(90),
    [anon_sym_DELETE] = ACTIONS(90),
    [anon_sym_CONNECT] = ACTIONS(90),
    [anon_sym_OPTIONS] = ACTIONS(90),
    [anon_sym_TRACE] = ACTIONS(90),
    [anon_sym_PATCH] = ACTIONS(90),
    [anon_sym_LINK] = ACTIONS(90),
    [anon_sym_UNLINK] = ACTIONS(90),
    [anon_sym_PURGE] = ACTIONS(90),
    [anon_sym_LOCK] = ACTIONS(90),
    [anon_sym_UNLOCK] = ACTIONS(90),
    [anon_sym_PROPFIND] = ACTIONS(90),
    [anon_sym_VIEW] = ACTIONS(90),
    [anon_sym_QueryStringParams] = ACTIONS(90),
    [anon_sym_FormParams] = ACTIONS(90),
    [anon_sym_MultipartFormData] = ACTIONS(90),
    [anon_sym_Cookies] = ACTIONS(90),
    [anon_sym_Captures] = ACTIONS(90),
    [anon_sym_Asserts] = ACTIONS(90),
    [anon_sym_Options] = ACTIONS(90),
    [sym_scheme_literal] = ACTIONS(90),
    [sym_const_pattern] = ACTIONS(90),
    [aux_sym_comment_token1] = ACTIONS(3),
    [sym_header_name] = ACTIONS(90),
    [aux_sym__whitespace_token1] = ACTIONS(88),
  },
  [13] = {
    [sym_comment] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(92),
    [aux_sym__statement_token1] = ACTIONS(92),
    [aux_sym_json_request_declaration_token1] = ACTIONS(92),
    [aux_sym_text_body_declaration_token1] = ACTIONS(92),
    [anon_sym_LBRACK] = ACTIONS(92),
    [anon_sym_GET] = ACTIONS(94),
    [anon_sym_POST] = ACTIONS(94),
    [anon_sym_PUT] = ACTIONS(94),
    [anon_sym_DELETE] = ACTIONS(94),
    [anon_sym_CONNECT] = ACTIONS(94),
    [anon_sym_OPTIONS] = ACTIONS(94),
    [anon_sym_TRACE] = ACTIONS(94),
    [anon_sym_PATCH] = ACTIONS(94),
    [anon_sym_LINK] = ACTIONS(94),
    [anon_sym_UNLINK] = ACTIONS(94),
    [anon_sym_PURGE] = ACTIONS(94),
    [anon_sym_LOCK] = ACTIONS(94),
    [anon_sym_UNLOCK] = ACTIONS(94),
    [anon_sym_PROPFIND] = ACTIONS(94),
    [anon_sym_VIEW] = ACTIONS(94),
    [anon_sym_QueryStringParams] = ACTIONS(94),
    [anon_sym_FormParams] = ACTIONS(94),
    [anon_sym_MultipartFormData] = ACTIONS(94),
    [anon_sym_Cookies] = ACTIONS(94),
    [anon_sym_Captures] = ACTIONS(94),
    [anon_sym_Asserts] = ACTIONS(94),
    [anon_sym_Options] = ACTIONS(94),
    [sym_scheme_literal] = ACTIONS(94),
    [sym_const_pattern] = ACTIONS(94),
    [aux_sym_comment_token1] = ACTIONS(3),
    [sym_header_name] = ACTIONS(94),
    [aux_sym__whitespace_token1] = ACTIONS(92),
  },
  [14] = {
    [sym_comment] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(96),
    [aux_sym__statement_token1] = ACTIONS(96),
    [aux_sym_json_request_declaration_token1] = ACTIONS(96),
    [aux_sym_text_body_declaration_token1] = ACTIONS(96),
    [anon_sym_LBRACK] = ACTIONS(96),
    [anon_sym_GET] = ACTIONS(98),
    [anon_sym_POST] = ACTIONS(98),
    [anon_sym_PUT] = ACTIONS(98),
    [anon_sym_DELETE] = ACTIONS(98),
    [anon_sym_CONNECT] = ACTIONS(98),
    [anon_sym_OPTIONS] = ACTIONS(98),
    [anon_sym_TRACE] = ACTIONS(98),
    [anon_sym_PATCH] = ACTIONS(98),
    [anon_sym_LINK] = ACTIONS(98),
    [anon_sym_UNLINK] = ACTIONS(98),
    [anon_sym_PURGE] = ACTIONS(98),
    [anon_sym_LOCK] = ACTIONS(98),
    [anon_sym_UNLOCK] = ACTIONS(98),
    [anon_sym_PROPFIND] = ACTIONS(98),
    [anon_sym_VIEW] = ACTIONS(98),
    [anon_sym_QueryStringParams] = ACTIONS(98),
    [anon_sym_FormParams] = ACTIONS(98),
    [anon_sym_MultipartFormData] = ACTIONS(98),
    [anon_sym_Cookies] = ACTIONS(98),
    [anon_sym_Captures] = ACTIONS(98),
    [anon_sym_Asserts] = ACTIONS(98),
    [anon_sym_Options] = ACTIONS(98),
    [sym_scheme_literal] = ACTIONS(98),
    [sym_const_pattern] = ACTIONS(98),
    [aux_sym_comment_token1] = ACTIONS(3),
    [sym_header_name] = ACTIONS(98),
    [aux_sym__whitespace_token1] = ACTIONS(96),
  },
  [15] = {
    [sym_comment] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(100),
    [aux_sym__statement_token1] = ACTIONS(100),
    [aux_sym_json_request_declaration_token1] = ACTIONS(100),
    [aux_sym_text_body_declaration_token1] = ACTIONS(100),
    [anon_sym_LBRACK] = ACTIONS(100),
    [anon_sym_GET] = ACTIONS(102),
    [anon_sym_POST] = ACTIONS(102),
    [anon_sym_PUT] = ACTIONS(102),
    [anon_sym_DELETE] = ACTIONS(102),
    [anon_sym_CONNECT] = ACTIONS(102),
    [anon_sym_OPTIONS] = ACTIONS(102),
    [anon_sym_TRACE] = ACTIONS(102),
    [anon_sym_PATCH] = ACTIONS(102),
    [anon_sym_LINK] = ACTIONS(102),
    [anon_sym_UNLINK] = ACTIONS(102),
    [anon_sym_PURGE] = ACTIONS(102),
    [anon_sym_LOCK] = ACTIONS(102),
    [anon_sym_UNLOCK] = ACTIONS(102),
    [anon_sym_PROPFIND] = ACTIONS(102),
    [anon_sym_VIEW] = ACTIONS(102),
    [anon_sym_QueryStringParams] = ACTIONS(102),
    [anon_sym_FormParams] = ACTIONS(102),
    [anon_sym_MultipartFormData] = ACTIONS(102),
    [anon_sym_Cookies] = ACTIONS(102),
    [anon_sym_Captures] = ACTIONS(102),
    [anon_sym_Asserts] = ACTIONS(102),
    [anon_sym_Options] = ACTIONS(102),
    [sym_scheme_literal] = ACTIONS(102),
    [sym_const_pattern] = ACTIONS(102),
    [aux_sym_comment_token1] = ACTIONS(3),
    [sym_header_name] = ACTIONS(102),
    [aux_sym__whitespace_token1] = ACTIONS(100),
  },
  [16] = {
    [sym_comment] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(104),
    [aux_sym__statement_token1] = ACTIONS(104),
    [aux_sym_json_request_declaration_token1] = ACTIONS(104),
    [aux_sym_text_body_declaration_token1] = ACTIONS(104),
    [anon_sym_LBRACK] = ACTIONS(104),
    [anon_sym_GET] = ACTIONS(106),
    [anon_sym_POST] = ACTIONS(106),
    [anon_sym_PUT] = ACTIONS(106),
    [anon_sym_DELETE] = ACTIONS(106),
    [anon_sym_CONNECT] = ACTIONS(106),
    [anon_sym_OPTIONS] = ACTIONS(106),
    [anon_sym_TRACE] = ACTIONS(106),
    [anon_sym_PATCH] = ACTIONS(106),
    [anon_sym_LINK] = ACTIONS(106),
    [anon_sym_UNLINK] = ACTIONS(106),
    [anon_sym_PURGE] = ACTIONS(106),
    [anon_sym_LOCK] = ACTIONS(106),
    [anon_sym_UNLOCK] = ACTIONS(106),
    [anon_sym_PROPFIND] = ACTIONS(106),
    [anon_sym_VIEW] = ACTIONS(106),
    [anon_sym_QueryStringParams] = ACTIONS(106),
    [anon_sym_FormParams] = ACTIONS(106),
    [anon_sym_MultipartFormData] = ACTIONS(106),
    [anon_sym_Cookies] = ACTIONS(106),
    [anon_sym_Captures] = ACTIONS(106),
    [anon_sym_Asserts] = ACTIONS(106),
    [anon_sym_Options] = ACTIONS(106),
    [sym_scheme_literal] = ACTIONS(106),
    [sym_const_pattern] = ACTIONS(106),
    [aux_sym_comment_token1] = ACTIONS(3),
    [sym_header_name] = ACTIONS(106),
    [aux_sym__whitespace_token1] = ACTIONS(104),
  },
  [17] = {
    [sym_comment] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(108),
    [aux_sym__statement_token1] = ACTIONS(108),
    [aux_sym_json_request_declaration_token1] = ACTIONS(108),
    [aux_sym_text_body_declaration_token1] = ACTIONS(108),
    [anon_sym_LBRACK] = ACTIONS(108),
    [anon_sym_GET] = ACTIONS(110),
    [anon_sym_POST] = ACTIONS(110),
    [anon_sym_PUT] = ACTIONS(110),
    [anon_sym_DELETE] = ACTIONS(110),
    [anon_sym_CONNECT] = ACTIONS(110),
    [anon_sym_OPTIONS] = ACTIONS(110),
    [anon_sym_TRACE] = ACTIONS(110),
    [anon_sym_PATCH] = ACTIONS(110),
    [anon_sym_LINK] = ACTIONS(110),
    [anon_sym_UNLINK] = ACTIONS(110),
    [anon_sym_PURGE] = ACTIONS(110),
    [anon_sym_LOCK] = ACTIONS(110),
    [anon_sym_UNLOCK] = ACTIONS(110),
    [anon_sym_PROPFIND] = ACTIONS(110),
    [anon_sym_VIEW] = ACTIONS(110),
    [anon_sym_QueryStringParams] = ACTIONS(110),
    [anon_sym_FormParams] = ACTIONS(110),
    [anon_sym_MultipartFormData] = ACTIONS(110),
    [anon_sym_Cookies] = ACTIONS(110),
    [anon_sym_Captures] = ACTIONS(110),
    [anon_sym_Asserts] = ACTIONS(110),
    [anon_sym_Options] = ACTIONS(110),
    [sym_scheme_literal] = ACTIONS(110),
    [sym_const_pattern] = ACTIONS(110),
    [aux_sym_comment_token1] = ACTIONS(3),
    [sym_header_name] = ACTIONS(110),
    [aux_sym__whitespace_token1] = ACTIONS(108),
  },
  [18] = {
    [sym_comment] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(112),
    [aux_sym__statement_token1] = ACTIONS(112),
    [aux_sym_json_request_declaration_token1] = ACTIONS(112),
    [aux_sym_text_body_declaration_token1] = ACTIONS(112),
    [anon_sym_LBRACK] = ACTIONS(112),
    [anon_sym_GET] = ACTIONS(114),
    [anon_sym_POST] = ACTIONS(114),
    [anon_sym_PUT] = ACTIONS(114),
    [anon_sym_DELETE] = ACTIONS(114),
    [anon_sym_CONNECT] = ACTIONS(114),
    [anon_sym_OPTIONS] = ACTIONS(114),
    [anon_sym_TRACE] = ACTIONS(114),
    [anon_sym_PATCH] = ACTIONS(114),
    [anon_sym_LINK] = ACTIONS(114),
    [anon_sym_UNLINK] = ACTIONS(114),
    [anon_sym_PURGE] = ACTIONS(114),
    [anon_sym_LOCK] = ACTIONS(114),
    [anon_sym_UNLOCK] = ACTIONS(114),
    [anon_sym_PROPFIND] = ACTIONS(114),
    [anon_sym_VIEW] = ACTIONS(114),
    [anon_sym_QueryStringParams] = ACTIONS(114),
    [anon_sym_FormParams] = ACTIONS(114),
    [anon_sym_MultipartFormData] = ACTIONS(114),
    [anon_sym_Cookies] = ACTIONS(114),
    [anon_sym_Captures] = ACTIONS(114),
    [anon_sym_Asserts] = ACTIONS(114),
    [anon_sym_Options] = ACTIONS(114),
    [sym_scheme_literal] = ACTIONS(114),
    [sym_const_pattern] = ACTIONS(114),
    [aux_sym_comment_token1] = ACTIONS(3),
    [sym_header_name] = ACTIONS(114),
    [aux_sym__whitespace_token1] = ACTIONS(112),
  },
  [19] = {
    [sym_comment] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(116),
    [aux_sym__statement_token1] = ACTIONS(116),
    [aux_sym_json_request_declaration_token1] = ACTIONS(116),
    [aux_sym_text_body_declaration_token1] = ACTIONS(116),
    [anon_sym_LBRACK] = ACTIONS(116),
    [anon_sym_GET] = ACTIONS(118),
    [anon_sym_POST] = ACTIONS(118),
    [anon_sym_PUT] = ACTIONS(118),
    [anon_sym_DELETE] = ACTIONS(118),
    [anon_sym_CONNECT] = ACTIONS(118),
    [anon_sym_OPTIONS] = ACTIONS(118),
    [anon_sym_TRACE] = ACTIONS(118),
    [anon_sym_PATCH] = ACTIONS(118),
    [anon_sym_LINK] = ACTIONS(118),
    [anon_sym_UNLINK] = ACTIONS(118),
    [anon_sym_PURGE] = ACTIONS(118),
    [anon_sym_LOCK] = ACTIONS(118),
    [anon_sym_UNLOCK] = ACTIONS(118),
    [anon_sym_PROPFIND] = ACTIONS(118),
    [anon_sym_VIEW] = ACTIONS(118),
    [anon_sym_QueryStringParams] = ACTIONS(118),
    [anon_sym_FormParams] = ACTIONS(118),
    [anon_sym_MultipartFormData] = ACTIONS(118),
    [anon_sym_Cookies] = ACTIONS(118),
    [anon_sym_Captures] = ACTIONS(118),
    [anon_sym_Asserts] = ACTIONS(118),
    [anon_sym_Options] = ACTIONS(118),
    [sym_scheme_literal] = ACTIONS(118),
    [sym_const_pattern] = ACTIONS(118),
    [aux_sym_comment_token1] = ACTIONS(3),
    [sym_header_name] = ACTIONS(118),
    [aux_sym__whitespace_token1] = ACTIONS(116),
  },
  [20] = {
    [sym_comment] = STATE(20),
    [ts_builtin_sym_end] = ACTIONS(120),
    [aux_sym__statement_token1] = ACTIONS(120),
    [aux_sym_json_request_declaration_token1] = ACTIONS(120),
    [aux_sym_text_body_declaration_token1] = ACTIONS(120),
    [anon_sym_LBRACK] = ACTIONS(120),
    [anon_sym_GET] = ACTIONS(122),
    [anon_sym_POST] = ACTIONS(122),
    [anon_sym_PUT] = ACTIONS(122),
    [anon_sym_DELETE] = ACTIONS(122),
    [anon_sym_CONNECT] = ACTIONS(122),
    [anon_sym_OPTIONS] = ACTIONS(122),
    [anon_sym_TRACE] = ACTIONS(122),
    [anon_sym_PATCH] = ACTIONS(122),
    [anon_sym_LINK] = ACTIONS(122),
    [anon_sym_UNLINK] = ACTIONS(122),
    [anon_sym_PURGE] = ACTIONS(122),
    [anon_sym_LOCK] = ACTIONS(122),
    [anon_sym_UNLOCK] = ACTIONS(122),
    [anon_sym_PROPFIND] = ACTIONS(122),
    [anon_sym_VIEW] = ACTIONS(122),
    [anon_sym_QueryStringParams] = ACTIONS(122),
    [anon_sym_FormParams] = ACTIONS(122),
    [anon_sym_MultipartFormData] = ACTIONS(122),
    [anon_sym_Cookies] = ACTIONS(122),
    [anon_sym_Captures] = ACTIONS(122),
    [anon_sym_Asserts] = ACTIONS(122),
    [anon_sym_Options] = ACTIONS(122),
    [sym_scheme_literal] = ACTIONS(122),
    [sym_const_pattern] = ACTIONS(122),
    [aux_sym_comment_token1] = ACTIONS(3),
    [sym_header_name] = ACTIONS(122),
  },
  [21] = {
    [sym_comment] = STATE(21),
    [ts_builtin_sym_end] = ACTIONS(124),
    [aux_sym__statement_token1] = ACTIONS(124),
    [aux_sym_json_request_declaration_token1] = ACTIONS(124),
    [aux_sym_text_body_declaration_token1] = ACTIONS(124),
    [anon_sym_LBRACK] = ACTIONS(124),
    [anon_sym_GET] = ACTIONS(126),
    [anon_sym_POST] = ACTIONS(126),
    [anon_sym_PUT] = ACTIONS(126),
    [anon_sym_DELETE] = ACTIONS(126),
    [anon_sym_CONNECT] = ACTIONS(126),
    [anon_sym_OPTIONS] = ACTIONS(126),
    [anon_sym_TRACE] = ACTIONS(126),
    [anon_sym_PATCH] = ACTIONS(126),
    [anon_sym_LINK] = ACTIONS(126),
    [anon_sym_UNLINK] = ACTIONS(126),
    [anon_sym_PURGE] = ACTIONS(126),
    [anon_sym_LOCK] = ACTIONS(126),
    [anon_sym_UNLOCK] = ACTIONS(126),
    [anon_sym_PROPFIND] = ACTIONS(126),
    [anon_sym_VIEW] = ACTIONS(126),
    [anon_sym_QueryStringParams] = ACTIONS(126),
    [anon_sym_FormParams] = ACTIONS(126),
    [anon_sym_MultipartFormData] = ACTIONS(126),
    [anon_sym_Cookies] = ACTIONS(126),
    [anon_sym_Captures] = ACTIONS(126),
    [anon_sym_Asserts] = ACTIONS(126),
    [anon_sym_Options] = ACTIONS(126),
    [sym_scheme_literal] = ACTIONS(126),
    [sym_const_pattern] = ACTIONS(126),
    [aux_sym_comment_token1] = ACTIONS(3),
    [sym_header_name] = ACTIONS(126),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(22), 1,
      sym_comment,
    STATE(56), 1,
      sym_assert_literal,
    ACTIONS(128), 7,
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
    ACTIONS(130), 1,
      aux_sym_json_request_declaration_token2,
    ACTIONS(132), 1,
      aux_sym_json_request_declaration_token3,
    ACTIONS(134), 1,
      sym__line,
    STATE(23), 1,
      sym_comment,
    STATE(27), 1,
      aux_sym_json_request_declaration_repeat1,
    STATE(36), 1,
      aux_sym_json_request_declaration_repeat2,
  [41] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(136), 1,
      aux_sym_json_request_declaration_token2,
    ACTIONS(138), 1,
      aux_sym_text_body_declaration_token2,
    ACTIONS(140), 1,
      sym__line,
    STATE(24), 1,
      sym_comment,
    STATE(28), 1,
      aux_sym_json_request_declaration_repeat1,
    STATE(39), 1,
      aux_sym_json_request_declaration_repeat2,
  [63] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(130), 1,
      aux_sym_json_request_declaration_token2,
    ACTIONS(134), 1,
      sym__line,
    ACTIONS(142), 1,
      aux_sym_json_request_declaration_token3,
    STATE(23), 1,
      aux_sym_json_request_declaration_repeat1,
    STATE(25), 1,
      sym_comment,
    STATE(40), 1,
      aux_sym_json_request_declaration_repeat2,
  [85] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(136), 1,
      aux_sym_json_request_declaration_token2,
    ACTIONS(140), 1,
      sym__line,
    ACTIONS(144), 1,
      aux_sym_text_body_declaration_token2,
    STATE(24), 1,
      aux_sym_json_request_declaration_repeat1,
    STATE(26), 1,
      sym_comment,
    STATE(38), 1,
      aux_sym_json_request_declaration_repeat2,
  [107] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(146), 1,
      aux_sym_json_request_declaration_token2,
    ACTIONS(149), 1,
      aux_sym_json_request_declaration_token3,
    ACTIONS(151), 1,
      sym__line,
    STATE(27), 2,
      sym_comment,
      aux_sym_json_request_declaration_repeat1,
  [124] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(149), 1,
      aux_sym_text_body_declaration_token2,
    ACTIONS(151), 1,
      sym__line,
    ACTIONS(153), 1,
      aux_sym_json_request_declaration_token2,
    STATE(28), 2,
      sym_comment,
      aux_sym_json_request_declaration_repeat1,
  [141] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(156), 1,
      sym_header_value,
    ACTIONS(158), 1,
      aux_sym__whitespace_token1,
    STATE(29), 1,
      sym_comment,
    STATE(30), 1,
      aux_sym__whitespace,
  [157] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(158), 1,
      aux_sym__whitespace_token1,
    ACTIONS(160), 1,
      sym_header_value,
    STATE(30), 1,
      sym_comment,
    STATE(32), 1,
      aux_sym__whitespace,
  [173] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(162), 1,
      sym_url,
    ACTIONS(164), 1,
      aux_sym__whitespace_token1,
    STATE(31), 1,
      sym_comment,
    STATE(33), 1,
      aux_sym__whitespace,
  [189] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(57), 1,
      sym_header_value,
    ACTIONS(166), 1,
      aux_sym__whitespace_token1,
    STATE(32), 2,
      sym_comment,
      aux_sym__whitespace,
  [203] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(59), 1,
      sym_url,
    ACTIONS(169), 1,
      aux_sym__whitespace_token1,
    STATE(33), 2,
      sym_comment,
      aux_sym__whitespace,
  [217] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(172), 1,
      aux_sym_text_body_declaration_token2,
    ACTIONS(174), 1,
      sym__line,
    STATE(34), 2,
      sym_comment,
      aux_sym_json_request_declaration_repeat2,
  [231] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(179), 1,
      sym__line,
    STATE(35), 1,
      sym_comment,
    ACTIONS(177), 2,
      aux_sym_json_request_declaration_token2,
      aux_sym_text_body_declaration_token2,
  [245] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(134), 1,
      sym__line,
    ACTIONS(181), 1,
      aux_sym_json_request_declaration_token3,
    STATE(36), 1,
      sym_comment,
    STATE(37), 1,
      aux_sym_json_request_declaration_repeat2,
  [261] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(172), 1,
      aux_sym_json_request_declaration_token3,
    ACTIONS(183), 1,
      sym__line,
    STATE(37), 2,
      sym_comment,
      aux_sym_json_request_declaration_repeat2,
  [275] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(138), 1,
      aux_sym_text_body_declaration_token2,
    ACTIONS(140), 1,
      sym__line,
    STATE(34), 1,
      aux_sym_json_request_declaration_repeat2,
    STATE(38), 1,
      sym_comment,
  [291] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(140), 1,
      sym__line,
    ACTIONS(186), 1,
      aux_sym_text_body_declaration_token2,
    STATE(34), 1,
      aux_sym_json_request_declaration_repeat2,
    STATE(39), 1,
      sym_comment,
  [307] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(132), 1,
      aux_sym_json_request_declaration_token3,
    ACTIONS(134), 1,
      sym__line,
    STATE(37), 1,
      aux_sym_json_request_declaration_repeat2,
    STATE(40), 1,
      sym_comment,
  [323] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(188), 1,
      sym_status_code_pattern,
    ACTIONS(190), 1,
      aux_sym__whitespace_token1,
    STATE(41), 1,
      sym_comment,
    STATE(42), 1,
      aux_sym__whitespace,
  [339] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(57), 1,
      sym_status_code_pattern,
    ACTIONS(192), 1,
      aux_sym__whitespace_token1,
    STATE(42), 2,
      sym_comment,
      aux_sym__whitespace,
  [353] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(179), 1,
      sym__line,
    STATE(43), 1,
      sym_comment,
    ACTIONS(177), 2,
      aux_sym_json_request_declaration_token2,
      aux_sym_json_request_declaration_token3,
  [367] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(195), 1,
      aux_sym__whitespace_token1,
    STATE(31), 1,
      aux_sym__whitespace,
    STATE(44), 1,
      sym_comment,
  [380] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(190), 1,
      aux_sym__whitespace_token1,
    STATE(41), 1,
      aux_sym__whitespace,
    STATE(45), 1,
      sym_comment,
  [393] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(172), 1,
      aux_sym_text_body_declaration_token2,
    ACTIONS(197), 1,
      sym__line,
    STATE(46), 1,
      sym_comment,
  [406] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(47), 1,
      sym_comment,
    ACTIONS(199), 2,
      anon_sym_RBRACK,
      aux_sym__whitespace_token1,
  [417] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(48), 1,
      sym_comment,
    ACTIONS(72), 2,
      sym_status_code_pattern,
      aux_sym__whitespace_token1,
  [428] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(49), 1,
      sym_comment,
    ACTIONS(74), 2,
      sym_url,
      aux_sym__whitespace_token1,
  [439] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(172), 1,
      aux_sym_json_request_declaration_token3,
    ACTIONS(197), 1,
      sym__line,
    STATE(50), 1,
      sym_comment,
  [452] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(51), 1,
      sym_comment,
    ACTIONS(72), 2,
      sym_header_value,
      aux_sym__whitespace_token1,
  [463] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(201), 1,
      aux_sym__statement_token1,
    STATE(52), 1,
      sym_comment,
  [473] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(203), 1,
      aux_sym__whitespace_token1,
    STATE(53), 1,
      sym_comment,
  [483] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(205), 1,
      ts_builtin_sym_end,
    STATE(54), 1,
      sym_comment,
  [493] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(207), 1,
      anon_sym_COLON,
    STATE(55), 1,
      sym_comment,
  [503] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(209), 1,
      anon_sym_RBRACK,
    STATE(56), 1,
      sym_comment,
  [513] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(211), 1,
      aux_sym__whitespace_token1,
    STATE(57), 1,
      sym_comment,
  [523] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(213), 1,
      aux_sym__statement_token1,
    STATE(58), 1,
      sym_comment,
  [533] = 1,
    ACTIONS(215), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(22)] = 0,
  [SMALL_STATE(23)] = 19,
  [SMALL_STATE(24)] = 41,
  [SMALL_STATE(25)] = 63,
  [SMALL_STATE(26)] = 85,
  [SMALL_STATE(27)] = 107,
  [SMALL_STATE(28)] = 124,
  [SMALL_STATE(29)] = 141,
  [SMALL_STATE(30)] = 157,
  [SMALL_STATE(31)] = 173,
  [SMALL_STATE(32)] = 189,
  [SMALL_STATE(33)] = 203,
  [SMALL_STATE(34)] = 217,
  [SMALL_STATE(35)] = 231,
  [SMALL_STATE(36)] = 245,
  [SMALL_STATE(37)] = 261,
  [SMALL_STATE(38)] = 275,
  [SMALL_STATE(39)] = 291,
  [SMALL_STATE(40)] = 307,
  [SMALL_STATE(41)] = 323,
  [SMALL_STATE(42)] = 339,
  [SMALL_STATE(43)] = 353,
  [SMALL_STATE(44)] = 367,
  [SMALL_STATE(45)] = 380,
  [SMALL_STATE(46)] = 393,
  [SMALL_STATE(47)] = 406,
  [SMALL_STATE(48)] = 417,
  [SMALL_STATE(49)] = 428,
  [SMALL_STATE(50)] = 439,
  [SMALL_STATE(51)] = 452,
  [SMALL_STATE(52)] = 463,
  [SMALL_STATE(53)] = 473,
  [SMALL_STATE(54)] = 483,
  [SMALL_STATE(55)] = 493,
  [SMALL_STATE(56)] = 503,
  [SMALL_STATE(57)] = 513,
  [SMALL_STATE(58)] = 523,
  [SMALL_STATE(59)] = 533,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(21),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(25),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(26),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(22),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(57),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(47),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(45),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(55),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__declaration_statement, 1),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__declaration_statement, 1),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__whitespace, 2),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__whitespace, 2),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__whitespace, 2), SHIFT_REPEAT(8),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__declaration_statement, 2),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__declaration_statement, 2),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_body_declaration, 4),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_body_declaration, 4),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__whitespace, 1),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__whitespace, 1),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_declaration, 4, .production_id = 3),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header_declaration, 4, .production_id = 3),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_body_declaration, 2),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_body_declaration, 2),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_request_declaration, 4),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_request_declaration, 4),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request_body_declaration, 1),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request_body_declaration, 1),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request_declaration, 3, .production_id = 2),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request_declaration, 3, .production_id = 2),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_declaration, 3, .production_id = 1),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header_declaration, 3, .production_id = 1),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_request_declaration, 3),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_request_declaration, 3),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_http_response_declaration, 3),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_http_response_declaration, 3),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_request_declaration, 2),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_request_declaration, 2),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assert_declaration, 3),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assert_declaration, 3),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_body_declaration, 3),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_body_declaration, 3),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 1),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_request_declaration_repeat1, 2), SHIFT_REPEAT(43),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_request_declaration_repeat1, 2),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_json_request_declaration_repeat1, 2),
  [153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_request_declaration_repeat1, 2), SHIFT_REPEAT(35),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__whitespace, 2), SHIFT_REPEAT(51),
  [169] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__whitespace, 2), SHIFT_REPEAT(49),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_request_declaration_repeat2, 2),
  [174] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_request_declaration_repeat2, 2), SHIFT_REPEAT(58),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_request_declaration_repeat1, 1),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_json_request_declaration_repeat1, 1),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [183] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_request_declaration_repeat2, 2), SHIFT_REPEAT(52),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [192] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__whitespace, 2), SHIFT_REPEAT(48),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_json_request_declaration_repeat2, 2),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assert_literal, 1),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal, 1),
  [205] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request_literal, 1),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
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
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif

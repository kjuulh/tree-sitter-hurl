const NL = token.immediate(/[\r\n]+/);

const PREC = {
  comment: 1,
  request: 2,
  header: 3,
  param: 4,
  body: 5,
  var: 6,
  whitespace: 7,
  new_line: 8,
}

module.exports = grammar({
  name: "hurl",

  word: $ => $.identifier,

  extras: $ => [
    $.comment,
  ],

  rules: {
    source_file: ($) => repeat($._statement),

    // statements

    _statement: ($) =>
      choice($._declaration_statement, NL),

    _declaration_statement: ($) => seq(
      choice(
        $.request_declaration,
        $.header_declaration,
        alias($.http_response_declaration, $.response),
        $.assert_declaration,
        alias($.request_body_declaration, $.body),
      ),
      prec.left(PREC.whitespace, optional($._whitespace)),
    ),

    // declarations

    request_declaration: ($) =>
      prec.left(PREC.request,
        seq($._literal, $._whitespace, field("url", $.url)),
      ),

    request_body_declaration: $ => choice(
      $.json_request_declaration,
      $.text_body_declaration
    ),

    json_request_declaration: $ => prec.left(PREC.body, seq(/\{/, optional(repeat(choice(/\n/))), repeat(seq($._line, NL)), /\}\n\n/)),
    text_body_declaration: $ => prec.left(PREC.body, seq(/```/, optional(repeat(choice(/\n/))), repeat(seq($._line, NL)), /```\n\n/)),


    header_declaration: ($) =>
      seq(
        field("header_name", $.header_name),
        ":",
        optional($._whitespace),
        field("header_value", $.header_value)
      ),

    http_response_declaration: $ => seq($.scheme_literal, $._whitespace, $.status_code_pattern),

    assert_declaration: $ => seq('[', $.assert_literal, ']'),

    // literals

    _literal: ($) => choice($.request_literal, $.assert_literal),

    request_literal: ($) =>
      choice(
        "GET",
        "POST",
        "PUT",
        "DELETE",
        "CONNECT",
        "OPTIONS",
        "TRACE",
        "PATCH",
        "LINK",
        "UNLINK",
        "PURGE",
        "LOCK",
        "UNLOCK",
        "PROPFIND",
        "VIEW",
        $.const_pattern
      ),


    assert_literal: $ => choice(
      "QueryStringParams",
      "FormParams",
      "MultipartFormData",
      "Cookies",
      "Captures",
      "Asserts",
      "Options",
    ),

    scheme_literal: $ => "HTTP",

    // patterns

    const_pattern: $ => /[A-Z_0-9\/\\\d]+/,
    comment: _ => prec.left(PREC.comment, token(seq("#", /.*/, NL))),
    status_code_pattern: $ => /[\d]{3}/,
    header_name: ($) => /[a-zA-Z-_0-9]+/,
    header_value: ($) =>
      /[a-zA-Z\-_0-9\/\\]+/,

    url: ($) => /\S+/,
    _line: _ => /[^\n]+/,
    identifier: _ => /[A-Za-z_.\d\u00A1-\uFFFF-]+/,
    _whitespace: _ => repeat1(/[\t\v ]/),
  },
});

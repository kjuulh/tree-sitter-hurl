module.exports = grammar({
  name: "hurl",

  rules: {
    source_file: ($) => repeat($._statement),

    // statements

    _statement: ($) =>
      choice($._declaration_statement),

    _declaration_statement: ($) =>
      choice(
        $.request_declaration,
        $.header_declaration,
        alias($.http_response_declaration, $.response),
      ),

    // declarations

    request_declaration: ($) =>
      seq($._literal, field("url", $.url)),

    header_declaration: ($) =>
      seq(
        field("header_name", $.header_name),
        ":",
        field("header_value", $.header_value)
      ),

    http_response_declaration: $ => seq($.scheme_literal, $._space_literal, $.status_code_pattern),

    // literals

    _literal: ($) => choice($.request_literal),

    request_literal: (_$) =>
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
        "VIEW"
      ),

    scheme_literal: $ => "HTTP",

    _space_literal: $ => " ",

    // patterns

    status_code_pattern: $ => /[\d]{3}/,
    header_name: ($) => /[a-zA-Z-_0-9]+/,
    header_value: ($) =>
      /[a-zA-Z-_0-9\s:;\.,\\\/\"\'\?\!\(\)\{\}\[\]@<>=\-\+\*\#\$\&`|~^%]+/,

    url: ($) => /\S+/,
  },
});

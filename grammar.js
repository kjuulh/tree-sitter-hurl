module.exports = grammar({
  name: "hurl",

  rules: {
    source_file: ($) => repeat($._statement),

    // statements

    _statement: ($) =>
      choice($._declaration_statement),

    _declaration_statement: ($) =>
      choice($.request_declaration),

    request_declaration: ($) =>
      seq($._literal, field("url", $._url)),

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

    _url: ($) => /\S+/,
  },
});

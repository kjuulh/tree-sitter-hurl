# Hurl tree-sitter Parser

[hurl.dev](https://hurl.dev)

## Introduction

Welcome to the Hurl Tree-sitter parser. This project is aimed at creating a
syntax parser for Hurl, a text form of the CURL tool using the Tree-sitter
parsing library.

Tree-sitter is a parser generator tool and an incremental parsing library. It
aims to build a concrete syntax tree for a source code and efficiently update
the syntax tree as your source code changes.

This parser aids in transforming the text representation of Hurl into a
structured format that can be utilized by various text editors or IDEs for
features like syntax highlighting, code linting, and intelligent code
completion.

## Dependencies

- [Node.js](https://nodejs.org/)

## Installation

1. Clone this repository:
   ```
   git clone https://github.com/kjuulh/tree-sitter-hurl.git
   ```

2. Navigate to the repo:
   ```
   cd tree-sitter-hurl
   ```

3. Install the required dependencies:
   ```
   npm install
   ```

4. Compile the parser:
   ```
   npm run ci # runs both generate and test (for good measure)
   ```

## Usage

To parse a file or text, run:

```
tree-sitter parse examples/<file-name>.hurl
```

This will generate a syntax tree for the input file.

### Neovim

Link to file:
https://github.com/kjuulh/lazyvim/blob/ff018a06c332ab69d48faa546f789bd4cedb4710/lua/plugins/treesitter.lua

```lua
-- https://github.com/nvim-treesitter/nvim-treesitter/tree/master#adding-parsers
parser_config.hurl = {
  install_info = {
    url = "~/git/github.com/kjuulh/tree-sitter-hurl", -- or your own path, i.e. where you cloned the repository
    files = { "src/parser.c" },
    branch = "main",
    generate_requires_npm = false,
    requires_generate_from_grammar = false,
  },
  filetype = "hurl",
}

-- https://neovim.io/doc/user/lua.html#vim.filetype.add()
-- Search for vim.filetype.add
vim.filetype.add({
  extension = {
    hurl = "hurl"
  }
})
```

Add your own queries and injections as well (will come with nvim-treesitter, if
it ever goes upstream)

```
cp -r queries ~/.config/nvim
```

Moves queries to your own nvim config. It may be placed somewhere else use
`:h rfp` for help

## Testing

Tests can be performed using the following command:

```
npm run test
```

All test files are located in the `./corpus` directory. If you wish to add more
test cases, simply add new `.txt` files in the corpus directory following the
existing naming convention.

## Contribution

Contributions are very much welcomed and appreciated. Please open an issue or
submit a pull request if you find any bugs or think of a new feature that can be
added.

## License

This project is licensed under the terms of the MIT license. For more details,
please see the `LICENSE` file.

## Contact

For any questions or concerns, please open an issue on this repository.

# tree-sitter-crystal

A WIP [tree-sitter](https://tree-sitter.github.io/) grammar for [Crystal](https://crystal-lang.org).

## Status

- [x] Comments
- [ ] Literals
    - [x] nil
	- [x] bool
	- [x] float
	- [x] integer
	- [x] symbol
	- [x] char
	- [ ] string
		- [x] literals
		- [ ] interpolation
	- [x] array
	- [x] hash
	- [x] array-or-hash-index-access (`foo[0]` or `foo[:something]`)
	- [ ] range
	- [x] regex
	- [x] tuple
	- [x] namedtuple
	- [ ] proc
	- [ ] command
		- [x] literals
		- [ ] interpolation
- [x] Assignment
	- [x] to local var
	- [x] to instance var
	- [x] to class var
	- [x] to constant
	- [x] to "assignment methods"/properties
	- [x] multiple-assignment
- [ ] Binary operations
	- [x] basic support
	- [ ] per-operator precedence definitions
- [x] Variables
	- [x] local variables
	- [x] instance variables
	- [x] class variables
	- [x] constants
- [ ] Control expressions
	- [ ] if/else
		- [ ] "block-level" form (`if something ; stuff ; else ; end`)
		- [ ] "suffix" form (`foo = bar if something`)
	- [ ] unless
		- [ ] "block-level" form (`unless something ; stuff ; else ; end`)
		- [ ] "suffix" form (`foo = bar unless something`)
	- [ ] case
	- [ ] while
	- [ ] until 
- [x] `require` statements
- [ ] Type grammar
	- [x] Basic "bare" types (e.g. `Foo`)
	- [x] Namespaced types (e.g. `Some::Namespace::Foo`)
	- [x] Generic types (e.g. `Foo(T)` and `Foo(A, B)`)
	- [ ] Union types
	- [x] Class definitions
	- [x] Module definitions
		- [x] `include` statements
	- [x] Structs
	- [x] Enums
	- [x] Type annotations  
		- [x] in variable declarations
		- [x] in method parameter declarations
		- [x] as method return types
	- [ ] `alias` statements
- [ ] Blocks
	- [x] `do` blocks (with and without parameters)
	- [x] `{|x| whatever }` blocks (with parameters only)
	- [ ] `begin`...`rescue`...`end` blocks
- [x] Method definitions
- [x] Method calls
- [ ] Splats
	- [ ] in method calls
	- [ ] in method definitions
- [ ] Macros
- [ ] Annotations

## Developing

To test `tree-sitter generate && tree-sitter test` (or just `npm test`)


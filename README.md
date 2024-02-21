# MyLang Compiler

## Overview

The MyLang Compiler is a simple compiler that translates source code written in MyLang, a basic programming language, into equivalent C code. It includes a lexer, parser, and code generator to handle basic arithmetic expressions and variable assignments.To compile the project run make inside the project root. You need to have  `make` installed on your OS.


## Features

- **Arithmetic Expressions:** Support for basic arithmetic operations, including addition, subtraction, multiplication, and division.
- **Integer Variables:** Ability to use integer variables in expressions.
- **Parentheses for Grouping:** Support for grouping expressions using parentheses.
- **Variable Assignment:** Assign values to variables using the '=' operator.
- **C Code Generation:** Translates MyLang code into equivalent C code.

## Getting Started

### Prerequisites

- C compiler (e.g., GCC) for building the MyLang compiler.

### Building the Compiler

1. Clone the repository:

    ```bash
    git clone https://github.com/yourusername/mylang-compiler.git
    cd mylang-compiler
    ```

2. Build the compiler:

    ```bash
    make
    ```

### Usage

Run the MyLang compiler with the input MyLang source file:

```bash
./mylang_compiler input.mylang
```

This will generate a C code file (`output.c`) equivalent to the input MyLang code.

### Example

Input MyLang code (`example.mylang`):

```mylang
result = 2 * (3 + 4) - 5
```

Compile and run:

```bash
./mylang_compiler example.mylang
gcc output.c -o output
./output
```

Output:

```plaintext
3
```

## Contributing

Contributions are welcome! If you have suggestions, bug reports, or want to add new features, please open an issue or submit a pull request.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

---

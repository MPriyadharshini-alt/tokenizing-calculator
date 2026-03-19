# Tokenizing Calculator (C)

A command-line calculator built in C that tokenizes, parses, and evaluates mathematical expressions.  
Created as a learning project to understand lexing, parsing, and expression evaluation in C.

## Features
- Supports basic arithmetic: +, -, *, /
- Correct operator precedence
- Parentheses handling
- Tokenization and parsing
- Clean and modular C code

## Installation

Clone the repository:

git clone https://github.com/MPriyadharshini-alt/tokenizing-calculator.git
cd tokenizing-calculator

Compile:

make        # Linux / Mac
calc.exe    # Windows

## Usage

Run the calculator:

./calc       # Linux / Mac
.\calc.exe     # Windows

Example:

> (5 + 2) * 3
21
> 10 / (2 + 3)
2

## Project Structure

tokenizing-calculator/
├─ src/       # Source files (.c)
├─ include/   # Header files (.h)
├─ tests/     # Optional test scripts
├─ Makefile   # Build commands
├─ README.md
└─ .gitignore

## Future Improvements
- Support for floating point numbers
- Advanced operators: %, ^, sqrt
- Better error handling for invalid input
- Automated unit tests

## License
MIT License

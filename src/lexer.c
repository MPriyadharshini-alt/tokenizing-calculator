#include <stdio.h>
#include <ctype.h>
#include "lexer.h"

Token get_next_token(const char **input) {
    // Skip spaces
    while (**input == ' ') {
        (*input)++;
    }

    // If number
    if (isdigit(**input)) {
        double value = 0;

        while (isdigit(**input)) {
            value = value * 10 + (**input - '0');
            (*input)++;
        }

        Token token;
        token.type = TOKEN_NUMBER;
        token.value = value;
        return token;
    }

    // End of input
    if (**input == '\0') {
        Token token;
        token.type = TOKEN_EOF;
        return token;
    }

    // Unknown character
    Token token;
    token.type = TOKEN_EOF;
    return token;
}
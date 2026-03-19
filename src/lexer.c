#include <ctype.h>
#include "lexer.h"

Token get_next_token(const char **input) {

    while (**input == ' ') {
        (*input)++;
    }

    // Handle numbers
    if (isdigit(**input)) {
        int num = 0;
        while (isdigit(**input)) {
            num = num * 10 + (**input - '0');
            (*input)++;
        }
        Token token = {TOKEN_NUMBER, num};
        return token;
    }

    // Handle +
    if (**input == '+') {
        (*input)++;
        Token token = {TOKEN_PLUS, 0};
        return token;
    }

    // Handle -
    if (**input == '-') {
        (*input)++;
        Token token = {TOKEN_MINUS, 0};
        return token;
    }

    // Handle *
    if (**input == '*') {
        (*input)++;
        Token token = {TOKEN_MULTIPLY, 0};
        return token;
    }

    // Handle /
    if (**input == '/') {
        (*input)++;
        Token token = {TOKEN_DIVIDE, 0};
        return token;
    }

    // Handle (
    if (**input == '(') {
        (*input)++;
        Token token = {TOKEN_LPAREN, 0};
        return token;
    }

    // Handle )
    if (**input == ')') {
        (*input)++;
        Token token = {TOKEN_RPAREN, 0};
        return token;
    }

    return (Token){TOKEN_EOF, 0};
}
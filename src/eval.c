#include "lexer.h"

// Forward declaration
double parse_expression(const char **input);

double parse_factor(const char **input) {
    Token token = get_next_token(input);

    // If number
    if (token.type == TOKEN_NUMBER) {
        return token.value;
    }

    // If '(' → evaluate inside
    if (token.type == TOKEN_LPAREN) {
        double result = parse_expression(input);

        // consume ')'
        get_next_token(input);

        return result;
    }

    return 0;
}

double parse_term(const char **input) {
    double result = parse_factor(input);
    Token token = get_next_token(input);

    while (token.type == TOKEN_MULTIPLY || token.type == TOKEN_DIVIDE) {
        if (token.type == TOKEN_MULTIPLY) {
            result *= parse_factor(input);
        } else if (token.type == TOKEN_DIVIDE) {
            result /= parse_factor(input);
        }

        token = get_next_token(input);
    }

    (*input)--;

    return result;
}

double parse_expression(const char **input) {
    double result = parse_term(input);
    Token token = get_next_token(input);

    while (token.type == TOKEN_PLUS || token.type == TOKEN_MINUS) {
        if (token.type == TOKEN_PLUS) {
            result += parse_term(input);
        } else if (token.type == TOKEN_MINUS) {
            result -= parse_term(input);
        }

        token = get_next_token(input);
    }

    return result;
}

double evaluate(const char *input) {
    return parse_expression(&input);
}
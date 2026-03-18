#include <stdio.h>
#include "lexer.h"

int main() {
    const char *input = "123";
    
    Token token = get_next_token(&input);

    if (token.type == TOKEN_NUMBER) {
        printf("Number: %.0f\n", token.value);
    }

    return 0;
}
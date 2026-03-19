#include <stdio.h>
#include "eval.h"

int main() {
    char input[100];

    printf("Enter expression: ");
    fgets(input, sizeof(input), stdin);

    double result = evaluate(input);

    printf("Result: %.2f\n", result);

    return 0;
}
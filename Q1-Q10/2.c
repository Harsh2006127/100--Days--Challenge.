#include <stdio.h>

int main() {
    int num1 = 10;   // first number
    int num2 = 2;    // second number
    int sum, diff, product, quotient;

    // Perform operations
    sum = num1 + num2;
    diff = num1 - num2;
    product = num1 * num2;
    quotient = num1 / num2;  // integer division

    // Display results
    printf("Sum=%d, Diff=%d, Product=%d, Quotient=%d\n", sum, diff, product, quotient);

    return 0;
}


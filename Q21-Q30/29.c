#include <stdio.h>

int main() {
    int n = 5;  // number to calculate factorial
    int fact = 1;

    for(int i = 1; i <= n; i++) {
        fact *= i;
    }

    printf("Factorial of %d = %d\n", n, fact);
    return 0;
}

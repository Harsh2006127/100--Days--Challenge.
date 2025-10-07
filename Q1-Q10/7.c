#include <stdio.h>

int main() {
    int a = 10;
    int b = 20;

    // Original values
    printf("Before swap: %d %d\n", a, b);

    // Swapping without a third variable
    a = a + b; // a = 30
    b = a - b; // b = 10
    a = a - b; // a = 20

    // Output after swap
    printf("After swap: %d %d\n", a, b);

    return 0;
}

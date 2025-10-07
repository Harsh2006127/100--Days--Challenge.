#include <stdio.h>

int main() {
    int a = 3;  // first number
    int b = 5;  // second number
    int temp;   // third variable for swapping

    // Swap process
    temp = a;
    a = b;
    b = temp;

    // Display result
    printf("After swap: %d %d\n", a, b);

    return 0;
}

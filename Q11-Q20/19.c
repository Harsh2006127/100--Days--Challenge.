#include <stdio.h>

int main() {
    int a = 3, b = 3, c = 3;  // sides of the triangle

    // Check triangle type
    if (a == b && b == c) {
        printf("Equilateral\n");
    } else if (a == b || b == c || a == c) {
        printf("Isosceles\n");
    } else {
        printf("Scalene\n");
    }

    return 0;
}

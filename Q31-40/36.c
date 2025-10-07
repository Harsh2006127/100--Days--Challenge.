#include <stdio.h>

int main() {
    int a = 12, b = 18;
    int x = a, y = b;

    // Euclidean algorithm
    while(b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }

    printf("HCF of %d and %d = %d\n", x, y, a);
    return 0;
}

#include <stdio.h>

int main() {
    int n = 3;  // number of odd numbers
    int sum = 0;

    for(int i = 1; i <= 2*n; i += 2) {
        sum += i;
    }

    printf("Sum of first %d odd numbers = %d\n", n, sum);
    return 0;
}

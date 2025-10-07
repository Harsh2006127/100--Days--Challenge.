#include <stdio.h>

int main() {
    int num = 123;  // number to find sum of digits
    int sum = 0;
    int temp = num;

    while(temp != 0) {
        sum += temp % 10;
        temp /= 10;
    }

    printf("Sum of digits of %d = %d\n", num, sum);
    return 0;
}

#include <stdio.h>

int main() {
    int num = 1234;  // number to reverse
    int reversed = 0;

    while(num != 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }

    printf("Reversed number = %d\n", reversed);
    return 0;
}

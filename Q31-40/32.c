#include <stdio.h>

int main() {
    int num = 121;   // number to check
    int original = num;
    int reversed = 0;

    while(num != 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }

    if(original == reversed)
        printf("Palindrome\n");
    else
        printf("Not palindrome\n");

    return 0;
}

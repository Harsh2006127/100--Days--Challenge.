#include <stdio.h>
#include <math.h>

int main() {
    int num = 153;       // number to check
    int original = num;
    int sum = 0;
    int digits = 0;

    // Count digits
    int temp = num;
    while(temp != 0) {
        digits++;
        temp /= 10;
    }

    // Calculate sum of digits^digits
    temp = num;
    while(temp != 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    if(sum == original)
        printf("Armstrong\n");
    else
        printf("Not Armstrong\n");

    return 0;
}

#include <stdio.h>

int factorial(int n) {
    int fact = 1;
    for(int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

int main() {
    int num = 145;  // number to check
    int temp = num;
    int sum = 0;

    while(temp != 0) {
        int digit = temp % 10;
        sum += factorial(digit);
        temp /= 10;
    }

    if(sum == num)
        printf("%d is a Strong number\n", num);
    else
        printf("%d is Not strong number\n", num);

    return 0;
}

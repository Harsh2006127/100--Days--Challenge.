#include <stdio.h>

int main() {
    int num = 6;  // number to check
    int sum = 0;

    for(int i = 1; i <= num/2; i++) {
        if(num % i == 0) {
            sum += i;
        }
    }

    if(sum == num)
        printf("%d is a Perfect number\n", num);
    else
        printf("%d is Not perfect number\n", num);

    return 0;
}

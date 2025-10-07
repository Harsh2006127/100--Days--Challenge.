#include <stdio.h>
#include <stdbool.h>

int main() {
    int num = 7;  // number to check
    bool isPrime = true;

    if(num <= 1) {
        isPrime = false;
    } else {
        for(int i = 2; i*i <= num; i++) {
            if(num % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    if(isPrime)
        printf("Prime\n");
    else
        printf("Not prime\n");

    return 0;
}

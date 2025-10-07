#include <stdio.h>
#include <stdbool.h>

int main() {
    int n = 20;  // upper limit

    for(int num = 2; num <= n; num++) {
        bool isPrime = true;

        for(int i = 2; i*i <= num; i++) {
            if(num % i == 0) {
                isPrime = false;
                break;
            }
        }

        if(isPrime)
            printf("%d ", num);
    }

    printf("\n");
    return 0;
}

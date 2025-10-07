#include <stdio.h>

int main() {
    int num = 12345;  // number to process
    int product = 1;
    int temp = num;
    int hasOdd = 0;

    while(temp != 0) {
        int digit = temp % 10;
        if(digit % 2 != 0) {
            product *= digit;
            hasOdd = 1;
        }
        temp /= 10;
    }

    if(!hasOdd) product = 1; // no odd digits

    printf("Product of odd digits of %d = %d\n", num, product);
    return 0;
}

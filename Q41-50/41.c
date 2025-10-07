#include <stdio.h>
#include <math.h>

int main() {
    int num = 1234;  // number to process
    int digits = 0, temp = num;
    int firstDigit, lastDigit, middlePart, swapped;

    // Count number of digits
    while(temp != 0) {
        digits++;
        temp /= 10;
    }

    temp = num;
    lastDigit = temp % 10;

    // Get first digit
    firstDigit = temp;
    while(firstDigit >= 10) {
        firstDigit /= 10;
    }

    // Get middle part
    middlePart = num % (int)pow(10, digits - 1); // remove first digit
    middlePart /= 10; // remove last digit

    // Construct swapped number
    swapped = lastDigit * (int)pow(10, digits - 1) + middlePart * 10 + firstDigit;

    printf("Original number: %d\n", num);
    printf("After swapping first and last digit: %d\n", swapped);

    return 0;
}

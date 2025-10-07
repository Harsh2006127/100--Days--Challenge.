#include <stdio.h>

int main() {
    int num1 = 3, num2 = 7, num3 = 5;  // numbers to check
    int largest;

    // Find the largest number
    if (num1 >= num2 && num1 >= num3) {
        largest = num1;
    } else if (num2 >= num1 && num2 >= num3) {
        largest = num2;
    } else {
        largest = num3;
    }

    // Display result
    printf("Largest is %d\n", largest);

    return 0;
}

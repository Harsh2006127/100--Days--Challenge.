#include <stdio.h>

int main() {
    int year = 2020;  // year to check

    // Check leap year
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("Leap year\n");
    } else {
        printf("Not a leap year\n");
    }

    return 0;
}


    
#include <stdio.h>

int main() {
    int num = -5;  // number to check

    // Check positive, negative, or zero
    if (num > 0) {
        printf("Positive\n");
    } else {
        if (num < 0) {
            printf("Negative\n");
        } else {
            printf("Zero\n");
        }
    }

    return 0;
}

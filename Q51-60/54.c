#include <stdio.h>

int main() {
    int n = 4; // number of lines in top half

    // Top half
    for(int i = 1; i <= n; i++) {
        // Print spaces
        for(int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // Print stars
        for(int k = 1; k <= 2*i - 1; k++) {
            printf("*");
        }
        printf("\n");
    }

    // Bottom half
    for(int i = n-1; i >= 1; i--) {
        // Print spaces
        for(int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // Print stars
        for(int k = 1; k <= 2*i - 1; k++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

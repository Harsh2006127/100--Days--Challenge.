#include <stdio.h>

int main() {
    int r1 = 2, c1 = 2;
    int r2 = 2, c2 = 2;

    int A[2][2] = {
        {1, 2},
        {3, 4}
    };

    int B[2][2] = {
        {5, 6},
        {7, 8}
    };

    int sum[2][2];

    if (r1 == r2 && c1 == c2) {
        // Add matrices
        for (int i = 0; i < r1; i++) {
            for (int j = 0; j < c1; j++) {
                sum[i][j] = A[i][j] + B[i][j];
            }
        }

        // Print result
        for (int i = 0; i < r1; i++) {
            for (int j = 0; j < c1; j++) {
                printf("%d ", sum[i][j]);
            }
            printf("\n");
        }
    } else {
        printf("Matrix dimensions do not match. Cannot add.\n");
    }

    return 0;
}

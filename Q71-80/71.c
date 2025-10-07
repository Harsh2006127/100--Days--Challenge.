#include <stdio.h>

int main() {
    int rows = 2, cols = 2;
    int matrix[2][2] = {
        {1, 2},
        {3, 4}
    };

    printf("The matrix is:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}

#include <stdio.h>

int main() {
    int n = 3;
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 1}
    };

    int diagonal[10]; 
    int k = 0;
    int isDistinct = 1;

    
    for (int i = 0; i < n; i++) {
        diagonal[k++] = matrix[i][i];
    }

   
    for (int i = 0; i < k; i++) {
        for (int j = i + 1; j < k; j++) {
            if (diagonal[i] == diagonal[j]) {
                isDistinct = 0;
                break;
            }
        }
    }

    if (isDistinct)
        printf("True\n");
    else
        printf("False\n");

    return 0;
}

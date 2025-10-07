#include <stdio.h>

int main() {
    int n = 2;  

    int A[2][2] = {
        {1, 2},
        {2, 1}
    };

    int isSymmetric = 1; 

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (A[i][j] != A[j][i]) {
                isSymmetric = 0;
                break;
            }
        }
    }

    if (isSymmetric)
        printf("True\n");
    else
        printf("False\n");

    return 0;
}

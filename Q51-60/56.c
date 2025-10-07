#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30};  // array elements
    int n = sizeof(arr)/sizeof(arr[0]);

    printf("Array elements: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

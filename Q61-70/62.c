#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4};  // array elements
    int n = sizeof(arr)/sizeof(arr[0]);

    // Reverse in-place
    for(int i = 0; i < n/2; i++) {
        int temp = arr[i];
        arr[i] = arr[n-1-i];
        arr[n-1-i] = temp;
    }

    // Print reversed array
    printf("Reversed array: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

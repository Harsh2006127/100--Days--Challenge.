#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;  // number of elements
    int pos = 2;  // position to delete (0-based index)

    // Shift elements to the left from position
    for(int i = pos; i < n-1; i++) {
        arr[i] = arr[i+1];
    }
    n--;  // reduce size

    // Print updated array
    printf("Updated array: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

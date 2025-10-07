#include <stdio.h>

int main() {
    int arr[6] = {1, 2, 4, 5, 6};  // original array with space for new element
    int n = 5;  // current number of elements
    int key = 3;  // element to insert

    int i;
    // Find the position to insert
    for(i = n-1; i >= 0 && arr[i] > key; i--) {
        arr[i+1] = arr[i];  // shift elements to the right
    }

    arr[i+1] = key;  // insert element
    n++;  // increment size

    // Print updated array
    printf("Updated array: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

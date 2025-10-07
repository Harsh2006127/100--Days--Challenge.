#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40};  // original array with space for new element
    int n = 4;  // current number of elements
    int pos = 2;  // position to insert (0-based index would be 2)
    int key = 15; // element to insert

    // Shift elements to the right from position
    for(int i = n; i > pos; i--) {
        arr[i] = arr[i-1];
    }

    arr[pos] = key;  // insert element
    n++;  // increment size

    // Print updated array
    printf("Updated array: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

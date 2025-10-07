#include <stdio.h>

int main() {
    int arr[] = {1, 3, 5, 7, 9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key = 7;  // element to search
    int low = 0, high = n - 1, mid;
    int index = -1;

    while(low <= high) {
        mid = (low + high) / 2;
        if(arr[mid] == key) {
            index = mid;
            break;
        } else if(arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if(index != -1)
        printf("Found at index %d\n", index);
    else
        printf("-1\n");

    return 0;
}

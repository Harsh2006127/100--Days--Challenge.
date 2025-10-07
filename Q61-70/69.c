#include <stdio.h>

int main() {
    int n = 5;  
    int arr[] = {10, 20, 30, 40, 50};  // given numbers

    int first = -1e9, second = -1e9;

    for(int i = 0; i < n; i++) {
        if(arr[i] > first) {
            second = first;
            first = arr[i];
        }
        else if(arr[i] > second && arr[i] < first) {
            second = arr[i];
        }
    }

    if(second == -1e9) {
        printf("No second largest element\n");
    } else {
        printf("Second largest element = %d\n", second);
    }

    return 0;
}

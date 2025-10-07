#include <stdio.h>

int main() {
    int arr[] = {-1, 0, 1, 2, -2};  // array elements
    int n = sizeof(arr)/sizeof(arr[0]);
    int positive = 0, negative = 0, zero = 0;

    for(int i = 0; i < n; i++) {
        if(arr[i] > 0)
            positive++;
        else if(arr[i] < 0)
            negative++;
        else
            zero++;
    }

    printf("Positive=%d, Negative=%d, Zero=%d\n", positive, negative, zero);
    return 0;
}


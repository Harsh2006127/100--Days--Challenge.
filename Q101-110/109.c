#include <stdio.h>

int main() {
    int arr[] = {1, 4, 2, 10, 23, 3, 1, 0, 20};  
    int k = 4;                                   
    int n = sizeof(arr) / sizeof(arr[0]);

    if(k > n) {
        printf("Invalid input");
        return 0;
    }

    int max_sum = 0, window_sum = 0;

    for(int i = 0; i < k; i++) {
        window_sum += arr[i];
    }
    max_sum = window_sum;

    for(int i = k; i < n; i++) {
        window_sum = window_sum - arr[i - k] + arr[i];
        if(window_sum > max_sum) {
            max_sum = window_sum;
        }
    }

    printf("%d", max_sum);

    return 0;
}

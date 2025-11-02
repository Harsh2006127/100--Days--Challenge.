#include <stdio.h>

int main() {
    int arr[] = {2, 3, -8, 7, -1, 2, 3}; 
    int n = sizeof(arr) / sizeof(arr[0]);

    int max_so_far = arr[0];
    int current_sum = arr[0];

    for (int i = 1; i < n; i++) {
      
        current_sum = (current_sum + arr[i] > arr[i]) ? current_sum + arr[i] : arr[i];
\
        if (current_sum > max_so_far) {
            max_so_far = current_sum;
        }
    }

    printf("%d", max_so_far);

    return 0;
}

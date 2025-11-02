#include <stdio.h>

int main() {
    int nums[] = {1, 2, 3, 4};  
    int n = sizeof(nums) / sizeof(nums[0]);
    int answer[n];

    for(int i = 0; i < n; i++) {
        answer[i] = 1;
    }

    int left = 1;
    for(int i = 0; i < n; i++) {
        answer[i] = left;
        left *= nums[i];
    }

    int right = 1;
    for(int i = n - 1; i >= 0; i--) {
        answer[i] *= right;
        right *= nums[i];
    }

    printf("[");
    for(int i = 0; i < n; i++) {
        printf("%d", answer[i]);
        if(i < n - 1) printf(",");
    }
    printf("]");

    return 0;
}

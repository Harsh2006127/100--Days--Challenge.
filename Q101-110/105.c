#include <stdio.h>

int main() {
    int nums[] = {2,2,1,1,1,2,2}; 
    int n = sizeof(nums) / sizeof(nums[0]);

    int candidate = nums[0], count = 1;

    for(int i = 1; i < n; i++) {
        if(nums[i] == candidate)
            count++;
        else {
            count--;
            if(count == 0) {
                candidate = nums[i];
                count = 1;
            }
        }
    }

    count = 0;
    for(int i = 0; i < n; i++) {
        if(nums[i] == candidate)
            count++;
    }

    if(count > n/2)
        printf("%d", candidate);
    else
        printf("-1");

    return 0;
}

#include <stdio.h>

int main() {
    int nums[] = {1,7,3,6,5,6};  
    int n = sizeof(nums) / sizeof(nums[0]);

    int totalSum = 0;
    for(int i = 0; i < n; i++)
        totalSum += nums[i];

    int leftSum = 0;
    
    for(int i = 0; i < n; i++) {
        int rightSum = totalSum - leftSum - nums[i];
        
        if(leftSum == rightSum) {
            printf("%d", i);
            return 0;  
        }
        leftSum += nums[i];
    }

    printf("-1"); 
    return 0;
}

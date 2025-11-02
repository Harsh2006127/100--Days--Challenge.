#include <stdio.h>

int main() {
    int nums[] = {5,7,7,8,8,10}; 
    int target = 8;              
    int n = sizeof(nums)/sizeof(nums[0]);
    
    int first = -1, last = -1;
    
    for(int i = 0; i < n; i++) {
        if(nums[i] == target) {
            first = i;
            break;
        }
    }

    for(int i = n-1; i >= 0; i--) {
        if(nums[i] == target) {
            last = i;
            break;
        }
    }
    
    printf("%d,%d", first, last);
    
    return 0;
}

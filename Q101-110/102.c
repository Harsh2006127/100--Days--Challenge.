#include <stdio.h>

int main() {
    int arr[] = {1, 2, 8, 10, 11, 12, 19};  
    int x = 5;                              
    int n = sizeof(arr) / sizeof(arr[0]);

    int index = -1;

    for(int i = 0; i < n; i++) {
        if(arr[i] >= x) {
            index = i;
            break;
        }
    }

    printf("%d", index);

    return 0;
}

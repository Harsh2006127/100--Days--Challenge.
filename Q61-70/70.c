#include <stdio.h>

int main() {
    int n = 5;  
    int arr[] = {1, 2, 3, 4, 5}; 
    int k = 2;  

    int temp[n];

   
    k = k % n;

    for(int i = 0; i < k; i++) {
        temp[i] = arr[n - k + i];
    }

    for(int i = 0; i < n - k; i++) {
        temp[k + i] = arr[i];
    }

    for(int i = 0; i < n; i++) {
        printf("%d ", temp[i]);
    }

    return 0;
}

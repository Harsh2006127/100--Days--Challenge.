#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key = 3;
    int index = -1;

    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            index = i;
            break;
        }
    }

    if(index != -1)
        printf("Found at index %d\n", index);
    else
        printf("-1\n");

    return 0;
}

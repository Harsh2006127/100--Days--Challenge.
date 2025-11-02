#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n], visited[n];

    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        visited[i] = 0; 
    }

    for(int i = 0; i < n; i++) {
        if(visited[arr[i]] == 1) {
            printf("Repeated Element: %d", arr[i]);
            return 0;
        }
        visited[arr[i]] = 1;
    }

    return 0;
}

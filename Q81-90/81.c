#include <stdio.h>

int main() {
    char str[] = "Hello";  
    int count = 0;

    printf("Input String: %s\n", str);

    
    while (str[count] != '\0') {
        printf("Index %d -> Character: '%c'\n", count, str[count]);
        count++;
    }

    printf("\nTotal characters = %d\n", count);

    return 0;
}

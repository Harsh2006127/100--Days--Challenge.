#include <stdio.h>

int main() {
    char str[] = "Hi";  
    int i = 0;

    printf("String: %s\n", str);
    printf("Characters on new lines:\n");

    while (str[i] != '\0') {
        printf("%c\n", str[i]);
        i++;
    }

    return 0;
}

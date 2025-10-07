#include <stdio.h>

int main() {
    char str[] = "Hello";
    int i;

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32; 
        else if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32; 
    }

    printf("Output: %s\n", str);

    return 0;
}

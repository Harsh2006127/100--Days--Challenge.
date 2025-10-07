#include <stdio.h>

int main() {
    char str[] = "hello world";
    int i;

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ')
            str[i] = '-';
    }

    printf("Output: %s\n", str);

    return 0;
}

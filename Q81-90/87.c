#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "a b1&2";   
    int i;
    int spaces = 0, digits = 0, special = 0;

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ')
            spaces++;
        else if (str[i] >= '0' && str[i] <= '9')
            digits++;
        else if (!(str[i] >= 'a' && str[i] <= 'z') && !(str[i] >= 'A' && str[i] <= 'Z'))
            special++;
    }

    printf("Input: %s\n", str);
    printf("Spaces=%d, Digits=%d, Special=%d\n", spaces, digits, special);

    return 0;
}

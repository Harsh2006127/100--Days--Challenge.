#include <stdio.h>

int main() {
    char str[] = "education";
    char result[100];
    int i, j = 0;

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' &&
            str[i] != 'o' && str[i] != 'u' &&
            str[i] != 'A' && str[i] != 'E' && str[i] != 'I' &&
            str[i] != 'O' && str[i] != 'U') {
            result[j++] = str[i];
        }
    }

    result[j] = '\0';

    printf("Output: %s\n", result);

    return 0;
}

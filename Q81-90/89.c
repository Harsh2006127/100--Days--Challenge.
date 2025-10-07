#include <stdio.h>

int main() {
    char str[] = "programming";
    char ch = 'g';
    int i, count = 0;

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch)
            count++;
    }

    printf("Character '%c' occurs %d times.\n", ch, count);

    return 0;
}

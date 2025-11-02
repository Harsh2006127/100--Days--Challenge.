#include <stdio.h>

int main() {
    char str[] = "stress";
    int freq[26] = {0};
    int i;
    char result = '\0';

    for (i = 0; str[i] != '\0'; i++) {
        int index = str[i] - 'a';
        freq[index]++;
        if (freq[index] == 2) { 
            result = str[i];
            break;
        }
    }

    if (result != '\0')
        printf("Output: %c\n", result);
    else
        printf("Output: No repeating character\n");

    return 0;
}

#include <stdio.h>

int main() {
    char str[] = "I love programming";
    int i = 0, start = 0, maxLen = 0, currLen = 0, maxStart = 0;

    while (1) {
        if (str[i] != ' ' && str[i] != '\0') {
            currLen++;
        } else {
            if (currLen > maxLen) {
                maxLen = currLen;
                maxStart = start;
            }
            currLen = 0;
            start = i + 1;
        }
        
        if (str[i] == '\0')
            break;
            
        i++;
    }

    printf("Longest word: ");
    for (i = maxStart; i < maxStart + maxLen; i++)
        printf("%c", str[i]);

    printf("\n");

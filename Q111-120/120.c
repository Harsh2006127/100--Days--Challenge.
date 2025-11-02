#include <stdio.h>
#include <ctype.h>

int main() {
    char str[200];
    int i = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin); // Read input with spaces

    // Capitalize the first character if it is alphabet
    if(str[0] >= 'a' && str[0] <= 'z') {
        str[0] = str[0] - 32;
    }

    // Traverse the string and convert after space
    while(str[i] != '\0') {
        if(str[i] == ' ') {
            if(str[i+1] >= 'a' && str[i+1] <= 'z') {
                str[i+1] = str[i+1] - 32;
            }
        }
        i++;
    }

    printf("Output: %s", str);

    return 0;
}

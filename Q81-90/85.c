#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "abcd";  
    int len = strlen(str);
    char rev[100];
    int i;

    printf("Original string: %s\n", str);

    for (i = 0; i < len; i++) {
        rev[i] = str[len - i - 1];  
    }
    rev[len] = '\0';  

    printf("Reversed string: %s\n", rev);

    return 0;
}

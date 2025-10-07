#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "madam";   
    int i, len;
    int flag = 1;  

    len = strlen(str);

    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            flag = 0;  
            break;
        }
    }

    printf("Input: %s\n", str);
    if (flag)
        printf("Palindrome\n");
    else
        printf("Not palindrome\n");

    return 0;
}

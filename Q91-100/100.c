#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "abc"; 
    int i, j, len;

    len = strlen(str);

    for(i = 0; i < len; i++) {
        for(j = i; j < len; j++) {
            for(int k = i; k <= j; k++) {
                printf("%c", str[k]);
            }
            printf("\n"); 
        }
    }
    
    return 0;
}

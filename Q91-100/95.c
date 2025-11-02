#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "abcde";
    char str2[] = "deabc";
    char temp[100];

    strcpy(temp, str1);
    strcat(temp, str1);

    if (strstr(temp, str2) != NULL)
        printf("Rotation\n");
    else
        printf("Not rotation\n");

    return 0;
}

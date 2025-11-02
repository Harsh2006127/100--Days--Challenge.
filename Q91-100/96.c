#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "I love coding";
    int i, start = 0, end;

    for (i = 0; ; i++) {
        if (str[i] == ' ' || str[i] == '\0') {
            end = i - 1;
            while (start < end) {
                char temp = str[start];
                str[start] = str[end];
                str[end] = temp;
                start++;
                end--;
            }
            if (str[i] == '\0')
                break;
            start = i + 1;
        }
    }

    printf("%s", str);
    return 0;
}

#include <stdio.h>
#include <ctype.h>

int main() {
    char str[] = "hello";   
    int vowels = 0, consonants = 0;
    int i = 0;

    while (str[i] != '\0') {
        char ch = tolower(str[i]); 
        if (ch >= 'a' && ch <= 'z') {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
        i++;
    }

    printf("String: %s\n", str);
    printf("Vowels=%d, Consonants=%d\n", vowels, consonants);

    return 0;
}

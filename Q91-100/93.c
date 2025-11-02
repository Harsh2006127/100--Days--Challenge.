#include <stdio.h>

int main() {
    char str1[] = "listen";
    char str2[] = "silent";
    int count1[26] = {0}, count2[26] = {0};
    int i;

    for(i = 0; str1[i] != '\0'; i++) {
        count1[str1[i] - 'a']++;
    }

    for(i = 0; str2[i] != '\0'; i++) {
        count2[str2[i] - 'a']++;
    }

    for(i = 0; i < 26; i++) {
        if(count1[i] != count2[i]) {
            printf("Not anagrams\n");
            return 0;
        }
    }

    printf("Anagrams\n");
    return 0;
}

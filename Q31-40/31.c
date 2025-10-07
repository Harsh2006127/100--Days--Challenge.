#include <stdio.h>

int main() {
    int num = 10;  // number to convert
    int binary[32];
    int i = 0;

    if(num == 0) {
        printf("0\n");
        return 0;
    }

    while(num > 0) {
        binary[i] = num % 2;
        num /= 2;
        i++;
    }

    // Print binary in reverse
    for(int j = i-1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");

    return 0;
}

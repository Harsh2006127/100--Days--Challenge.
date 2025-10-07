#include <stdio.h>

int main() {
    int num = 112233;  // number to analyze
    int count[10] = {0};  // frequency array for digits 0-9
    int temp = num;

    // Count frequency of each digit
    while(temp != 0) {
        int digit = temp % 10;
        count[digit]++;
        temp /= 10;
    }

    // Find the digit with maximum frequency
    int maxFreq = count[0];
    int maxDigit = 0;
    for(int i = 1; i < 10; i++) {
        if(count[i] > maxFreq) {
            maxFreq = count[i];
            maxDigit = i;
        }
    }

    printf("Digit occurring most: %d\n", maxDigit);
    return 0;
}

#include <stdio.h>

int main() {
    int a = 4, b = 5;
    int x = a, y = b;

    // Find HCF first
    int hcf;
    int tempA = a, tempB = b;
    while(tempB != 0) {
        int temp = tempB;
        tempB = tempA % tempB;
        tempA = temp;
    }
    hcf = tempA;

    // LCM = (a * b) / HCF
    int lcm = (x * y) / hcf;

    printf("LCM of %d and %d = %d\n", a, b, lcm);
    return 0;
}

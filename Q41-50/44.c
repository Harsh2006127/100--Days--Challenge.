#include <stdio.h>

int main() {
    int n = 3;  // number of terms
    double sum = 0.0;

    for(int i = 0; i < n; i++) {
        double numerator = 1 + 2*i;
        double denominator = 1 + 2*i + 1; // numerator + 1
        sum += numerator / denominator;
    }

    printf("Approximate sum: %.1lf\n", sum);
    return 0;
}

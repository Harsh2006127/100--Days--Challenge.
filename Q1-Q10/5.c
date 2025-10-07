#include <stdio.h>

int main() {
    float celsius = 0;  // Celsius temperature
    float fahrenheit;

    // Conversion formula
    fahrenheit = (celsius * 9 / 5) + 32;

    // Display result
    printf("Fahrenheit=%.2f\n", fahrenheit);

    return 0;
}

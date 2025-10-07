#include <stdio.h>

int main() {
    float radius = 7.0;  // radius of the circle
    float area, circumference;
    const float PI = 3.14159;

    // Calculate area and circumference
    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    // Display results
    printf("Area=%.2f, Circumference=%.2f\n", area, circumference);

    return 0;
}

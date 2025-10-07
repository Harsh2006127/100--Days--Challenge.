#include <stdio.h>

int main() {
    int length = 5;   // length of rectangle
    int breadth = 10; // breadth of rectangle
    int area, perimeter;

    // Calculate area and perimeter
    area = length * breadth;
    perimeter = 2 * (length + breadth);

    // Display results
    printf("Area=%d, Perimeter=%d\n", area, perimeter);

    return 0;
}

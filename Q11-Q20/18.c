#include <stdio.h>

int main() {
    int percentage = 95;  // percentage to check
    char grade;

    // Assign grade
    if (percentage >= 90 && percentage <= 100) {
        grade = 'A';
    } else if (percentage >= 80 && percentage <= 89) {
        grade = 'B';
    } else if (percentage >= 70 && percentage <= 79) {
        grade = 'C';
    } else if (percentage >= 60 && percentage <= 69) {
        grade = 'D';
    } else if (percentage < 60 && percentage >= 0) {
        grade = 'F';
    } else {
        printf("Invalid percentage\n");
        return 1;
    }

    // Display result
    printf("Grade %c\n", grade);

    return 0;
}

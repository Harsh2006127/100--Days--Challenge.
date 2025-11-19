#include <stdio.h>

enum Operation { ADD, SUBTRACT, MULTIPLY };

int main() {

    enum Operation choice = ADD;  
    int a = 10;
    int b = 20;

    printf("Operation: ");
    if (choice == ADD) printf("ADD\n");
    else if (choice == SUBTRACT) printf("SUBTRACT\n");
    else if (choice == MULTIPLY) printf("MULTIPLY\n");

    printf("Numbers: %d and %d\n", a, b);

    switch (choice) {
        case ADD:
            printf("Result = %d\n", a + b);
            break;
        case SUBTRACT:
            printf("Result = %d\n", a - b);
            break;
        case MULTIPLY:
            printf("Result = %d\n", a * b);
            break;
    }

    return 0;
}

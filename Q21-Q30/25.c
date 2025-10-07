#include <stdio.h>

int main() {
    int num1 = 4, num2 = 2;
    char op = '+';  // operator: '+', '-', '*', '/', '%'
    int result;

    switch(op) {
        case '+':
            result = num1 + num2;
            printf("%d\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("%d\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("%d\n", result);
            break;
        case '/':
            result = num1 / num2;  // integer division
            printf("%d\n", result);
            break;
        case '%':
            result = num1 % num2;
            printf("%d\n", result);
            break;
        default:
            printf("Invalid operator\n");
    }

    return 0;
}

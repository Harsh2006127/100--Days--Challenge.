#include <stdio.h>
#include <math.h>

int main() {
    double a = 1, b = -3, c = 2;  // coefficients
    double discriminant, root1, root2, realPart, imagPart;

    discriminant = b*b - 4*a*c;

    if (discriminant > 0) {
        // real and different roots
        root1 = (-b + sqrt(discriminant)) / (2*a);
        root2 = (-b - sqrt(discriminant)) / (2*a);
        printf("Roots are real and different: %.2lf, %.2lf\n", root1, root2);
    } else if (discriminant == 0) {
        // real and same roots
        root1 = -b / (2*a);
        printf("Roots are real and same: %.2lf\n", root1);
    } else {
        // complex roots
        realPart = -b / (2*a);
        imagPart = sqrt(-discriminant) / (2*a);
        printf("Roots are complex: %.2lf + %.2lfi, %.2lf - %.2lfi\n", realPart, imagPart, realPart, imagPart);
    }

    return 0;
}

#include <stdio.h>
#include <math.h>  // for pow() function

int main() {
    double principal = 1000;  // principal amount
    double rate = 5;          // rate of interest in percent
    double time = 2;          // time in years
    double simpleInterest, compoundInterest;

    // Calculate simple interest
    simpleInterest = (principal * rate * time) / 100;

    // Calculate compound interest (annual compounding)
    compoundInterest = principal * pow((1 + rate / 100), time) - principal;

    // Display results
    printf("Simple Interest=%.2f, Compound Interest=%.2f\n", simpleInterest, compoundInterest);

    return 0;
}

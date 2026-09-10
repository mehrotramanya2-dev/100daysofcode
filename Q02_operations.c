// Q2: Display sum, difference, product and quotient of two numbers.
#include <stdio.h>

int main(void) {
    double a, b;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);

    printf("Sum = %.2f\n", a + b);
    printf("Difference = %.2f\n", a - b);
    printf("Product = %.2f\n", a * b);

    if (b != 0)
        printf("Quotient = %.2f\n", a / b);
    else
        printf("Quotient = Undefined (division by zero)\n");

    return 0;
}

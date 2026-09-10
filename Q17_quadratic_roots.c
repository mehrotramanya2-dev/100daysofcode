// Q17: Find and categorize the roots of a quadratic equation ax^2 + bx + c = 0.
#include <stdio.h>
#include <math.h>

int main(void) {
    double a, b, c, d, r1, r2, realPart, imagPart;

    printf("Enter a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a == 0) {
        printf("Not a quadratic equation.\n");
        return 0;
    }

    d = b * b - 4 * a * c;

    if (d > 0) {
        r1 = (-b + sqrt(d)) / (2 * a);
        r2 = (-b - sqrt(d)) / (2 * a);
        printf("Two distinct real roots: %.2f and %.2f\n", r1, r2);
    } else if (d == 0) {
        r1 = -b / (2 * a);
        printf("Two equal real roots: %.2f and %.2f\n", r1, r1);
    } else {
        realPart = -b / (2 * a);
        imagPart = sqrt(-d) / fabs(2 * a);
        printf("Two complex roots: %.2f + %.2fi and %.2f - %.2fi\n",
               realPart, imagPart, realPart, imagPart);
    }

    return 0;
}

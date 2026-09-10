// Q16: Find the largest among three numbers using if-else.
#include <stdio.h>

int main(void) {
    double a, b, c, largest;
    printf("Enter three numbers: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a >= b && a >= c)
        largest = a;
    else if (b >= a && b >= c)
        largest = b;
    else
        largest = c;

    printf("Largest = %.2f\n", largest);
    return 0;
}

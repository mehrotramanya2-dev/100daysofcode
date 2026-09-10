// Q4: Calculate area and circumference of a circle.
#include <stdio.h>

int main(void) {
    double radius;
    const double PI = 3.141592653589793;

    printf("Enter radius: ");
    scanf("%lf", &radius);

    printf("Area = %.2f\n", PI * radius * radius);
    printf("Circumference = %.2f\n", 2 * PI * radius);
    return 0;
}

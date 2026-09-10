// Q3: Calculate area and perimeter of a rectangle.
#include <stdio.h>

int main(void) {
    double length, breadth;
    printf("Enter length and breadth: ");
    scanf("%lf %lf", &length, &breadth);

    printf("Area = %.2f\n", length * breadth);
    printf("Perimeter = %.2f\n", 2 * (length + breadth));
    return 0;
}

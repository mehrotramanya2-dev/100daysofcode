// Q19: Classify a triangle as Equilateral, Isosceles or Scalene.
#include <stdio.h>

int main(void) {
    double a, b, c;
    printf("Enter three side lengths: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a <= 0 || b <= 0 || c <= 0 || a + b <= c || a + c <= b || b + c <= a)
        printf("Invalid triangle\n");
    else if (a == b && b == c)
        printf("Equilateral\n");
    else if (a == b || b == c || a == c)
        printf("Isosceles\n");
    else
        printf("Scalene\n");

    return 0;
}

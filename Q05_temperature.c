// Q5: Convert Celsius to Fahrenheit.
#include <stdio.h>

int main(void) {
    double celsius;
    printf("Enter temperature in Celsius: ");
    scanf("%lf", &celsius);

    printf("Fahrenheit = %.2f\n", (celsius * 9.0 / 5.0) + 32);
    return 0;
}

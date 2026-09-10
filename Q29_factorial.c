// Q29: Calculate factorial of a number.
#include <stdio.h>

int main(void) {
    int n, i;
    unsigned long long fact = 1;

    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 0;
    }

    for (i = 1; i <= n; i++)
        fact *= i;

    printf("Factorial = %llu\n", fact);
    return 0;
}

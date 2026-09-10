// Q31: Print the binary representation of a non-negative integer.
// No arrays or strings are used.
#include <stdio.h>

int main(void) {
    unsigned int n, power = 1;
    int started = 0;

    printf("Enter a non-negative integer: ");
    scanf("%u", &n);

    if (n == 0) {
        printf("Binary = 0\n");
        return 0;
    }

    while (power <= n / 2)
        power *= 2;

    printf("Binary = ");
    while (power > 0) {
        if (n >= power) {
            printf("1");
            n -= power;
            started = 1;
        } else if (started) {
            printf("0");
        }
        power /= 2;
    }

    printf("\n");
    return 0;
}

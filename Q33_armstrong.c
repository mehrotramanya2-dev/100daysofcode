// Q33: Check whether a number is an Armstrong number.
#include <stdio.h>

long long power_int(int base, int exponent) {
    long long result = 1;
    while (exponent-- > 0)
        result *= base;
    return result;
}

int main(void) {
    long long n, temp, sum = 0, digit;
    int digits = 0;

    printf("Enter a non-negative integer: ");
    scanf("%lld", &n);

    if (n < 0) {
        printf("Not an Armstrong number\n");
        return 0;
    }

    temp = n;
    if (temp == 0)
        digits = 1;
    else
        while (temp != 0) {
            digits++;
            temp /= 10;
        }

    temp = n;
    do {
        digit = temp % 10;
        sum += power_int((int)digit, digits);
        temp /= 10;
    } while (temp != 0);

    if (sum == n)
        printf("Armstrong number\n");
    else
        printf("Not an Armstrong number\n");

    return 0;
}

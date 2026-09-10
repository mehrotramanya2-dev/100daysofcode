// Q41: Swap the first and last digit of a number.
#include <stdio.h>

int main(void) {
    long long n, temp, first, last, power = 1, result;

    printf("Enter a non-negative integer: ");
    scanf("%lld", &n);

    if (n < 0) {
        printf("Please enter a non-negative integer.\n");
        return 0;
    }

    if (n < 10) {
        printf("After swapping = %lld\n", n);
        return 0;
    }

    last = n % 10;
    temp = n;

    while (temp >= 10) {
        temp /= 10;
        power *= 10;
    }

    first = temp;
    result = n - first * power - last;
    result += last * power + first;

    printf("After swapping = %lld\n", result);
    return 0;
}

// Q38: Find the sum of digits of a number.
#include <stdio.h>

int main(void) {
    long long n, temp, sum = 0;

    printf("Enter a number: ");
    scanf("%lld", &n);

    temp = n < 0 ? -n : n;

    do {
        sum += temp % 10;
        temp /= 10;
    } while (temp != 0);

    printf("Sum of digits = %lld\n", sum);
    return 0;
}

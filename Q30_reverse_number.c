// Q30: Reverse a given number.
#include <stdio.h>

int main(void) {
    long long n, temp, reverse = 0, digit;

    printf("Enter a number: ");
    scanf("%lld", &n);

    temp = n < 0 ? -n : n;

    while (temp != 0) {
        digit = temp % 10;
        reverse = reverse * 10 + digit;
        temp /= 10;
    }

    if (n < 0)
        reverse = -reverse;

    printf("Reversed number = %lld\n", reverse);
    return 0;
}

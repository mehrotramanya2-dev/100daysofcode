// Q32: Check whether a number is a palindrome.
#include <stdio.h>

int main(void) {
    long long n, temp, reverse = 0, digit;

    printf("Enter a non-negative integer: ");
    scanf("%lld", &n);

    if (n < 0) {
        printf("Not a palindrome\n");
        return 0;
    }

    temp = n;
    while (temp != 0) {
        digit = temp % 10;
        reverse = reverse * 10 + digit;
        temp /= 10;
    }

    if (n == reverse)
        printf("Palindrome\n");
    else
        printf("Not a palindrome\n");

    return 0;
}

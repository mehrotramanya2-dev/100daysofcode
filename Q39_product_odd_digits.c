// Q39: Find the product of odd digits of a number.
#include <stdio.h>

int main(void) {
    long long n, temp, product = 1, digit;
    int found = 0;

    printf("Enter a number: ");
    scanf("%lld", &n);

    temp = n < 0 ? -n : n;

    do {
        digit = temp % 10;
        if (digit % 2 != 0) {
            product *= digit;
            found = 1;
        }
        temp /= 10;
    } while (temp != 0);

    if (found)
        printf("Product of odd digits = %lld\n", product);
    else
        printf("No odd digit found. Product = 1\n");

    return 0;
}

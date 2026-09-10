// Q34: Check whether a number is prime.
#include <stdio.h>

int main(void) {
    int n, i, prime = 1;

    printf("Enter an integer: ");
    scanf("%d", &n);

    if (n < 2)
        prime = 0;
    else {
        for (i = 2; i <= n / i; i++) {
            if (n % i == 0) {
                prime = 0;
                break;
            }
        }
    }

    if (prime)
        printf("Prime number\n");
    else
        printf("Not a prime number\n");

    return 0;
}

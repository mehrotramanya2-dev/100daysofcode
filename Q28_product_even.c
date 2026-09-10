// Q28: Find the product of even numbers from 1 to n.
#include <stdio.h>

int main(void) {
    int n, i;
    unsigned long long product = 1;

    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 2; i <= n; i += 2)
        product *= i;

    if (n < 2)
        product = 1;

    printf("Product = %llu\n", product);
    return 0;
}

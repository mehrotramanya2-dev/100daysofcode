// Q27: Find the sum of the first n odd numbers.
#include <stdio.h>

int main(void) {
    int n, i;
    long long sum = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
        sum += 2 * i - 1;

    printf("Sum = %lld\n", sum);
    return 0;
}

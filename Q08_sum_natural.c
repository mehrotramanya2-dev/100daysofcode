// Q8: Find the sum of the first n natural numbers.
#include <stdio.h>

int main(void) {
    int n, i;
    long long sum = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
        sum += i;

    printf("Sum = %lld\n", sum);
    return 0;
}

// Q35: Print all factors of a given positive number.
#include <stdio.h>

int main(void) {
    int n, i;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid number\n");
        return 0;
    }

    printf("Factors: ");
    for (i = 1; i <= n; i++) {
        if (n % i == 0)
            printf("%d ", i);
    }

    printf("\n");
    return 0;
}

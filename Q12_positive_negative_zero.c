// Q12: Check whether a number is positive, negative or zero using nested if-else.
#include <stdio.h>

int main(void) {
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);

    if (n >= 0) {
        if (n == 0)
            printf("Zero\n");
        else
            printf("Positive\n");
    } else {
        printf("Negative\n");
    }

    return 0;
}

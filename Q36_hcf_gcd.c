// Q36: Find the HCF/GCD of two numbers.
#include <stdio.h>

int main(void) {
    int a, b, temp;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    if (a < 0) a = -a;
    if (b < 0) b = -b;

    while (b != 0) {
        temp = a % b;
        a = b;
        b = temp;
    }

    printf("HCF/GCD = %d\n", a);
    return 0;
}

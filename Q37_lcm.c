// Q37: Find the LCM of two numbers.
#include <stdio.h>

int main(void) {
    long long a, b, x, y, temp, gcd, lcm;

    printf("Enter two integers: ");
    scanf("%lld %lld", &a, &b);

    x = a < 0 ? -a : a;
    y = b < 0 ? -b : b;

    if (x == 0 || y == 0) {
        printf("LCM = 0\n");
        return 0;
    }

    temp = y;
    while (y != 0) {
        temp = x % y;
        x = y;
        y = temp;
    }

    gcd = x;
    lcm = (a < 0 ? -a : a) / gcd * (b < 0 ? -b : b);

    printf("LCM = %lld\n", lcm);
    return 0;
}

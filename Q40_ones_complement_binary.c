// Q40: Find the 1's complement of a binary number.
// Input is treated as a binary integer (for example 10110).
#include <stdio.h>

int main(void) {
    unsigned long long binary, temp, result = 0, place = 1, digit;
    int valid = 1;

    printf("Enter a binary number: ");
    scanf("%llu", &binary);

    if (binary == 0) {
        printf("1's complement = 1\n");
        return 0;
    }

    temp = binary;
    while (temp != 0) {
        digit = temp % 10;

        if (digit != 0 && digit != 1) {
            valid = 0;
            break;
        }

        result += (1 - digit) * place;
        place *= 10;
        temp /= 10;
    }

    if (valid)
        printf("1's complement = %llu\n", result);
    else
        printf("Invalid binary number\n");

    return 0;
}

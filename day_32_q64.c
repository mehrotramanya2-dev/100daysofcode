#include <stdio.h>

int main() {
    long long num;
    int count[10] = {0};
    scanf("%lld", &num);

    if (num < 0) num = -num;
    if (num == 0) count[0] = 1;

    while (num > 0) {
        count[num % 10]++;
        num /= 10;
    }

    int maxDigit = 0;
    for (int d = 1; d < 10; d++) {
        if (count[d] > count[maxDigit]) {
            maxDigit = d;
        }
    }
    printf("%d\n", maxDigit);
    return 0;
}

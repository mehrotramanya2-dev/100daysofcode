#include <stdio.h>

int main() {
    char str[1000];
    int count = 0;
    scanf(" %999[^\n]", str);

    while (str[count] != '\0') {
        count++;
    }
    printf("%d\n", count);
    return 0;
}

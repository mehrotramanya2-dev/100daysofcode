*/Print all sub-strings of a string.*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j, k;
    int first = 1;

    scanf("%s", str);

    for (i = 0; i < strlen(str); i++) {
        for (j = i; j < strlen(str); j++) {

            if (!first)
                printf(",");

            for (k = i; k <= j; k++)
                printf("%c", str[k]);

            first = 0;
        }
    }

    return 0;
}

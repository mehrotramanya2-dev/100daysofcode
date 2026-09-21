#include <stdio.h>

int main() {
    int groups[] = {1, 3, 5, 3, 1};

    printf("\n");
    for (int g = 0; g < 5; g++) {
        for (int i = 0; i < groups[g]; i++) {
            printf("*\n");
        }
        printf("\n");
    }
    return 0;
}

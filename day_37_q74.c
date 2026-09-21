#include <stdio.h>

int main() {
    int r, c, mat[50][50];
    scanf("%d %d", &r, &c);

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    /* transpose has c rows and r columns */
    for (int j = 0; j < c; j++) {
        for (int i = 0; i < r; i++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}

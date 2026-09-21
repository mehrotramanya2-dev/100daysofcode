#include <stdio.h>

int main() {
    int r, c, mat[50][50];
    scanf("%d %d", &r, &c);

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &mat[i][j]);

    /* elements with the same (i + j) lie on the same diagonal */
    for (int s = 0; s <= r + c - 2; s++) {
        for (int i = 0; i < r; i++) {
            int j = s - i;
            if (j >= 0 && j < c) {
                printf("%d ", mat[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}

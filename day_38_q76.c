#include <stdio.h>

int main() {
    int r, c, mat[50][50];
    scanf("%d %d", &r, &c);

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &mat[i][j]);

    /* only a square matrix can be symmetric */
    if (r != c) {
        printf("Not Symmetric\n");
        return 0;
    }

    int symmetric = 1;
    for (int i = 0; i < r && symmetric; i++) {
        for (int j = 0; j < i; j++) {
            if (mat[i][j] != mat[j][i]) {
                symmetric = 0;
                break;
            }
        }
    }

    if (symmetric) printf("Symmetric\n");
    else printf("Not Symmetric\n");
    return 0;
}

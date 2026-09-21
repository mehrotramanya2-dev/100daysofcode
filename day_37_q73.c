#include <stdio.h>

int main() {
    int r, c, mat[50][50], rowSum[50];
    scanf("%d %d", &r, &c);

    for (int i = 0; i < r; i++) {
        rowSum[i] = 0;
        for (int j = 0; j < c; j++) {
            scanf("%d", &mat[i][j]);
            rowSum[i] += mat[i][j];
        }
    }

    for (int i = 0; i < r; i++) {
        printf("%d\n", rowSum[i]);
    }
    return 0;
}

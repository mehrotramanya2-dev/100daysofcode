#include <stdio.h>

int main() {
    int n, mat[50][50], sum = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
        sum += mat[i][i];
    }
    printf("%d\n", sum);
    return 0;
}

#include <stdio.h>

int main() {
    int n, mat[50][50];
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &mat[i][j]);

    int distinct = 1;
    for (int i = 0; i < n && distinct; i++) {
        for (int j = i + 1; j < n; j++) {
            if (mat[i][i] == mat[j][j]) {
                distinct = 0;
                break;
            }
        }
    }

    if (distinct) printf("Yes\n");
    else printf("No\n");
    return 0;
}

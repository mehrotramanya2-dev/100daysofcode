#include <stdio.h>

int main() {
    int n1, n2, a[100], b[100], merged[200];
    scanf("%d", &n1);
    for (int i = 0; i < n1; i++) {
        scanf("%d", &a[i]);
    }
    scanf("%d", &n2);
    for (int i = 0; i < n2; i++) {
        scanf("%d", &b[i]);
    }

    int k = 0;
    for (int i = 0; i < n1; i++) merged[k++] = a[i];
    for (int i = 0; i < n2; i++) merged[k++] = b[i];

    for (int i = 0; i < k; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");
    return 0;
}

#include <stdio.h>

int main() {
    int n, arr[101], x, pos;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d %d", &x, &pos); /* pos is 1-based */

    if (pos < 1 || pos > n + 1) {
        printf("Invalid position\n");
        return 0;
    }

    for (int i = n - 1; i >= pos - 1; i--) {
        arr[i + 1] = arr[i];
    }
    arr[pos - 1] = x;
    n++;

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

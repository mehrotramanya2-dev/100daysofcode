#include <stdio.h>

int main() {
    int n, arr[100], pos;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &pos); /* pos is 1-based */

    if (pos < 1 || pos > n) {
        printf("Invalid position\n");
        return 0;
    }

    for (int i = pos - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

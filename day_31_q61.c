#include <stdio.h>

int main() {
    int n, arr[100], key, found = -1;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &key);

    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            found = i;
            break;
        }
    }

    if (found != -1) printf("Element found at index %d\n", found);
    else printf("Element not found\n");
    return 0;
}

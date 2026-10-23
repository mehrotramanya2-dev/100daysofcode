*/Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration./*


#include <stdio.h>

int main() {
    int n, i;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];
    int max = 0;

    printf("Enter array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] > max)
            max = arr[i];
    }

    int freq[max + 1];

    for (i = 0; i <= max; i++)
        freq[i] = 0;

    for (i = 0; i < n; i++) {
        freq[arr[i]]++;
        if (freq[arr[i]] == 2) {
            printf("Repeated element: %d\n", arr[i]);
            return 0;
        }
    }

    return 0;
}

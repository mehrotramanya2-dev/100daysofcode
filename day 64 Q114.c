*/Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output./*

#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    scanf("%999s", s);

    int n = strlen(s);
    int last[256];
    int i, start = 0, maxLen = 0;

    for (i = 0; i < 256; i++)
        last[i] = -1;

    for (i = 0; i < n; i++) {
        unsigned char ch = s[i];

        if (last[ch] >= start)
            start = last[ch] + 1;

        last[ch] = i;

        if (i - start + 1 > maxLen)
            maxLen = i - start + 1;
    }

    printf("%d", maxLen);

    return 0;
}

// Q14: Check whether a character is a vowel or consonant.
#include <stdio.h>

int main(void) {
    char ch;
    printf("Enter an alphabet: ");
    scanf(" %c", &ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        printf("Vowel\n");
    else
        printf("Consonant\n");

    return 0;
}

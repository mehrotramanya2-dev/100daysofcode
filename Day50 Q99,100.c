*/Change the date format from dd/04/yyyy to dd-Apr-yyyy.*/
#include <stdio.h>

int main() {
    int day, month, year;

    printf("Enter date (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &day, &month, &year);

    if (month == 4)
        printf("%02d-Apr-%d", day, year);
    else
        printf("Invalid month");

    return 0;
}

*/Print all sub-strings of a string./*
  #include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j, k;

    printf("Enter a string: ");
    scanf("%s", str);

    for (i = 0; i < strlen(str); i++) {
        for (j = i; j < strlen(str); j++) {
            for (k = i; k <= j; k++) {
                printf("%c", str[k]);
            }
            printf("\n");
        }
    }

    return 0;
}

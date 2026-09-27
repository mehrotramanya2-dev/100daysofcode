/*Print initials of a name with the surname displayed in full./*
#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    int i;

    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);

    // Print first letter of the first name
    printf("Initials with surname: %c", name[0]);

    // Print initials of middle names
    for (i = 1; name[i] != '\0'; i++) {
        if (name[i] == ' ' && name[i + 1] != '\0') {
            // Check if this is not the last name
            int j = i + 1;
            while (name[j] != '\0' && name[j] != '\n') {
                if (name[j] == ' ')
                    break;
                j++;
            }

            if (name[j] == ' ' || name[j] == '\n' || name[j] == '\0')
                continue;
            
            printf(". %c", name[i + 1]);
        }
    }

    // Find and print surname in full
    for (i = strlen(name) - 1; i >= 0 && name[i] == '\n'; i--);
    
    int end = i;
    while (i >= 0 && name[i] != ' ')
        i--;

    printf(". %s", &name[i + 1]);

    return 0;
}


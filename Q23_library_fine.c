// Q23: Calculate library fine based on late days.
#include <stdio.h>

int main(void) {
    int days;
    double fine = 0;

    printf("Enter number of days late: ");
    scanf("%d", &days);

    if (days < 0) {
        printf("Invalid number of days\n");
    } else if (days > 30) {
        printf("Membership Cancelled\n");
    } else {
        if (days <= 5)
            fine = days * 2;
        else if (days <= 10)
            fine = 5 * 2 + (days - 5) * 4;
        else
            fine = 5 * 2 + 5 * 4 + (days - 10) * 6;

        printf("Fine = Rs. %.2f\n", fine);
    }

    return 0;
}

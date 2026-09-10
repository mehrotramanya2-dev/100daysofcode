// Q24: Calculate electricity bill using slab rates.
#include <stdio.h>

int main(void) {
    int units;
    double bill = 0;

    printf("Enter units consumed: ");
    scanf("%d", &units);

    if (units < 0) {
        printf("Invalid units\n");
    } else {
        if (units <= 100)
            bill = units * 5;
        else if (units <= 200)
            bill = 100 * 5 + (units - 100) * 7;
        else if (units <= 300)
            bill = 100 * 5 + 100 * 7 + (units - 200) * 10;
        else
            bill = 100 * 5 + 100 * 7 + 100 * 10 + (units - 300) * 12;

        printf("Electricity Bill = Rs. %.2f\n", bill);
    }

    return 0;
}

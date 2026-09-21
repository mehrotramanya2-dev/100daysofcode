*/Check if a string is a palindrome.*/
#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Sum = %d\n", a + b);
    printf("Difference = %d\n", a - b);
    printf("Product = %d\n", a * b);

    if (b != 0)
    {
        printf("Quotient = %d\n", a / b);
    }
    else
    {
        printf("Division by zero is not possible.\n");
    }

    return 0;
}

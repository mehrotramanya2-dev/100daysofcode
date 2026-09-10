// Q25: Basic calculator using switch-case for +, -, *, /, %.
#include <stdio.h>

int main(void) {
    double a, b;
    char op;

    printf("Enter expression (example: 10 + 5): ");
    scanf("%lf %c %lf", &a, &op, &b);

    switch (op) {
        case '+': printf("Result = %.2f\n", a + b); break;
        case '-': printf("Result = %.2f\n", a - b); break;
        case '*': printf("Result = %.2f\n", a * b); break;
        case '/':
            if (b == 0)
                printf("Division by zero is not allowed.\n");
            else
                printf("Result = %.2f\n", a / b);
            break;
        case '%': {
            int x = (int)a, y = (int)b;
            if (y == 0)
                printf("Modulo by zero is not allowed.\n");
            else
                printf("Result = %d\n", x % y);
            break;
        }
        default:
            printf("Invalid operator\n");
    }

    return 0;
}

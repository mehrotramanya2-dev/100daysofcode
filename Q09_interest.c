// Q9: Calculate simple and compound interest.
#include <stdio.h>
#include <math.h>

int main(void) {
    double principal, rate, time, si, amount, ci;

    printf("Enter principal, rate and time: ");
    scanf("%lf %lf %lf", &principal, &rate, &time);

    si = principal * rate * time / 100.0;
    amount = principal * pow(1 + rate / 100.0, time);
    ci = amount - principal;

    printf("Simple Interest = %.2f\n", si);
    printf("Compound Interest = %.2f\n", ci);
    printf("Compound Amount = %.2f\n", amount);
    return 0;
}

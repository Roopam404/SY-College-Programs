#include <stdio.h>
int main() 
{
    char op;
    double a, b;
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op);
    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);

    switch(op) {
        case '+': printf("Result = %.2lf", a + b); break;
        case '-': printf("Result = %.2lf", a - b); break;
        case '*': printf("Result = %.2lf", a * b); break;
        case '/': printf("Result = %.2lf", a / b); break;
        default: printf("Invalid operator");
    }
    return 0;
}

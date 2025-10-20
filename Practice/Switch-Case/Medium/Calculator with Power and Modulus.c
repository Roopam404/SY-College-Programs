#include <stdio.h>
#include <math.h>
int main() 
{
    int choice, a, b;
    printf("1.Add 2.Subtract 3.Multiply 4.Divide 5.Power 6.Modulus\nEnter choice: ");
    scanf("%d", &choice);
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    switch(choice) {
        case 1: printf("Sum = %d", a + b); break;
        case 2: printf("Difference = %d", a - b); break;
        case 3: printf("Product = %d", a * b); break;
        case 4: printf("Quotient = %.2f", (float)a / b); break;
        case 5: printf("Power = %.2f", pow(a, b)); break;
        case 6: printf("Remainder = %d", a % b); break;
        default: printf("Invalid choice");
    }
    return 0;
}

#include <stdio.h>
int main()
{
    int a, b, choice;
  
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
  
    printf("1.Add 2.Subtract 3.Multiply 4.Divide\nEnter choice: ");
    scanf("%d", &choice);

    switch(choice)
      {
        case 1: printf("Sum = %d", a + b); break;
        case 2: printf("Difference = %d", a - b); break;
        case 3: printf("Product = %d", a * b); break;
        case 4: printf("Quotient = %.2f", (float)a / b); break;
        default: printf("Invalid choice");
    }
    return 0;
}

#include <stdio.h>
int main()
{
    int ch;
    float inr;
    printf("1.INR to USD\n2.INR to EUR\nEnter choice: ");
    scanf("%d", &ch);
    printf("Enter amount in INR: ");
    scanf("%f", &inr);

    switch(ch) {
        case 1: printf("%.2f INR = %.2f USD", inr, inr / 83.0); break;
        case 2: printf("%.2f INR = %.2f EUR", inr, inr / 90.0); break;
        default: printf("Invalid choice");
    }
    return 0;
}

#include <stdio.h>
int main()
{
    int choice;
    float t, result;
    printf("1.C to F\n2.F to C\nEnter choice: ");
    scanf("%d", &choice);
    printf("Enter temperature: ");
    scanf("%f", &t);

    switch(choice) {
        case 1: result = (t * 9 / 5) + 32; printf("Fahrenheit = %.2f", result); break;
        case 2: result = (t - 32) * 5 / 9; printf("Celsius = %.2f", result); break;
        default: printf("Invalid choice");
    }
    return 0;
}

#include <stdio.h>
int main() 
{
    int choice;
    float val;
    printf("1.Meters to Km\n2.Km to Meters\n3.Cm to Inches\nEnter choice: ");
    scanf("%d", &choice);
    printf("Enter value: ");
    scanf("%f", &val);

    switch(choice) {
        case 1: printf("%.2f m = %.2f km", val, val / 1000); break;
        case 2: printf("%.2f km = %.2f m", val, val * 1000); break;
        case 3: printf("%.2f cm = %.2f inches", val, val / 2.54); break;
        default: printf("Invalid choice");
    }
    return 0;
}

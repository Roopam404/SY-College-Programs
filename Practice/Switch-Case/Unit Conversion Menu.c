#include <stdio.h>
int main()
{
    int ch;
    float val;
    printf("1.Cm to M  2.Km to M  3.C to F\nEnter choice: ");
    scanf("%d", &ch);
    printf("Enter value: ");
    scanf("%f", &val);

    switch(ch) {
        case 1: printf("%.2f cm = %.2f m", val, val/100); break;
        case 2: printf("%.2f km = %.2f m", val, val*1000); break;
        case 3: printf("%.2f C = %.2f F", val, (val*9/5)+32); break;
        default: printf("Invalid choice");
    }
    return 0;
}

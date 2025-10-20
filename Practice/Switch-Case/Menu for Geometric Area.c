#include <stdio.h>
int main() 
{
    int choice;
    float area, r, s, l, b;
    printf("1.Circle  2.Square  3.Rectangle\nEnter choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Enter radius: ");
            scanf("%f", &r);
            area = 3.14 * r * r;
            printf("Area = %.2f", area);
            break;
        case 2:
            printf("Enter side: ");
            scanf("%f", &s);
            area = s * s;
            printf("Area = %.2f", area);
            break;
        case 3:
            printf("Enter length and breadth: ");
            scanf("%f %f", &l, &b);
            area = l * b;
            printf("Area = %.2f", area);
            break;
        default:
            printf("Invalid choice");
    }
    return 0;
}

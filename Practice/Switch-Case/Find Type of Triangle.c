#include <stdio.h>
int main() 
{
    int a, b, c;
    printf("Enter three sides of triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    switch(a == b && b == c) {
        case 1: printf("Equilateral Triangle"); break;
        case 0:
            switch(a == b || b == c || a == c) {
                case 1: printf("Isosceles Triangle"); break;
                default: printf("Scalene Triangle");
            }
    }
    return 0;
}

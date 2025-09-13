#include<stdio.h>

void main()
{
    float A, B, Sum;

    printf("Enter First Tempreature : ");
    scanf("%f", &A);

    printf("Enter Second Tempreature : ");
    scanf("%f", &B);

    Sum = A + B;
    printf("Total Tempreature : %f", Sum);

    getch();
}

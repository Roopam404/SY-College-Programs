#include <stdio.h>
int main() 
{
    float p,r,t,si;
    printf("Enter principal amount: ");
    scanf("%f",&p);
    printf("Enter time in years: ");
    scanf("%f",&t);

    if(t < 1)
        r = 4;
    else if(t <= 3)
        r = 5;
    else
        r = 6;

    si = (p*r*t)/100;
    printf("Simple Interest = %.2f", si);

    return 0;
}
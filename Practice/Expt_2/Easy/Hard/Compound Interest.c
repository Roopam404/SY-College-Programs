#include <stdio.h>
#include <math.h>

int main() 
{
    double principal, rate, time, amount, ci;
  
    printf("Enter principal, rate (%%), time (years): ");
    scanf("%lf %lf %lf", &principal, &rate, &time);
  
    amount = principal * pow((1 + rate/100), time);
  
    ci = amount - principal;
    printf("Compound Interest = %.2lf\n", ci);
  
    return 0;
}

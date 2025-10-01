#include <stdio.h>

int main() 
{
    float units, bill;
  
    printf("Enter units consumed: ");
    scanf("%f", &units);

    if (units <= 100)
        bill = units * 1.5;
    else if (units <= 200)
        bill = 100 * 1.5 + (units - 100) * 2;
    else
        bill = 100 * 1.5 + 100 * 2 + (units - 200) * 3;

    printf("Electricity bill: %.2f\n", bill);
    return 0;
}

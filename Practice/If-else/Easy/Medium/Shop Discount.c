#include <stdio.h>

int main() 
{
    float purchase, discount;
  
    printf("Enter purchase amount: ");
    scanf("%f", &purchase);

    if (purchase > 1000)
        discount = purchase * 0.10;
    else
        discount = 0;

    printf("Discount: %.2f\n", discount);
    return 0;
}

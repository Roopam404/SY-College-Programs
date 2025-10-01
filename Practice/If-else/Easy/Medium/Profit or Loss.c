#include <stdio.h>

int main()
{
    float cost, selling;
  
    printf("Enter cost price and selling price: ");
    scanf("%f %f", &cost, &selling);

    if (selling > cost)
        printf("Profit\n");
    else if (selling < cost)
        printf("Loss\n");
    else
        printf("No Profit No Loss\n");

    return 0;
}

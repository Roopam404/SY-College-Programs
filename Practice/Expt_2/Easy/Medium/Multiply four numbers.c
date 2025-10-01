#include <stdio.h>

int main()
{
    int a, b, c, d, prod;
  
    printf("Enter four numbers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);
  
    prod = a * b * c * d;
    printf("Product = %d\n", prod);
  
    return 0;
}

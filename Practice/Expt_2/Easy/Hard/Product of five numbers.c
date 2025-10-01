#include <stdio.h>

int main() 
{
    int a, b, c, d, e, prod;
  
    printf("Enter five numbers: ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
  
    prod = a * b * c * d * e;
    printf("Product = %d\n", prod);
  
    return 0;
}

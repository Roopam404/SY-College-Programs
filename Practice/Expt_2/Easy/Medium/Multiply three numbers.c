#include <stdio.h>

int main() 
{
    int a, b, c, prod;
  
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
  
    prod = a * b * c;
    printf("Product = %d\n", prod);
  
    return 0;
}

#include <stdio.h>

int main() 
{
    int a, b, result;
  
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
  
    result = (a * a) - (b * b);
    printf("Difference of squares = %d\n", result);
  
    return 0;
}

#include <stdio.h>

int main() 
{
    int a, b, c, result;
  
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
  
    result = (a + b + c) * (a + b + c);
    printf("Square of sum = %d\n", result);
  
    return 0;
}

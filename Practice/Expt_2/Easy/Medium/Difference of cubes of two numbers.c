#include <stdio.h>

int main() 
{
    int a, b, result;
  
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
  
    result = (a * a * a) - (b * b * b);
    printf("Difference of cubes = %d\n", result);
  
    return 0;
}

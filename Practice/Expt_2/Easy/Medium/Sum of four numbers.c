#include <stdio.h>

int main() 
{
    int a, b, c, d, sum;
  
    printf("Enter four numbers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);
  
    sum = a + b + c + d;
    printf("Sum = %d\n", sum);
  
    return 0;
}

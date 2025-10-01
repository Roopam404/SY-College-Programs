#include <stdio.h>

int main()
{
    int a, b, c, d, e, sum;
  
    printf("Enter five numbers: ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
  
    sum = a + b + c + d + e;
    printf("Sum = %d\n", sum);
  
    return 0;
}

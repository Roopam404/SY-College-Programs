#include <stdio.h>

int main() 
{
    int a, b, rem;
  
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
  
    rem = a % b;
    printf("Remainder = %d\n", rem);
  
    return 0;
}

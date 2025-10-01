#include <stdio.h>

int main() 
{
    float side, perimeter;
  
    printf("Enter side: ");
    scanf("%f", &side);
  
    perimeter = 4 * side;
    printf("Perimeter of square = %.2f\n", perimeter);
  
    return 0;
}

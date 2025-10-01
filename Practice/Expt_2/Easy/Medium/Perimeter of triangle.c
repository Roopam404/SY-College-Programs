#include <stdio.h>

int main() 
{
    float a, b, c, perimeter;
  
    printf("Enter three sides of triangle: ");
    scanf("%f %f %f", &a, &b, &c);
  
    perimeter = a + b + c;
    printf("Perimeter of triangle = %.2f\n", perimeter);
  
    return 0;
}

#include <stdio.h>

int main() 
{
    float a, b, c, d, avg;
  
    printf("Enter four numbers: ");
    scanf("%f %f %f %f", &a, &b, &c, &d);
  
    avg = (a + b + c + d) / 4;
    printf("Average = %.2f\n", avg);
  
    return 0;
  
  
}

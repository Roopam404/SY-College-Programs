#include <stdio.h>

int main() 
{
    float radius, height, volume;
  
    printf("Enter radius and height: ");
    scanf("%f %f", &radius, &height);
  
    volume = 3.14159 * radius * radius * height;
    printf("Volume of cylinder = %.2f\n", volume);
  
    return 0;
  
  
}

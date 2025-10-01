#include <stdio.h>

int main() 
{
    float meters, cm;
  
    printf("Enter distance in meters: ");
    scanf("%f", &meters);
  
    cm = meters * 100;
    printf("Distance in centimeters = %.2f\n", cm);
  
    return 0;
}

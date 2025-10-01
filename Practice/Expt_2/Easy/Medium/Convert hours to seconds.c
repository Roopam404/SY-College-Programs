#include <stdio.h>

int main() 
{
    int hours, seconds;
  
    printf("Enter number of hours: ");
    scanf("%d", &hours);
  
    seconds = hours * 3600;
    printf("Seconds = %d\n", seconds);
  
    return 0;
  
}

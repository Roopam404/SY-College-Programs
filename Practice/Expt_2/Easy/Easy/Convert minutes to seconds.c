#include <stdio.h>

int main() 
{
    int minutes, seconds;
  
    printf("Enter minutes: ");
    scanf("%d", &minutes);
  
    seconds = minutes * 60;
    printf("Seconds = %d\n", seconds);
  
    return 0;
}

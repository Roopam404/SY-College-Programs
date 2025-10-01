#include <stdio.h>

int main()
{
    int days, hours;
  
    printf("Enter number of days: ");
    scanf("%d", &days);
  
    hours = days * 24;
    printf("Hours = %d\n", hours);
  
    return 0;
}

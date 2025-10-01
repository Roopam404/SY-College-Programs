#include <stdio.h>

int main() 
{
    int hour;
  
    printf("Enter hour (0-23): ");
    scanf("%d", &hour);

    if (hour < 12)
        printf("AM\n");
    else
        printf("PM\n");

    return 0;
}

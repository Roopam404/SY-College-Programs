#include <stdio.h>

int main() 
{
    int temp;
  
    printf("Enter temperature in Celsius: ");
    scanf("%d", &temp);

    if (temp > 30)
        printf("Hot\n");
    else
        printf("Cold\n");

    return 0;
}

#include <stdio.h>

int main() 
{
    int temp;
  
    printf("Enter temperature: ");
    scanf("%d", &temp);

    if (temp < 0)
        printf("Freezing\n");
    else if (temp <= 25)
        printf("Pleasant\n");
    else
        printf("Hot\n");

    return 0;
}

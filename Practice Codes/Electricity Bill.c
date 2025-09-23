#include <stdio.h>
int main() 
{
    int units;
    printf("Enter units consumed: ");
    scanf("%d", &units);

    if(units <= 100)
        printf("No charge");
    else if(units <= 300)
        printf("Charge Rs.5/unit");
    else if(units <= 500)
        printf("Charge Rs.8/unit");
    else
        printf("Charge Rs.10/unit");

    return 0;
}
#include <stdio.h>
int main() 
{
    int days;
    float fine;
    printf("Enter days book returned late: ");
    scanf("%d",&days);

    if(days <= 0)
        fine = 0;
    else if(days <= 5)
        fine = days * 1.0;
    else if(days <= 10)
        fine = 5*1.0 + (days-5)*2.0;
    else
        fine = 5*1.0 + 5*2.0 + (days-10)*5.0;

    printf("Total fine = %.2f",fine);

    return 0;
}
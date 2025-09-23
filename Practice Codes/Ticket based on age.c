#include <stdio.h>
int main() 
{
    int age;
    printf("Enter age: ");
    scanf("%d", &age);

    if(age <= 12)
        printf("Child - Ticket Rs.50");
    else if(age < 60)
        printf("Adult - Ticket Rs.100");
    else
        printf("Senior - Ticket Rs.70");

    return 0;
}
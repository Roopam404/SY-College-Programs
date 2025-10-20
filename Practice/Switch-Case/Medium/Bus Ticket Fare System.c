#include <stdio.h>
int main() 
{
    int route;
    printf("Select Route:\n1.City to Airport\n2.City to Mall\n3.City to Station\nEnter choice: ");
    scanf("%d", &route);

    switch(route) {
        case 1: printf("Fare = Rs.150"); break;
        case 2: printf("Fare = Rs.60"); break;
        case 3: printf("Fare = Rs.80"); break;
        default: printf("Invalid Route");
    }
    return 0;
}

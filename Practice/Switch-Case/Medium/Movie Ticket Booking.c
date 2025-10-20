#include <stdio.h>
int main() 
{
    int ch, tickets;
    printf("Select Movie:\n1.Avengers\n2.Inception\n3.Interstellar\nEnter choice: ");
    scanf("%d", &ch);
    printf("Enter number of tickets: ");
    scanf("%d", &tickets);

    switch(ch) {
        case 1: printf("Total = Rs.%d", tickets * 200); break;
        case 2: printf("Total = Rs.%d", tickets * 180); break;
        case 3: printf("Total = Rs.%d", tickets * 220); break;
        default: printf("Invalid choice");
    }
    return 0;
}

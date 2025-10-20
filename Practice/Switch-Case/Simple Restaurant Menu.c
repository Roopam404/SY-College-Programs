#include <stdio.h>
int main() 
{
    int choice;
    printf("---- MENU ----\n1.Pizza\n2.Burger\n3.Pasta\n4.Sandwich\nEnter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1: printf("You ordered Pizza - Rs.150"); break;
        case 2: printf("You ordered Burger - Rs.80"); break;
        case 3: printf("You ordered Pasta - Rs.120"); break;
        case 4: printf("You ordered Sandwich - Rs.60"); break;
        default: printf("Invalid choice");
    }
    return 0;
}

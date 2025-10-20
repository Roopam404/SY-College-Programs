#include <stdio.h>
int main() 
{
    int num, choice;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("1.Check Odd/Even\n2.Exit\nEnter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            switch(num % 2 == 0) {
                case 1: printf("Even number"); break;
                case 0: printf("Odd number"); break;
            }
            break;
        case 2: printf("Exiting..."); break;
        default: printf("Invalid choice");
    }
    return 0;
}

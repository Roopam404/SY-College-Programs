#include <stdio.h>
int main()
{
    int choice;
    float bal = 10000, amt;
    printf("1.Check Balance\n2.Deposit\n3.Withdraw\n4.Exit\nEnter choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1: printf("Balance = Rs. %.2f", bal); break;
        case 2:
            printf("Enter amount to deposit: ");
            scanf("%f", &amt);
            bal += amt;
            printf("Updated Balance = Rs. %.2f", bal);
            break;
        case 3:
            printf("Enter amount to withdraw: ");
            scanf("%f", &amt);
            if(amt > bal)
                printf("Insufficient balance");
            else {
                bal -= amt;
                printf("Updated Balance = Rs. %.2f", bal);
            }
            break;
        case 4: printf("Thank you!"); break;
        default: printf("Invalid choice");
    }
    return 0;
}

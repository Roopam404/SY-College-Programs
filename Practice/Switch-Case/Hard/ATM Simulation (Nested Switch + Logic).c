#include <stdio.h>
int main(){
    float balance = 5000, amount;
    int ch, pin, entered;
    pin = 1234;
    printf("Enter PIN: ");
    scanf("%d",&entered);

    if(entered == pin){
        printf("1.Check Balance\n2.Deposit\n3.Withdraw\nEnter choice: ");
        scanf("%d",&ch);
        switch(ch){
            case 1: printf("Balance = %.2f", balance); break;
            case 2:
                printf("Enter amount: ");
                scanf("%f",&amount);
                balance += amount;
                printf("New Balance = %.2f", balance);
                break;
            case 3:
                printf("Enter amount: ");
                scanf("%f",&amount);
                if(amount>balance) printf("Insufficient funds!");
                else {
                    balance -= amount;
                    printf("Withdrawn! Balance = %.2f", balance);
                }
                break;
            default: printf("Invalid Option");
        }
    } else printf("Wrong PIN!");
    return 0;
}

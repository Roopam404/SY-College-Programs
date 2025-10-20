#include <stdio.h>

int main(){
    float balance=1000, amount;
    int ch;
    printf("1.Deposit\n2.Withdraw\n3.Check Balance\nEnter choice: ");
    scanf("%d",&ch);

    switch(ch){
        case 1:
            printf("Enter deposit amount: "); scanf("%f",&amount);
            balance+=amount;
            printf("Updated Balance = %.2f", balance);
            break;
        case 2:
            printf("Enter withdrawal amount: "); scanf("%f",&amount);
            if(amount>balance) printf("Insufficient Balance!");
            else{
                balance-=amount;
                printf("Remaining Balance = %.2f", balance);
            }
            break;
        case 3:
            printf("Balance = %.2f", balance);
            break;
        default:
            printf("Invalid Option");
    }
    return 0;
}

#include <stdio.h>
int main() 
{
    float balance, withdraw;
    printf("Enter account balance: ");
    scanf("%f",&balance);
    printf("Enter withdrawal amount: ");
    scanf("%f",&withdraw);

    if(withdraw <= 0)
        printf("Invalid amount");
    else if(withdraw > balance)
        printf("Insufficient balance");
    else {
        balance -= withdraw;
        printf("Withdrawal successful. Remaining balance = %.2f",balance);
    }

    return 0;
}
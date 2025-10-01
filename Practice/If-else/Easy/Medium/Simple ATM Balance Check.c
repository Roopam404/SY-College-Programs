#include <stdio.h>

int main() 
{
    float balance = 5000, withdraw;
  
    printf("Enter amount to withdraw: ");
    scanf("%f", &withdraw);

    if (withdraw <= balance)
        printf("Transaction successful. Remaining balance: %.2f\n", balance - withdraw);
    else
        printf("Insufficient balance\n");

    return 0;
}

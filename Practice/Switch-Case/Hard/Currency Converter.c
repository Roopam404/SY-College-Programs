#include <stdio.h>
int main(){
    float amt;
    int ch;
    printf("Enter amount in INR: ");
    scanf("%f",&amt);
    printf("1.USD 2.EUR 3.YEN\n");
    scanf("%d",&ch);

    switch(ch){
        case 1: printf("USD = %.2f", amt/83.0); break;
        case 2: printf("EUR = %.2f", amt/90.0); break;
        case 3: printf("YEN = %.2f", amt*1.76); break;
        default: printf("Invalid");
    }
    return 0;
}

#include <stdio.h>

int main(){
    char op[4] = {'+','-','*','/'};
    int a,b,ch;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    printf("1.+ 2.- 3.* 4./ : ");
    scanf("%d",&ch);
    switch(op[ch-1]){
        case '+': printf("Sum = %d", a+b); break;
        case '-': printf("Diff = %d", a-b); break;
        case '*': printf("Prod = %d", a*b); break;
        case '/': printf("Div = %.2f", (float)a/b); break;
        default: printf("Invalid");
    }
    return 0;
}

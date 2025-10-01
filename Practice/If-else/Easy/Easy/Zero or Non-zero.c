#include <stdio.h>

int main() 
{
    int num;
  
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 0)
        printf("Number is Zero\n");
    else
        printf("Number is Non-zero\n");

    return 0;
}

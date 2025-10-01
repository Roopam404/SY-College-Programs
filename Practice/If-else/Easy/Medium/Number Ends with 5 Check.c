
#include <stdio.h>

int main() 
{
    int num;
  
    printf("Enter number: ");
    scanf("%d", &num);

    if (num % 10 == 5 || num % 10 == -5)
        printf("Number ends with 5\n");
    else
        printf("Number does not end with 5\n");

    return 0;
}

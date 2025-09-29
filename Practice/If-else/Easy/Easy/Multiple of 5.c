#include <stdio.h>

int main()
{
    int num;
  
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 5 == 0)
        printf("Multiple of 5\n");
    else
        printf("Not a multiple of 5\n");

    return 0;
}

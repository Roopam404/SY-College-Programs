#include <stdio.h>

int main()
{
    int num;
  
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 2 == 0)
        printf("Divisible by 2\n");
    else if (num % 3 == 0)
        printf("Divisible by 3\n");
    else
        printf("Not divisible by 2 or 3\n");

    return 0;
}

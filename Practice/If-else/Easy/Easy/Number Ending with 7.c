#include <stdio.h>

int main()
{
    int num;
  
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 10 == 7 || num % 10 == -7)
        printf("Number ends with 7\n");
    else
        printf("Number does not end with 7\n");

    return 0;
}

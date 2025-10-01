#include <stdio.h>

int main() 
{
    int num;
  
    printf("Enter number: ");
    scanf("%d", &num);

    if ((num % 3 == 0) ^ (num % 7 == 0))
        printf("Divisible by 3 or 7 but not both\n");
    else
        printf("Either divisible by both or neither\n");

    return 0;
}

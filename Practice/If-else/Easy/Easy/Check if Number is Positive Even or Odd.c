#include <stdio.h>

int main() 
{
    int num;
  
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num > 0) {
        if (num % 2 == 0)
            printf("Positive and Even\n");
        else
            printf("Positive and Odd\n");
    } else
        printf("Number is not positive\n");

    return 0;
}

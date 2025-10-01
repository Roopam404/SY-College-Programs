#include <stdio.h>

int main()
{
    char ch;
  
    printf("Enter a character: ");
    scanf(" %c", &ch);

    if (ch >= '0' && ch <= '9')
        printf("It is a digit\n");
    else
        printf("Not a digit\n");

    return 0;
}

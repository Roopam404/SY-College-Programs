#include <stdio.h>

int main()
{
    char msg[50];
  
    printf("Enter a message: ");
    scanf("%49s", msg);
  
    printf("You said: %s\n", msg);
  
    return 0;
}

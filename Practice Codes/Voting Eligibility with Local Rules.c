#include <stdio.h>

int main()
{
    int age;
    char citizen;
  
    printf("Enter age: ");
    scanf("%d", &age);
  
    printf("Are you citizen? (Y/N): ");
    scanf(" %c", &citizen);

    if (age >= 18 && (citizen == 'Y' || citizen == 'y'))
        printf("Eligible to vote\n");
    else
        printf("Not eligible to vote\n");

    return 0;
}

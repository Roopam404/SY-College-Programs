#include <stdio.h>

int main()
{
    int age;
  
    char hasLicense;
  
    printf("Enter age: ");
    scanf("%d", &age);
    printf("Do you have a driving license? (Y/N): ");
    scanf(" %c", &hasLicense);

    if (age >= 18 && (hasLicense == 'Y' || hasLicense == 'y'))
        printf("Can drive\n");
    else
        printf("Cannot drive\n");

    return 0;
}

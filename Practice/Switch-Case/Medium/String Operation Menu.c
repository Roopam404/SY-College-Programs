#include <stdio.h>
#include <string.h>

int main(){
    char str1[50], str2[50];
    int choice;
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);

    printf("1.Concat\n2.Compare\n3.Length of 1st\n4.Reverse 1st\nEnter choice: ");
    scanf("%d",&choice);

    switch(choice){
        case 1:
            strcat(str1,str2);
            printf("Result: %s", str1);
            break;
        case 2:
            if(strcmp(str1,str2)==0) printf("Strings are Equal");
            else printf("Strings are Different");
            break;
        case 3:
            printf("Length = %lu", strlen(str1));
            break;
        case 4:
            strrev(str1);
            printf("Reversed: %s", str1);
            break;
        default:
            printf("Invalid choice");
    }
    return 0;
}

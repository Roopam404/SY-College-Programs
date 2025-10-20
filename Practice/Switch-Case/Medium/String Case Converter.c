#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char str[100];
    int choice;
    printf("Enter a string: ");
    gets(str);
    printf("1.Uppercase\n2.Lowercase\nEnter choice: ");
    scanf("%d",&choice);

    switch(choice){
        case 1:
            for(int i=0;str[i]!='\0';i++) str[i]=toupper(str[i]);
            printf("Uppercase: %s", str);
            break;
        case 2:
            for(int i=0;str[i]!='\0';i++) str[i]=tolower(str[i]);
            printf("Lowercase: %s", str);
            break;
        default:
            printf("Invalid choice");
    }
    return 0;
}

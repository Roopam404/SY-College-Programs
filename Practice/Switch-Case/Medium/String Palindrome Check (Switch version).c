#include <stdio.h>
#include <string.h>

int main(){
    char str[50], rev[50];
    int ch;
    printf("Enter string: ");
    gets(str);

    printf("1.Check Palindrome  2.Length\nEnter choice: ");
    scanf("%d",&ch);

    switch(ch){
        case 1:
            strcpy(rev,str);
            strrev(rev);
            if(strcmp(str,rev)==0) printf("Palindrome");
            else printf("Not Palindrome");
            break;
        case 2:
            printf("Length = %lu", strlen(str));
            break;
        default:
            printf("Invalid choice");
    }
    return 0;
}

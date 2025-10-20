#include <stdio.h>
#include <string.h>

int main(){
    char str[50];
    int ch;
    printf("Enter message: ");
    gets(str);
    printf("1.Encrypt\n2.Decrypt\nEnter choice: ");
    scanf("%d",&ch);

    switch(ch){
        case 1:
            for(int i=0;str[i]!='\0';i++) str[i]+=3;
            printf("Encrypted: %s", str); break;
        case 2:
            for(int i=0;str[i]!='\0';i++) str[i]-=3;
            printf("Decrypted: %s", str); break;
        default:
            printf("Invalid");
    }
    return 0;
}

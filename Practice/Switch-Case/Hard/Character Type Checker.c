#include <stdio.h>
#include <ctype.h>
int main(){
    char c;
    printf("Enter character: ");
    scanf("%c",&c);

    switch(isalpha(c) ? 1 : isdigit(c) ? 2 : 3){
        case 1: printf("Alphabet"); break;
        case 2: printf("Digit"); break;
        case 3: printf("Special Symbol"); break;
    }
    return 0;
}

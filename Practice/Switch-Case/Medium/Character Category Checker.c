#include <stdio.h>
int main() 
{
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);

    switch(ch >= 'A' && ch <= 'Z') {
        case 1: printf("Uppercase letter"); break;
        case 0:
            switch(ch >= 'a' && ch <= 'z') {
                case 1: printf("Lowercase letter"); break;
                case 0:
                    switch(ch >= '0' && ch <= '9') {
                        case 1: printf("Digit"); break;
                        default: printf("Special symbol");
                    }
            }
    }
    return 0;
}

#include <stdio.h>
int main() 
{
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);

    switch(ch >= 'A' && ch <= 'Z') {
        case 1: printf("Uppercase Letter"); break;
        case 0: 
            switch(ch >= 'a' && ch <= 'z') {
                case 1: printf("Lowercase Letter"); break;
                default: printf("Not a Letter");
            }
    }
    return 0;
}

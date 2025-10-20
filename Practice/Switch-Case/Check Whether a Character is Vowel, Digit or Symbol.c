#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);

    switch((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        case 1:
            switch(ch) {
                case 'a': case 'e': case 'i': case 'o': case 'u':
                case 'A': case 'E': case 'I': case 'O': case 'U':
                    printf("Vowel"); break;
                default: printf("Consonant");
            }
            break;
        case 0:
            switch(ch >= '0' && ch <= '9') {
                case 1: printf("Digit"); break;
                default: printf("Symbol");
            }
    }
    return 0;
}

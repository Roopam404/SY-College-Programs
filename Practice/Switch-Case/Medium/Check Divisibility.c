#include <stdio.h>
int main()
{
    int num;
    printf("Enter number: ");
    scanf("%d", &num);

    switch(num % 3 == 0 && num % 5 == 0) {
        case 1: printf("Divisible by both 3 and 5"); break;
        case 0:
            switch(num % 3 == 0) {
                case 1: printf("Divisible by 3 only"); break;
                case 0:
                    switch(num % 5 == 0) {
                        case 1: printf("Divisible by 5 only"); break;
                        default: printf("Not divisible by 3 or 5");
                    }
            }
    }
    return 0;
}

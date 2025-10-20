#include <stdio.h>
int main()
{
    char grade;
    printf("Enter grade (A/B/C/D/F): ");
    scanf(" %c", &grade);

    switch(grade) {
        case 'A': printf("Excellent!"); break;
        case 'B': printf("Good job!"); break;
        case 'C': printf("Average"); break;
        case 'D': printf("Needs improvement"); break;
        case 'F': printf("Fail"); break;
        default: printf("Invalid grade");
    }
    return 0;
}

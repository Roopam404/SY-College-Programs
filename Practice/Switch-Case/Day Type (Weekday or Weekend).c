#include <stdio.h>
int main() 
{
    int day;
    printf("Enter day number (1–7): ");
    scanf("%d", &day);

    switch(day) {
        case 1: case 2: case 3: case 4: case 5:
            printf("Weekday"); break;
        case 6: case 7:
            printf("Weekend"); break;
        default:
            printf("Invalid day number");
    }
    return 0;
}

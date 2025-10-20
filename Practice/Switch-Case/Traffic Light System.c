#include <stdio.h>
int main() 
{
    char color;
    printf("Enter traffic light color (R/Y/G): ");
    scanf(" %c", &color);

    switch(color) {
        case 'R': case 'r': printf("Stop!"); break;
        case 'Y': case 'y': printf("Get Ready!"); break;
        case 'G': case 'g': printf("Go!"); break;
        default: printf("Invalid color");
    }
    return 0;
}

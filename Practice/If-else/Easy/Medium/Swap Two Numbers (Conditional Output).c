#include <stdio.h>

int main() 
{
    int a, b;
  
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (a != b) {
        int temp = a;
        a = b;
        b = temp;
        printf("Swapped: a=%d, b=%d\n", a, b);
    } else {
        printf("Numbers are equal, no swap needed\n");
    }

    return 0;
}

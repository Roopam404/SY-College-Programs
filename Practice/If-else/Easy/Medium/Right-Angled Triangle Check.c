#include <stdio.h>

int main() 
{
    int a, b, c;
  
    printf("Enter sides of triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a*a + b*b == c*c || b*b + c*c == a*a || a*a + c*c == b*b)
        printf("Right-angled triangle\n");
    else
        printf("Not a right-angled triangle\n");

    return 0;
}

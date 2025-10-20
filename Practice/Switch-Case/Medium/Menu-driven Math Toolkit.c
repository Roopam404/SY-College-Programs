#include <stdio.h>
#include <math.h>

int main(){
    int ch,n;
    printf("1.Square\n2.Cube\n3.Square Root\nEnter choice: ");
    scanf("%d",&ch);

    switch(ch){
        case 1:
            printf("Enter number: "); scanf("%d",&n);
            printf("Square = %d", n*n);
            break;
        case 2:
            printf("Enter number: "); scanf("%d",&n);
            printf("Cube = %d", n*n*n);
            break;
        case 3:
            printf("Enter number: "); scanf("%d",&n);
            printf("Square Root = %.2f", sqrt(n));
            break;
        default:
            printf("Invalid option");
    }
    return 0;
}

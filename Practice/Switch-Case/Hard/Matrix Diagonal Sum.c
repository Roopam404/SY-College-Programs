#include <stdio.h>
int main(){
    int n=3, i, j, a[3][3], sum=0;
    printf("Enter 3x3 matrix:\n");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++) scanf("%d",&a[i][j]);

    int ch;
    printf("1.Main Diagonal Sum\n2.Secondary Diagonal Sum\nEnter choice: ");
    scanf("%d",&ch);

    switch(ch){
        case 1:
            for(i=0;i<n;i++) sum+=a[i][i];
            printf("Sum = %d", sum); break;
        case 2:
            for(i=0;i<n;i++) sum+=a[i][n-i-1];
            printf("Sum = %d", sum); break;
        default:
            printf("Invalid choice");
    }
    return 0;
}

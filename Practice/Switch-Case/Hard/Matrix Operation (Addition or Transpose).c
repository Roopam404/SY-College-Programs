#include <stdio.h>

int main(){
    int a[2][2], b[2][2], c[2][2], i,j,ch;
    printf("Enter 2x2 matrix A:\n");
    for(i=0;i<2;i++)
        for(j=0;j<2;j++) scanf("%d",&a[i][j]);

    printf("1.Add another matrix\n2.Transpose\nEnter choice: ");
    scanf("%d",&ch);

    switch(ch){
        case 1:
            printf("Enter 2x2 matrix B:\n");
            for(i=0;i<2;i++)
                for(j=0;j<2;j++) scanf("%d",&b[i][j]);
            for(i=0;i<2;i++)
                for(j=0;j<2;j++)
                    c[i][j]=a[i][j]+b[i][j];
            printf("Sum:\n");
            for(i=0;i<2;i++){
                for(j=0;j<2;j++) printf("%d ",c[i][j]);
                printf("\n");
            }
            break;
        case 2:
            printf("Transpose:\n");
            for(i=0;i<2;i++){
                for(j=0;j<2;j++)
                    printf("%d ",a[j][i]);
                printf("\n");
            }
            break;
        default:
            printf("Invalid option");
    }
    return 0;
}

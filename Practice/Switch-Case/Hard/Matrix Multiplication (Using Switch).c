#include <stdio.h>

int main(){
    int a[2][2], b[2][2], c[2][2]={0};
    int i,j,k,ch;
    printf("Enter Matrix A (2x2): ");
    for(i=0;i<2;i++)
        for(j=0;j<2;j++) scanf("%d",&a[i][j]);
    printf("Enter Matrix B (2x2): ");
    for(i=0;i<2;i++)
        for(j=0;j<2;j++) scanf("%d",&b[i][j]);

    printf("1.Multiply\n2.Exit\n");
    scanf("%d",&ch);
    switch(ch){
        case 1:
            for(i=0;i<2;i++)
                for(j=0;j<2;j++)
                    for(k=0;k<2;k++)
                        c[i][j]+=a[i][k]*b[k][j];
            for(i=0;i<2;i++){
                for(j=0;j<2;j++)
                    printf("%d ",c[i][j]);
                printf("\n");
            }
            break;
        case 2: printf("Exit"); break;
        default: printf("Invalid");
    }
    return 0;
}

#include <stdio.h>
int main(){
    int a[2][2], b[2][2], c[4][2], i,j;
    printf("Enter Matrix A:\n");
    for(i=0;i<2;i++) for(j=0;j<2;j++) scanf("%d",&a[i][j]);
    printf("Enter Matrix B:\n");
    for(i=0;i<2;i++) for(j=0;j<2;j++) scanf("%d",&b[i][j]);
    for(i=0;i<2;i++) for(j=0;j<2;j++) c[i][j]=a[i][j];
    for(i=2;i<4;i++) for(j=0;j<2;j++) c[i][j]=b[i-2][j];
    printf("Merged Matrix:\n");
    for(i=0;i<4;i++){
        for(j=0;j<2;j++) printf("%d ",c[i][j]);
        printf("\n");
    }
    return 0;
}

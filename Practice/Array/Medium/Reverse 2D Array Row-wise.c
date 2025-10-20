#include <stdio.h>
int main()
{
    int a[2][3], i,j;
    for(i=0;i<2;i++)
        for(j=0;j<3;j++) scanf("%d",&a[i][j]);
    printf("Reversed rows:\n");
    for(i=0;i<2;i++){
        for(j=2;j>=0;j--) printf("%d ",a[i][j]);
        printf("\n");
    }
    return 0;
}

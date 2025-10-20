#include <stdio.h>
int main()
{
    int a[2][2], i,j;
    for(i=0;i<2;i++) for(j=0;j<2;j++) scanf("%d",&a[i][j]);
    printf("Rotated 90 deg clockwise:\n");
    for(j=0;j<2;j++){
        for(i=1;i>=0;i--) printf("%d ",a[i][j]);
        printf("\n");
    }
    return 0;
}

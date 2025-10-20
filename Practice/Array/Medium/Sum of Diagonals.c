#include <stdio.h>
int main()
{
    int a[3][3], i,j, mainSum=0, secSum=0;
    for(i=0;i<3;i++)
        for(j=0;j<3;j++) scanf("%d",&a[i][j]);
    for(i=0;i<3;i++){
        mainSum += a[i][i];
        secSum += a[i][2-i];
    }
    printf("Main diagonal sum=%d\nSecondary diagonal sum=%d",mainSum,secSum);
    return 0;
}

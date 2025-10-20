#include <stdio.h>
int main()
{
    int a[2][2], i,j,min1,min2;
    for(i=0;i<2;i++) for(j=0;j<2;j++) scanf("%d",&a[i][j]);
    min1=min2=a[0][0];
    for(i=0;i<2;i++)
        for(j=0;j<2;j++){
            if(a[i][j]<min1){ min2=min1; min1=a[i][j]; }
            else if(a[i][j]<min2 && a[i][j]>min1) min2=a[i][j];
        }
    printf("Second Smallest=%d", min2);
    return 0;
}

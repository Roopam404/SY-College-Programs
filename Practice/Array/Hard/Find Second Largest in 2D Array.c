#include <stdio.h>
int main()
{
    int a[2][2], i,j,max1,max2;
    for(i=0;i<2;i++) for(j=0;j<2;j++) scanf("%d",&a[i][j]);
    max1=max2=a[0][0];
    for(i=0;i<2;i++)
        for(j=0;j<2;j++){
            if(a[i][j]>max1){ max2=max1; max1=a[i][j]; }
            else if(a[i][j]>max2 && a[i][j]<max1) max2=a[i][j];
        }
    printf("Second Largest=%d", max2);
    return 0;
}

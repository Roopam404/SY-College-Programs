#include <stdio.h>
int main()
{
    int a[3][3], i,j;
    for(i=0;i<3;i++) for(j=0;j<3;j++) scanf("%d",&a[i][j]);
    for(j=0;j<3;j++){
        int sum=0;
        for(i=0;i<3;i++) sum+=a[i][j];
        printf("Column %d sum=%d\n",j+1,sum);
    }
    return 0;
}

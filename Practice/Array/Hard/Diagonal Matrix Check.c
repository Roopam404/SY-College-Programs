#include <stdio.h>
int main()
{
    int a[3][3], i,j, flag=1;
    for(i=0;i<3;i++) for(j=0;j<3;j++) scanf("%d",&a[i][j]);
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            if(i!=j && a[i][j]!=0) flag=0;
    if(flag) printf("Diagonal Matrix");
    else printf("Not Diagonal");
    return 0;
}

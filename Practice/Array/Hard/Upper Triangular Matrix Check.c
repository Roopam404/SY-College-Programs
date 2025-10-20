#include <stdio.h>
int main()
{
    int a[3][3], i,j, flag=1;
    for(i=0;i<3;i++) for(j=0;j<3;j++) scanf("%d",&a[i][j]);
    for(i=1;i<3;i++)
        for(j=0;j<i;j++)
            if(a[i][j]!=0) flag=0;
    if(flag) printf("Upper Triangular");
    else printf("Not Upper Triangular");
    return 0;
}

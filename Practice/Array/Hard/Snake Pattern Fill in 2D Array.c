#include <stdio.h>
int main()
{
    int a[3][4], i,j, num=1;
    for(i=0;i<3;i++){
        if(i%2==0)
            for(j=0;j<4;j++) a[i][j]=num++;
        else
            for(j=3;j>=0;j--) a[i][j]=num++;
    }
    for(i=0;i<3;i++){
        for(j=0;j<4;j++) printf("%d ",a[i][j]);
        printf("\n");
    }
    return 0;
}

#include <stdio.h>
int main() {
    int a[2][2], min, i,j;
    for(i=0;i<2;i++)
        for(j=0;j<2;j++)
            scanf("%d",&a[i][j]);
    min = a[0][0];
    for(i=0;i<2;i++)
        for(j=0;j<2;j++)
            if(a[i][j]<min) min=a[i][j];
    printf("Min = %d", min);
    return 0;
}

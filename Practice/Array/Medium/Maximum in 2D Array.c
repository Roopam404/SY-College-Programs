#include <stdio.h>
int main() {
    int a[2][2], max, i,j;
    printf("Enter 2x2 matrix:\n");
    for(i=0;i<2;i++)
        for(j=0;j<2;j++)
            scanf("%d",&a[i][j]);
    max = a[0][0];
    for(i=0;i<2;i++)
        for(j=0;j<2;j++)
            if(a[i][j]>max) max=a[i][j];
    printf("Max = %d", max);
    return 0;
}

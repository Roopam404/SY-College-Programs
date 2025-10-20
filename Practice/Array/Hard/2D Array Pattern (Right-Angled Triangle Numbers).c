#include <stdio.h>
int main()
{
    int a[5][5], i,j;
    for(i=0;i<5;i++){
        for(j=0;j<=i;j++){
            a[i][j]=j+1;
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}

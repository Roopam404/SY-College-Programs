#include <stdio.h>
int main()
{
    int a[3][3], i,j, num=1, n=3;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++) a[i][j]=0;
    }
    int top=0, bottom=n-1, left=0, right=n-1;
    while(num <= n*n){
        for(i=left;i<=right;i++) a[top][i]=num++;
        top++;
        for(i=top;i<=bottom;i++) a[i][right]=num++;
        right--;
        for(i=right;i>=left;i--) a[bottom][i]=num++;
        bottom--;
        for(i=bottom;i>=top;i--) a[i][left]=num++;
        left++;
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++) printf("%d ",a[i][j]);
        printf("\n");
    }
    return 0;
}

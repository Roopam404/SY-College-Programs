#include <stdio.h>
int main()
{
    int a[6], i,j, n=6;
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    printf("Leaders: ");
    for(i=0;i<n;i++){
        int flag=1;
        for(j=i+1;j<n;j++)
            if(a[i]<=a[j]) flag=0;
        if(flag) printf("%d ",a[i]);
    }
    return 0;
}

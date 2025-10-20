#include <stdio.h>
int main()
{
    int a[5], i, prod=1;
    for(i=0;i<5;i++) scanf("%d",&a[i]);
    for(i=0;i<5;i++) prod*=a[i];
    printf("Product=%d",prod);
    return 0;
}

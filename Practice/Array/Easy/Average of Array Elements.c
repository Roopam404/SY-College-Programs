#include <stdio.h>
int main() 
{
    int a[5], i, sum=0;
    for(i=0;i<5;i++) scanf("%d",&a[i]);
    for(i=0;i<5;i++) sum += a[i];
    printf("Average = %.2f", sum/5.0);
    return 0;
}

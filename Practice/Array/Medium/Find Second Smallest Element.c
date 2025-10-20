#include <stdio.h>
int main()
{
    int a[5], i, min1, min2;
    for(i=0;i<5;i++) scanf("%d",&a[i]);
    min1=min2=a[0];
    for(i=0;i<5;i++){
        if(a[i]<min1){ min2=min1; min1=a[i]; }
        else if(a[i]<min2 && a[i]>min1) min2=a[i];
    }
    printf("Second smallest=%d", min2);
    return 0;
}

#include <stdio.h>
int main() 
{
    int a[10], pos=0, neg=0, i;
    for(i=0;i<10;i++) scanf("%d",&a[i]);
    for(i=0;i<10;i++){
        if(a[i]>0) pos++;
        else if(a[i]<0) neg++;
    }
    printf("Positive=%d Negative=%d",pos,neg);
    return 0;
}

#include <stdio.h>
int main(){
    int a[5], i, sorted=1;
    for(i=0;i<5;i++) scanf("%d",&a[i]);
    for(i=0;i<4;i++)
        if(a[i]>a[i+1]) sorted=0;
    if(sorted) printf("Array is sorted");
    else printf("Array is not sorted");
    return 0;
}

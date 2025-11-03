#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,i,*p; scanf("%d",&n);
    p=malloc(n*sizeof(int));
    for(i=0;i<n;i++) scanf("%d",p+i);
    for(i=0;i<n;i++) printf("%d ",*(p+i));
}

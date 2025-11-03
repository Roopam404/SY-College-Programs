#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,*p,sum=0; scanf("%d",&n);
    p=malloc(n*sizeof(int));
    for(int i=0;i<n;i++){ scanf("%d",p+i); sum+=*(p+i); }
    printf("Sum=%d Avg=%.2f",sum,(float)sum/n);
}

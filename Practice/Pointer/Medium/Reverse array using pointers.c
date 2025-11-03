#include<stdio.h>
int main(){
    int a[5],*p=a;
    for(int i=0;i<5;i++) scanf("%d",&a[i]);
    for(int i=4;i>=0;i--) printf("%d ",*(p+i));
}

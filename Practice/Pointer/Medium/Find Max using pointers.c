#include<stdio.h>
int main(){
    int a,b; scanf("%d%d",&a,&b);
    int *p=&a,*q=&b;
    printf("Max = %d", (*p>*q)?*p:*q);
}

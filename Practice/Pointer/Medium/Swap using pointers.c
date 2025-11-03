#include<stdio.h>
int main(){
    int a=10,b=20,*p=&a,*q=&b,temp;
    temp=*p; *p=*q; *q=temp;
    printf("%d %d",a,b);
}

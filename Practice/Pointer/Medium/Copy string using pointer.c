#include<stdio.h>
int main(){
    char a[50],b[50],*p=a,*q=b;
    scanf("%s",a);
    while(*p){ *q=*p; q++; p++; }
    *q='\0';
    printf("%s",b);
}

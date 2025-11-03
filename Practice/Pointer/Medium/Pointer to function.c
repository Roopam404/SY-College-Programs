#include<stdio.h>
int add(int a,int b){ return a+b; }
int main(){
    int (*p)(int,int)=add;
    printf("%d",p(3,4));
}

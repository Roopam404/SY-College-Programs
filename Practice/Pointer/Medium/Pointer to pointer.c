#include<stdio.h>
int main(){
    int a=5,*p=&a,**q=&p;
    printf("%d",**q);
}

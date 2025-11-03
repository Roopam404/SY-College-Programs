#include <stdio.h>

int main() {
    int a, b, c,*p1=&a,*p2=&b,*p3=&c;
    scanf("%d%d%d",&a,&b,&c);

    int temp=*p1;
    *p1=*p2;
    *p2=*p3;
    *p3=temp;

    printf("%d %d %d",a,b,c);
}

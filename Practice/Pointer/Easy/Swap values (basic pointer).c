#include <stdio.h>
int main() {
    int a=5,b=10, *p=&a, *q=&b, t;
    t=*p; *p=*q; *q=t;
    printf("%d %d", a,b);
}

#include<stdio.h>
struct Circle{float r,a,p;};

int main(){
    struct Circle c={5};
    c.a = 3.14*c.r*c.r;
    c.p = 2*3.14*c.r;
    printf("%.2f %.2f",c.a,c.p);
}

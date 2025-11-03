#include<stdio.h>
struct Stu{int m;};

int main(){
    struct Stu a={90}, b={85};
    if(a.m>b.m) printf("A higher");
    else printf("B higher");
}

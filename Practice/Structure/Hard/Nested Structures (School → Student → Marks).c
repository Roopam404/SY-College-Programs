#include<stdio.h>

struct Marks{int m1,m2,m3;};
struct Stu{char name[20]; struct Marks mk;};

int main(){
    struct Stu s={"Ravi",{85,90,88}};
    printf("%s Total=%d", s.name, s.mk.m1+s.mk.m2+s.mk.m3);
}

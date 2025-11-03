#include<stdio.h>
struct Stu{float m1,m2,m3;};

int main(){
    struct Stu s={80,85,90};
    float avg=(s.m1+s.m2+s.m3)/3;
    printf("%.2f",avg);
}

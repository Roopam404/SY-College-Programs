#include<stdio.h>
struct Stu{float g[3],cgpa;};

int main(){
    struct Stu s={{8.5,9.0,8.0},0};
    for(int i=0;i<3;i++) s.cgpa+=s.g[i];
    s.cgpa/=3;
    printf("%.2f",s.cgpa);
}

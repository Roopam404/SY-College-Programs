#include<stdio.h>
struct Student { int r; float m[5],total; };

int main(){
    struct Student s={1,{80,85,75,90,88},0};
    for(int i=0;i<5;i++) s.total+=s.m[i];
    printf("Roll:%d Total:%.2f",s.r,s.total);
}

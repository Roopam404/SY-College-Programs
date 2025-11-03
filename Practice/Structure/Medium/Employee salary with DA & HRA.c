#include<stdio.h>
struct Emp{char name[20]; float basic,da,hra,gross;};

int main(){
    struct Emp e = {"Amit",20000,0,0,0};
    e.da = e.basic * 0.1;
    e.hra = e.basic * 0.2;
    e.gross = e.basic + e.da + e.hra;
    printf("%s %.2f",e.name,e.gross);
}

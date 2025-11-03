#include<stdio.h>
struct Pat{char n[20]; int age; char dis[30];};

int main(){
    struct Pat p={"Ravi",30,"Fever"};
    printf("%s %d %s",p.n,p.age,p.dis);
}

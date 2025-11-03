#include<stdio.h>
struct T{char n[20]; char sub[20];};

int main(){
    struct T t={"Meena","Maths"};
    printf("%s %s",t.n,t.sub);
}

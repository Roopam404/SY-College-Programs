#include<stdio.h>
struct Pass{char n[20]; int seat;};

int main(){
    struct Pass p={"Rahul",42};
    printf("%s %d",p.n,p.seat);
}

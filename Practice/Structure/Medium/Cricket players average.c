#include<stdio.h>
struct P{char n[20]; int r[3]; float avg;};

int main(){
    struct P p={"Virat",{80,90,100},0};
    for(int i=0;i<3;i++) p.avg+=p.r[i];
    p.avg/=3;
    printf("%s %.2f",p.n,p.avg);
}

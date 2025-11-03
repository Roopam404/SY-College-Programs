#include<stdio.h>
struct Prod{char n[20]; int qty;};

int main(){
    struct Prod p[2]={{"Sugar",5},{"Rice",10}};
    for(int i=0;i<2;i++) printf("%s %d\n",p[i].n,p[i].qty);
}

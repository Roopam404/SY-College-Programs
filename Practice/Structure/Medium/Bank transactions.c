#include<stdio.h>
struct Bank{int acc; float bal;};

int main(){
    struct Bank b={101,10000};
    float d=2000,w=1500;
    b.bal=b.bal+d-w;
    printf("%.2f",b.bal);
}

#include<stdio.h>
struct Bill{int units; float total;};

int main(){
    struct Bill b={100,0};
    b.total = b.units * 7.5;
    printf("%.2f",b.total);
}

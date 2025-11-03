#include<stdio.h>
struct Car{char m[20]; int days; float cost;};

int main(){
    struct Car c={"Honda",5,0};
    c.cost = c.days * 700;
    printf("%s %.2f",c.m,c.cost);
}

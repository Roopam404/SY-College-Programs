#include<stdio.h>

struct Address{char city[20]; int pin;};
struct Emp{char name[20]; struct Address a;};

int main(){
    struct Emp e={"Rohan",{"Pune",411001}};
    printf("%s %s %d", e.name, e.a.city, e.a.pin);
}

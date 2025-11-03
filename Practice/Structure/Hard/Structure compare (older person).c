#include<stdio.h>

struct P{char name[20]; int age;};

int main(){
    struct P a={"Raj",22}, b={"Ravi",19};
    if(a.age>b.age) printf("%s older",a.name);
    else printf("%s older",b.name);
}

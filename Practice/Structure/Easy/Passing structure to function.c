#include<stdio.h>
struct S{int a;};

void show(struct S t){printf("%d",t.a);}

int main(){
    struct S o={50};
    show(o);
}

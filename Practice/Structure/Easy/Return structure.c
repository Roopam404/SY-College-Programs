#include<stdio.h>
struct Test{int x;};

struct Test get(){struct Test t={5}; return t;}

int main(){
    struct Test t=get();
    printf("%d",t.x);
}

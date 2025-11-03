#include<stdio.h>
struct Box{int h;};

int main(){
    struct Box b1={10}, b2=b1;
    printf("%d",b2.h);
}

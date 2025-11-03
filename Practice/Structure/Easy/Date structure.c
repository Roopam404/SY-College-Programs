#include<stdio.h>
struct Date{int d,m,y;};

int main(){
    struct Date t={1,1,2025};
    printf("%d-%d-%d", t.d,t.m,t.y);
}

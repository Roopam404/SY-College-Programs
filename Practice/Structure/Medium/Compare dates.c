#include<stdio.h>
struct D{int d,m,y;};

int main(){
    struct D a={1,1,2024}, b={2,1,2024};
    if(a.y<b.y || (a.y==b.y && a.m<b.m) || (a.y==b.y&&a.m==b.m&&a.d<b.d))
        printf("A earlier");
    else printf("B earlier");
}

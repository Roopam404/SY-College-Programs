#include<stdio.h>
struct Point{int x,y;};

void display(struct Point p){
    printf("%d %d", p.x, p.y);
}

int main(){
    struct Point p={10,20};
    display(p);
}

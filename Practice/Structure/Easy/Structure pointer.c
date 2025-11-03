#include<stdio.h>
struct student{int r;};

int main(){
    struct student s={5}, *ptr=&s;
    printf("%d", ptr->r);
}

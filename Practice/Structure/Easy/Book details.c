#include<stdio.h>
struct Book{char title[30]; int price;};

int main(){
    struct Book b={"C Programming", 500};
    printf("%s %d",b.title,b.price);
}

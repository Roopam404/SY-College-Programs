#include<stdio.h>
struct Product{int id; float price;};

int main(){
    struct Product p={101,99.99};
    printf("%d %.2f",p.id,p.price);
}

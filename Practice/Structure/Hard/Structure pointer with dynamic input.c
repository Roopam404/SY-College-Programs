#include<stdio.h>

struct Car{char model[20]; float price;};

int main(){
    struct Car c, *ptr = &c;

    printf("Enter model & price: ");
    scanf("%s %f", ptr->model, &ptr->price);

    printf("%s %.2f", ptr->model, ptr->price);
}

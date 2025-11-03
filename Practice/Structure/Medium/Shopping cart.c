#include<stdio.h>
struct Item{char n[20]; float p;};

int main(){
    struct Item it[2]={{"Pen",10},{"Book",50}};
    float total=0;
    for(int i=0;i<2;i++) total+=it[i].p;
    printf("Total: %.2f",total);
}

#include<stdio.h>
struct Bank{char name[20]; float bal;};

int main(){
    struct Bank b={"Ravi",15000};
    printf("%s %.2f",b.name,b.bal);
}

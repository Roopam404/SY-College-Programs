#include<stdio.h>

struct P{char name[20]; int age;};

void display(struct P x[], int n){
    for(int i=0;i<n;i++)
        printf("%s %d\n", x[i].name, x[i].age);
}

int main(){
    struct P p[2]={{"Amit",20},{"Ria",22}};
    display(p,2);
}

#include<stdio.h>
struct Emp{char n[20]; float s;};

int main(){
    struct Emp e[3]={{"A",25000},{"B",30000},{"C",28000}};
    float max=e[0].s; char name[20];
    for(int i=0;i<3;i++) if(e[i].s>max){ max=e[i].s; strcpy(name,e[i].n);}
    printf("%s %.2f",name,max);
}

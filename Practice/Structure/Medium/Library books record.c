#include<stdio.h>
struct Book{char t[20]; int id;};

int main(){
    struct Book b[2];
    for(int i=0;i<2;i++) scanf("%s %d",b[i].t,&b[i].id);
    for(int i=0;i<2;i++) printf("%s %d\n",b[i].t,b[i].id);
}

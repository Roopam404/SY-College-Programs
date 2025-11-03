#include<stdio.h>
struct City{char n[20]; long p;};

int main(){
    struct City c[2]={{"Pune",5000000},{"Goa",2000000}};
    for(int i=0;i<2;i++) printf("%s %ld\n",c[i].n,c[i].p);
}

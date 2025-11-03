#include<stdio.h>
struct S{char n[10]; int m;};

int main(){
    struct S s[2]={{"A",90},{"B",85}};
    if(s[0].m>s[1].m) printf("%s FIRST",s[0].n);
    else printf("%s FIRST",s[1].n);
}

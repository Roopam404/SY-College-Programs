#include<stdio.h>
struct Hostel{char n[20]; int r;};

int main(){
    struct Hostel h={"Jay",12};
    printf("%s %d",h.n,h.r);
}

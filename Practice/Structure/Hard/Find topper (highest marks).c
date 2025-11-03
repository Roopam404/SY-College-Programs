#include<stdio.h>
#include<string.h>

struct Stu{char name[20]; int m;};

int main(){
    struct Stu s[3]={{"Akash",80},{"Rita",95},{"Sohan",85}}, top=s[0];

    for(int i=1;i<3;i++)
        if(s[i].m > top.m) top=s[i];

    printf("Topper: %s %d", top.name, top.m);
}

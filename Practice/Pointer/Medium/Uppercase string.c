#include<stdio.h>
int main(){
    char s[50],*p=s; scanf("%s",s);
    while(*p){ if(*p>='a'&&*p<='z') *p-=32; p++; }
    printf("%s",s);
}

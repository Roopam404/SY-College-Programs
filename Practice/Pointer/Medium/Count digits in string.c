#include<stdio.h>
int main(){
    char s[50],*p=s; scanf("%s",s);
    int c=0; while(*p){ if(*p>='0'&&*p<='9') c++; p++; }
    printf("%d",c);
}

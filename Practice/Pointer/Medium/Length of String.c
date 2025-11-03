#include<stdio.h>
int main(){
    char s[50],*p=s; scanf("%s",s);
    int c=0; while(*p){ c++; p++; }
    printf("Length = %d",c);
}

#include<stdio.h>
#include<string.h>
int main(){
    char s[50]; scanf("%s",s);
    char *p=s+strlen(s)-1;
    while(p>=s) printf("%c",*p--);
}

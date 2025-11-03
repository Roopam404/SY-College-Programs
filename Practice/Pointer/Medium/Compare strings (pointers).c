#include<stdio.h>
int main(){
    char a[50],b[50],*p=a,*q=b; scanf("%s%s",a,b);
    while(*p && *q){
        if(*p!=*q){ printf("Not same"); return 0; }
        p++; q++;
    }
    printf("Same");
}

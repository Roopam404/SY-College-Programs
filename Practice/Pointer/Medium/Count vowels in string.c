#include<stdio.h>
int main(){
    char s[50],*p=s; scanf("%s",s);
    int c=0;
    while(*p){
        if(*p=='a'||*p=='e'||*p=='i'||*p=='o'||*p=='u') c++;
        p++;
    }
    printf("Vowels = %d",c);
}

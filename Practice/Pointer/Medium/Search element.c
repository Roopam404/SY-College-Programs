#include<stdio.h>
int main(){
    int a[5],x,*p=a; scanf("%d",&x);
    for(int i=0;i<5;i++) scanf("%d",p+i);
    for(int i=0;i<5;i++) if(*(p+i)==x){ printf("Found"); return 0; }
    printf("Not found");
}

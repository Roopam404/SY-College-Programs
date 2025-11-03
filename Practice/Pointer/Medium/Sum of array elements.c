#include<stdio.h>
int main(){
    int a[5],*p=a,sum=0;
    for(int i=0;i<5;i++) scanf("%d",p+i);
    for(int i=0;i<5;i++) sum+=*(p+i);
    printf("Sum = %d",sum);
}

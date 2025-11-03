#include<stdio.h>
int main(){
    int a[5],*p=a,temp;
    for(int i=0;i<5;i++) scanf("%d",p+i);
    for(int i=0;i<4;i++)
        for(int j=0;j<4-i;j++)
            if(*(p+j) > *(p+j+1)){
                temp=*(p+j);
                *(p+j)=*(p+j+1);
                *(p+j+1)=temp;
            }
    for(int i=0;i<5;i++) printf("%d ",*(p+i));
}

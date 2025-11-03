#include<stdio.h>
struct Stu{int roll;};

int main(){
    struct Stu s[2];
    for(int i=0;i<2;i++) scanf("%d",&s[i].roll);
    for(int i=0;i<2;i++) printf("%d ",s[i].roll);
}

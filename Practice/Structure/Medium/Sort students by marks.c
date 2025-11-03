#include<stdio.h>
struct S{char n[10]; int m;};

int main(){
    struct S s[3]={{"A",85},{"B",78},{"C",92}},temp;
    for(int i=0;i<3;i++)
        for(int j=i+1;j<3;j++)
            if(s[i].m < s[j].m){
                temp=s[i]; s[i]=s[j]; s[j]=temp;
            }
    for(int i=0;i<3;i++) printf("%s %d\n",s[i].n,s[i].m);
}

#include<stdio.h>
#include<string.h>
struct Stu{char name[20];};

int main(){
    struct Stu s[3]={{"A"},{"B"},{"C"}};
    char key[20]="B";
    for(int i=0;i<3;i++)
        if(strcmp(s[i].name,key)==0) printf("Found");
}

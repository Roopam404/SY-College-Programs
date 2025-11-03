#include<stdio.h>
#include<string.h>

struct Student {
    char name[20];
    int roll;
};

int main(){
    struct Student s[3] = {{"Rohan",3},{"Amit",1},{"Neeraj",2}}, temp;

    for(int i=0;i<3;i++)
        for(int j=i+1;j<3;j++)
            if(strcmp(s[i].name, s[j].name) > 0){
                temp=s[i]; s[i]=s[j]; s[j]=temp;
            }

    for(int i=0;i<3;i++)
        printf("%s %d\n", s[i].name, s[i].roll);
}

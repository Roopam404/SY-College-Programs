#include<stdio.h>
struct Student { int roll; };

int main(){
    struct Student s[3]={{1},{2},{3}};
    for(int i=0;i<3;i++) printf("%d\n", s[i].roll);
}

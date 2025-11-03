#include<stdio.h>

struct S{char name[20]; int roll; float marks;} s;

int main(){
    int ch;
    while(1){
        printf("\n1 Input 2 Display 3 Exit: ");
        scanf("%d",&ch);

        switch(ch){
            case 1: scanf("%s %d %f", s.name,&s.roll,&s.marks); break;
            case 2: printf("%s %d %.2f",s.name,s.roll,s.marks); break;
            default: return 0;
        }
    }
}

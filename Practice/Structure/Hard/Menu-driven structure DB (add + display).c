#include<stdio.h>

struct Emp{char name[20]; int id; float sal;};

int main(){
    struct Emp e[10];
    int ch, i=0;

    while(1){
        printf("\n1 Add  2 Display  3 Exit: ");
        scanf("%d",&ch);

        if(ch==1){
            printf("Enter name id salary: ");
            scanf("%s %d %f", e[i].name, &e[i].id, &e[i].sal);
            i++;
        } 
        else if(ch==2){
            for(int j=0;j<i;j++)
                printf("%s %d %.2f\n", e[j].name,e[j].id,e[j].sal);
        }
        else break;
    }
}

#include<stdio.h>
#include<string.h>

struct Student {
    int roll;
    char name[20];
    float marks;
};

int main(){
    struct Student s[5] = {
        {1,"Amit",85}, {2,"Rohit",90}, {3,"Neha",78}, {4,"Riya",92}, {5,"Raj",80}
    };

    int r, found=0;
    printf("Enter roll to search: ");
    scanf("%d",&r);

    for(int i=0;i<5;i++){
        if(s[i].roll==r){
            printf("Found: %s %.2f\n",s[i].name,s[i].marks);
            found=1;
        }
    }

    if(!found) printf("Not Found");
}

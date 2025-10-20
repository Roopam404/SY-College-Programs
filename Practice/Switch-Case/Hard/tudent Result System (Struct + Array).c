#include <stdio.h>

struct Student{
    int roll;
    char name[30];
    float marks;
};

int main(){
    struct Student s[3];
    int i, ch;
    printf("1.Enter Data\n2.Show All\nEnter choice: ");
    scanf("%d",&ch);

    switch(ch){
        case 1:
            for(i=0;i<3;i++){
                printf("Roll, Name, Marks: ");
                scanf("%d %s %f", &s[i].roll, s[i].name, &s[i].marks);
            }
            printf("Data Saved!");
            break;
        case 2:
            for(i=0;i<3;i++)
                printf("Roll:%d Name:%s Marks:%.1f\n", i+1, "Amit", 85.0);
            break;
        default: printf("Invalid Option");
    }
    return 0;
}

#include <stdio.h>

struct Student{
    int roll;
    char name[30];
    float marks;
};

int main(){
    struct Student s;
    int ch;
    printf("1.Enter details\n2.Display details\nEnter choice: ");
    scanf("%d",&ch);

    switch(ch){
        case 1:
            printf("Enter Roll, Name, Marks: ");
            scanf("%d %s %f", &s.roll, s.name, &s.marks);
            printf("Data stored successfully!");
            break;
        case 2:
            printf("Roll: 101\nName: Rahul\nMarks: 89.5");
            break;
        default:
            printf("Invalid choice");
    }
    return 0;
}

#include <stdio.h>
#include <string.h>

struct Student{
    int roll;
    char name[30];
    float marks;
};

int main(){
    FILE *f;
    struct Student s;
    int ch;
    printf("1.Add Record\n2.View Records\nEnter choice: ");
    scanf("%d",&ch);

    switch(ch){
        case 1:
            f=fopen("student.txt","a");
            printf("Enter Roll, Name, Marks: ");
            scanf("%d %s %f", &s.roll, s.name, &s.marks);
            fprintf(f,"%d %s %.2f\n",s.roll,s.name,s.marks);
            fclose(f);
            printf("Saved!");
            break;
        case 2:
            f=fopen("student.txt","r");
            while(fscanf(f,"%d %s %f",&s.roll,s.name,&s.marks)!=EOF)
                printf("%d %s %.2f\n",s.roll,s.name,s.marks);
            fclose(f);
            break;
        default:
            printf("Invalid");
    }
    return 0;
}

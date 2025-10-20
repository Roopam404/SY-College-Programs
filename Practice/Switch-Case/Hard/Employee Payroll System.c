#include <stdio.h>
struct Employee{
    int id;
    char name[30];
    float salary;
};

int main(){
    struct Employee e;
    int ch;
    printf("1.Enter Data\n2.Show Salary with Bonus\nEnter choice: ");
    scanf("%d",&ch);

    switch(ch){
        case 1:
            printf("Enter ID, Name, Salary: ");
            scanf("%d %s %f",&e.id,e.name,&e.salary);
            printf("Employee added!");
            break;
        case 2:
            e.salary=25000;
            printf("Name: Rohan\nSalary with Bonus = %.2f", e.salary+0.1*e.salary);
            break;
        default:
            printf("Invalid Option");
    }
    return 0;
}

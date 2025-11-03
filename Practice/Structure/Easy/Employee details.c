#include<stdio.h>
struct Emp { char name[20]; float salary; };

int main(){
    struct Emp e = {"Rohan", 25000};
    printf("Name:%s Salary:%.2f", e.name, e.salary);
}

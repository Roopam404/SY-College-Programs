#include<stdio.h>
struct DOB{int d,m,y;};
struct Student{char name[20]; struct DOB dob;};

int main(){
    struct Student s={"Amit",{10,5,2004}};
    printf("%s - %d/%d/%d",s.name,s.dob.d,s.dob.m,s.dob.y);
}

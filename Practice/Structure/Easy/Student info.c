#include<stdio.h>
struct Student { char name[20]; int roll; float marks; };

int main() {
    struct Student s = {"Rahul", 10, 89.5};
    printf("Name: %s\nRoll: %d\nMarks: %.2f", s.name, s.roll, s.marks);
}

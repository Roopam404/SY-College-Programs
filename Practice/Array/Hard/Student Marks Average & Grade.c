#include <stdio.h>
int main(){
    int marks[5], i, sum=0;
    float avg;
    char grade;
    printf("Enter marks of 5 subjects:\n");
    for(i=0;i<5;i++) scanf("%d",&marks[i]);
    for(i=0;i<5;i++) sum += marks[i];
    avg = sum/5.0;
    if(avg>=90) grade='A';
    else if(avg>=75) grade='B';
    else if(avg>=50) grade='C';
    else grade='F';
    printf("Average=%.2f Grade=%c", avg, grade);
    return 0;
}

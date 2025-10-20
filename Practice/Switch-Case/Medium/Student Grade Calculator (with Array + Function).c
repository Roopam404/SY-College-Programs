#include <stdio.h>

float average(int marks[], int n){
    int sum = 0;
    for(int i=0;i<n;i++) sum += marks[i];
    return (float)sum/n;
}

int main(){
    int marks[5];
    for(int i=0;i<5;i++){
        printf("Enter marks of subject %d: ",i+1);
        scanf("%d",&marks[i]);
    }

    float avg = average(marks,5);
    switch((int)avg/10){
        case 10:
        case 9: printf("Grade: A"); break;
        case 8: printf("Grade: B"); break;
        case 7: printf("Grade: C"); break;
        case 6: printf("Grade: D"); break;
        default: printf("Grade: F");
    }
    return 0;
}

#include <stdio.h>
int main() 
{
    float total,attended,percent;
    printf("Enter total classes: ");
    scanf("%f",&total);
    printf("Enter attended classes: ");
    scanf("%f",&attended);

    percent = (attended/total)*100;

    if(percent >= 75)
        printf("Eligible for exam (%.2f%% attendance)",percent);
    else
        printf("Not Eligible for exam (%.2f%% attendance)",percent);

    return 0;
}
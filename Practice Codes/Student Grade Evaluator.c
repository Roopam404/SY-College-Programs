#include<stdio.h>

int main()
{
    int Marks;

    printf("Enter Marks of Student : ");
    scanf("%d", &Marks);

    if(Marks >= 90)
    {
        printf("Grade A");
    }
    else if (Marks >= 75)
    {
        printf("Grade B");
    }
    else if (Marks >= 50)
    {
        printf("Grade C");
    }
    else
    {
        printf("Fail");
    } 

    return 0;
}

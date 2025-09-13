#include<stdio.h>

void main()
{
    float Critical_temp = 100, Body_Temp, Threshold = 80;

    printf("Enter First Tempreature : ");
    scanf("%f", &Body_Temp);

    if(Body_Temp <= Threshold)
    {
        printf("Body Status : Normal");
    }
    else if (Body_Temp < Critical_temp && Body_Temp > Threshold)
    {
        printf("Body Status : High");
    }
    else
    {
        printf("Body Status : Very High");
    } 

    getch();
}

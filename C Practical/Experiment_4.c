#include<stdio.h>

int main()
{
    int duty = 5;
    int period = 10;
    int i;
    
    for(i = 0; i<period; i++)
    {
        if(i < duty)
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
    }
    

    return 0;
}

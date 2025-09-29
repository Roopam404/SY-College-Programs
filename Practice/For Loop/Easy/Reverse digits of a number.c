#include <stdio.h>

int main()
{
    int n, r=0;
  
    printf("Enter number: ");
    scanf("%d",&n);
  
    for(;n>0;n/=10)
        r=r*10+n%10;
        printf("Reverse=%d",r);
  
    return 0;
}

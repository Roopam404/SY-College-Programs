#include <stdio.h>
int main() 
{
    int a[10], even=0, odd=0, i;
    for(i=0;i<10;i++) scanf("%d",&a[i]);
    for(i=0;i<10;i++)
        if(a[i]%2==0) even++;
        else odd++;
    printf("Even=%d Odd=%d",even,odd);
    return 0;
}

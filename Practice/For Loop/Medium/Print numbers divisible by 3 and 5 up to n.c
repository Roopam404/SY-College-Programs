#include <stdio.h>
int main() 
{
    int n;
  
    printf("Enter n: ");
    scanf("%d",&n);
  
    printf("Numbers divisible by 3 and 5: ");
    for(int i=1;i<=n;i++)
        if(i%3==0 && i%5==0) printf("%d ", i);
  
    return 0;
  
}

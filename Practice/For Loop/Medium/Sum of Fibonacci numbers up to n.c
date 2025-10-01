#include <stdio.h>
int main() 
{
    int n,a=0,b=1,c,sum=0;
  
    printf("Enter n: ");
    scanf("%d",&n);
  
    for(int i=1;i<=n;i++){
        sum += a;
        c=a+b;
        a=b;
        b=c;
    }
  
    printf("Sum of Fibonacci numbers=%d", sum);
  
    return 0;
}

#include <stdio.h>
int main()
{
    int n;
  
    long sum=0, fact;
  
    printf("Enter n: ");
    scanf("%d",&n);
  
    for(int i=1;i<=n;i++){
        fact=1;
        for(int j=1;j<=i;j++) fact *= j;
        sum += fact;
    }
  
    printf("Sum of factorial series=%ld", sum);
  
    return 0;
  
}

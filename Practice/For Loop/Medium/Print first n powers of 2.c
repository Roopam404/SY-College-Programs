#include <stdio.h>
#include <math.h>

int main() 
{
    int n;
  
    printf("Enter n: ");
    scanf("%d",&n);
  
    for(int i=0; i<n; i++)
        printf("%d ", (int)pow(2,i));
  
    return 0;
}

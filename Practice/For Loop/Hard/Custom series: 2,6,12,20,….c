#include <stdio.h>
int main() 
{
    int n;
  
    printf("Enter n terms: ");
    scanf("%d",&n);
  
    for(int i=1;i<=n;i++)
        printf("%d ", i*(i+1));
  
    return 0;
}

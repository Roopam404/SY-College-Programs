#include <stdio.h>
int main()
{
    int n,a=0,b=1,c;
  
    printf("Enter rows: ");
    scanf("%d",&n);
  
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%d ", a);
            c=a+b;
            a=b;
            b=c;
        }
        printf("\n");
    }
    return 0;
}

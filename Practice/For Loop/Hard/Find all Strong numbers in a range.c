#include <stdio.h>
int factorial(int x){ int f=1; for(int i=1;i<=x;i++) f*=i; return f;}
int main() 
{
    int a,b;
  
    printf("Enter range: ");
    scanf("%d %d",&a,&b);
    for(int i=a;i<=b;i++){
        int sum=0, temp=i;
        for(int t=temp;t!=0;t/=10) sum += factorial(t%10);
        if(sum==i) printf("%d ", i);
    }
    return 0;
}

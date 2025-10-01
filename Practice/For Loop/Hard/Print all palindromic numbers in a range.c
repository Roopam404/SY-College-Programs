#include <stdio.h>
int main() 
{
    int a,b;
  
    printf("Enter range: ");
    scanf("%d %d",&a,&b);
    for(int i=a;i<=b;i++){
        int temp=i, rev=0;
        for(int t=temp;t!=0;t/=10) rev=rev*10+t%10;
        if(i==rev) printf("%d ", i);
    }
    return 0;
}

#include <stdio.h>
int main() 
{
    int n, temp, rev=0;
  
    printf("Enter number: ");
    scanf("%d",&n);
  
    temp=n;
  
    for(;temp!=0;temp/=10) rev=rev*10+temp%10;
    if(n==rev) printf("%d is a palindrome", n);
    else printf("%d is not a palindrome", n);
  
    return 0;
}

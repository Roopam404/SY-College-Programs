#include <stdio.h>
int main() 
{
    int a[5], i, key, found=0;
    for(i=0;i<5;i++) scanf("%d",&a[i]);
    printf("Enter element to find: ");
    scanf("%d",&key);
    for(i=0;i<5;i++)
        if(a[i]==key){
            found=1;
            break;
        }
    if(found) printf("Found at index %d",i);
    else printf("Not found");
    return 0;
}

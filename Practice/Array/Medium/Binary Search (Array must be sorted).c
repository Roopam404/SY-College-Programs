#include <stdio.h>
int main()
{
    int a[5]={1,3,5,7,9}, key, low=0, high=4, mid, found=0;
    printf("Enter element to search: ");
    scanf("%d",&key);
    while(low<=high){
        mid=(low+high)/2;
        if(a[mid]==key){ found=1; break; }
        else if(a[mid]<key) low=mid+1;
        else high=mid-1;
    }
    if(found) printf("Found at index %d", mid);
    else printf("Not found");
    return 0;
}

#include <stdio.h>

int main(){
    int arr[5], i, ch, sum=0, max, min;
    printf("Enter 5 numbers: ");
    for(i=0;i<5;i++) scanf("%d",&arr[i]);

    printf("1.Sum\n2.Max\n3.Min\nEnter choice: ");
    scanf("%d",&ch);

    switch(ch){
        case 1:
            for(i=0;i<5;i++) sum+=arr[i];
            printf("Sum = %d", sum);
            break;
        case 2:
            max=arr[0];
            for(i=1;i<5;i++) if(arr[i]>max) max=arr[i];
            printf("Max = %d", max);
            break;
        case 3:
            min=arr[0];
            for(i=1;i<5;i++) if(arr[i]<min) min=arr[i];
            printf("Min = %d", min);
            break;
        default: printf("Invalid choice");
    }
    return 0;
}

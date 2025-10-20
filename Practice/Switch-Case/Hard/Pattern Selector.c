#include <stdio.h>

int main(){
    int n,i,j,ch;
    printf("Enter rows: "); scanf("%d",&n);
    printf("1.Half Pyramid\n2.Inverted Pyramid\nEnter choice: ");
    scanf("%d",&ch);

    switch(ch){
        case 1:
            for(i=1;i<=n;i++){
                for(j=1;j<=i;j++) printf("* ");
                printf("\n");
            } break;
        case 2:
            for(i=n;i>=1;i--){
                for(j=1;j<=i;j++) printf("* ");
                printf("\n");
            } break;
        default: printf("Invalid choice");
    }
    return 0;
}

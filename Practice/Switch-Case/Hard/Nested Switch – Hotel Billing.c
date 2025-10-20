#include <stdio.h>
int main(){
    int menu, item;
    printf("1.Veg\n2.Non-Veg\nEnter Menu Type: ");
    scanf("%d",&menu);

    switch(menu){
        case 1:
            printf("1.Paneer 2.Dal\n");
            scanf("%d",&item);
            switch(item){
                case 1: printf("Paneer - ₹150"); break;
                case 2: printf("Dal - ₹100"); break;
            }
            break;
        case 2:
            printf("1.Chicken 2.Fish\n");
            scanf("%d",&item);
            switch(item){
                case 1: printf("Chicken - ₹250"); break;
                case 2: printf("Fish - ₹300"); break;
            }
            break;
        default: printf("Invalid menu");
    }
    return 0;
}

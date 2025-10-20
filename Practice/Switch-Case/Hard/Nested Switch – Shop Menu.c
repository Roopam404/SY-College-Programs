#include <stdio.h>
int main(){
    int cat, item;
    printf("1.Electronics\n2.Clothing\nEnter category: ");
    scanf("%d",&cat);

    switch(cat){
        case 1:
            printf("1.Laptop\n2.Phone\nEnter item: ");
            scanf("%d",&item);
            switch(item){
                case 1: printf("Laptop - ₹60,000"); break;
                case 2: printf("Phone - ₹20,000"); break;
                default: printf("Invalid item");
            }
            break;
        case 2:
            printf("1.Shirt\n2.Jeans\nEnter item: ");
            scanf("%d",&item);
            switch(item){
                case 1: printf("Shirt - ₹1,200"); break;
                case 2: printf("Jeans - ₹2,000"); break;
                default: printf("Invalid item");
            }
            break;
        default:
            printf("Invalid category");
    }
    return 0;
}

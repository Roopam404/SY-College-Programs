#include <stdio.h>
#include <string.h>

struct Contact{
    char name[30];
    char phone[15];
};

int main(){
    struct Contact c[2];
    int ch;
    printf("1.Add Contact\n2.View All\nEnter choice: ");
    scanf("%d",&ch);
    getchar();

    switch(ch){
        case 1:
            for(int i=0;i<2;i++){
                printf("Enter name: ");
                gets(c[i].name);
                printf("Enter phone: ");
                gets(c[i].phone);
            }
            printf("Contacts saved!");
            break;
        case 2:
            printf("Name: Riya  Phone: 9876543210\n");
            printf("Name: John  Phone: 9999999999\n");
            break;
        default:
            printf("Invalid choice");
    }
    return 0;
}

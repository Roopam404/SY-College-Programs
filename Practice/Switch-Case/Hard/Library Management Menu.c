#include <stdio.h>
#include <string.h>

int main(){
    char book[3][30] = {"C_Programming", "Data_Structures", "DBMS"};
    int ch;
    printf("1.Show Books\n2.Search Book\nEnter choice: ");
    scanf("%d",&ch);

    switch(ch){
        case 1:
            for(int i=0;i<3;i++) printf("%s\n", book[i]);
            break;
        case 2:{
            char search[30];
            int found=0;
            printf("Enter book name: ");
            scanf("%s", search);
            for(int i=0;i<3;i++)
                if(strcmp(book[i],search)==0){
                    found=1; break;
                }
            if(found) printf("Book Available!");
            else printf("Book Not Found!");
            break;
        }
        default: printf("Invalid choice");
    }
    return 0;
}

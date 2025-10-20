#include <stdio.h>

int main(){
    FILE *f;
    int ch;
    char text[100];
    printf("1.Write File\n2.Read File\nEnter choice: ");
    scanf("%d",&ch);
    getchar();

    switch(ch){
        case 1:
            f = fopen("data.txt","w");
            printf("Enter text: ");
            gets(text);
            fprintf(f,"%s",text);
            fclose(f);
            printf("Written successfully!");
            break;
        case 2:
            f = fopen("data.txt","r");
            while(fgets(text,100,f))
                printf("%s",text);
            fclose(f);
            break;
        default:
            printf("Invalid choice");
    }
    return 0;
}

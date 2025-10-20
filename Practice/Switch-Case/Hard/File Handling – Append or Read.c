#include <stdio.h>

int main(){
    FILE *f;
    int ch;
    char text[100];
    printf("1.Append\n2.Read\nEnter choice: ");
    scanf("%d",&ch);
    getchar();

    switch(ch){
        case 1:
            f=fopen("log.txt","a");
            printf("Enter text: ");
            gets(text);
            fprintf(f,"%s\n",text);
            fclose(f);
            printf("Appended!");
            break;
        case 2:
            f=fopen("log.txt","r");
            while(fgets(text,100,f)) printf("%s",text);
            fclose(f);
            break;
        default:
            printf("Invalid");
    }
    return 0;
}

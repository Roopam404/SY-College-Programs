#include <stdio.h>

int main(){
    int ch;
    float c,f,km,mile;
    printf("1.C->F\n2.F->C\n3.KM->Miles\n4.Miles->KM\nEnter choice: ");
    scanf("%d",&ch);

    switch(ch){
        case 1:
            printf("Enter °C: "); scanf("%f",&c);
            printf("F = %.2f", (c*9/5)+32);
            break;
        case 2:
            printf("Enter °F: "); scanf("%f",&f);
            printf("C = %.2f", (f-32)*5/9);
            break;
        case 3:
            printf("Enter KM: "); scanf("%f",&km);
            printf("Miles = %.2f", km*0.621371);
            break;
        case 4:
            printf("Enter Miles: "); scanf("%f",&mile);
            printf("KM = %.2f", mile/0.621371);
            break;
        default:
            printf("Invalid choice");
    }
    return 0;
}

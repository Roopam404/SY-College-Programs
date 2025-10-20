#include <stdio.h>

float percentage(int tmarks, int omarks){
    return (omarks/(float)tmarks)*100;
}

int main(){
    int total=500, obtained;
    int ch;
    printf("Enter obtained marks out of 500: ");
    scanf("%d",&obtained);

    float p = percentage(total,obtained);
    switch((int)p/10){
        case 10:
        case 9: printf("Excellent!"); break;
        case 8: printf("Very Good!"); break;
        case 7: printf("Good!"); break;
        case 6: printf("Average"); break;
        default: printf("Poor performance");
    }
    return 0;
}

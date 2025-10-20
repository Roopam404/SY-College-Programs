#include <stdio.h>
int main()
{
    int score=0, ans;
    printf("Q1. Capital of India?\n1.Delhi 2.Mumbai\n");
    scanf("%d",&ans);
    switch(ans){case 1: score++;}

    printf("Q2. 5*6 = ?\n1.11 2.30\n");
    scanf("%d",&ans);
    switch(ans){case 2: score++;}

    printf("Your Score = %d/2", score);
    return 0;
}

#include <stdio.h>
int main()
{
    int votes[3], i, max, winner;
    printf("Enter votes for 3 candidates: ");
    for(i=0;i<3;i++) scanf("%d",&votes[i]);
    max=votes[0]; winner=1;
    for(i=1;i<3;i++){
        if(votes[i]>max){ max=votes[i]; winner=i+1; }
    }
    printf("Candidate %d wins with %d votes", winner, max);
    return 0;
}

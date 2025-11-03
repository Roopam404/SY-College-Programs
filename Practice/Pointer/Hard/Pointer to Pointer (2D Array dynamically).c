#include <stdio.h>
#include <stdlib.h>

int main() {
    int r,c,i,j;
    scanf("%d %d", &r, &c);

    int **mat = malloc(r*sizeof(int*));
    for(i=0;i<r;i++)
        mat[i] = malloc(c*sizeof(int));

    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d", &mat[i][j]);

    for(i=0;i<r;i++){
        for(j=0;j<c;j++)
            printf("%d ", mat[i][j]);
        printf("\n");
    }
}

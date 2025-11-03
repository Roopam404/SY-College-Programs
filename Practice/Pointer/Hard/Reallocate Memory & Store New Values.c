#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    printf("Enter initial size: ");
    scanf("%d", &n);

    int *arr = malloc(n*sizeof(int));

    for(i = 0; i < n; i++) scanf("%d", arr+i);

    printf("Increasing size...\nEnter new size: ");
    int newN; scanf("%d", &newN);
    
    arr = realloc(arr, newN*sizeof(int));

    for(i=n; i<newN; i++) scanf("%d", arr+i);

    for(i=0; i<newN; i++) printf("%d ", *(arr+i));

    free(arr);
}

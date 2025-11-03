#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    printf("Enter size: ");
    scanf("%d", &n);

    int *arr = (int*)malloc(n * sizeof(int));
    int sum = 0;

    for(i = 0; i < n; i++) {
        scanf("%d", arr+i);
        sum += *(arr+i);
    }

    printf("Average = %.2f", (float)sum/n);
    free(arr);
    return 0;
}

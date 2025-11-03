#include <stdio.h>

int* larger(int *x, int *y){
    return (*x > *y) ? x : y;
}

int main() {
    int a,b; scanf("%d%d",&a,&b);
    printf("Larger = %d", *larger(&a,&b));
}

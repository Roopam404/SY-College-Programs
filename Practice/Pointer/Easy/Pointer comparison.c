#include <stdio.h>
int main() {
    int a[]={1,2,3};
    int *p=&a[0], *q=&a[2];
    printf("%d", q > p);
}

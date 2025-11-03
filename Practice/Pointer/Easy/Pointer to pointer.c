#include <stdio.h>
int main() {
    int a = 50, *p = &a, **q = &p;
    printf("%d", **q);
}

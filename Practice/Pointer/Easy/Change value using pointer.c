#include <stdio.h>
int main() {
    int a = 5, *p = &a;
    *p = 20;
    printf("%d", a);
}

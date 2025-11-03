#include <stdio.h>
int main() {
    int x = 10, *p=&x;
    *p += 5;
    printf("%d", x);
}

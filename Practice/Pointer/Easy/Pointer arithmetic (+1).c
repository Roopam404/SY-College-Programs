#include <stdio.h>
int main() {
    int a = 10, *p = &a;
    p++;
    printf("%p", p);
}

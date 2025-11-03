#include <stdio.h>
int main() {
    char s[]="Hi", *p=s;
    while(*p) printf("%c ", *p++);
}

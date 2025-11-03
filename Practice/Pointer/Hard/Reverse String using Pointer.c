#include <stdio.h>
#include <string.h>

int main() {
    char str[100]; scanf("%s", str);
    char *p = str + strlen(str) - 1;

    while(p >= str) printf("%c", *p--);
}

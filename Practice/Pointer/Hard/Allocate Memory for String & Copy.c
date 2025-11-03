#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char str[100];
    scanf("%s", str);

    char *p = malloc(strlen(str)+1);
    strcpy(p, str);

    printf("Stored string = %s", p);
    free(p);
}

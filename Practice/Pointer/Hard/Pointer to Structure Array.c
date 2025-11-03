#include <stdio.h>

struct Student { char name[20]; int marks; };

int main() {
    struct Student st[3], *p = st;
    for(int i=0;i<3;i++) scanf("%s %d", (p+i)->name, &(p+i)->marks);
    for(int i=0;i<3;i++) printf("%s %d\n", (p+i)->name, (p+i)->marks);
}

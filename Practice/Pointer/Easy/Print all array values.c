#include <stdio.h>
int main() {
    int a[]={1,2,3}, *p=a;
    for(int i=0;i<3;i++) printf("%d ", *(p+i));
}

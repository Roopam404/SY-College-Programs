#include <stdio.h>
int main()
{
    int units;
    printf("Enter electricity units: ");
    scanf("%d", &units);

    switch(units / 100) {
        case 0: case 1: printf("Bill = Rs. %d", units * 3); break;
        case 2: case 3: printf("Bill = Rs. %d", units * 5); break;
        default: printf("Bill = Rs. %d", units * 8);
    }
    return 0;
}

#include <stdio.h>
int main() 
{
    int choice;
    printf("1. ₹199 (1.5GB/day)\n2. ₹399 (2GB/day)\n3. ₹599 (3GB/day)\nEnter plan number: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1: printf("Plan: ₹199 | Validity: 28 days"); break;
        case 2: printf("Plan: ₹399 | Validity: 56 days"); break;
        case 3: printf("Plan: ₹599 | Validity: 84 days"); break;
        default: printf("Invalid plan");
    }
    return 0;
}

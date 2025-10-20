#include <stdio.h>
int main()
{
    int month;
    printf("Enter month number (1–12): ");
    scanf("%d", &month);

    switch(month) {
        case 1: printf("Capricorn / Aquarius"); break;
        case 2: printf("Aquarius / Pisces"); break;
        case 3: printf("Pisces / Aries"); break;
        case 4: printf("Aries / Taurus"); break;
        case 5: printf("Taurus / Gemini"); break;
        case 6: printf("Gemini / Cancer"); break;
        case 7: printf("Cancer / Leo"); break;
        case 8: printf("Leo / Virgo"); break;
        case 9: printf("Virgo / Libra"); break;
        case 10: printf("Libra / Scorpio"); break;
        case 11: printf("Scorpio / Sagittarius"); break;
        case 12: printf("Sagittarius / Capricorn"); break;
        default: printf("Invalid month");
    }
    return 0;
}

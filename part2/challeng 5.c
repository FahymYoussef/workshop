#include <stdio.h>

int main()
{
    int years,menu;
    int months, days, hours, minutes, seconds;
    printf("enter years:");
    scanf("%d",&years);
    printf("convertion menu: \n");
    printf("convert to months: \n");
    printf("convert to days: \n");
    printf("convert to hours: \n");
    printf("convert to minutes: \n");
    printf("convert to seconds: \n");
    scanf("%d",&menu);
    switch(menu)
    {
    case 1:
        months=years*12;
        printf("%d years is equivalent to %d months.\n", years, months);
        break;
    case 2:
        days=years*365;
        printf("%d years is equivalent to %d days.\n",years,days);
        break;
    case 3:
        hours = days * 24;
        printf("%d years is equivalent to %d hours.\n", years, hours);
        break;
    case 4:
        minutes = hours * 60;
        printf("%d years is equivalent to %d minutes.\n", years, minutes);
        break;
    case 5:
        seconds = minutes * 60;
        printf("%d years is equivalent to %d seconds.\n", years, seconds);
        break;
    default:
        printf("Invalid option.\n");
        break;
    }





return 0;
}

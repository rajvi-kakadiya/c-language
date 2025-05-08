// millennium to seconds

#include<stdio.h>
int main()
{
    int millennium,years,days,hours,min,seconds;

    printf("enter millennium= ");
    scanf("%d",&millennium);

    years=millennium*1000;
    days=years*365;
    hours=days*24;
    min=hours*60;
    seconds=min*60;

    printf("%d",seconds);
    return 0;
}
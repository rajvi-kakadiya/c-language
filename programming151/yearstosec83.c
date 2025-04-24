// Accept years and convert them into seconds.

#include<stdio.h>
int main()
{
    int years,days,hours,minutes,seconds;

    printf("enter years= ");
    scanf("%d",&years);

    days=years*365;
    hours=days*24;
    minutes=hours*60;
    seconds=minutes*60;

    printf("%d",seconds);
    return 0;
}
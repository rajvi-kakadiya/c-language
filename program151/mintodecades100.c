//Accept seconds and convert them into decades.

#include<stdio.h>
int main()
{
    int seconds,minutes,hours,days,years,decades;

    printf("enter secondsv=");
    scanf("%d",seconds);

    minutes=seconds/60;
    hours=minutes/60;
    days=hours/24;
    years=days/365;
    
    decades=years/10;

    printf("%d".decades);
    return 0;
}
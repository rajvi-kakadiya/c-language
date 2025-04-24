// Accept minutes and convert them into years.

#include<stdio.h>
int main()
{
    int minutes,hours,days,years;

    printf("enter minutes=");
    scanf("%d",&minutes);

    hours=minutes/60;
    days=hours/24;
    years=days/365;

    printf("%d",years);
    return 0;
}
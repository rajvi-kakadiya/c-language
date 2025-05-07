//Accept minutes and convert them into decades.

#include<stdio.h>
int main()
{
    int minutes,hours,days,years,decades;

    printf("enter minutes=");
    scanf("%d",&minutes);

    hours=minutes/60;
    days=hours/24;
    years=days/365;
    decades=years/10;

    printf("%d",decades);
    return 0;
}
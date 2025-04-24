//Accept minutes and convert them into a millennium. 

#include<stdio.h>
int main()
{
    int minutes,hours,days,years,millennium;

    printf("enter the minutes= ");
    scanf("%d",&minutes);

    hours=minutes/60;
    days=hours/24;
    years=days/365;
    millennium=years/1000;

    printf("%d",millennium);
    return 0;


}
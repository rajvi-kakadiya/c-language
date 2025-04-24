// Accept decades and convert them into seconds.

#include<stdio.h>
int main()
{
    int decades,years,days,hours,minutes,second;

    printf("enter decades= ");
    scanf("%d",&decades);

    years=decades*10;
    days=years*365;
    hours=days*24;
    minutes=hours*60;
    second=minutes*60;

    printf("%d",second);
    return 0;

}
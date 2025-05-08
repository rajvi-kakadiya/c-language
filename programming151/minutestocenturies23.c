// Accept minutes and convert them into centuries. 

#include<stdio.h>
int main()
{
    int minutes,hours,day,year,centuries;

    printf("enter the minutes : ");
    scanf("%d",&minutes);

    hours=minutes/60;
    day=hours/24;
    year=day/365;
    centuries=year/100;

    printf("century : %d",centuries);
    return 0;

}
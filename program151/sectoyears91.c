//Accept seconds and convert them into years. 

#include<stdio.h>
int main()
{
    int seconds,minutes,hours,days,years;

    printf("enter second=");
    scanf("%d",&seconds);

    minutes=seconds/60;
    hours=minutes/60;
    days=hours/24;
    years=days/365;

    printf("%d",years);
    return 0;
}
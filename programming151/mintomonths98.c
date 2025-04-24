//Accept minutes and convert them into months.

#include<stdio.h>
int main()
{
    int minutes,hours,days,months;

    printf("enter min= ");
    scanf("%d",&minutes);

    hours=minutes/60;
    days=hours/24;
    months=days/30;

    printf("%d",months);
    return 0;
    
}
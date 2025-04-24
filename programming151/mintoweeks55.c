// Accept minutes and convert them into weeks

#include<stdio.h>
int main()
{
    int minutes,hours,days,weeks;

    printf("enter minutes= ");
    scanf("%d",&minutes);

    hours=minutes/60;
    days=hours/24;
    weeks=days/7;

    printf("%d",weeks);
    return 0;
}
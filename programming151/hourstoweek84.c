// Accept hours and convert them into weeks.

#include<stdio.h>
int main()
{
    int hours,days,weeks;

    printf("enter hours = ");
    scanf("%d",&hours);

    days=hours/24;
    weeks=days/7;
    printf("%d",weeks);
    return 0;
}
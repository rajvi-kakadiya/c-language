//Accept hours and convert them into years. 

#include<stdio.h>
int main()
{
    int hours,days,years;

    printf("enter hours = ");
    scanf("%d",&hours);

    days=hours/24;
    years=days/365;

    printf("%d",years);
    return 0;
}
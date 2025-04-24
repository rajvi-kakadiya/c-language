// Accept seconds and convert them into months. 

#include<stdio.h>
int main()
{
    float seconds,minutes,hours,days,months;

    printf("enter seconds = ");
    scanf("%f",&seconds);

    minutes=seconds/60;
    hours=minutes/60;
    days=hours/24;
    months=days/30;

    printf("%f",months);
    return 0;
    
}
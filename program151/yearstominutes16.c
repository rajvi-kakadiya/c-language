// years to min

#include<stdio.h>
int main()
{
    int year,day,minutes;

    printf("enter years :");
    scanf("%d",&year);

    day=year*365;
    minutes=day*60;

    printf("%d",minutes);
}
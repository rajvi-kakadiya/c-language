//Accept weeks and convert them into minutes.

#include<stdio.h>
int main()
{
    int weeks,days,hours,minutes;

    printf("enter weeks = ");
    scanf("%d",&weeks);

    days=weeks*7;
    hours=days*24;
    minutes=hours*60;

    printf("%d",minutes);
    return 0;
}
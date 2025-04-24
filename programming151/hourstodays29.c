// Accept hours and convert them into days.

#include<stdio.h>
int main()
{
    int hours,days;

    printf("enter hours =");
    scanf("%d",&hours);

    days=hours/24;

    printf("days: %d",days);
    return 0;


}
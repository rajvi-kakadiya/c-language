//Accept weeks and convert them into seconds. 

#include<stdio.h>
int main()
{
    int weeks,days,hours,minutes,seconds;

    printf("enter weeks=");
    scanf("%d",&weeks);

    days=weeks*7;
    hours=day*24;
    minutes=hours*60;
    seconds=minutes*60;

    printf("%d",seconds);
    return 0;
    
}
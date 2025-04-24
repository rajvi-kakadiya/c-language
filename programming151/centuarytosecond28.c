//Accept centuries and convert them into seconds.

#include<stdio.h>
int main()
{
    int centuries,year,day,hours,minutes,seconds;

    printf(" enter centuries = ");
    scanf("%d",&centuries);

    year=centuries*100;
    day=year*365;
    hours=day*24;
    minutes=hours*60;
    seconds=minutes*60;

    printf("seconds : %d",seconds);
    return 0;
    
}
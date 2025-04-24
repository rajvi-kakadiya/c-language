//  Accept centuries and convert them into minutes. 

#include<stdio.h>
int main()
{
    int centuries,year,day,hours,minutes;

    printf(" enter centuries = ");
    scanf("%d",&centuries);

    year=centuries*100;
    day=year*365;
    hours=day*24;
    minutes=hours*60;

    printf("%d",minutes);
    return 0;
    
}
//Accept a millennium and convert it into hours. 

#include<stdio.h>
int main()
{
    int millennium,year,day,hours;

    printf(" enter millennium : ");
    scanf("%d",&millennium);

    year=millennium*1000;
    day=year*365;
    hours=day*24;

    printf("Hours = %d",hours);
    return 0;
}
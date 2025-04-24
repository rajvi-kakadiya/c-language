// Accept seconds and convert them into a millennium. 

#include<stdio.h>
int main()
{
int seconds,minutes,hours,day,years,millennium;

printf("enter seconds= ");
scanf("%d",&seconds);

minutes=seconds/60;
hours=minutes/60;
day=hours/24;
years=day/365;
millennium=years/1000;

printf("%d",millennium);
return 0;
}



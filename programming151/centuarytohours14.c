//accept centuary convert them into the hours

#include<stdio.h>
int main()
{
    int centuary,year,day,hour;

    printf("enter centuary :");
    scanf("%d",&centuary);

    year=centuary*100;
    day=year*365;
    hour=day*24;

    

    printf("Hours: %d",hours);
    return 0;
    
}
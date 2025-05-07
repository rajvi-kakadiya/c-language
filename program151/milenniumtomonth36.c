// miilennium to month

#include<stdio.h>
int main()
{
    int miilennium,years,month;

    printf("enter millennium : ");
    scanf("%d",&millennium);

    years=miilennium*1000;
    month=years*52;

    printf("monthe = %d",month);
    return 0;
    
}
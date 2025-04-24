// Accept decades and convert them into hours. 

#include<stdio.h>
int main()
{
    int decades,years,days,hours;

    printf("enter decades = ");
    scanf("%d",&decades);

    years=decades*10;
    days=years*365;
    hours=days*24;

    printf("%d",hours);
    return 0;
}
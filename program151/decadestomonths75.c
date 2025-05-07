// Accept decades and convert them into months. 

#include<stdio.h>
int main()
{
    int decades,years,months;

    printf("enter decades= ");
    scanf("%d",&decades);

    years=decades*10;
    months=years*12;

    printf("%d",months);
    return 0;
}
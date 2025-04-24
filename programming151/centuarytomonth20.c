// centuery to monthes

#include<stdio.h>
int main()
{
    int centuary,year,month;

    printf("enter centuary :");
    scanf("%d",&centuary);

    year=centuary*10;
    month=year*12;

    printf("%d",month);
    return 0;
}
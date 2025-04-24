// Accept days and convert them into centuries. 

#include<stdio.h>
int main()
{
    int days,years,centuries;
    printf("enter days= ");
    scanf("%d",days);

    years=days/365;
    centuries=years/100;

    printf("%d",centuries);
    return 0;
}
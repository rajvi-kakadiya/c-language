//Accept years and convert them into hours. 

#include<stdio.h>
int main()
{
    int years,days,hours;

    printf("enter years=");
    scanf("%d",&years);

    days=years*365;
    hours=days*24;

    printf("%d",hours);
    return 0;

}
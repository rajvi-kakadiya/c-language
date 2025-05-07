// Accept months and convert them into hours. 

#include<stdio.h>
int main()
{
    int months,days,hours;

    printf("enter months = ");
    scanf("%d",&months);

    days=months*30;
    hours=days*24;

    printf("%d",hours);
    return 0;
}
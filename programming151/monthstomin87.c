//Accept months and convert them into minutes. 

#include<stdio.h>
int main()
{
    int months,days,hours,minutes;

    printf("enter months");
    scanf("%d",&months);

    days=months*30;
    hours=days*24;
    minutes=hours*60;

    printf("%d",minutes);
    return 0;
}
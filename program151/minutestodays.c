//min to days

#include<stdio.h>
int main()
{
    int minutes,hours,day;

    printf("enter minutes:");
    scanf("%d",&minutes);

    hours=minutes/24;
    day=hours/365;

    printf("%d",day);

return 0;

}


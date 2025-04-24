//Accept a number of months and convert it into weeks.

#include<stdio.h>
int main()
{
    int months,year,weeks;

    printf("enter the months:");
    scanf("%d",&months);
    year=months/12;
    weeks=year*52;
    printf("weeks :%d",weeks);
    return 0;
    

}
//write a program to input month number print number of days in a month.

#include<stdio.h>
int main()
{
    int month;

    printf(" enter month = ");
    scanf("%d",&month);

    if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12)
    {
        printf(" 31 days in this month");
    }
    else if(month==4 || month==6 || month==9 || month==11)
    {
        printf("30 days in this month");
    }
    else 
    {
        printf(" 28 days in this month");
    }
}
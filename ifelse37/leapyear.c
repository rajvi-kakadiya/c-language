//Write a program to check whether a year is leap year or not. 

#include<stdio.h>
int main()
{
    int year;

    printf("enter year=");
    scanf("%d",&year);

    if(year % 4==0 )
    {
        printf("year is leap year");
    }else
    {
        printf("year is not leap year");
    }
}
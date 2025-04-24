//Accept years and convert them into days.

#include<stdio.h>
int main()
{
    int year,day;

    printf(" enter year = ");
    scanf("%d",&year);

        day=year*365;

    printf("day = %d",day);
    return 0;
    
}
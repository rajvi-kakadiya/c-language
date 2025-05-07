// Accept centuries and convert them into days. 

#include<stdio.h>
int main()
{
    int centuries,year,day;

    printf(" enter centuries = ");
    scanf("%d",&centuries);

    year=centuries*100;
    day=year*365;

    printf("day = %d",day);
    return 0;
    
}
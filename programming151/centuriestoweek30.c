//Accept centuries and convert them into weeks. 
#include<stdio.h>
int main()
{
    double centuries,year,weeks;

    printf("enter centuries= ");
    scanf("%lf",&centuries);

    year=centuries*100;
    weeks=year*52;

    printf("week : %lf",weeks);
    return 0;
}
// Accept a millennium and convert it into weeks. 

#include<stdio.h>
int main()
{
    int millennium,year,weeks;

    printf("enter millennium =");
    scanf("%d",&millennium);

    year=millennium*1000;
    weeks=year*52;

    printf("%d",weeks);
    return 0;
    
}
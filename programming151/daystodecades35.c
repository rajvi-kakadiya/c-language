//Accept days and convert them into decades. 

#include<stdio.h>
int main()
{
    double days,years,decades;

    printf(" enter the days=");
    scanf("%lf",&days);

    years=days/365;
    decades=years/10;

    printf("decades = %lf",decades);
    return 0;
    
}
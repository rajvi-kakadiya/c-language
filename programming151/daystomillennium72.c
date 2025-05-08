//  Accept days and convert them into a millennium. 

#include<stdio.h>
int main()
{
    int days,years,millennium;
    
    printf("enter days = ");
    scanf("%d",&days);

    years=days/365;
    millennium=years/1000;

    printf("%d",millennium);
    return 0;
    
}
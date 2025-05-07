//meters to mile

#include<stdio.h>
int main()
{
    float meters,kilometer,mile;

    printf("enter meters= ");
    scanf("%f",&meters);
    
    kilometer=meters/1000;
    mile=kilometer/1.60934;

    printf("mile= %f",mile);
    return 0;
    
}
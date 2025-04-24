// Accept days and convert them into hours. 

#include<stdio.h>
int main()
{
    int days,hours;
    
    printf("enter days= ");
    scanf("%d",&days);

    hours=days*24;
    printf("%d",hours);
    return 0;
    
}
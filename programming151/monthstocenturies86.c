//  Accept months and convert them into centuries. 

#include<stdio.h>
int main()
{
    int months,years,centuries;

    printf("enter months = ");
    scanf("%d",&months);

    years=months/12;
    centuries=years/100;

    printf("%d",centuries);
    return 0;
}
//Accept months and convert them into a millennium. 

#include<stdio.h>
int main()
{
    int months,years,millennium;

    printf("enter months = ");
    scanf("%d",&months);

    years=months/12;
    millennium=years/1000;

    printf("%d",millennium);
    return 0;
}
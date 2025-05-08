//Accept decades and convert them into years.

#include<stdio.h>
int main()
{
    int decades,years;

    printf("enter decades = ");
    scanf("%d",&decades);

    years=decades*10;

    printf("years = %d",years);
    return 0;
    
}
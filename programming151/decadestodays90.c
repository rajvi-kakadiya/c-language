//Accept decades and convert them into days. 

#include<stdio.h>
int main()
{
    int decades,years,days;

    printf(" enter decades= ");
    scanf("%d",&decades);

    years=decades*10;
    days=years*365;

    printf("%d",days);
    return 0;
}
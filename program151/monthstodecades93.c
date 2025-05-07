//Accept months and convert them into decades. 

#include<stdio.h>
int main()
{
    int months,years,decades;

    printf(" enter months=");
    scanf("%d",&months);

    years=months/12;
    decades=years/10;

    printf("%d",decades);
    return 0;
}
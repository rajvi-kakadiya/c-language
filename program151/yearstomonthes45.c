//Accept years and convert them into months. 

#include<stdio.h>

int main()
{
    int years,months;

    printf("enter years");
    scanf("%d",&years);

    months=years*52;
    printf("%d",months);
    return 0;
}
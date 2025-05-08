// Accept days and convert them into months. 

#include<stdio.h>
int main()
{
    int days,months;

    printf("enter days = ");
    scanf("%d",&days);

    months=days/30;

    printf("%d",months);
    return 0;
}
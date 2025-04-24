// days to seconds

#include<stdio.h>
int main()
{
    int days,hours,min,seconds;

    printf("enter days =");
    scanf("%d",&days);
 
    hours=days*24;
    min=hours*60;
    seconds=min*60;

    printf("%d",seconds);
    return 0;

}
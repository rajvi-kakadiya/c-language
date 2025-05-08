//Accept seconds and convert them into hours. 

#include<stdio.h>
int main()
{
    int seconds,minutes,hours;

    printf("entere seconds=");
    scanf("%d",&seconds);

    minutes=seconds/60;
    hours=minutes/60;

    printf("%d",hours);
    return 0;
}
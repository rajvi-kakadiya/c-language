//Accept minutes and convert them into hours. 

#include<stdio.h>
int main()
{
    int minutes,hours;

    printf("enter minutes=");
    scanf("%d",&minutes);

    hours=minutes/60;
    printf("%d",hours);
    return 0;

}
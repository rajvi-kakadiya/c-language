// Accept seconds and convert them into centuries.

#include<stdio.h>
int main()
{
    int main()
    int seconds,minutes,hours,days,years,centuries;
     printf("enter seconds =");
     scanf("%d",&seconds);

     minutes=seconds/60;
     hours=minutes/60;
     days=hours/24;
     years=days/365;
     centuries=years/100;

     printf("%d",centuries);
     return 0;
}
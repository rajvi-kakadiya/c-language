// Accept kiloliters and convert them into liters. 

#include<stdio.h>
int main()
{
    int kiloliters,liters;

    printf("enter kiloliters =");
    scanf("%d",&kiloliters);

    liters=kiloliters*1000;

    printf("%d",liters);
    return 0;
}
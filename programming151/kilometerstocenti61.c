// Accept kilometers and convert them into centimeters. 

#include<stdio.h>
int main()
{
    int kilometer,meters,centimeters;

    printf("enter kilometer=");
    scanf("%d",&kilometer);

    meters=kilometer*1000;
    centimeters=meters*100;

    printf("%d",centimeters);
    return 0;
}
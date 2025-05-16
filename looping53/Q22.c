// accept value and power of number

#include<stdio.h>
int main()
{
    int i=1,power,base;

    printf("enetr base:");
    scanf("%d",&base);
    printf("enter power:");
    scanf("%d",&power);

    while(power>=1)
    {
        i=i*base;
        power--;
    }
    printf("number of power : %d",i);
    return 0;

}
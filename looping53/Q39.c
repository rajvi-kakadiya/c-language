// armstrong number

#include<stdio.h>
int main()
{
    int val,reminder,sum=0,temp,range;

    printf("enter the value : ");
    scanf("%d",&val);
    temp=val;

    while(val>0)
    {
        reminder=val%10;
        sum=sum+(reminder*reminder*reminder);
        val=val/10;
    }
    if(temp==sum)
    {
        printf("Number is armstrong");
    }else
    {
        printf("number is not armstrong");
    }
    return 0;
}
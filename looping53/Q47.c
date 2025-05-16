// find strong number

#include<stdio.h>
int main()
{
    int val,digit=0,fact,sum=0,temp;

    printf("enter value : ");
    scanf("%d",&val);
    temp=val;

    while(val>0)
    {
        digit=val%10;
        fact=1;

        while(digit>0)
        {
            fact=fact*digit;
            digit --;
        }
        sum=sum+fact;
        val=val/10;
        

    }
    if(temp==sum)
    {
        printf("number is strong");
    }
    else
    {
        printf("number is not strong");

    }
    return 0;
}
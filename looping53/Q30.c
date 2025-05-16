// accept a value whwethwr it is prime or not

#include<stdio.h>
int main()
{
    int i,val;

    printf("enter value : ");
    scanf("%d",&val);

    for(i=2;i<=val;i++)
    {
        if(val % i == 0)
        {
            break;
        }
    }
    if(val==i)
    {
        printf("Number Is Prime");
    }
    else
    {
        printf("Number Is Not Prime");
    }
    return 0;
}
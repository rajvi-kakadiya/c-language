// acept a value and print sum of all digit

#include<stdio.h>
int main()
{
    int val,sum=0,digit=0;

    printf("enter value : ");
    scanf("%d",&val);

    while(val>0)
    {
        digit=val%10;
        sum=sum+digit;
        val=val/10;
    }
    printf("sum of all digit : %d ",sum);
    return 0;
}

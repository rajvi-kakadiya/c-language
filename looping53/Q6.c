//write a program accept 10 values and printf its average
#include<stdio.h>
int main()
{
    int i=1,val=0,average=0,sum=0;

    for(i=1;i<=10;i++)
    {
        printf("enter value : ");
        scanf("%d",&val);
        sum=sum+val;
        average=sum/10;
    }
    printf("Average = %d",average);
    return 0;
}
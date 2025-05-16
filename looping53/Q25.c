//sum of all factors

#include<stdio.h>
int main()
{
    int i,val,sum=0;

    printf("enter value :");
    scanf("%d",&val);

    for(i=1;i<=val;i++)
    {
        if(val % i == 0)
       {
          sum = sum + i;
       } 
    }
    printf("sum of all factors : %d",sum);

    return 0;
}

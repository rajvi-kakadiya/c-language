//accept 10 values and print sum of positive and negative number

#include<stdio.h>
int main()
{
    int i,val,positiv_sum=0,negative_sum=0;

    for(i=1;i<=10;i++)
    {
        printf("enter value : ");
        scanf("%d",&val);

        if(val>=0)
        {
            positiv_sum=positiv_sum+val;
        }
        else
        {
            negative_sum=negative_sum+val;
        }
    }
    printf("sum of positive number : %d\n",positiv_sum);
    printf("sum of negative number : %d\n",negative_sum);

}
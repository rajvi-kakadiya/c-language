//accept 10 values and print sum of add and even number

#include<stdio.h>
int main()
{
    int i,val,even_sum=0,odd_sum=0;

    for(i=1;i<=10;i++)
    {
        printf("enter value:");
        scanf("%d",&val);

        if(val % 2 == 0)
        {
            even_sum=even_sum+val;
        }
        else
        {   
            odd_sum=odd_sum+val;

        }
    }
    printf("sum of even number = %d\n",even_sum);
    printf("sum of odd number = %d",odd_sum);
    return 0;
}
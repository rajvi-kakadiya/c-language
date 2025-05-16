//accept 10 values and counts even number

#include<stdio.h>
int main()
{
    int i,val,count=0;

    for(i=1;i<=10;i++)
    {
        printf("enter the value = ");
        scanf("%d",&val);

        if(val % 2 == 0)
        {
            count++;
        }
    }
    printf("count even : %d",count);
    return 0;
}
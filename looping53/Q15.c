// accept 10 value and count odd number

#include<stdio.h>
int main()
{
    int i,count=0,val;

    for(i=1;i<=10;i++)
    {
        printf("enter value =");
        scanf("%d",&val);
        if(val % 2 == 1)
        {
            count++;
        }
    }
    printf("odd number %d",count);
    return 0;
}
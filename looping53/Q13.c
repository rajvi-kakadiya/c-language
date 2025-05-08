// accept 10 values and print odd number

#include<stdio.h>
int main()
{
    int i,val;

    for(i=1;i<=10;i++)
    {
        printf("enter value = ");
        scanf("%d",&val);

        if(val % 2 == 1)
        {
            printf("odd number %d",val);
        }
    }
    return 0;
}
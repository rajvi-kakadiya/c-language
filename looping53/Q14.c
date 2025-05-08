// accept 10 values and print even number

#include<stdio.h>
int main()
{
    int i,val;

    for(i=1;i<=10;i++)
    {
        printf("enter value = ");
        scanf("%d",&val);

        if(val % 2 == 0)
        {
            printf("even number %d\n",val);
        }
    }
    return 0;
}
//accept value and find all factors

#include<stdio.h>
int main()
{
    int i,val;

    printf("enter the value : ");
    scanf("%d",&val);

    for(i=1;i<=val;i++)
    {
        if(val % i == 0)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}
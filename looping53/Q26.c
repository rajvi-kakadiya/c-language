//fint a perfect number

#include<stdio.h>
int main()
{
    int i,val,sum=0,temp;

    printf("enter the value :");
    scanf("%d",&val);

    temp=val;

    for(i=1;i<val;i++)
    {
        if(val % i == 0 )
        {
            sum = sum + i;
        }
    }
    if(temp==sum)
    {
        printf("This Is A Parfect Number");
    }
    else
    {
        printf("This Is Not A Parfect Number");

    }
    return 0;
}
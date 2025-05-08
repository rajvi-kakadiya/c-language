// write a program accept 10 values and print its sum

#include<stdio.h>
int main()
{
    int val=0,sum=0,i;

    for(i=1;i<=10;i++)
    {
        printf(" Enter a Value : ");
        scanf("%d",&val);
        sum=sum+val;
        i++;
    }
    printf("%d",sum);
    return 0;
}

// wrp find the minimum number

#include<stdio.h>
int main()
{
    int a,b;

    printf("enter value of A:");
    scanf("%d",&a);
    printf("enter value of b:");
    scanf("%d",&b);

    if(a<b)
    {
        printf("minimum value = %d",a);
    }else
    {
        printf("minimum value = %d",b);
    }

    
    return 0;
}
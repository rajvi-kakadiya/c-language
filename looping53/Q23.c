//accept a value and find is factorial value

#include<stdio.h>
int main()
{
    int val,factorial=1;

    printf("enter value :");
    scanf("%d",&val);

    while(val>=1)
    {
        factorial=factorial*val;
        val--;

    }
    printf("value of factorial : %d",factorial);
    return 0;
}
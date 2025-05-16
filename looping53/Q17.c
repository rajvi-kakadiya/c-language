//accept 10 values and counts total odd and even

#include<stdio.h>
int main()
{
    int i,val,even_count,odd_count=0;

    for(i=1;i<=10;i++)
    {
        printf("enter value : ");
        scanf("%d",&val);

        if(val % 2 == 1)
        {
            odd_count++;
        }else
        {
            even_count++;
        }
    }
    printf(" odd counts = %d",odd_count);
    printf(" even counts = %d",even_count);
    return 0;
    
}
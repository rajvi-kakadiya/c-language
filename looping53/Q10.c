// count negative number

#include<stdio.h>
int main()
{
    int i=1,val,count;

    for(i=1;i<=10;i++)
    {
        printf("enter value :");
        scanf("%d",&val);

        if(val<0)
        {
            count++;
        }
    }
    printf("Negative Number : %d",count);
    return 0;
}
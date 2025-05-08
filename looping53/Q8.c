// //accept 10 values and print negative number

#include<stdio.h>
int main()
{
    int i,val;

    for(i=1;i<=10;i++)
    {
        printf("enter value : ");
        scanf("%d",&val);

        if(val<0)
        {
            printf("Negative : %d\n",val);
        }
    }
    return 0;
}
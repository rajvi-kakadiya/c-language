//accept 10 values and print positive number

#include<stdio.h>
int main()
{
    int i=1,val;
    

    for(i=1;i<=10;i++)
    {
        printf("enter value : ");
        scanf("%d",&val);
    

        if(val>0)
        {
            printf(" positive %d\n",val);
        }

    }


    return 0;

}
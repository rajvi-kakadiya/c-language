// write a program to count positive number

#include<stdio.h>
int main()
{
    int i,val,count;

    for(i=1;i<=10;i++)
    {
        printf("enter value = ");
        scanf("%d",&val);

        if(val>0)
        {
            count++;
        }
        
    }
    printf("Positive Number : %d",count);
    return 0;
}
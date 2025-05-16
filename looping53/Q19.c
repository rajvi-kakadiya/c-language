// accept 10 values and count positive ,negative and zero number

#include<stdio.h>
int main()
{
    int i,val,positive_count=0,negative_count=0,zero_count=0;

    for(i=1;i<=10;i++)
    {
        printf("enter value : ");
        scanf("%d",&val);

        if(val==0)
        {
            zero_count++;

        }if(val>=0)
        {
            positive_count++;
        }
        else
        {
            negative_count++;
        }

    }
    printf("zero count : %d\n",zero_count);
    printf("positive count : %d\n",positive_count);
    printf("negative count : %d",negative_count);
    return 0;

}
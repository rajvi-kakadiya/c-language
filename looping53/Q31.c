//count total digit

#include<stdio.h>
int main()
{
    int val,count=0;

    printf(" enter value : ");
    scanf("%d",&val);

    while(val>0)
    {
        val=val/10;
        count ++; 

    }
    printf("ToTal DiGiT : %d",count);
    return 0;
}
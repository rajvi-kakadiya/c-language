//digit counter

#include<stdio.h>
int main()
{
    int val,count=0;

    printf("enter the value : ");
        scanf("%d",&val);
    
   
    while(val>0)
    {
        
        val=val/10;
        count++;
    }
    printf(" Count Digit : %d",count);
    return 0;
}
// palindrome number

#include<stdio.h>
int main()
{
    int val,reminder=0,rev=0,temp;

    printf("enter value : ");
    scanf("%d",&val);
    temp=val;

    while(val>0)
    {
        reminder=val%10;
        rev=(rev*10)+reminder;
        val=val/10;
    }
    if(temp==rev)
    {
        printf("Number Is Palindrome");
    }
    else
    {
        printf("Number Is Not Palindrome");
    }
    return 0;
}
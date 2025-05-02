//Write a program to check whether a number is divisible by 5 and 11 or not.

#include<stdio.h>
int main()
{
    int num;

    printf("enter the number");
    scanf("%d",&num);

    if(num % 5==0)
    {
        printf("number is divisible by 5");
    } 
    else if(num % 11)
    {
        printf("number is divisible by 11 ");
    }else
    {
        printf(" not divisible");
    }
}
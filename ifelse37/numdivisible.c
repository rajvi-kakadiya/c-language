//Write a program to check whether a number is divisible by 5 or not. 

#include<stdio.h>
int main()
{
    int a;

    printf("enter a value of a=");
    scanf("%d",&a);

    if(a%5)
    {
        printf("number is divisible");
    }else
    {
        printf("number is not divisible");
    }
}
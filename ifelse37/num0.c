// Write a program to check whether a number is negative, positive or zero. 

#include<stdio.h>
int main()
{
    int num;

    printf("enter the number=");
    scanf("%d",&num);

    if(num>0) 
    {
        printf("number is positive");

    }else if(num==0)
    {
        printf("number is zero");

    }else
    {
        printf("number is negative");
    }
}
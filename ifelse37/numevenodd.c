//Write a program to check whether a number is even or odd or zero. 

#include<stdio.h>
int main()
{
    int num;

    printf("enter number=");
    scanf("%d",&num);

    if(num % 2 == 0)
    {
        printf("Number is odd");
    }else if(num == 0)
    {
        printf("number is zero");

    }else
    {
        printf("number is even");
    }
}
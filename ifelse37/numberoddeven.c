// Write a program to check whether a number is even or odd.

#include<stdio.h>
int main()
{
    int num;

    printf("enter number = ");
    scanf("%d",&num);

    if(num % 2==0)
    {
        printf("number is odd");
    }else
    {
        printf("number is even");
    }
}
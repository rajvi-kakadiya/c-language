// write a number is negative and positive

#include<stdio.h>
int main()
{
    int number;

    printf("enter the number=");
    scanf("%d",&number);

    if(number>0)
    {
        printf("number is positive");
    }else
    {
        printf("number is negative");
    }
}
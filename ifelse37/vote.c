//Write a program to check whether an age is eligible for voting or not.

#include<stdio.h>
int main()
{
    int age;
    printf("enter age=");
    scanf("%d",&age);

    if(age>=18)
    {
        printf("you can give vote");

    }else
    {
        printf(" you can not give vote");
    }
}
//write a program to input week number and print week days

#include<stdio.h>
int main()
{
    int number;

    printf(" enter week number");
    scanf("%d",&number);

    if(number==1)
    {
        printf("sunday");
    }
    else if(number==2)
    {
        printf("monday");
    }
    else if(number==3)
    {
        printf("tuesday");

    }
    else if(number==4)
    {
        printf("wednesday");
    }
    else if(number==5)
    {
        printf("thursday");
    }
    else if(number==6)
    {
        printf("friday");
    }
    else if(number==7)
    {
        printf("saturday");
    }
    else
    {
        printf("week has 7 days");
    }
    return 0;
}
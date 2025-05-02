//write a program if it is 10 of 100 or 200

#include<stdio.h>
int main()
{
    int number;

    printf("enter number= ");
    scanf("%d",&number);

    if(number<=10 && number<=100 || number>=200)
    {
        printf("true");

    }
    else
    {
        printf("false");
    }
    return 0;
}
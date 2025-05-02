// write a program is execlusive

#include<stdio.h>
int main()
{
    int number;

    printf("enter the number");
    scanf("%d",&number);

    if(number>100 && number<200)
    {
        printf(" number is exclusive");
    }else
    {
        printf(" number is not exclusive");

    }
    return 0;
}
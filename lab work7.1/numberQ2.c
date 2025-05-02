//wrp given number is nuteral

#include<stdio.h>
int main()
{
    int number;

    printf(" enter the number = ");
    scanf("%d",&number);

    if(number>0)
    {
        printf("number is positive");

    }
      else if(number==0)
    {
        printf(" number is nutral");
    } 
    else
    {
        printf("number is nagative");
    }
    return 0;
}
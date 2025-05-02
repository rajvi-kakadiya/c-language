//write a program two given integers return true one of them 30 or if their sum is 30

#include<stdio.h>
int main()
{
    int a,b;

    printf("enter value of a= ");
    scanf("%d",&a);

    printf("enter value of b= ");
    scanf("%d",&b);

    if(a==30 || b==30 || a+b==30)
    {
        printf("true");
    }
    else
    {
        printf("false");
    }
    
return 0;

}
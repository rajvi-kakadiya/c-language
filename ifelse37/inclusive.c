// write a program 100 to 200 inclusive value 
#include<stdio.h>
int main()
{
    int value;

    printf(" enter the value:");
    scanf("%d",&value);

    if(value>=100 && value<=200)
    {
        printf(" number is inclusive");

    }else
    {
        printf(" number is not inclusive");
    }
}
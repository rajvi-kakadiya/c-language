// write a program to compute the sum of three integers if one of the value is 13 than do not count it

#include<stdio.h>
int main()
{
    int a,b,c,sum;

    printf("enter value of a=");
    scanf("%d",&a);
    printf("enter value of b=");
    scanf("%d",&b);
    printf("enter value of c=");
    scanf("%d",&c);
    sum=a+b+c;
    printf("%d",sum);

    if(a==13 || b==13 || c==13)
    {
        printf("sorry");
    }
    return 0;
}
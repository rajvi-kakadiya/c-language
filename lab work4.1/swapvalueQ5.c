// swap value without using third variable;

#include<stdio.h>
int main()
{
    int a=10,b=50;
    a=a+b;
    printf("value of b= %d",b=a-b);
    printf("value of a= %d",a=a-b);
    
    return 0;
}
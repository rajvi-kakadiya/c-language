// right triangle 

#include<stdio.h>
int main()
{
    int a,b,c;

    printf("enter angle 1 : ");
    scanf("%d",&a);

    printf("enter angle 2 : ");
    scanf("%d",&b);

    c=180-a-b;

    printf("Right Triangle : %d",c);
    return 0;


    
}
// (x + Y)(x + y)(x + y)

#include<stdio.h>
int main()
{
    int x,y;

    printf("enter the value of x = ");
    scanf("%d",&x);
    printf("enter the value of y = ");
    scanf("%d",&y);
    printf("%d",(x+y)*(x+y)*(x+y));

    return 0;
}
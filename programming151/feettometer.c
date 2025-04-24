// feet to meters

#include<stdio.h>
int main()
{
    int feet,centimiter,meters;

    printf("enter feet");
    scanf("%d",&feet);

    centimiter=feet/30.48;
    meters=centimiter/100;

    printf("%d",&meters);
    return 0;
    
}
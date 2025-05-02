// write a program to print 1 to n loop

#include<stdio.h>
int main()
{
    int i,j;
     
    printf("enter the value of i=");
    scanf("%d",&i);

    printf("enter the value of j=");
    scanf("%d",&j);

    while(i<=j)
    {
        printf("%d\n",i);
        i++;
    }
    return 0;
}
// write a program to print series 2,4,6,8,10,12,14,16.......

#include<stdio.h>
int main()
{
    int i,n;

    printf("enter number : ");
    scanf("%d ",&n);

    for(i=1;i<=n;i++)
    {
        if(i % 2 == 0)
        {
            printf("%d,",i);
        }
    }
    return 0;
}
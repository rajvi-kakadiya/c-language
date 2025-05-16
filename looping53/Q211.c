// write a program to print series 1,3,5,7,9,11,13,15,17,19.......

#include<stdio.h>
int main()
{
    int i,n;

    printf("enter number : ");
    scanf("%d ",&n);

    for(i=1;i<=n;i++)
    {
        if(i % 2 == 1)
        {
            printf("%d,",i);
        }
    }
    return 0;
}
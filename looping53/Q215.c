// series 1,3,7,13,21,31,43,57,73,91.....

#include<stdio.h>
int main()
{
    int i,n;

    printf("enter number : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        printf("%d\n",i*i-(i-1));
    }
    return 0;
}
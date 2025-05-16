// series 1,8,27....

#include<stdio.h>
int main()
{
    int i,n,sq=0;

    printf("enter number :");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        sq=i*i*i;
        printf("%d\n",sq);
    }
    return 0;
}
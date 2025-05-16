// series 1,4,9,16......

#include<stdio.h>
int main()
{
    int i,n,sq=0;
    printf("enter number : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        sq=i*i;
        printf("%d\n",sq);
    }
return 0;
    
}
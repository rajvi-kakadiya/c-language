//print negative number from array

#include<stdio.h>
int main()
{
    int n,i;
    printf("enter array size ");
    scanf("%d",&n);

    int a[n];

    for(i=0;i<n;i++)
    {

        printf("a[%d] : ",i);
        scanf("%d",&a[i]);
    
    }
    printf("\n");

    for(i=0;i<n;i++)
    {
        if(a[i]<0)
        {
            printf("%d",a[i]);
        }
    }
    return 0;

}
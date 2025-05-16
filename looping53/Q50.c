// find square root
#include<stdio.h>
int main()
{
    int i,val;
    
    printf("enter value : ");
    scanf("%d",&val);

    for(i=1;i<val;i++)
    {
        if(i*i==val)
        {
            printf("square root : %d",i);
            break ;
        }
    }
    return 0;
}
// minimum number

#include<stdio.h>
int main()
{
    int a,b,c;

    printf(" enter the value of a =");
    scanf("%d",&a);
    printf(" enter the value of b =");
    scanf("%d",&b);
    printf(" enter the value of c =");
    scanf("%d",&c);

    if(a<b)
    {
        if(a<c)
        {
            printf("a is minimum");
        }
        else 
        {
            printf("c is minimum");
        }

    }else if(b<a)
    {
        if(b<c)
        {
            printf("b is minimum");
        }else
        {
            printf("c is minimum");
        }
    }
    return 0;
}
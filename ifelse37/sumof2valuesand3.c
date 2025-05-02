// 2 or 3 sum

#include<stdio.h>
int main()
{
    int ch;
    int a,b,c,sum;


    printf("enter ch");
    scanf("%d",&ch);

    if(ch==2)
    {
        printf("enter value of a and b = ");
        scanf("%d %d",&a ,&b);
        sum=a+b;
        printf("sub of two values = %d",sum);
    }else if(ch==3)
    {
        printf("enter value of a ,b and c= ");
        scanf("%d %d",&a ,&b, &c);
        sum=a+b+c;
        printf("sub of three  values = %d",sum);

    }
    else{
        printf("exit");
    }
    return 0;
}
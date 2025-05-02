//write a program nearest to the 100 return 0 if two int value are same

#include<stdio.h>
int main()
{
    int a,b,ax,bx;

    printf("enter the number 1: ");
    scanf("%d",&a);
    printf("enter the number 2:");
    scanf("%d",&b);

    if(a==b)
    {
        printf("zero");
    }else
    {
        if(a>100)
        {
        ax=a-100;
        }
            else{
        ax=100-a;
    }
    if(b>100)
    {
        bx=b-100;


    }else
    {
        bx=100-b;
    }
}
    if(ax<bx)
    {
        printf("a is nearst");
    }else if(bx<ax)
    {
        printf("b is nearest");
    }else
    {
        printf("both have same distance");
    }
  
      return 0;
    }
    

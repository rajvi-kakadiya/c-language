// write a program print fibonacci series

#include<stdio.h>
int main()
{
    int i=1,pv=0,cv=1,nv=0;

    printf("%d",pv);
    printf("%d",cv);

    for(i=1;i<=8;i++)
    {
        nv=pv+cv;
        printf("%d",nv);
        pv=cv;
        cv=nv;

    }
    return 0;
}
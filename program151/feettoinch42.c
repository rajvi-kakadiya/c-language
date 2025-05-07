// Accept inches and convert them into feet. 

#include<stdio.h>
int main()
{
    int inch,feet;

    printf("enter inch = ");
    scanf("%d",&inch);

    feet=inch/12;

    printf("%d",feet);
    return 0;
}
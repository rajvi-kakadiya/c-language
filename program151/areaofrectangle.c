//Accept the length and width of a rectangle and compute the area. 
//Formula: area = length × width 

#include<stdio.h>
int main()
{
    int l,w;
    printf("enter the length:");
    scanf("%d",&l);
    printf("enter the width:");
    scanf("%d",&w);
    printf("Area = %d",l*w);
    return 0;
}
//Accept the radius of a circle and compute the area. 
//Formula: area = π × r²

#include<stdio.h>
int main()
{
    int r;
    printf("enter the radius:");
    scanf("%d",&r);
    
    printf("Area = %f",3.14*r*r);
    return 0;
}
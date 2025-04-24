// inch to kilometer

#include<stdio.h>
int main()
{
    int inch,centimeters,meters,kilometer;

    printf("enter inch = ");
    scanf("%d",&inch);

    centimeters=inch*2.54;
    meters=centimeters/100;
    kilometer=meters/1000;

    printf("%d",kilometer);
    return 0;
    
}
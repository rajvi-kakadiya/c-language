// Accept meters and convert them into feet.

#include<stdio.h>
int main()
{
    int meters,centimeters,feet;

    printf("enter meters = ");
    scanf("%d",&meters);

    centimeters=meters*100;
    feet=centimeters/30.48;

    printf("%d",feet);
    return 0;
}
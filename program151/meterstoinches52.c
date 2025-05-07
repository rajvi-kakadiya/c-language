//Accept meters and convert them into inches.

#include<stdio.h>
int main()
{
    int meters,centimeters,inches;

    printf("enter meters =");
    scanf("%d",&meters);

    centimeters=meters*100;
    inches=centimeters*30.48;

    printf(" inches = %d",inches);
    return 0;
}
//Accept inches and convert them into meters. 

#include<stdio.h>
int main()
{
    float inches,centimeters,meters;

    printf(" enter inches= ");
    scanf("%f",&inches);

    centimeters=inches*2.54;
    meters=centimeters/100;

    printf("%f",meters);
    return 0;
}
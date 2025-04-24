// Accept centimeters and convert them into feet.

#include<stdio.h>
int main()
{
    float centimeters,feet;

    printf("enter centimeters = ");
    scanf("%f",&centimeters);

    feet=centimeters/30.48;
    printf("%f",feet);
    return 0;
}
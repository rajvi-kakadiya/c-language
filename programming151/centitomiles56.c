//Accept centimeters and convert them into miles.

#include<stdio.h>
int main()
{
    float centimeters,meters,kilometer,miles;

    printf("enter centimeters =");
    scanf("%f",&centimeters);

    meters=centimeters/100;
    kilometer=meters/1000;
    miles=kilometer/1.60934;

    printf("%d",miles);
    return 0;

}
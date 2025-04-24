//  Accept Kelvin (K) and convert it into Celsius (°C). 

#include<stdio.h>
int main()
{
    int kelvin,celcius;
    printf("enter kelvin= ");
    scanf("%d",&kelvin);

    celcius=kelvin - 273.15;
    printf("%d",celcius);
    return 0; 
}
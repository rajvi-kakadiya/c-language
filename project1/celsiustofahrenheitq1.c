
//Accept Celsius (°C) and convert it into Fahrenheit (°F).

#include<stdio.h>
int main()
{
    float celcius,Fahrenheit;

    printf("enter celcius = ");
    scanf("%f",&celcius);

    Fahrenheit=(celcius * 1.8) + 32;
    printf(" Fahrenheit = %.1f",Fahrenheit);
    return 0;  
}
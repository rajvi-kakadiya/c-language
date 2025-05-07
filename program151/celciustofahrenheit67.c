//Accept Celsius (°C) and convert it into Fahrenheit (°F).

#include<stdio.h>
int main()
{
    inr celcius,Fahrenheit;

    printf("enter celcius = ");
    scanf("%d",&celcius);

    Fahrenheit=(celcius * 1.8) + 32;
    printf("%d",Fahrenheit);
    return 0;  
}
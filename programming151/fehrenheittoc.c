//Accept Fahrenheit (°F) and convert it into Celsius (°C)

#include<stdio.h>
int main()
{
    float f,c;
    printf("Temprature(f):");
    scanf("%f",&f);
    
    c=(f-32)*5/9;
    printf("Temprature(c): %f",c);
    return 0;

}
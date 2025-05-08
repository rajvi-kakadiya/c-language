//celcius to kelvin

#include<stdio.h>
int main()
{
    int celcius,kelvin;

    printf("enter celcius = ");
    scanf("%d",&celcius);

    kelvin=celcius+273.15;
    printf("%d",kelvin);
    return 0;
}
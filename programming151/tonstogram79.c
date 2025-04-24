//Accept tons and convert them into grams. 

#include<stdio.h>
int main()
{
    int tons,kilograms,grams;

    printf(" enter tons = ");
    scanf("%d",&tons);

    kilograms=tons*1000;
    grams=kilograms*1000;

    printf("%d",grams);
    return 0;
}
//  Accept grams and convert them into kilograms.

#include<stdio.h>
int main()
{
    int grams,kilograms;

    printf("enter grams = ");
    scanf("%d",&grams);

    kilograms=grams/1000;
    printf("kilograms = %d",kilograms);

    return 0;
}
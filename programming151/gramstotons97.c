// Accept grams and convert them into tons. 

#include<stdio.h>
int main()
{
    int grams,kilograms,tons;

    printf("enter grams = ");
    scanf("%d",&grams);

    kilograms=grams/1000;
    tons=kilograms/1000;

    printf("%d",tons);
    return 0;
}
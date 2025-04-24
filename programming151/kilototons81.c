// Accept kilograms and convert them into tons.

#include<stdio.h>
int main()
{
    int kilograms,tons;

    printf("enter kilograms = ");
    scanf("%d",&kilograms);

    tons=kilograms/1000;
    printf("%d",tons);
    return 0;
}
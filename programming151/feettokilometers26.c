// Accept feet and convert them into kilometers. 

#include<stdio.h>
int main()
{
    float feet,centimiter,meters,kilometers;

    printf("enter feet = ");
    scanf("%f",&feet);

    centimiter=feet*30.48;
    meters=centimiter/100;
    kilometers=meters/1000;

    printf("kilometers : %f",kilometers);
    return 0;
}
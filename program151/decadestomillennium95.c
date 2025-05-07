//Accept decades and convert them into a millennium. 

#include<stdio.h>
int main()
{
    float millennium,decades;
    printf("enter decades=");
    scanf("%f",&decades);

    millennium=decades/100;

    printf("%f",millennium);
    return 0;
}
//Accept feet and convert them into inches. 

#include<stdio.h>
int main()
{
    int feet,inches;

    printf("enter feet");
    scanf("%d",&feet);

    inches=feet*12;
    printf("%d",inches);
    return 0;
}
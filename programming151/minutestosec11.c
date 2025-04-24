// Accept seconds and convert them into minutes. 

#include<stdio.h>
int main()
{
    int minutes,seconds;

    printf("enter minutes : ");
    scanf("%d",minutes);

    seconds=minutes/60;

    printf("seconds = %d",seconds);

    return 0;
    
}
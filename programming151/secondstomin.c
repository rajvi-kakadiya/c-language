//Accept seconds and convert them into minutes. 

#include<stdio.h>
int main()
{
    int seconds,minutes;
    
        printf("Enter the seconds: ");
        scanf("%d", &seconds);
    
        minutes = seconds / 60;
        printf("minutes: %d", minutes);
    
        return 0;
}
//Accept meters and convert them into kilometers.

#include<stdio.h>
int main()
{
    int meters,kilometers;

    printf("enter meters = ");
    scanf("%d",&meters);

    kilometers=meters/1000;

    printf("%d",kilometers);
    return 0;
    
}
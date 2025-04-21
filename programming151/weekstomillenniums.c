//Accept weeks and convert them into millenniums. 
#include<stdio.h>
int main()
{
    int weeks,year,millenniums;
    printf("enter weeks:");
    scanf("%d",weeks);

    year=weeks/52;
    millenniums=years/1000;
    printf("millenniums %d",millenniums);
    return 0;
    
}
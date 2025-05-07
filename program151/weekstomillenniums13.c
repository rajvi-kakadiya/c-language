//Accept weeks and convert them into millenniums. 
#include<stdio.h>
int main()
{
    int weeks,millenniums;
    printf("enter weeks:");
    scanf("%d",&weeks);

    millenniums=weeks*1000;
    printf("millenniums %d",millenniums);
    return 0;
    
}
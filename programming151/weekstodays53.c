//Accept weeks and convert them into days. 

#include<stdio.h>
int main()
{
    int weeks,days;

    printf("enter weeks = ");
    scanf("%d",&weeks);

    days=weeks*7;
    printf("%d",days);
    return 0;
}
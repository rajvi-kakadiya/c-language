// sum of first and last digit

#include<stdio.h>
int main()
{
    int val,f_digit,l_digit;

    printf("enter value : ");
    scanf("%d",&val);
    
    l_digit=val%10;
    val=val/10;

    while(val>0)
    {
        f_digit=val%10;
        val=val/10;
    }
    printf("sum of first and last digit : %d",f_digit+l_digit);
    return 0;
}
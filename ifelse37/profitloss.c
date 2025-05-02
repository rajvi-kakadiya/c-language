// write aprogram to find profit or loss

#include<stdio.h>
int main()
{
    int purchced_price , selling_price;

    printf("enter purchased price = ");
    scanf("%d",&purchced_price);

    printf("enter selling price = ");
    scanf("%d",&selling_price);

    if(purchced_price<selling_price)
    {
        printf("profit");
    }else
    {
        printf("loss");
    }
    return 0;
}